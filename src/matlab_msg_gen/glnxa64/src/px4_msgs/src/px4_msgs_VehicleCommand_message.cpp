// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/VehicleCommand
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4100)
#pragma warning(disable : 4265)
#pragma warning(disable : 4456)
#pragma warning(disable : 4458)
#pragma warning(disable : 4946)
#pragma warning(disable : 4244)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif //_MSC_VER
#include "rclcpp/rclcpp.hpp"
#include "px4_msgs/msg/vehicle_command.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_VehicleCommand_common : public MATLABROS2MsgInterface<px4_msgs::msg::VehicleCommand> {
  public:
    virtual ~ros2_px4_msgs_msg_VehicleCommand_common(){}
    virtual void copy_from_struct(px4_msgs::msg::VehicleCommand* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleCommand* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_VehicleCommand_common::copy_from_struct(px4_msgs::msg::VehicleCommand* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //timestamp
        const matlab::data::TypedArray<uint64_t> timestamp_arr = arr["timestamp"];
        msg->timestamp = timestamp_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'timestamp' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'timestamp' is wrong type; expected a uint64.");
    }
    try {
        //param1
        const matlab::data::TypedArray<float> param1_arr = arr["param1"];
        msg->param1 = param1_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'param1' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'param1' is wrong type; expected a single.");
    }
    try {
        //param2
        const matlab::data::TypedArray<float> param2_arr = arr["param2"];
        msg->param2 = param2_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'param2' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'param2' is wrong type; expected a single.");
    }
    try {
        //param3
        const matlab::data::TypedArray<float> param3_arr = arr["param3"];
        msg->param3 = param3_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'param3' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'param3' is wrong type; expected a single.");
    }
    try {
        //param4
        const matlab::data::TypedArray<float> param4_arr = arr["param4"];
        msg->param4 = param4_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'param4' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'param4' is wrong type; expected a single.");
    }
    try {
        //param5
        const matlab::data::TypedArray<double> param5_arr = arr["param5"];
        msg->param5 = param5_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'param5' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'param5' is wrong type; expected a double.");
    }
    try {
        //param6
        const matlab::data::TypedArray<double> param6_arr = arr["param6"];
        msg->param6 = param6_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'param6' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'param6' is wrong type; expected a double.");
    }
    try {
        //param7
        const matlab::data::TypedArray<float> param7_arr = arr["param7"];
        msg->param7 = param7_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'param7' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'param7' is wrong type; expected a single.");
    }
    try {
        //command
        const matlab::data::TypedArray<uint32_t> command_arr = arr["command"];
        msg->command = command_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'command' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'command' is wrong type; expected a uint32.");
    }
    try {
        //target_system
        const matlab::data::TypedArray<uint8_t> target_system_arr = arr["target_system"];
        msg->target_system = target_system_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'target_system' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'target_system' is wrong type; expected a uint8.");
    }
    try {
        //target_component
        const matlab::data::TypedArray<uint8_t> target_component_arr = arr["target_component"];
        msg->target_component = target_component_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'target_component' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'target_component' is wrong type; expected a uint8.");
    }
    try {
        //source_system
        const matlab::data::TypedArray<uint8_t> source_system_arr = arr["source_system"];
        msg->source_system = source_system_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'source_system' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'source_system' is wrong type; expected a uint8.");
    }
    try {
        //source_component
        const matlab::data::TypedArray<uint16_t> source_component_arr = arr["source_component"];
        msg->source_component = source_component_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'source_component' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'source_component' is wrong type; expected a uint16.");
    }
    try {
        //confirmation
        const matlab::data::TypedArray<uint8_t> confirmation_arr = arr["confirmation"];
        msg->confirmation = confirmation_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'confirmation' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'confirmation' is wrong type; expected a uint8.");
    }
    try {
        //from_external
        const matlab::data::TypedArray<bool> from_external_arr = arr["from_external"];
        msg->from_external = from_external_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'from_external' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'from_external' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_VehicleCommand_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleCommand* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","MESSAGE_VERSION","timestamp","VEHICLE_CMD_CUSTOM_0","VEHICLE_CMD_CUSTOM_1","VEHICLE_CMD_CUSTOM_2","VEHICLE_CMD_NAV_WAYPOINT","VEHICLE_CMD_NAV_LOITER_UNLIM","VEHICLE_CMD_NAV_LOITER_TURNS","VEHICLE_CMD_NAV_LOITER_TIME","VEHICLE_CMD_NAV_RETURN_TO_LAUNCH","VEHICLE_CMD_NAV_LAND","VEHICLE_CMD_NAV_TAKEOFF","VEHICLE_CMD_NAV_PRECLAND","VEHICLE_CMD_DO_ORBIT","VEHICLE_CMD_DO_FIGUREEIGHT","VEHICLE_CMD_NAV_ROI","VEHICLE_CMD_NAV_PATHPLANNING","VEHICLE_CMD_NAV_VTOL_TAKEOFF","VEHICLE_CMD_NAV_VTOL_LAND","VEHICLE_CMD_NAV_GUIDED_LIMITS","VEHICLE_CMD_NAV_GUIDED_MASTER","VEHICLE_CMD_NAV_DELAY","VEHICLE_CMD_NAV_LAST","VEHICLE_CMD_CONDITION_DELAY","VEHICLE_CMD_CONDITION_CHANGE_ALT","VEHICLE_CMD_CONDITION_DISTANCE","VEHICLE_CMD_CONDITION_YAW","VEHICLE_CMD_CONDITION_LAST","VEHICLE_CMD_CONDITION_GATE","VEHICLE_CMD_DO_SET_MODE","VEHICLE_CMD_DO_JUMP","VEHICLE_CMD_DO_CHANGE_SPEED","VEHICLE_CMD_DO_SET_HOME","VEHICLE_CMD_DO_SET_PARAMETER","VEHICLE_CMD_DO_SET_RELAY","VEHICLE_CMD_DO_REPEAT_RELAY","VEHICLE_CMD_DO_REPEAT_SERVO","VEHICLE_CMD_DO_FLIGHTTERMINATION","VEHICLE_CMD_DO_CHANGE_ALTITUDE","VEHICLE_CMD_DO_SET_ACTUATOR","VEHICLE_CMD_DO_LAND_START","VEHICLE_CMD_DO_GO_AROUND","VEHICLE_CMD_DO_REPOSITION","VEHICLE_CMD_DO_PAUSE_CONTINUE","VEHICLE_CMD_DO_SET_ROI_LOCATION","VEHICLE_CMD_DO_SET_ROI_WPNEXT_OFFSET","VEHICLE_CMD_DO_SET_ROI_NONE","VEHICLE_CMD_DO_CONTROL_VIDEO","VEHICLE_CMD_DO_SET_ROI","VEHICLE_CMD_DO_DIGICAM_CONTROL","VEHICLE_CMD_DO_MOUNT_CONFIGURE","VEHICLE_CMD_DO_MOUNT_CONTROL","VEHICLE_CMD_DO_SET_CAM_TRIGG_DIST","VEHICLE_CMD_DO_FENCE_ENABLE","VEHICLE_CMD_DO_PARACHUTE","VEHICLE_CMD_DO_MOTOR_TEST","VEHICLE_CMD_DO_INVERTED_FLIGHT","VEHICLE_CMD_DO_GRIPPER","VEHICLE_CMD_DO_SET_CAM_TRIGG_INTERVAL","VEHICLE_CMD_DO_MOUNT_CONTROL_QUAT","VEHICLE_CMD_DO_GUIDED_MASTER","VEHICLE_CMD_DO_GUIDED_LIMITS","VEHICLE_CMD_DO_LAST","VEHICLE_CMD_PREFLIGHT_CALIBRATION","PREFLIGHT_CALIBRATION_TEMPERATURE_CALIBRATION","VEHICLE_CMD_PREFLIGHT_SET_SENSOR_OFFSETS","VEHICLE_CMD_PREFLIGHT_UAVCAN","VEHICLE_CMD_PREFLIGHT_STORAGE","VEHICLE_CMD_PREFLIGHT_REBOOT_SHUTDOWN","VEHICLE_CMD_OBLIQUE_SURVEY","VEHICLE_CMD_DO_SET_STANDARD_MODE","VEHICLE_CMD_GIMBAL_DEVICE_INFORMATION","VEHICLE_CMD_MISSION_START","VEHICLE_CMD_ACTUATOR_TEST","VEHICLE_CMD_CONFIGURE_ACTUATOR","VEHICLE_CMD_COMPONENT_ARM_DISARM","VEHICLE_CMD_RUN_PREARM_CHECKS","VEHICLE_CMD_INJECT_FAILURE","VEHICLE_CMD_START_RX_PAIR","VEHICLE_CMD_REQUEST_MESSAGE","VEHICLE_CMD_REQUEST_CAMERA_INFORMATION","VEHICLE_CMD_SET_CAMERA_MODE","VEHICLE_CMD_SET_CAMERA_ZOOM","VEHICLE_CMD_SET_CAMERA_FOCUS","VEHICLE_CMD_DO_GIMBAL_MANAGER_PITCHYAW","VEHICLE_CMD_DO_GIMBAL_MANAGER_CONFIGURE","VEHICLE_CMD_IMAGE_START_CAPTURE","VEHICLE_CMD_DO_TRIGGER_CONTROL","VEHICLE_CMD_VIDEO_START_CAPTURE","VEHICLE_CMD_VIDEO_STOP_CAPTURE","VEHICLE_CMD_LOGGING_START","VEHICLE_CMD_LOGGING_STOP","VEHICLE_CMD_CONTROL_HIGH_LATENCY","VEHICLE_CMD_DO_VTOL_TRANSITION","VEHICLE_CMD_ARM_AUTHORIZATION_REQUEST","VEHICLE_CMD_PAYLOAD_PREPARE_DEPLOY","VEHICLE_CMD_PAYLOAD_CONTROL_DEPLOY","VEHICLE_CMD_FIXED_MAG_CAL_YAW","VEHICLE_CMD_DO_WINCH","VEHICLE_CMD_EXTERNAL_POSITION_ESTIMATE","VEHICLE_CMD_EXTERNAL_WIND_ESTIMATE","VEHICLE_CMD_PX4_INTERNAL_START","VEHICLE_CMD_SET_GPS_GLOBAL_ORIGIN","VEHICLE_CMD_SET_NAV_STATE","VEHICLE_MOUNT_MODE_RETRACT","VEHICLE_MOUNT_MODE_NEUTRAL","VEHICLE_MOUNT_MODE_MAVLINK_TARGETING","VEHICLE_MOUNT_MODE_RC_TARGETING","VEHICLE_MOUNT_MODE_GPS_POINT","VEHICLE_MOUNT_MODE_ENUM_END","VEHICLE_ROI_NONE","VEHICLE_ROI_WPNEXT","VEHICLE_ROI_WPINDEX","VEHICLE_ROI_LOCATION","VEHICLE_ROI_TARGET","VEHICLE_ROI_ENUM_END","PARACHUTE_ACTION_DISABLE","PARACHUTE_ACTION_ENABLE","PARACHUTE_ACTION_RELEASE","FAILURE_UNIT_SENSOR_GYRO","FAILURE_UNIT_SENSOR_ACCEL","FAILURE_UNIT_SENSOR_MAG","FAILURE_UNIT_SENSOR_BARO","FAILURE_UNIT_SENSOR_GPS","FAILURE_UNIT_SENSOR_OPTICAL_FLOW","FAILURE_UNIT_SENSOR_VIO","FAILURE_UNIT_SENSOR_DISTANCE_SENSOR","FAILURE_UNIT_SENSOR_AIRSPEED","FAILURE_UNIT_SYSTEM_BATTERY","FAILURE_UNIT_SYSTEM_MOTOR","FAILURE_UNIT_SYSTEM_SERVO","FAILURE_UNIT_SYSTEM_AVOIDANCE","FAILURE_UNIT_SYSTEM_RC_SIGNAL","FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL","FAILURE_TYPE_OK","FAILURE_TYPE_OFF","FAILURE_TYPE_STUCK","FAILURE_TYPE_GARBAGE","FAILURE_TYPE_WRONG","FAILURE_TYPE_SLOW","FAILURE_TYPE_DELAYED","FAILURE_TYPE_INTERMITTENT","SPEED_TYPE_AIRSPEED","SPEED_TYPE_GROUNDSPEED","SPEED_TYPE_CLIMB_SPEED","SPEED_TYPE_DESCEND_SPEED","ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER","ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING","ORBIT_YAW_BEHAVIOUR_UNCONTROLLED","ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE","ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED","ORBIT_YAW_BEHAVIOUR_UNCHANGED","ARMING_ACTION_DISARM","ARMING_ACTION_ARM","GRIPPER_ACTION_RELEASE","GRIPPER_ACTION_GRAB","ORB_QUEUE_LENGTH","param1","param2","param3","param4","param5","param6","param7","command","target_system","target_component","source_system","source_component","confirmation","from_external","COMPONENT_MODE_EXECUTOR_START"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/VehicleCommand");
    // MESSAGE_VERSION
    auto currentElement_MESSAGE_VERSION = (msg + ctr)->MESSAGE_VERSION;
    outArray[ctr]["MESSAGE_VERSION"] = factory.createScalar(currentElement_MESSAGE_VERSION);
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // VEHICLE_CMD_CUSTOM_0
    auto currentElement_VEHICLE_CMD_CUSTOM_0 = (msg + ctr)->VEHICLE_CMD_CUSTOM_0;
    outArray[ctr]["VEHICLE_CMD_CUSTOM_0"] = factory.createScalar(currentElement_VEHICLE_CMD_CUSTOM_0);
    // VEHICLE_CMD_CUSTOM_1
    auto currentElement_VEHICLE_CMD_CUSTOM_1 = (msg + ctr)->VEHICLE_CMD_CUSTOM_1;
    outArray[ctr]["VEHICLE_CMD_CUSTOM_1"] = factory.createScalar(currentElement_VEHICLE_CMD_CUSTOM_1);
    // VEHICLE_CMD_CUSTOM_2
    auto currentElement_VEHICLE_CMD_CUSTOM_2 = (msg + ctr)->VEHICLE_CMD_CUSTOM_2;
    outArray[ctr]["VEHICLE_CMD_CUSTOM_2"] = factory.createScalar(currentElement_VEHICLE_CMD_CUSTOM_2);
    // VEHICLE_CMD_NAV_WAYPOINT
    auto currentElement_VEHICLE_CMD_NAV_WAYPOINT = (msg + ctr)->VEHICLE_CMD_NAV_WAYPOINT;
    outArray[ctr]["VEHICLE_CMD_NAV_WAYPOINT"] = factory.createScalar(currentElement_VEHICLE_CMD_NAV_WAYPOINT);
    // VEHICLE_CMD_NAV_LOITER_UNLIM
    auto currentElement_VEHICLE_CMD_NAV_LOITER_UNLIM = (msg + ctr)->VEHICLE_CMD_NAV_LOITER_UNLIM;
    outArray[ctr]["VEHICLE_CMD_NAV_LOITER_UNLIM"] = factory.createScalar(currentElement_VEHICLE_CMD_NAV_LOITER_UNLIM);
    // VEHICLE_CMD_NAV_LOITER_TURNS
    auto currentElement_VEHICLE_CMD_NAV_LOITER_TURNS = (msg + ctr)->VEHICLE_CMD_NAV_LOITER_TURNS;
    outArray[ctr]["VEHICLE_CMD_NAV_LOITER_TURNS"] = factory.createScalar(currentElement_VEHICLE_CMD_NAV_LOITER_TURNS);
    // VEHICLE_CMD_NAV_LOITER_TIME
    auto currentElement_VEHICLE_CMD_NAV_LOITER_TIME = (msg + ctr)->VEHICLE_CMD_NAV_LOITER_TIME;
    outArray[ctr]["VEHICLE_CMD_NAV_LOITER_TIME"] = factory.createScalar(currentElement_VEHICLE_CMD_NAV_LOITER_TIME);
    // VEHICLE_CMD_NAV_RETURN_TO_LAUNCH
    auto currentElement_VEHICLE_CMD_NAV_RETURN_TO_LAUNCH = (msg + ctr)->VEHICLE_CMD_NAV_RETURN_TO_LAUNCH;
    outArray[ctr]["VEHICLE_CMD_NAV_RETURN_TO_LAUNCH"] = factory.createScalar(currentElement_VEHICLE_CMD_NAV_RETURN_TO_LAUNCH);
    // VEHICLE_CMD_NAV_LAND
    auto currentElement_VEHICLE_CMD_NAV_LAND = (msg + ctr)->VEHICLE_CMD_NAV_LAND;
    outArray[ctr]["VEHICLE_CMD_NAV_LAND"] = factory.createScalar(currentElement_VEHICLE_CMD_NAV_LAND);
    // VEHICLE_CMD_NAV_TAKEOFF
    auto currentElement_VEHICLE_CMD_NAV_TAKEOFF = (msg + ctr)->VEHICLE_CMD_NAV_TAKEOFF;
    outArray[ctr]["VEHICLE_CMD_NAV_TAKEOFF"] = factory.createScalar(currentElement_VEHICLE_CMD_NAV_TAKEOFF);
    // VEHICLE_CMD_NAV_PRECLAND
    auto currentElement_VEHICLE_CMD_NAV_PRECLAND = (msg + ctr)->VEHICLE_CMD_NAV_PRECLAND;
    outArray[ctr]["VEHICLE_CMD_NAV_PRECLAND"] = factory.createScalar(currentElement_VEHICLE_CMD_NAV_PRECLAND);
    // VEHICLE_CMD_DO_ORBIT
    auto currentElement_VEHICLE_CMD_DO_ORBIT = (msg + ctr)->VEHICLE_CMD_DO_ORBIT;
    outArray[ctr]["VEHICLE_CMD_DO_ORBIT"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_ORBIT);
    // VEHICLE_CMD_DO_FIGUREEIGHT
    auto currentElement_VEHICLE_CMD_DO_FIGUREEIGHT = (msg + ctr)->VEHICLE_CMD_DO_FIGUREEIGHT;
    outArray[ctr]["VEHICLE_CMD_DO_FIGUREEIGHT"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_FIGUREEIGHT);
    // VEHICLE_CMD_NAV_ROI
    auto currentElement_VEHICLE_CMD_NAV_ROI = (msg + ctr)->VEHICLE_CMD_NAV_ROI;
    outArray[ctr]["VEHICLE_CMD_NAV_ROI"] = factory.createScalar(currentElement_VEHICLE_CMD_NAV_ROI);
    // VEHICLE_CMD_NAV_PATHPLANNING
    auto currentElement_VEHICLE_CMD_NAV_PATHPLANNING = (msg + ctr)->VEHICLE_CMD_NAV_PATHPLANNING;
    outArray[ctr]["VEHICLE_CMD_NAV_PATHPLANNING"] = factory.createScalar(currentElement_VEHICLE_CMD_NAV_PATHPLANNING);
    // VEHICLE_CMD_NAV_VTOL_TAKEOFF
    auto currentElement_VEHICLE_CMD_NAV_VTOL_TAKEOFF = (msg + ctr)->VEHICLE_CMD_NAV_VTOL_TAKEOFF;
    outArray[ctr]["VEHICLE_CMD_NAV_VTOL_TAKEOFF"] = factory.createScalar(currentElement_VEHICLE_CMD_NAV_VTOL_TAKEOFF);
    // VEHICLE_CMD_NAV_VTOL_LAND
    auto currentElement_VEHICLE_CMD_NAV_VTOL_LAND = (msg + ctr)->VEHICLE_CMD_NAV_VTOL_LAND;
    outArray[ctr]["VEHICLE_CMD_NAV_VTOL_LAND"] = factory.createScalar(currentElement_VEHICLE_CMD_NAV_VTOL_LAND);
    // VEHICLE_CMD_NAV_GUIDED_LIMITS
    auto currentElement_VEHICLE_CMD_NAV_GUIDED_LIMITS = (msg + ctr)->VEHICLE_CMD_NAV_GUIDED_LIMITS;
    outArray[ctr]["VEHICLE_CMD_NAV_GUIDED_LIMITS"] = factory.createScalar(currentElement_VEHICLE_CMD_NAV_GUIDED_LIMITS);
    // VEHICLE_CMD_NAV_GUIDED_MASTER
    auto currentElement_VEHICLE_CMD_NAV_GUIDED_MASTER = (msg + ctr)->VEHICLE_CMD_NAV_GUIDED_MASTER;
    outArray[ctr]["VEHICLE_CMD_NAV_GUIDED_MASTER"] = factory.createScalar(currentElement_VEHICLE_CMD_NAV_GUIDED_MASTER);
    // VEHICLE_CMD_NAV_DELAY
    auto currentElement_VEHICLE_CMD_NAV_DELAY = (msg + ctr)->VEHICLE_CMD_NAV_DELAY;
    outArray[ctr]["VEHICLE_CMD_NAV_DELAY"] = factory.createScalar(currentElement_VEHICLE_CMD_NAV_DELAY);
    // VEHICLE_CMD_NAV_LAST
    auto currentElement_VEHICLE_CMD_NAV_LAST = (msg + ctr)->VEHICLE_CMD_NAV_LAST;
    outArray[ctr]["VEHICLE_CMD_NAV_LAST"] = factory.createScalar(currentElement_VEHICLE_CMD_NAV_LAST);
    // VEHICLE_CMD_CONDITION_DELAY
    auto currentElement_VEHICLE_CMD_CONDITION_DELAY = (msg + ctr)->VEHICLE_CMD_CONDITION_DELAY;
    outArray[ctr]["VEHICLE_CMD_CONDITION_DELAY"] = factory.createScalar(currentElement_VEHICLE_CMD_CONDITION_DELAY);
    // VEHICLE_CMD_CONDITION_CHANGE_ALT
    auto currentElement_VEHICLE_CMD_CONDITION_CHANGE_ALT = (msg + ctr)->VEHICLE_CMD_CONDITION_CHANGE_ALT;
    outArray[ctr]["VEHICLE_CMD_CONDITION_CHANGE_ALT"] = factory.createScalar(currentElement_VEHICLE_CMD_CONDITION_CHANGE_ALT);
    // VEHICLE_CMD_CONDITION_DISTANCE
    auto currentElement_VEHICLE_CMD_CONDITION_DISTANCE = (msg + ctr)->VEHICLE_CMD_CONDITION_DISTANCE;
    outArray[ctr]["VEHICLE_CMD_CONDITION_DISTANCE"] = factory.createScalar(currentElement_VEHICLE_CMD_CONDITION_DISTANCE);
    // VEHICLE_CMD_CONDITION_YAW
    auto currentElement_VEHICLE_CMD_CONDITION_YAW = (msg + ctr)->VEHICLE_CMD_CONDITION_YAW;
    outArray[ctr]["VEHICLE_CMD_CONDITION_YAW"] = factory.createScalar(currentElement_VEHICLE_CMD_CONDITION_YAW);
    // VEHICLE_CMD_CONDITION_LAST
    auto currentElement_VEHICLE_CMD_CONDITION_LAST = (msg + ctr)->VEHICLE_CMD_CONDITION_LAST;
    outArray[ctr]["VEHICLE_CMD_CONDITION_LAST"] = factory.createScalar(currentElement_VEHICLE_CMD_CONDITION_LAST);
    // VEHICLE_CMD_CONDITION_GATE
    auto currentElement_VEHICLE_CMD_CONDITION_GATE = (msg + ctr)->VEHICLE_CMD_CONDITION_GATE;
    outArray[ctr]["VEHICLE_CMD_CONDITION_GATE"] = factory.createScalar(currentElement_VEHICLE_CMD_CONDITION_GATE);
    // VEHICLE_CMD_DO_SET_MODE
    auto currentElement_VEHICLE_CMD_DO_SET_MODE = (msg + ctr)->VEHICLE_CMD_DO_SET_MODE;
    outArray[ctr]["VEHICLE_CMD_DO_SET_MODE"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_SET_MODE);
    // VEHICLE_CMD_DO_JUMP
    auto currentElement_VEHICLE_CMD_DO_JUMP = (msg + ctr)->VEHICLE_CMD_DO_JUMP;
    outArray[ctr]["VEHICLE_CMD_DO_JUMP"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_JUMP);
    // VEHICLE_CMD_DO_CHANGE_SPEED
    auto currentElement_VEHICLE_CMD_DO_CHANGE_SPEED = (msg + ctr)->VEHICLE_CMD_DO_CHANGE_SPEED;
    outArray[ctr]["VEHICLE_CMD_DO_CHANGE_SPEED"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_CHANGE_SPEED);
    // VEHICLE_CMD_DO_SET_HOME
    auto currentElement_VEHICLE_CMD_DO_SET_HOME = (msg + ctr)->VEHICLE_CMD_DO_SET_HOME;
    outArray[ctr]["VEHICLE_CMD_DO_SET_HOME"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_SET_HOME);
    // VEHICLE_CMD_DO_SET_PARAMETER
    auto currentElement_VEHICLE_CMD_DO_SET_PARAMETER = (msg + ctr)->VEHICLE_CMD_DO_SET_PARAMETER;
    outArray[ctr]["VEHICLE_CMD_DO_SET_PARAMETER"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_SET_PARAMETER);
    // VEHICLE_CMD_DO_SET_RELAY
    auto currentElement_VEHICLE_CMD_DO_SET_RELAY = (msg + ctr)->VEHICLE_CMD_DO_SET_RELAY;
    outArray[ctr]["VEHICLE_CMD_DO_SET_RELAY"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_SET_RELAY);
    // VEHICLE_CMD_DO_REPEAT_RELAY
    auto currentElement_VEHICLE_CMD_DO_REPEAT_RELAY = (msg + ctr)->VEHICLE_CMD_DO_REPEAT_RELAY;
    outArray[ctr]["VEHICLE_CMD_DO_REPEAT_RELAY"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_REPEAT_RELAY);
    // VEHICLE_CMD_DO_REPEAT_SERVO
    auto currentElement_VEHICLE_CMD_DO_REPEAT_SERVO = (msg + ctr)->VEHICLE_CMD_DO_REPEAT_SERVO;
    outArray[ctr]["VEHICLE_CMD_DO_REPEAT_SERVO"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_REPEAT_SERVO);
    // VEHICLE_CMD_DO_FLIGHTTERMINATION
    auto currentElement_VEHICLE_CMD_DO_FLIGHTTERMINATION = (msg + ctr)->VEHICLE_CMD_DO_FLIGHTTERMINATION;
    outArray[ctr]["VEHICLE_CMD_DO_FLIGHTTERMINATION"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_FLIGHTTERMINATION);
    // VEHICLE_CMD_DO_CHANGE_ALTITUDE
    auto currentElement_VEHICLE_CMD_DO_CHANGE_ALTITUDE = (msg + ctr)->VEHICLE_CMD_DO_CHANGE_ALTITUDE;
    outArray[ctr]["VEHICLE_CMD_DO_CHANGE_ALTITUDE"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_CHANGE_ALTITUDE);
    // VEHICLE_CMD_DO_SET_ACTUATOR
    auto currentElement_VEHICLE_CMD_DO_SET_ACTUATOR = (msg + ctr)->VEHICLE_CMD_DO_SET_ACTUATOR;
    outArray[ctr]["VEHICLE_CMD_DO_SET_ACTUATOR"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_SET_ACTUATOR);
    // VEHICLE_CMD_DO_LAND_START
    auto currentElement_VEHICLE_CMD_DO_LAND_START = (msg + ctr)->VEHICLE_CMD_DO_LAND_START;
    outArray[ctr]["VEHICLE_CMD_DO_LAND_START"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_LAND_START);
    // VEHICLE_CMD_DO_GO_AROUND
    auto currentElement_VEHICLE_CMD_DO_GO_AROUND = (msg + ctr)->VEHICLE_CMD_DO_GO_AROUND;
    outArray[ctr]["VEHICLE_CMD_DO_GO_AROUND"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_GO_AROUND);
    // VEHICLE_CMD_DO_REPOSITION
    auto currentElement_VEHICLE_CMD_DO_REPOSITION = (msg + ctr)->VEHICLE_CMD_DO_REPOSITION;
    outArray[ctr]["VEHICLE_CMD_DO_REPOSITION"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_REPOSITION);
    // VEHICLE_CMD_DO_PAUSE_CONTINUE
    auto currentElement_VEHICLE_CMD_DO_PAUSE_CONTINUE = (msg + ctr)->VEHICLE_CMD_DO_PAUSE_CONTINUE;
    outArray[ctr]["VEHICLE_CMD_DO_PAUSE_CONTINUE"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_PAUSE_CONTINUE);
    // VEHICLE_CMD_DO_SET_ROI_LOCATION
    auto currentElement_VEHICLE_CMD_DO_SET_ROI_LOCATION = (msg + ctr)->VEHICLE_CMD_DO_SET_ROI_LOCATION;
    outArray[ctr]["VEHICLE_CMD_DO_SET_ROI_LOCATION"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_SET_ROI_LOCATION);
    // VEHICLE_CMD_DO_SET_ROI_WPNEXT_OFFSET
    auto currentElement_VEHICLE_CMD_DO_SET_ROI_WPNEXT_OFFSET = (msg + ctr)->VEHICLE_CMD_DO_SET_ROI_WPNEXT_OFFSET;
    outArray[ctr]["VEHICLE_CMD_DO_SET_ROI_WPNEXT_OFFSET"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_SET_ROI_WPNEXT_OFFSET);
    // VEHICLE_CMD_DO_SET_ROI_NONE
    auto currentElement_VEHICLE_CMD_DO_SET_ROI_NONE = (msg + ctr)->VEHICLE_CMD_DO_SET_ROI_NONE;
    outArray[ctr]["VEHICLE_CMD_DO_SET_ROI_NONE"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_SET_ROI_NONE);
    // VEHICLE_CMD_DO_CONTROL_VIDEO
    auto currentElement_VEHICLE_CMD_DO_CONTROL_VIDEO = (msg + ctr)->VEHICLE_CMD_DO_CONTROL_VIDEO;
    outArray[ctr]["VEHICLE_CMD_DO_CONTROL_VIDEO"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_CONTROL_VIDEO);
    // VEHICLE_CMD_DO_SET_ROI
    auto currentElement_VEHICLE_CMD_DO_SET_ROI = (msg + ctr)->VEHICLE_CMD_DO_SET_ROI;
    outArray[ctr]["VEHICLE_CMD_DO_SET_ROI"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_SET_ROI);
    // VEHICLE_CMD_DO_DIGICAM_CONTROL
    auto currentElement_VEHICLE_CMD_DO_DIGICAM_CONTROL = (msg + ctr)->VEHICLE_CMD_DO_DIGICAM_CONTROL;
    outArray[ctr]["VEHICLE_CMD_DO_DIGICAM_CONTROL"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_DIGICAM_CONTROL);
    // VEHICLE_CMD_DO_MOUNT_CONFIGURE
    auto currentElement_VEHICLE_CMD_DO_MOUNT_CONFIGURE = (msg + ctr)->VEHICLE_CMD_DO_MOUNT_CONFIGURE;
    outArray[ctr]["VEHICLE_CMD_DO_MOUNT_CONFIGURE"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_MOUNT_CONFIGURE);
    // VEHICLE_CMD_DO_MOUNT_CONTROL
    auto currentElement_VEHICLE_CMD_DO_MOUNT_CONTROL = (msg + ctr)->VEHICLE_CMD_DO_MOUNT_CONTROL;
    outArray[ctr]["VEHICLE_CMD_DO_MOUNT_CONTROL"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_MOUNT_CONTROL);
    // VEHICLE_CMD_DO_SET_CAM_TRIGG_DIST
    auto currentElement_VEHICLE_CMD_DO_SET_CAM_TRIGG_DIST = (msg + ctr)->VEHICLE_CMD_DO_SET_CAM_TRIGG_DIST;
    outArray[ctr]["VEHICLE_CMD_DO_SET_CAM_TRIGG_DIST"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_SET_CAM_TRIGG_DIST);
    // VEHICLE_CMD_DO_FENCE_ENABLE
    auto currentElement_VEHICLE_CMD_DO_FENCE_ENABLE = (msg + ctr)->VEHICLE_CMD_DO_FENCE_ENABLE;
    outArray[ctr]["VEHICLE_CMD_DO_FENCE_ENABLE"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_FENCE_ENABLE);
    // VEHICLE_CMD_DO_PARACHUTE
    auto currentElement_VEHICLE_CMD_DO_PARACHUTE = (msg + ctr)->VEHICLE_CMD_DO_PARACHUTE;
    outArray[ctr]["VEHICLE_CMD_DO_PARACHUTE"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_PARACHUTE);
    // VEHICLE_CMD_DO_MOTOR_TEST
    auto currentElement_VEHICLE_CMD_DO_MOTOR_TEST = (msg + ctr)->VEHICLE_CMD_DO_MOTOR_TEST;
    outArray[ctr]["VEHICLE_CMD_DO_MOTOR_TEST"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_MOTOR_TEST);
    // VEHICLE_CMD_DO_INVERTED_FLIGHT
    auto currentElement_VEHICLE_CMD_DO_INVERTED_FLIGHT = (msg + ctr)->VEHICLE_CMD_DO_INVERTED_FLIGHT;
    outArray[ctr]["VEHICLE_CMD_DO_INVERTED_FLIGHT"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_INVERTED_FLIGHT);
    // VEHICLE_CMD_DO_GRIPPER
    auto currentElement_VEHICLE_CMD_DO_GRIPPER = (msg + ctr)->VEHICLE_CMD_DO_GRIPPER;
    outArray[ctr]["VEHICLE_CMD_DO_GRIPPER"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_GRIPPER);
    // VEHICLE_CMD_DO_SET_CAM_TRIGG_INTERVAL
    auto currentElement_VEHICLE_CMD_DO_SET_CAM_TRIGG_INTERVAL = (msg + ctr)->VEHICLE_CMD_DO_SET_CAM_TRIGG_INTERVAL;
    outArray[ctr]["VEHICLE_CMD_DO_SET_CAM_TRIGG_INTERVAL"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_SET_CAM_TRIGG_INTERVAL);
    // VEHICLE_CMD_DO_MOUNT_CONTROL_QUAT
    auto currentElement_VEHICLE_CMD_DO_MOUNT_CONTROL_QUAT = (msg + ctr)->VEHICLE_CMD_DO_MOUNT_CONTROL_QUAT;
    outArray[ctr]["VEHICLE_CMD_DO_MOUNT_CONTROL_QUAT"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_MOUNT_CONTROL_QUAT);
    // VEHICLE_CMD_DO_GUIDED_MASTER
    auto currentElement_VEHICLE_CMD_DO_GUIDED_MASTER = (msg + ctr)->VEHICLE_CMD_DO_GUIDED_MASTER;
    outArray[ctr]["VEHICLE_CMD_DO_GUIDED_MASTER"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_GUIDED_MASTER);
    // VEHICLE_CMD_DO_GUIDED_LIMITS
    auto currentElement_VEHICLE_CMD_DO_GUIDED_LIMITS = (msg + ctr)->VEHICLE_CMD_DO_GUIDED_LIMITS;
    outArray[ctr]["VEHICLE_CMD_DO_GUIDED_LIMITS"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_GUIDED_LIMITS);
    // VEHICLE_CMD_DO_LAST
    auto currentElement_VEHICLE_CMD_DO_LAST = (msg + ctr)->VEHICLE_CMD_DO_LAST;
    outArray[ctr]["VEHICLE_CMD_DO_LAST"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_LAST);
    // VEHICLE_CMD_PREFLIGHT_CALIBRATION
    auto currentElement_VEHICLE_CMD_PREFLIGHT_CALIBRATION = (msg + ctr)->VEHICLE_CMD_PREFLIGHT_CALIBRATION;
    outArray[ctr]["VEHICLE_CMD_PREFLIGHT_CALIBRATION"] = factory.createScalar(currentElement_VEHICLE_CMD_PREFLIGHT_CALIBRATION);
    // PREFLIGHT_CALIBRATION_TEMPERATURE_CALIBRATION
    auto currentElement_PREFLIGHT_CALIBRATION_TEMPERATURE_CALIBRATION = (msg + ctr)->PREFLIGHT_CALIBRATION_TEMPERATURE_CALIBRATION;
    outArray[ctr]["PREFLIGHT_CALIBRATION_TEMPERATURE_CALIBRATION"] = factory.createScalar(currentElement_PREFLIGHT_CALIBRATION_TEMPERATURE_CALIBRATION);
    // VEHICLE_CMD_PREFLIGHT_SET_SENSOR_OFFSETS
    auto currentElement_VEHICLE_CMD_PREFLIGHT_SET_SENSOR_OFFSETS = (msg + ctr)->VEHICLE_CMD_PREFLIGHT_SET_SENSOR_OFFSETS;
    outArray[ctr]["VEHICLE_CMD_PREFLIGHT_SET_SENSOR_OFFSETS"] = factory.createScalar(currentElement_VEHICLE_CMD_PREFLIGHT_SET_SENSOR_OFFSETS);
    // VEHICLE_CMD_PREFLIGHT_UAVCAN
    auto currentElement_VEHICLE_CMD_PREFLIGHT_UAVCAN = (msg + ctr)->VEHICLE_CMD_PREFLIGHT_UAVCAN;
    outArray[ctr]["VEHICLE_CMD_PREFLIGHT_UAVCAN"] = factory.createScalar(currentElement_VEHICLE_CMD_PREFLIGHT_UAVCAN);
    // VEHICLE_CMD_PREFLIGHT_STORAGE
    auto currentElement_VEHICLE_CMD_PREFLIGHT_STORAGE = (msg + ctr)->VEHICLE_CMD_PREFLIGHT_STORAGE;
    outArray[ctr]["VEHICLE_CMD_PREFLIGHT_STORAGE"] = factory.createScalar(currentElement_VEHICLE_CMD_PREFLIGHT_STORAGE);
    // VEHICLE_CMD_PREFLIGHT_REBOOT_SHUTDOWN
    auto currentElement_VEHICLE_CMD_PREFLIGHT_REBOOT_SHUTDOWN = (msg + ctr)->VEHICLE_CMD_PREFLIGHT_REBOOT_SHUTDOWN;
    outArray[ctr]["VEHICLE_CMD_PREFLIGHT_REBOOT_SHUTDOWN"] = factory.createScalar(currentElement_VEHICLE_CMD_PREFLIGHT_REBOOT_SHUTDOWN);
    // VEHICLE_CMD_OBLIQUE_SURVEY
    auto currentElement_VEHICLE_CMD_OBLIQUE_SURVEY = (msg + ctr)->VEHICLE_CMD_OBLIQUE_SURVEY;
    outArray[ctr]["VEHICLE_CMD_OBLIQUE_SURVEY"] = factory.createScalar(currentElement_VEHICLE_CMD_OBLIQUE_SURVEY);
    // VEHICLE_CMD_DO_SET_STANDARD_MODE
    auto currentElement_VEHICLE_CMD_DO_SET_STANDARD_MODE = (msg + ctr)->VEHICLE_CMD_DO_SET_STANDARD_MODE;
    outArray[ctr]["VEHICLE_CMD_DO_SET_STANDARD_MODE"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_SET_STANDARD_MODE);
    // VEHICLE_CMD_GIMBAL_DEVICE_INFORMATION
    auto currentElement_VEHICLE_CMD_GIMBAL_DEVICE_INFORMATION = (msg + ctr)->VEHICLE_CMD_GIMBAL_DEVICE_INFORMATION;
    outArray[ctr]["VEHICLE_CMD_GIMBAL_DEVICE_INFORMATION"] = factory.createScalar(currentElement_VEHICLE_CMD_GIMBAL_DEVICE_INFORMATION);
    // VEHICLE_CMD_MISSION_START
    auto currentElement_VEHICLE_CMD_MISSION_START = (msg + ctr)->VEHICLE_CMD_MISSION_START;
    outArray[ctr]["VEHICLE_CMD_MISSION_START"] = factory.createScalar(currentElement_VEHICLE_CMD_MISSION_START);
    // VEHICLE_CMD_ACTUATOR_TEST
    auto currentElement_VEHICLE_CMD_ACTUATOR_TEST = (msg + ctr)->VEHICLE_CMD_ACTUATOR_TEST;
    outArray[ctr]["VEHICLE_CMD_ACTUATOR_TEST"] = factory.createScalar(currentElement_VEHICLE_CMD_ACTUATOR_TEST);
    // VEHICLE_CMD_CONFIGURE_ACTUATOR
    auto currentElement_VEHICLE_CMD_CONFIGURE_ACTUATOR = (msg + ctr)->VEHICLE_CMD_CONFIGURE_ACTUATOR;
    outArray[ctr]["VEHICLE_CMD_CONFIGURE_ACTUATOR"] = factory.createScalar(currentElement_VEHICLE_CMD_CONFIGURE_ACTUATOR);
    // VEHICLE_CMD_COMPONENT_ARM_DISARM
    auto currentElement_VEHICLE_CMD_COMPONENT_ARM_DISARM = (msg + ctr)->VEHICLE_CMD_COMPONENT_ARM_DISARM;
    outArray[ctr]["VEHICLE_CMD_COMPONENT_ARM_DISARM"] = factory.createScalar(currentElement_VEHICLE_CMD_COMPONENT_ARM_DISARM);
    // VEHICLE_CMD_RUN_PREARM_CHECKS
    auto currentElement_VEHICLE_CMD_RUN_PREARM_CHECKS = (msg + ctr)->VEHICLE_CMD_RUN_PREARM_CHECKS;
    outArray[ctr]["VEHICLE_CMD_RUN_PREARM_CHECKS"] = factory.createScalar(currentElement_VEHICLE_CMD_RUN_PREARM_CHECKS);
    // VEHICLE_CMD_INJECT_FAILURE
    auto currentElement_VEHICLE_CMD_INJECT_FAILURE = (msg + ctr)->VEHICLE_CMD_INJECT_FAILURE;
    outArray[ctr]["VEHICLE_CMD_INJECT_FAILURE"] = factory.createScalar(currentElement_VEHICLE_CMD_INJECT_FAILURE);
    // VEHICLE_CMD_START_RX_PAIR
    auto currentElement_VEHICLE_CMD_START_RX_PAIR = (msg + ctr)->VEHICLE_CMD_START_RX_PAIR;
    outArray[ctr]["VEHICLE_CMD_START_RX_PAIR"] = factory.createScalar(currentElement_VEHICLE_CMD_START_RX_PAIR);
    // VEHICLE_CMD_REQUEST_MESSAGE
    auto currentElement_VEHICLE_CMD_REQUEST_MESSAGE = (msg + ctr)->VEHICLE_CMD_REQUEST_MESSAGE;
    outArray[ctr]["VEHICLE_CMD_REQUEST_MESSAGE"] = factory.createScalar(currentElement_VEHICLE_CMD_REQUEST_MESSAGE);
    // VEHICLE_CMD_REQUEST_CAMERA_INFORMATION
    auto currentElement_VEHICLE_CMD_REQUEST_CAMERA_INFORMATION = (msg + ctr)->VEHICLE_CMD_REQUEST_CAMERA_INFORMATION;
    outArray[ctr]["VEHICLE_CMD_REQUEST_CAMERA_INFORMATION"] = factory.createScalar(currentElement_VEHICLE_CMD_REQUEST_CAMERA_INFORMATION);
    // VEHICLE_CMD_SET_CAMERA_MODE
    auto currentElement_VEHICLE_CMD_SET_CAMERA_MODE = (msg + ctr)->VEHICLE_CMD_SET_CAMERA_MODE;
    outArray[ctr]["VEHICLE_CMD_SET_CAMERA_MODE"] = factory.createScalar(currentElement_VEHICLE_CMD_SET_CAMERA_MODE);
    // VEHICLE_CMD_SET_CAMERA_ZOOM
    auto currentElement_VEHICLE_CMD_SET_CAMERA_ZOOM = (msg + ctr)->VEHICLE_CMD_SET_CAMERA_ZOOM;
    outArray[ctr]["VEHICLE_CMD_SET_CAMERA_ZOOM"] = factory.createScalar(currentElement_VEHICLE_CMD_SET_CAMERA_ZOOM);
    // VEHICLE_CMD_SET_CAMERA_FOCUS
    auto currentElement_VEHICLE_CMD_SET_CAMERA_FOCUS = (msg + ctr)->VEHICLE_CMD_SET_CAMERA_FOCUS;
    outArray[ctr]["VEHICLE_CMD_SET_CAMERA_FOCUS"] = factory.createScalar(currentElement_VEHICLE_CMD_SET_CAMERA_FOCUS);
    // VEHICLE_CMD_DO_GIMBAL_MANAGER_PITCHYAW
    auto currentElement_VEHICLE_CMD_DO_GIMBAL_MANAGER_PITCHYAW = (msg + ctr)->VEHICLE_CMD_DO_GIMBAL_MANAGER_PITCHYAW;
    outArray[ctr]["VEHICLE_CMD_DO_GIMBAL_MANAGER_PITCHYAW"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_GIMBAL_MANAGER_PITCHYAW);
    // VEHICLE_CMD_DO_GIMBAL_MANAGER_CONFIGURE
    auto currentElement_VEHICLE_CMD_DO_GIMBAL_MANAGER_CONFIGURE = (msg + ctr)->VEHICLE_CMD_DO_GIMBAL_MANAGER_CONFIGURE;
    outArray[ctr]["VEHICLE_CMD_DO_GIMBAL_MANAGER_CONFIGURE"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_GIMBAL_MANAGER_CONFIGURE);
    // VEHICLE_CMD_IMAGE_START_CAPTURE
    auto currentElement_VEHICLE_CMD_IMAGE_START_CAPTURE = (msg + ctr)->VEHICLE_CMD_IMAGE_START_CAPTURE;
    outArray[ctr]["VEHICLE_CMD_IMAGE_START_CAPTURE"] = factory.createScalar(currentElement_VEHICLE_CMD_IMAGE_START_CAPTURE);
    // VEHICLE_CMD_DO_TRIGGER_CONTROL
    auto currentElement_VEHICLE_CMD_DO_TRIGGER_CONTROL = (msg + ctr)->VEHICLE_CMD_DO_TRIGGER_CONTROL;
    outArray[ctr]["VEHICLE_CMD_DO_TRIGGER_CONTROL"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_TRIGGER_CONTROL);
    // VEHICLE_CMD_VIDEO_START_CAPTURE
    auto currentElement_VEHICLE_CMD_VIDEO_START_CAPTURE = (msg + ctr)->VEHICLE_CMD_VIDEO_START_CAPTURE;
    outArray[ctr]["VEHICLE_CMD_VIDEO_START_CAPTURE"] = factory.createScalar(currentElement_VEHICLE_CMD_VIDEO_START_CAPTURE);
    // VEHICLE_CMD_VIDEO_STOP_CAPTURE
    auto currentElement_VEHICLE_CMD_VIDEO_STOP_CAPTURE = (msg + ctr)->VEHICLE_CMD_VIDEO_STOP_CAPTURE;
    outArray[ctr]["VEHICLE_CMD_VIDEO_STOP_CAPTURE"] = factory.createScalar(currentElement_VEHICLE_CMD_VIDEO_STOP_CAPTURE);
    // VEHICLE_CMD_LOGGING_START
    auto currentElement_VEHICLE_CMD_LOGGING_START = (msg + ctr)->VEHICLE_CMD_LOGGING_START;
    outArray[ctr]["VEHICLE_CMD_LOGGING_START"] = factory.createScalar(currentElement_VEHICLE_CMD_LOGGING_START);
    // VEHICLE_CMD_LOGGING_STOP
    auto currentElement_VEHICLE_CMD_LOGGING_STOP = (msg + ctr)->VEHICLE_CMD_LOGGING_STOP;
    outArray[ctr]["VEHICLE_CMD_LOGGING_STOP"] = factory.createScalar(currentElement_VEHICLE_CMD_LOGGING_STOP);
    // VEHICLE_CMD_CONTROL_HIGH_LATENCY
    auto currentElement_VEHICLE_CMD_CONTROL_HIGH_LATENCY = (msg + ctr)->VEHICLE_CMD_CONTROL_HIGH_LATENCY;
    outArray[ctr]["VEHICLE_CMD_CONTROL_HIGH_LATENCY"] = factory.createScalar(currentElement_VEHICLE_CMD_CONTROL_HIGH_LATENCY);
    // VEHICLE_CMD_DO_VTOL_TRANSITION
    auto currentElement_VEHICLE_CMD_DO_VTOL_TRANSITION = (msg + ctr)->VEHICLE_CMD_DO_VTOL_TRANSITION;
    outArray[ctr]["VEHICLE_CMD_DO_VTOL_TRANSITION"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_VTOL_TRANSITION);
    // VEHICLE_CMD_ARM_AUTHORIZATION_REQUEST
    auto currentElement_VEHICLE_CMD_ARM_AUTHORIZATION_REQUEST = (msg + ctr)->VEHICLE_CMD_ARM_AUTHORIZATION_REQUEST;
    outArray[ctr]["VEHICLE_CMD_ARM_AUTHORIZATION_REQUEST"] = factory.createScalar(currentElement_VEHICLE_CMD_ARM_AUTHORIZATION_REQUEST);
    // VEHICLE_CMD_PAYLOAD_PREPARE_DEPLOY
    auto currentElement_VEHICLE_CMD_PAYLOAD_PREPARE_DEPLOY = (msg + ctr)->VEHICLE_CMD_PAYLOAD_PREPARE_DEPLOY;
    outArray[ctr]["VEHICLE_CMD_PAYLOAD_PREPARE_DEPLOY"] = factory.createScalar(currentElement_VEHICLE_CMD_PAYLOAD_PREPARE_DEPLOY);
    // VEHICLE_CMD_PAYLOAD_CONTROL_DEPLOY
    auto currentElement_VEHICLE_CMD_PAYLOAD_CONTROL_DEPLOY = (msg + ctr)->VEHICLE_CMD_PAYLOAD_CONTROL_DEPLOY;
    outArray[ctr]["VEHICLE_CMD_PAYLOAD_CONTROL_DEPLOY"] = factory.createScalar(currentElement_VEHICLE_CMD_PAYLOAD_CONTROL_DEPLOY);
    // VEHICLE_CMD_FIXED_MAG_CAL_YAW
    auto currentElement_VEHICLE_CMD_FIXED_MAG_CAL_YAW = (msg + ctr)->VEHICLE_CMD_FIXED_MAG_CAL_YAW;
    outArray[ctr]["VEHICLE_CMD_FIXED_MAG_CAL_YAW"] = factory.createScalar(currentElement_VEHICLE_CMD_FIXED_MAG_CAL_YAW);
    // VEHICLE_CMD_DO_WINCH
    auto currentElement_VEHICLE_CMD_DO_WINCH = (msg + ctr)->VEHICLE_CMD_DO_WINCH;
    outArray[ctr]["VEHICLE_CMD_DO_WINCH"] = factory.createScalar(currentElement_VEHICLE_CMD_DO_WINCH);
    // VEHICLE_CMD_EXTERNAL_POSITION_ESTIMATE
    auto currentElement_VEHICLE_CMD_EXTERNAL_POSITION_ESTIMATE = (msg + ctr)->VEHICLE_CMD_EXTERNAL_POSITION_ESTIMATE;
    outArray[ctr]["VEHICLE_CMD_EXTERNAL_POSITION_ESTIMATE"] = factory.createScalar(currentElement_VEHICLE_CMD_EXTERNAL_POSITION_ESTIMATE);
    // VEHICLE_CMD_EXTERNAL_WIND_ESTIMATE
    auto currentElement_VEHICLE_CMD_EXTERNAL_WIND_ESTIMATE = (msg + ctr)->VEHICLE_CMD_EXTERNAL_WIND_ESTIMATE;
    outArray[ctr]["VEHICLE_CMD_EXTERNAL_WIND_ESTIMATE"] = factory.createScalar(currentElement_VEHICLE_CMD_EXTERNAL_WIND_ESTIMATE);
    // VEHICLE_CMD_PX4_INTERNAL_START
    auto currentElement_VEHICLE_CMD_PX4_INTERNAL_START = (msg + ctr)->VEHICLE_CMD_PX4_INTERNAL_START;
    outArray[ctr]["VEHICLE_CMD_PX4_INTERNAL_START"] = factory.createScalar(currentElement_VEHICLE_CMD_PX4_INTERNAL_START);
    // VEHICLE_CMD_SET_GPS_GLOBAL_ORIGIN
    auto currentElement_VEHICLE_CMD_SET_GPS_GLOBAL_ORIGIN = (msg + ctr)->VEHICLE_CMD_SET_GPS_GLOBAL_ORIGIN;
    outArray[ctr]["VEHICLE_CMD_SET_GPS_GLOBAL_ORIGIN"] = factory.createScalar(currentElement_VEHICLE_CMD_SET_GPS_GLOBAL_ORIGIN);
    // VEHICLE_CMD_SET_NAV_STATE
    auto currentElement_VEHICLE_CMD_SET_NAV_STATE = (msg + ctr)->VEHICLE_CMD_SET_NAV_STATE;
    outArray[ctr]["VEHICLE_CMD_SET_NAV_STATE"] = factory.createScalar(currentElement_VEHICLE_CMD_SET_NAV_STATE);
    // VEHICLE_MOUNT_MODE_RETRACT
    auto currentElement_VEHICLE_MOUNT_MODE_RETRACT = (msg + ctr)->VEHICLE_MOUNT_MODE_RETRACT;
    outArray[ctr]["VEHICLE_MOUNT_MODE_RETRACT"] = factory.createScalar(currentElement_VEHICLE_MOUNT_MODE_RETRACT);
    // VEHICLE_MOUNT_MODE_NEUTRAL
    auto currentElement_VEHICLE_MOUNT_MODE_NEUTRAL = (msg + ctr)->VEHICLE_MOUNT_MODE_NEUTRAL;
    outArray[ctr]["VEHICLE_MOUNT_MODE_NEUTRAL"] = factory.createScalar(currentElement_VEHICLE_MOUNT_MODE_NEUTRAL);
    // VEHICLE_MOUNT_MODE_MAVLINK_TARGETING
    auto currentElement_VEHICLE_MOUNT_MODE_MAVLINK_TARGETING = (msg + ctr)->VEHICLE_MOUNT_MODE_MAVLINK_TARGETING;
    outArray[ctr]["VEHICLE_MOUNT_MODE_MAVLINK_TARGETING"] = factory.createScalar(currentElement_VEHICLE_MOUNT_MODE_MAVLINK_TARGETING);
    // VEHICLE_MOUNT_MODE_RC_TARGETING
    auto currentElement_VEHICLE_MOUNT_MODE_RC_TARGETING = (msg + ctr)->VEHICLE_MOUNT_MODE_RC_TARGETING;
    outArray[ctr]["VEHICLE_MOUNT_MODE_RC_TARGETING"] = factory.createScalar(currentElement_VEHICLE_MOUNT_MODE_RC_TARGETING);
    // VEHICLE_MOUNT_MODE_GPS_POINT
    auto currentElement_VEHICLE_MOUNT_MODE_GPS_POINT = (msg + ctr)->VEHICLE_MOUNT_MODE_GPS_POINT;
    outArray[ctr]["VEHICLE_MOUNT_MODE_GPS_POINT"] = factory.createScalar(currentElement_VEHICLE_MOUNT_MODE_GPS_POINT);
    // VEHICLE_MOUNT_MODE_ENUM_END
    auto currentElement_VEHICLE_MOUNT_MODE_ENUM_END = (msg + ctr)->VEHICLE_MOUNT_MODE_ENUM_END;
    outArray[ctr]["VEHICLE_MOUNT_MODE_ENUM_END"] = factory.createScalar(currentElement_VEHICLE_MOUNT_MODE_ENUM_END);
    // VEHICLE_ROI_NONE
    auto currentElement_VEHICLE_ROI_NONE = (msg + ctr)->VEHICLE_ROI_NONE;
    outArray[ctr]["VEHICLE_ROI_NONE"] = factory.createScalar(currentElement_VEHICLE_ROI_NONE);
    // VEHICLE_ROI_WPNEXT
    auto currentElement_VEHICLE_ROI_WPNEXT = (msg + ctr)->VEHICLE_ROI_WPNEXT;
    outArray[ctr]["VEHICLE_ROI_WPNEXT"] = factory.createScalar(currentElement_VEHICLE_ROI_WPNEXT);
    // VEHICLE_ROI_WPINDEX
    auto currentElement_VEHICLE_ROI_WPINDEX = (msg + ctr)->VEHICLE_ROI_WPINDEX;
    outArray[ctr]["VEHICLE_ROI_WPINDEX"] = factory.createScalar(currentElement_VEHICLE_ROI_WPINDEX);
    // VEHICLE_ROI_LOCATION
    auto currentElement_VEHICLE_ROI_LOCATION = (msg + ctr)->VEHICLE_ROI_LOCATION;
    outArray[ctr]["VEHICLE_ROI_LOCATION"] = factory.createScalar(currentElement_VEHICLE_ROI_LOCATION);
    // VEHICLE_ROI_TARGET
    auto currentElement_VEHICLE_ROI_TARGET = (msg + ctr)->VEHICLE_ROI_TARGET;
    outArray[ctr]["VEHICLE_ROI_TARGET"] = factory.createScalar(currentElement_VEHICLE_ROI_TARGET);
    // VEHICLE_ROI_ENUM_END
    auto currentElement_VEHICLE_ROI_ENUM_END = (msg + ctr)->VEHICLE_ROI_ENUM_END;
    outArray[ctr]["VEHICLE_ROI_ENUM_END"] = factory.createScalar(currentElement_VEHICLE_ROI_ENUM_END);
    // PARACHUTE_ACTION_DISABLE
    auto currentElement_PARACHUTE_ACTION_DISABLE = (msg + ctr)->PARACHUTE_ACTION_DISABLE;
    outArray[ctr]["PARACHUTE_ACTION_DISABLE"] = factory.createScalar(currentElement_PARACHUTE_ACTION_DISABLE);
    // PARACHUTE_ACTION_ENABLE
    auto currentElement_PARACHUTE_ACTION_ENABLE = (msg + ctr)->PARACHUTE_ACTION_ENABLE;
    outArray[ctr]["PARACHUTE_ACTION_ENABLE"] = factory.createScalar(currentElement_PARACHUTE_ACTION_ENABLE);
    // PARACHUTE_ACTION_RELEASE
    auto currentElement_PARACHUTE_ACTION_RELEASE = (msg + ctr)->PARACHUTE_ACTION_RELEASE;
    outArray[ctr]["PARACHUTE_ACTION_RELEASE"] = factory.createScalar(currentElement_PARACHUTE_ACTION_RELEASE);
    // FAILURE_UNIT_SENSOR_GYRO
    auto currentElement_FAILURE_UNIT_SENSOR_GYRO = (msg + ctr)->FAILURE_UNIT_SENSOR_GYRO;
    outArray[ctr]["FAILURE_UNIT_SENSOR_GYRO"] = factory.createScalar(currentElement_FAILURE_UNIT_SENSOR_GYRO);
    // FAILURE_UNIT_SENSOR_ACCEL
    auto currentElement_FAILURE_UNIT_SENSOR_ACCEL = (msg + ctr)->FAILURE_UNIT_SENSOR_ACCEL;
    outArray[ctr]["FAILURE_UNIT_SENSOR_ACCEL"] = factory.createScalar(currentElement_FAILURE_UNIT_SENSOR_ACCEL);
    // FAILURE_UNIT_SENSOR_MAG
    auto currentElement_FAILURE_UNIT_SENSOR_MAG = (msg + ctr)->FAILURE_UNIT_SENSOR_MAG;
    outArray[ctr]["FAILURE_UNIT_SENSOR_MAG"] = factory.createScalar(currentElement_FAILURE_UNIT_SENSOR_MAG);
    // FAILURE_UNIT_SENSOR_BARO
    auto currentElement_FAILURE_UNIT_SENSOR_BARO = (msg + ctr)->FAILURE_UNIT_SENSOR_BARO;
    outArray[ctr]["FAILURE_UNIT_SENSOR_BARO"] = factory.createScalar(currentElement_FAILURE_UNIT_SENSOR_BARO);
    // FAILURE_UNIT_SENSOR_GPS
    auto currentElement_FAILURE_UNIT_SENSOR_GPS = (msg + ctr)->FAILURE_UNIT_SENSOR_GPS;
    outArray[ctr]["FAILURE_UNIT_SENSOR_GPS"] = factory.createScalar(currentElement_FAILURE_UNIT_SENSOR_GPS);
    // FAILURE_UNIT_SENSOR_OPTICAL_FLOW
    auto currentElement_FAILURE_UNIT_SENSOR_OPTICAL_FLOW = (msg + ctr)->FAILURE_UNIT_SENSOR_OPTICAL_FLOW;
    outArray[ctr]["FAILURE_UNIT_SENSOR_OPTICAL_FLOW"] = factory.createScalar(currentElement_FAILURE_UNIT_SENSOR_OPTICAL_FLOW);
    // FAILURE_UNIT_SENSOR_VIO
    auto currentElement_FAILURE_UNIT_SENSOR_VIO = (msg + ctr)->FAILURE_UNIT_SENSOR_VIO;
    outArray[ctr]["FAILURE_UNIT_SENSOR_VIO"] = factory.createScalar(currentElement_FAILURE_UNIT_SENSOR_VIO);
    // FAILURE_UNIT_SENSOR_DISTANCE_SENSOR
    auto currentElement_FAILURE_UNIT_SENSOR_DISTANCE_SENSOR = (msg + ctr)->FAILURE_UNIT_SENSOR_DISTANCE_SENSOR;
    outArray[ctr]["FAILURE_UNIT_SENSOR_DISTANCE_SENSOR"] = factory.createScalar(currentElement_FAILURE_UNIT_SENSOR_DISTANCE_SENSOR);
    // FAILURE_UNIT_SENSOR_AIRSPEED
    auto currentElement_FAILURE_UNIT_SENSOR_AIRSPEED = (msg + ctr)->FAILURE_UNIT_SENSOR_AIRSPEED;
    outArray[ctr]["FAILURE_UNIT_SENSOR_AIRSPEED"] = factory.createScalar(currentElement_FAILURE_UNIT_SENSOR_AIRSPEED);
    // FAILURE_UNIT_SYSTEM_BATTERY
    auto currentElement_FAILURE_UNIT_SYSTEM_BATTERY = (msg + ctr)->FAILURE_UNIT_SYSTEM_BATTERY;
    outArray[ctr]["FAILURE_UNIT_SYSTEM_BATTERY"] = factory.createScalar(currentElement_FAILURE_UNIT_SYSTEM_BATTERY);
    // FAILURE_UNIT_SYSTEM_MOTOR
    auto currentElement_FAILURE_UNIT_SYSTEM_MOTOR = (msg + ctr)->FAILURE_UNIT_SYSTEM_MOTOR;
    outArray[ctr]["FAILURE_UNIT_SYSTEM_MOTOR"] = factory.createScalar(currentElement_FAILURE_UNIT_SYSTEM_MOTOR);
    // FAILURE_UNIT_SYSTEM_SERVO
    auto currentElement_FAILURE_UNIT_SYSTEM_SERVO = (msg + ctr)->FAILURE_UNIT_SYSTEM_SERVO;
    outArray[ctr]["FAILURE_UNIT_SYSTEM_SERVO"] = factory.createScalar(currentElement_FAILURE_UNIT_SYSTEM_SERVO);
    // FAILURE_UNIT_SYSTEM_AVOIDANCE
    auto currentElement_FAILURE_UNIT_SYSTEM_AVOIDANCE = (msg + ctr)->FAILURE_UNIT_SYSTEM_AVOIDANCE;
    outArray[ctr]["FAILURE_UNIT_SYSTEM_AVOIDANCE"] = factory.createScalar(currentElement_FAILURE_UNIT_SYSTEM_AVOIDANCE);
    // FAILURE_UNIT_SYSTEM_RC_SIGNAL
    auto currentElement_FAILURE_UNIT_SYSTEM_RC_SIGNAL = (msg + ctr)->FAILURE_UNIT_SYSTEM_RC_SIGNAL;
    outArray[ctr]["FAILURE_UNIT_SYSTEM_RC_SIGNAL"] = factory.createScalar(currentElement_FAILURE_UNIT_SYSTEM_RC_SIGNAL);
    // FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL
    auto currentElement_FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL = (msg + ctr)->FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL;
    outArray[ctr]["FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL"] = factory.createScalar(currentElement_FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL);
    // FAILURE_TYPE_OK
    auto currentElement_FAILURE_TYPE_OK = (msg + ctr)->FAILURE_TYPE_OK;
    outArray[ctr]["FAILURE_TYPE_OK"] = factory.createScalar(currentElement_FAILURE_TYPE_OK);
    // FAILURE_TYPE_OFF
    auto currentElement_FAILURE_TYPE_OFF = (msg + ctr)->FAILURE_TYPE_OFF;
    outArray[ctr]["FAILURE_TYPE_OFF"] = factory.createScalar(currentElement_FAILURE_TYPE_OFF);
    // FAILURE_TYPE_STUCK
    auto currentElement_FAILURE_TYPE_STUCK = (msg + ctr)->FAILURE_TYPE_STUCK;
    outArray[ctr]["FAILURE_TYPE_STUCK"] = factory.createScalar(currentElement_FAILURE_TYPE_STUCK);
    // FAILURE_TYPE_GARBAGE
    auto currentElement_FAILURE_TYPE_GARBAGE = (msg + ctr)->FAILURE_TYPE_GARBAGE;
    outArray[ctr]["FAILURE_TYPE_GARBAGE"] = factory.createScalar(currentElement_FAILURE_TYPE_GARBAGE);
    // FAILURE_TYPE_WRONG
    auto currentElement_FAILURE_TYPE_WRONG = (msg + ctr)->FAILURE_TYPE_WRONG;
    outArray[ctr]["FAILURE_TYPE_WRONG"] = factory.createScalar(currentElement_FAILURE_TYPE_WRONG);
    // FAILURE_TYPE_SLOW
    auto currentElement_FAILURE_TYPE_SLOW = (msg + ctr)->FAILURE_TYPE_SLOW;
    outArray[ctr]["FAILURE_TYPE_SLOW"] = factory.createScalar(currentElement_FAILURE_TYPE_SLOW);
    // FAILURE_TYPE_DELAYED
    auto currentElement_FAILURE_TYPE_DELAYED = (msg + ctr)->FAILURE_TYPE_DELAYED;
    outArray[ctr]["FAILURE_TYPE_DELAYED"] = factory.createScalar(currentElement_FAILURE_TYPE_DELAYED);
    // FAILURE_TYPE_INTERMITTENT
    auto currentElement_FAILURE_TYPE_INTERMITTENT = (msg + ctr)->FAILURE_TYPE_INTERMITTENT;
    outArray[ctr]["FAILURE_TYPE_INTERMITTENT"] = factory.createScalar(currentElement_FAILURE_TYPE_INTERMITTENT);
    // SPEED_TYPE_AIRSPEED
    auto currentElement_SPEED_TYPE_AIRSPEED = (msg + ctr)->SPEED_TYPE_AIRSPEED;
    outArray[ctr]["SPEED_TYPE_AIRSPEED"] = factory.createScalar(currentElement_SPEED_TYPE_AIRSPEED);
    // SPEED_TYPE_GROUNDSPEED
    auto currentElement_SPEED_TYPE_GROUNDSPEED = (msg + ctr)->SPEED_TYPE_GROUNDSPEED;
    outArray[ctr]["SPEED_TYPE_GROUNDSPEED"] = factory.createScalar(currentElement_SPEED_TYPE_GROUNDSPEED);
    // SPEED_TYPE_CLIMB_SPEED
    auto currentElement_SPEED_TYPE_CLIMB_SPEED = (msg + ctr)->SPEED_TYPE_CLIMB_SPEED;
    outArray[ctr]["SPEED_TYPE_CLIMB_SPEED"] = factory.createScalar(currentElement_SPEED_TYPE_CLIMB_SPEED);
    // SPEED_TYPE_DESCEND_SPEED
    auto currentElement_SPEED_TYPE_DESCEND_SPEED = (msg + ctr)->SPEED_TYPE_DESCEND_SPEED;
    outArray[ctr]["SPEED_TYPE_DESCEND_SPEED"] = factory.createScalar(currentElement_SPEED_TYPE_DESCEND_SPEED);
    // ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER
    auto currentElement_ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER = (msg + ctr)->ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER;
    outArray[ctr]["ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER"] = factory.createScalar(currentElement_ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER);
    // ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING
    auto currentElement_ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING = (msg + ctr)->ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING;
    outArray[ctr]["ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING"] = factory.createScalar(currentElement_ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING);
    // ORBIT_YAW_BEHAVIOUR_UNCONTROLLED
    auto currentElement_ORBIT_YAW_BEHAVIOUR_UNCONTROLLED = (msg + ctr)->ORBIT_YAW_BEHAVIOUR_UNCONTROLLED;
    outArray[ctr]["ORBIT_YAW_BEHAVIOUR_UNCONTROLLED"] = factory.createScalar(currentElement_ORBIT_YAW_BEHAVIOUR_UNCONTROLLED);
    // ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE
    auto currentElement_ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE = (msg + ctr)->ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE;
    outArray[ctr]["ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE"] = factory.createScalar(currentElement_ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE);
    // ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED
    auto currentElement_ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED = (msg + ctr)->ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED;
    outArray[ctr]["ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED"] = factory.createScalar(currentElement_ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED);
    // ORBIT_YAW_BEHAVIOUR_UNCHANGED
    auto currentElement_ORBIT_YAW_BEHAVIOUR_UNCHANGED = (msg + ctr)->ORBIT_YAW_BEHAVIOUR_UNCHANGED;
    outArray[ctr]["ORBIT_YAW_BEHAVIOUR_UNCHANGED"] = factory.createScalar(currentElement_ORBIT_YAW_BEHAVIOUR_UNCHANGED);
    // ARMING_ACTION_DISARM
    auto currentElement_ARMING_ACTION_DISARM = (msg + ctr)->ARMING_ACTION_DISARM;
    outArray[ctr]["ARMING_ACTION_DISARM"] = factory.createScalar(currentElement_ARMING_ACTION_DISARM);
    // ARMING_ACTION_ARM
    auto currentElement_ARMING_ACTION_ARM = (msg + ctr)->ARMING_ACTION_ARM;
    outArray[ctr]["ARMING_ACTION_ARM"] = factory.createScalar(currentElement_ARMING_ACTION_ARM);
    // GRIPPER_ACTION_RELEASE
    auto currentElement_GRIPPER_ACTION_RELEASE = (msg + ctr)->GRIPPER_ACTION_RELEASE;
    outArray[ctr]["GRIPPER_ACTION_RELEASE"] = factory.createScalar(currentElement_GRIPPER_ACTION_RELEASE);
    // GRIPPER_ACTION_GRAB
    auto currentElement_GRIPPER_ACTION_GRAB = (msg + ctr)->GRIPPER_ACTION_GRAB;
    outArray[ctr]["GRIPPER_ACTION_GRAB"] = factory.createScalar(currentElement_GRIPPER_ACTION_GRAB);
    // ORB_QUEUE_LENGTH
    auto currentElement_ORB_QUEUE_LENGTH = (msg + ctr)->ORB_QUEUE_LENGTH;
    outArray[ctr]["ORB_QUEUE_LENGTH"] = factory.createScalar(currentElement_ORB_QUEUE_LENGTH);
    // param1
    auto currentElement_param1 = (msg + ctr)->param1;
    outArray[ctr]["param1"] = factory.createScalar(currentElement_param1);
    // param2
    auto currentElement_param2 = (msg + ctr)->param2;
    outArray[ctr]["param2"] = factory.createScalar(currentElement_param2);
    // param3
    auto currentElement_param3 = (msg + ctr)->param3;
    outArray[ctr]["param3"] = factory.createScalar(currentElement_param3);
    // param4
    auto currentElement_param4 = (msg + ctr)->param4;
    outArray[ctr]["param4"] = factory.createScalar(currentElement_param4);
    // param5
    auto currentElement_param5 = (msg + ctr)->param5;
    outArray[ctr]["param5"] = factory.createScalar(currentElement_param5);
    // param6
    auto currentElement_param6 = (msg + ctr)->param6;
    outArray[ctr]["param6"] = factory.createScalar(currentElement_param6);
    // param7
    auto currentElement_param7 = (msg + ctr)->param7;
    outArray[ctr]["param7"] = factory.createScalar(currentElement_param7);
    // command
    auto currentElement_command = (msg + ctr)->command;
    outArray[ctr]["command"] = factory.createScalar(currentElement_command);
    // target_system
    auto currentElement_target_system = (msg + ctr)->target_system;
    outArray[ctr]["target_system"] = factory.createScalar(currentElement_target_system);
    // target_component
    auto currentElement_target_component = (msg + ctr)->target_component;
    outArray[ctr]["target_component"] = factory.createScalar(currentElement_target_component);
    // source_system
    auto currentElement_source_system = (msg + ctr)->source_system;
    outArray[ctr]["source_system"] = factory.createScalar(currentElement_source_system);
    // source_component
    auto currentElement_source_component = (msg + ctr)->source_component;
    outArray[ctr]["source_component"] = factory.createScalar(currentElement_source_component);
    // confirmation
    auto currentElement_confirmation = (msg + ctr)->confirmation;
    outArray[ctr]["confirmation"] = factory.createScalar(currentElement_confirmation);
    // from_external
    auto currentElement_from_external = (msg + ctr)->from_external;
    outArray[ctr]["from_external"] = factory.createScalar(currentElement_from_external);
    // COMPONENT_MODE_EXECUTOR_START
    auto currentElement_COMPONENT_MODE_EXECUTOR_START = (msg + ctr)->COMPONENT_MODE_EXECUTOR_START;
    outArray[ctr]["COMPONENT_MODE_EXECUTOR_START"] = factory.createScalar(currentElement_COMPONENT_MODE_EXECUTOR_START);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_VehicleCommand_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_VehicleCommand_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_VehicleCommand_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::VehicleCommand,ros2_px4_msgs_msg_VehicleCommand_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_VehicleCommand_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::VehicleCommand,ros2_px4_msgs_msg_VehicleCommand_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_VehicleCommand_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::VehicleCommand>();
    ros2_px4_msgs_msg_VehicleCommand_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_VehicleCommand_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_VehicleCommand_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::VehicleCommand*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_VehicleCommand_common, MATLABROS2MsgInterface<px4_msgs::msg::VehicleCommand>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_VehicleCommand_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER