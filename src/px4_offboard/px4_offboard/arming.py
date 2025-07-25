#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy, DurabilityPolicy
from px4_msgs.msg import OffboardControlMode, VehicleCommand, VehicleAttitudeSetpoint, ManualControlSetpoint, VehicleAttitude
from geometry_msgs.msg import Vector3Stamped  # Add this import for Euler angles

import math
import time


class OffboardControl(Node):
    def __init__(self) -> None:
        super().__init__('offboard_control_attitude')

        qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            durability=DurabilityPolicy.TRANSIENT_LOCAL,
            history=HistoryPolicy.KEEP_LAST,
            depth=1
        )

        # Publishers
        self.offboard_control_mode_publisher = self.create_publisher(
            OffboardControlMode, '/fmu/in/offboard_control_mode', qos_profile)
        self.vehicle_attitude_setpoint_publisher = self.create_publisher(
            VehicleAttitudeSetpoint, '/fmu/in/vehicle_attitude_setpoint', qos_profile)
        self.vehicle_command_publisher = self.create_publisher(
            VehicleCommand, '/fmu/in/vehicle_command', qos_profile)
        
        # NEW: Publisher for Euler angles visualization
        self.euler_angles_publisher = self.create_publisher(
            Vector3Stamped, '/debug/euler_angles', qos_profile)

        # Subscriber for RC throttle
        self.manual_control_subscriber = self.create_subscription(
            ManualControlSetpoint, '/fmu/out/manual_control_setpoint',
            self.manual_control_callback, qos_profile)
        
        # # Subscriber for quartenions
        # self.manual_control_subscriber = self.create_subscription(
        #     VehicleAttitude, '/fmu/out/vehicle_attitude',
        #     self.actual_attitude_callback, qos_profile)

        self.offboard_setpoint_counter = 0
        self.rc_thrust = 0.0
        self.rc_available = False
        
        # Sine wave parameters
        self.start_time = time.time()
        self.sine_amplitude = math.radians(15.0)  # 15 degrees amplitude
        self.sine_frequency = 0.5  # 0.5 Hz (1 cycle every 2 seconds)
        self.sine_enabled = False  # Start with sine disabled
        
        # Control parameters
        self.base_pitch = 0.0  # Keep pitch level
        self.base_yaw = 0.0    # Keep yaw constant

        self.timer = self.create_timer(0.1, self.timer_callback)

    def arm(self):
        self.publish_vehicle_command(
            VehicleCommand.VEHICLE_CMD_COMPONENT_ARM_DISARM, param1=1.0)
        self.get_logger().info('Arm command sent')

    def disarm(self):
        self.publish_vehicle_command(
            VehicleCommand.VEHICLE_CMD_COMPONENT_ARM_DISARM, param1=0.0)
        self.get_logger().info('Disarm command sent')

    def engage_offboard_mode(self):
        self.publish_vehicle_command(
            VehicleCommand.VEHICLE_CMD_DO_SET_MODE, param1=1.0, param2=6.0)
        self.get_logger().info("Switching to offboard mode")

    def manual_control_callback(self, msg):
        self.rc_thrust = max(0.0, min(1.0, (msg.throttle + 1.0) / 2.0))
        self.rc_available = True

        if not hasattr(self, '_last_thrust'):
            self._last_thrust = self.rc_thrust

        if abs(self.rc_thrust - self._last_thrust) > 0.05:
            self.get_logger().info(f"RC Throttle: {msg.throttle:.2f} -> Thrust: {self.rc_thrust:.2f}")
            self._last_thrust = self.rc_thrust

    def actual_attitude_callback(self, msg):
        self.actual_quaternion = msg.q  # Fixed typo: quartenion -> quaternion
    
        q = self.actual_quaternion  # For cleaner code
        
        # Convert quaternion to Euler angles [roll, pitch, yaw]
        euler_q = [
            math.atan2(2*(q[0]*q[1] + q[2]*q[3]), 1 - 2*(q[1]*q[1] + q[2]*q[2])),  # Roll (φ)
            -math.pi/2 + 2*math.atan2(math.sqrt(1 + 2*(q[0]*q[2] - q[1]*q[3])), math.sqrt(1 - 2*(q[0]*q[2] - q[1]*q[3]))),  # Pitch (θ)
            math.atan2(2*(q[0]*q[3] + q[1]*q[2]), 1 - 2*(q[2]*q[2] + q[3]*q[3]))   # Yaw (ψ)
        ]
    
        # Store the Euler angles
        self.actual_euler = euler_q
        # NEW: Publish Euler angles for visualization
        self.publish_euler_angles()


    def publish_offboard_control_heartbeat_signal(self):
        msg = OffboardControlMode()
        msg.position = False
        msg.velocity = False
        msg.acceleration = False
        msg.attitude = True
        msg.body_rate = False
        msg.thrust_and_torque = False
        msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)
        self.offboard_control_mode_publisher.publish(msg)

    def calculate_sine_roll(self):
        """Calculate sine wave roll angle"""
        if not self.sine_enabled:
            return 0.0
            
        current_time = time.time()
        elapsed_time = current_time - self.start_time
        
        # Generate sine wave: amplitude * sin(2π * frequency * time)
        roll_angle = self.sine_amplitude * math.sin(2.0 * math.pi * self.sine_frequency * elapsed_time)
        #roll_angle =math.radians(15.0)  # 45 degrees in radians
        
        return roll_angle

    def publish_attitude_setpoint(self, roll: float, pitch: float, yaw: float, thrust: float):
        msg = VehicleAttitudeSetpoint()

        # Convert Euler angles to quaternion
        cr = math.cos(roll * 0.5)
        sr = math.sin(roll * 0.5)
        cp = math.cos(pitch * 0.5)
        sp = math.sin(pitch * 0.5)
        cy = math.cos(yaw * 0.5)
        sy = math.sin(yaw * 0.5)

        msg.q_d = [
            cr * cp * cy + sr * sp * sy,  # w
            sr * cp * cy - cr * sp * sy,  # x
            cr * sp * cy + sr * cp * sy,  # y
            cr * cp * sy - sr * sp * cy   # z
        ]

        msg.thrust_body = [0.0, 0.0, -thrust]
        msg.yaw_sp_move_rate = 0.0
        msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)

        self.vehicle_attitude_setpoint_publisher.publish(msg)
        
        # Log with sine wave info
        roll_deg = math.degrees(roll)
        if self.sine_enabled:
            self.get_logger().info(f"Sine Roll: {roll_deg:.1f}°, Pitch: {math.degrees(pitch):.1f}°, Thrust: {thrust:.2f}")
        else:
            self.get_logger().info(f"Hover Mode: Roll: {roll_deg:.1f}°, Pitch: {math.degrees(pitch):.1f}°, Thrust: {thrust:.2f}")

    def publish_vehicle_command(self, command, **params) -> None:
        msg = VehicleCommand()
        msg.command = command
        msg.param1 = float(params.get("param1", 0.0))
        msg.param2 = float(params.get("param2", 0.0))
        msg.param3 = float(params.get("param3", 0.0))
        msg.param4 = float(params.get("param4", 0.0))
        msg.param5 = float(params.get("param5", 0.0))
        msg.param6 = float(params.get("param6", 0.0))
        msg.param7 = float(params.get("param7", 0.0))
        msg.target_system = 1
        msg.target_component = 1
        msg.source_system = 1
        msg.source_component = 1
        msg.confirmation = 0
        msg.from_external = True
        msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)
        self.vehicle_command_publisher.publish(msg)

    def timer_callback(self) -> None:
        self.publish_offboard_control_heartbeat_signal()

        if not self.rc_available:
            self.get_logger().warn("RC not available yet. Waiting for input...")
            return

        # Calculate sine wave roll angle
        sine_roll = self.calculate_sine_roll()
        
        # Publish attitude setpoint with sine roll
        self.publish_attitude_setpoint(sine_roll, self.base_pitch, self.base_yaw, self.rc_thrust)

        # Sequence: offboard mode -> arm -> enable sine wave
        if self.offboard_setpoint_counter == 10:
            self.engage_offboard_mode()

        if self.offboard_setpoint_counter == 20:
            self.arm()
            
        # Enable sine wave after arming and a brief stabilization period
        if self.offboard_setpoint_counter == 50:
            self.sine_enabled = True
            self.start_time = time.time()  # Reset start time for sine wave
            self.get_logger().info("🌊 SINE WAVE ROLL ENABLED! Amplitude: ±15°, Frequency: 0.5Hz")

        if self.offboard_setpoint_counter < 51:
            self.offboard_setpoint_counter += 1


def main(args=None) -> None:
    print('Starting attitude control offboard node with sine roll...')
    print('Sequence:')
    print('  1. Wait for RC input')
    print('  2. Switch to offboard mode (1 second)')
    print('  3. Arm vehicle (1 second)') 
    print('  4. Hover for 3 seconds')
    print('  5. Start sine wave roll (±15° at 0.5Hz)')
    print('')
    print('⚠️  Make sure the vehicle is in a safe environment!')
    print('⚠️  Keep RC ready to switch back to manual mode!')
    
    rclpy.init(args=args)
    offboard_control = OffboardControl()
    
    try:
        rclpy.spin(offboard_control)
    except KeyboardInterrupt:
        print("\n🛑 Stopping sine wave control...")
    finally:
        offboard_control.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    try:
        main()
    except Exception as e:
        print(f"Error: {e}")