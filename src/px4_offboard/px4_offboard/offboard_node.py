#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy, DurabilityPolicy
from px4_msgs.msg import OffboardControlMode, VehicleCommand, VehicleAttitudeSetpoint
import math


class OffboardControl(Node):
    """Node for controlling a vehicle in offboard mode using attitude control."""

    def __init__(self) -> None:
        super().__init__('offboard_control_attitude')

        # Configure QoS profile for publishing and subscribing
        qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            durability=DurabilityPolicy.TRANSIENT_LOCAL,
            history=HistoryPolicy.KEEP_LAST,
            depth=1
        )

        # Create publishers
        self.offboard_control_mode_publisher = self.create_publisher(
            OffboardControlMode, '/fmu/in/offboard_control_mode', qos_profile)
        self.vehicle_attitude_setpoint_publisher = self.create_publisher(
            VehicleAttitudeSetpoint, '/fmu/in/vehicle_attitude_setpoint', qos_profile)
        self.vehicle_command_publisher = self.create_publisher(
            VehicleCommand, '/fmu/in/vehicle_command', qos_profile)

        # Initialize variables
        self.offboard_setpoint_counter = 0

        # Create a timer to publish control commands
        self.timer = self.create_timer(0.1, self.timer_callback)

    def arm(self):
        """Send an arm command to the vehicle."""
        self.publish_vehicle_command(
            VehicleCommand.VEHICLE_CMD_COMPONENT_ARM_DISARM, param1=1.0)
        self.get_logger().info('Arm command sent')

    def disarm(self):
        """Send a disarm command to the vehicle."""
        self.publish_vehicle_command(
            VehicleCommand.VEHICLE_CMD_COMPONENT_ARM_DISARM, param1=0.0)
        self.get_logger().info('Disarm command sent')

    def engage_offboard_mode(self):
        """Switch to offboard mode."""
        self.publish_vehicle_command(
            VehicleCommand.VEHICLE_CMD_DO_SET_MODE, param1=1.0, param2=6.0)
        self.get_logger().info("Switching to offboard mode")

    def publish_offboard_control_heartbeat_signal(self):
        """Publish the offboard control mode."""
        msg = OffboardControlMode()
        msg.position = False
        msg.velocity = False
        msg.acceleration = False
        msg.attitude = True
        msg.body_rate = False
        msg.thrust_and_torque = False
        msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)
        self.offboard_control_mode_publisher.publish(msg)

    def publish_attitude_setpoint(self, roll: float, pitch: float, yaw: float, thrust: float):
        """Publish attitude setpoint using quaternion."""
        msg = VehicleAttitudeSetpoint()
        
        # Convert Euler angles (roll, pitch, yaw) to quaternion
        cr = math.cos(roll * 0.5)
        sr = math.sin(roll * 0.5)
        cp = math.cos(pitch * 0.5)
        sp = math.sin(pitch * 0.5)
        cy = math.cos(yaw * 0.5)
        sy = math.sin(yaw * 0.5)
        
        # Quaternion [w, x, y, z] in PX4 format
        msg.q_d = [
            cr * cp * cy + sr * sp * sy,  # w
            sr * cp * cy - cr * sp * sy,  # x
            cr * sp * cy + sr * cp * sy,  # y
            cr * cp * sy - sr * sp * cy   # z
        ]
        
        # Thrust in body frame [x, y, z] - for multicopter, mainly negative z
        msg.thrust_body = [0.0, 0.0, -thrust]  # Negative Z for upward thrust
        
        msg.yaw_sp_move_rate = 0.0  # No yaw rate command
        msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)
        
        self.vehicle_attitude_setpoint_publisher.publish(msg)
        self.get_logger().info(f"Publishing attitude setpoint: roll={roll:.2f}, pitch={pitch:.2f}, yaw={yaw:.2f}, thrust={thrust:.2f}")

    def publish_vehicle_command(self, command, **params) -> None:
        """Publish a vehicle command."""
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
        """Callback function for the timer."""
        self.publish_offboard_control_heartbeat_signal()
        
        # Publish attitude setpoint - hovering with level attitude
        self.publish_attitude_setpoint(0.0, 0.0, 0.0, 0.6)  # Level attitude, 60% thrust

        if self.offboard_setpoint_counter == 10:
            self.engage_offboard_mode()
            
        if self.offboard_setpoint_counter == 20:
            # Give more time for offboard mode to engage before arming
            self.arm()

        if self.offboard_setpoint_counter < 21:
            self.offboard_setpoint_counter += 1


def main(args=None) -> None:
    print('Starting attitude control offboard node...')
    rclpy.init(args=args)
    offboard_control = OffboardControl()
    rclpy.spin(offboard_control)
    offboard_control.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    try:
        main()
    except Exception as e:
        print(e)