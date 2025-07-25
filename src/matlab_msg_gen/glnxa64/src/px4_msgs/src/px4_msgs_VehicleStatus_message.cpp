// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/VehicleStatus
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
#include "px4_msgs/msg/vehicle_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_VehicleStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::VehicleStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_VehicleStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::VehicleStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_VehicleStatus_common::copy_from_struct(px4_msgs::msg::VehicleStatus* msg, const matlab::data::Struct& arr,
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
        //armed_time
        const matlab::data::TypedArray<uint64_t> armed_time_arr = arr["armed_time"];
        msg->armed_time = armed_time_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'armed_time' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'armed_time' is wrong type; expected a uint64.");
    }
    try {
        //takeoff_time
        const matlab::data::TypedArray<uint64_t> takeoff_time_arr = arr["takeoff_time"];
        msg->takeoff_time = takeoff_time_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'takeoff_time' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'takeoff_time' is wrong type; expected a uint64.");
    }
    try {
        //arming_state
        const matlab::data::TypedArray<uint8_t> arming_state_arr = arr["arming_state"];
        msg->arming_state = arming_state_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'arming_state' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'arming_state' is wrong type; expected a uint8.");
    }
    try {
        //latest_arming_reason
        const matlab::data::TypedArray<uint8_t> latest_arming_reason_arr = arr["latest_arming_reason"];
        msg->latest_arming_reason = latest_arming_reason_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'latest_arming_reason' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'latest_arming_reason' is wrong type; expected a uint8.");
    }
    try {
        //latest_disarming_reason
        const matlab::data::TypedArray<uint8_t> latest_disarming_reason_arr = arr["latest_disarming_reason"];
        msg->latest_disarming_reason = latest_disarming_reason_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'latest_disarming_reason' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'latest_disarming_reason' is wrong type; expected a uint8.");
    }
    try {
        //nav_state_timestamp
        const matlab::data::TypedArray<uint64_t> nav_state_timestamp_arr = arr["nav_state_timestamp"];
        msg->nav_state_timestamp = nav_state_timestamp_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'nav_state_timestamp' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'nav_state_timestamp' is wrong type; expected a uint64.");
    }
    try {
        //nav_state_user_intention
        const matlab::data::TypedArray<uint8_t> nav_state_user_intention_arr = arr["nav_state_user_intention"];
        msg->nav_state_user_intention = nav_state_user_intention_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'nav_state_user_intention' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'nav_state_user_intention' is wrong type; expected a uint8.");
    }
    try {
        //nav_state
        const matlab::data::TypedArray<uint8_t> nav_state_arr = arr["nav_state"];
        msg->nav_state = nav_state_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'nav_state' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'nav_state' is wrong type; expected a uint8.");
    }
    try {
        //executor_in_charge
        const matlab::data::TypedArray<uint8_t> executor_in_charge_arr = arr["executor_in_charge"];
        msg->executor_in_charge = executor_in_charge_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'executor_in_charge' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'executor_in_charge' is wrong type; expected a uint8.");
    }
    try {
        //valid_nav_states_mask
        const matlab::data::TypedArray<uint32_t> valid_nav_states_mask_arr = arr["valid_nav_states_mask"];
        msg->valid_nav_states_mask = valid_nav_states_mask_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'valid_nav_states_mask' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'valid_nav_states_mask' is wrong type; expected a uint32.");
    }
    try {
        //can_set_nav_states_mask
        const matlab::data::TypedArray<uint32_t> can_set_nav_states_mask_arr = arr["can_set_nav_states_mask"];
        msg->can_set_nav_states_mask = can_set_nav_states_mask_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'can_set_nav_states_mask' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'can_set_nav_states_mask' is wrong type; expected a uint32.");
    }
    try {
        //failure_detector_status
        const matlab::data::TypedArray<uint16_t> failure_detector_status_arr = arr["failure_detector_status"];
        msg->failure_detector_status = failure_detector_status_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'failure_detector_status' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'failure_detector_status' is wrong type; expected a uint16.");
    }
    try {
        //hil_state
        const matlab::data::TypedArray<uint8_t> hil_state_arr = arr["hil_state"];
        msg->hil_state = hil_state_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'hil_state' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'hil_state' is wrong type; expected a uint8.");
    }
    try {
        //vehicle_type
        const matlab::data::TypedArray<uint8_t> vehicle_type_arr = arr["vehicle_type"];
        msg->vehicle_type = vehicle_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vehicle_type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vehicle_type' is wrong type; expected a uint8.");
    }
    try {
        //failsafe
        const matlab::data::TypedArray<bool> failsafe_arr = arr["failsafe"];
        msg->failsafe = failsafe_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'failsafe' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'failsafe' is wrong type; expected a logical.");
    }
    try {
        //failsafe_and_user_took_over
        const matlab::data::TypedArray<bool> failsafe_and_user_took_over_arr = arr["failsafe_and_user_took_over"];
        msg->failsafe_and_user_took_over = failsafe_and_user_took_over_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'failsafe_and_user_took_over' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'failsafe_and_user_took_over' is wrong type; expected a logical.");
    }
    try {
        //failsafe_defer_state
        const matlab::data::TypedArray<uint8_t> failsafe_defer_state_arr = arr["failsafe_defer_state"];
        msg->failsafe_defer_state = failsafe_defer_state_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'failsafe_defer_state' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'failsafe_defer_state' is wrong type; expected a uint8.");
    }
    try {
        //gcs_connection_lost
        const matlab::data::TypedArray<bool> gcs_connection_lost_arr = arr["gcs_connection_lost"];
        msg->gcs_connection_lost = gcs_connection_lost_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gcs_connection_lost' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gcs_connection_lost' is wrong type; expected a logical.");
    }
    try {
        //gcs_connection_lost_counter
        const matlab::data::TypedArray<uint8_t> gcs_connection_lost_counter_arr = arr["gcs_connection_lost_counter"];
        msg->gcs_connection_lost_counter = gcs_connection_lost_counter_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gcs_connection_lost_counter' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gcs_connection_lost_counter' is wrong type; expected a uint8.");
    }
    try {
        //high_latency_data_link_lost
        const matlab::data::TypedArray<bool> high_latency_data_link_lost_arr = arr["high_latency_data_link_lost"];
        msg->high_latency_data_link_lost = high_latency_data_link_lost_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'high_latency_data_link_lost' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'high_latency_data_link_lost' is wrong type; expected a logical.");
    }
    try {
        //is_vtol
        const matlab::data::TypedArray<bool> is_vtol_arr = arr["is_vtol"];
        msg->is_vtol = is_vtol_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'is_vtol' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'is_vtol' is wrong type; expected a logical.");
    }
    try {
        //is_vtol_tailsitter
        const matlab::data::TypedArray<bool> is_vtol_tailsitter_arr = arr["is_vtol_tailsitter"];
        msg->is_vtol_tailsitter = is_vtol_tailsitter_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'is_vtol_tailsitter' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'is_vtol_tailsitter' is wrong type; expected a logical.");
    }
    try {
        //in_transition_mode
        const matlab::data::TypedArray<bool> in_transition_mode_arr = arr["in_transition_mode"];
        msg->in_transition_mode = in_transition_mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'in_transition_mode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'in_transition_mode' is wrong type; expected a logical.");
    }
    try {
        //in_transition_to_fw
        const matlab::data::TypedArray<bool> in_transition_to_fw_arr = arr["in_transition_to_fw"];
        msg->in_transition_to_fw = in_transition_to_fw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'in_transition_to_fw' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'in_transition_to_fw' is wrong type; expected a logical.");
    }
    try {
        //system_type
        const matlab::data::TypedArray<uint8_t> system_type_arr = arr["system_type"];
        msg->system_type = system_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'system_type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'system_type' is wrong type; expected a uint8.");
    }
    try {
        //system_id
        const matlab::data::TypedArray<uint8_t> system_id_arr = arr["system_id"];
        msg->system_id = system_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'system_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'system_id' is wrong type; expected a uint8.");
    }
    try {
        //component_id
        const matlab::data::TypedArray<uint8_t> component_id_arr = arr["component_id"];
        msg->component_id = component_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'component_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'component_id' is wrong type; expected a uint8.");
    }
    try {
        //safety_button_available
        const matlab::data::TypedArray<bool> safety_button_available_arr = arr["safety_button_available"];
        msg->safety_button_available = safety_button_available_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'safety_button_available' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'safety_button_available' is wrong type; expected a logical.");
    }
    try {
        //safety_off
        const matlab::data::TypedArray<bool> safety_off_arr = arr["safety_off"];
        msg->safety_off = safety_off_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'safety_off' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'safety_off' is wrong type; expected a logical.");
    }
    try {
        //power_input_valid
        const matlab::data::TypedArray<bool> power_input_valid_arr = arr["power_input_valid"];
        msg->power_input_valid = power_input_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'power_input_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'power_input_valid' is wrong type; expected a logical.");
    }
    try {
        //usb_connected
        const matlab::data::TypedArray<bool> usb_connected_arr = arr["usb_connected"];
        msg->usb_connected = usb_connected_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'usb_connected' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'usb_connected' is wrong type; expected a logical.");
    }
    try {
        //open_drone_id_system_present
        const matlab::data::TypedArray<bool> open_drone_id_system_present_arr = arr["open_drone_id_system_present"];
        msg->open_drone_id_system_present = open_drone_id_system_present_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'open_drone_id_system_present' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'open_drone_id_system_present' is wrong type; expected a logical.");
    }
    try {
        //open_drone_id_system_healthy
        const matlab::data::TypedArray<bool> open_drone_id_system_healthy_arr = arr["open_drone_id_system_healthy"];
        msg->open_drone_id_system_healthy = open_drone_id_system_healthy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'open_drone_id_system_healthy' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'open_drone_id_system_healthy' is wrong type; expected a logical.");
    }
    try {
        //parachute_system_present
        const matlab::data::TypedArray<bool> parachute_system_present_arr = arr["parachute_system_present"];
        msg->parachute_system_present = parachute_system_present_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'parachute_system_present' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'parachute_system_present' is wrong type; expected a logical.");
    }
    try {
        //parachute_system_healthy
        const matlab::data::TypedArray<bool> parachute_system_healthy_arr = arr["parachute_system_healthy"];
        msg->parachute_system_healthy = parachute_system_healthy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'parachute_system_healthy' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'parachute_system_healthy' is wrong type; expected a logical.");
    }
    try {
        //avoidance_system_required
        const matlab::data::TypedArray<bool> avoidance_system_required_arr = arr["avoidance_system_required"];
        msg->avoidance_system_required = avoidance_system_required_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'avoidance_system_required' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'avoidance_system_required' is wrong type; expected a logical.");
    }
    try {
        //avoidance_system_valid
        const matlab::data::TypedArray<bool> avoidance_system_valid_arr = arr["avoidance_system_valid"];
        msg->avoidance_system_valid = avoidance_system_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'avoidance_system_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'avoidance_system_valid' is wrong type; expected a logical.");
    }
    try {
        //rc_calibration_in_progress
        const matlab::data::TypedArray<bool> rc_calibration_in_progress_arr = arr["rc_calibration_in_progress"];
        msg->rc_calibration_in_progress = rc_calibration_in_progress_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rc_calibration_in_progress' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rc_calibration_in_progress' is wrong type; expected a logical.");
    }
    try {
        //calibration_enabled
        const matlab::data::TypedArray<bool> calibration_enabled_arr = arr["calibration_enabled"];
        msg->calibration_enabled = calibration_enabled_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'calibration_enabled' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'calibration_enabled' is wrong type; expected a logical.");
    }
    try {
        //pre_flight_checks_pass
        const matlab::data::TypedArray<bool> pre_flight_checks_pass_arr = arr["pre_flight_checks_pass"];
        msg->pre_flight_checks_pass = pre_flight_checks_pass_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pre_flight_checks_pass' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pre_flight_checks_pass' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_VehicleStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","MESSAGE_VERSION","timestamp","armed_time","takeoff_time","arming_state","ARMING_STATE_DISARMED","ARMING_STATE_ARMED","latest_arming_reason","latest_disarming_reason","ARM_DISARM_REASON_TRANSITION_TO_STANDBY","ARM_DISARM_REASON_STICK_GESTURE","ARM_DISARM_REASON_RC_SWITCH","ARM_DISARM_REASON_COMMAND_INTERNAL","ARM_DISARM_REASON_COMMAND_EXTERNAL","ARM_DISARM_REASON_MISSION_START","ARM_DISARM_REASON_SAFETY_BUTTON","ARM_DISARM_REASON_AUTO_DISARM_LAND","ARM_DISARM_REASON_AUTO_DISARM_PREFLIGHT","ARM_DISARM_REASON_KILL_SWITCH","ARM_DISARM_REASON_LOCKDOWN","ARM_DISARM_REASON_FAILURE_DETECTOR","ARM_DISARM_REASON_SHUTDOWN","ARM_DISARM_REASON_UNIT_TEST","nav_state_timestamp","nav_state_user_intention","nav_state","NAVIGATION_STATE_MANUAL","NAVIGATION_STATE_ALTCTL","NAVIGATION_STATE_POSCTL","NAVIGATION_STATE_AUTO_MISSION","NAVIGATION_STATE_AUTO_LOITER","NAVIGATION_STATE_AUTO_RTL","NAVIGATION_STATE_POSITION_SLOW","NAVIGATION_STATE_FREE5","NAVIGATION_STATE_FREE4","NAVIGATION_STATE_FREE3","NAVIGATION_STATE_ACRO","NAVIGATION_STATE_FREE2","NAVIGATION_STATE_DESCEND","NAVIGATION_STATE_TERMINATION","NAVIGATION_STATE_OFFBOARD","NAVIGATION_STATE_STAB","NAVIGATION_STATE_FREE1","NAVIGATION_STATE_AUTO_TAKEOFF","NAVIGATION_STATE_AUTO_LAND","NAVIGATION_STATE_AUTO_FOLLOW_TARGET","NAVIGATION_STATE_AUTO_PRECLAND","NAVIGATION_STATE_ORBIT","NAVIGATION_STATE_AUTO_VTOL_TAKEOFF","NAVIGATION_STATE_EXTERNAL1","NAVIGATION_STATE_EXTERNAL2","NAVIGATION_STATE_EXTERNAL3","NAVIGATION_STATE_EXTERNAL4","NAVIGATION_STATE_EXTERNAL5","NAVIGATION_STATE_EXTERNAL6","NAVIGATION_STATE_EXTERNAL7","NAVIGATION_STATE_EXTERNAL8","NAVIGATION_STATE_MAX","executor_in_charge","valid_nav_states_mask","can_set_nav_states_mask","failure_detector_status","FAILURE_NONE","FAILURE_ROLL","FAILURE_PITCH","FAILURE_ALT","FAILURE_EXT","FAILURE_ARM_ESC","FAILURE_BATTERY","FAILURE_IMBALANCED_PROP","FAILURE_MOTOR","hil_state","HIL_STATE_OFF","HIL_STATE_ON","vehicle_type","VEHICLE_TYPE_UNKNOWN","VEHICLE_TYPE_ROTARY_WING","VEHICLE_TYPE_FIXED_WING","VEHICLE_TYPE_ROVER","VEHICLE_TYPE_AIRSHIP","FAILSAFE_DEFER_STATE_DISABLED","FAILSAFE_DEFER_STATE_ENABLED","FAILSAFE_DEFER_STATE_WOULD_FAILSAFE","failsafe","failsafe_and_user_took_over","failsafe_defer_state","gcs_connection_lost","gcs_connection_lost_counter","high_latency_data_link_lost","is_vtol","is_vtol_tailsitter","in_transition_mode","in_transition_to_fw","system_type","system_id","component_id","safety_button_available","safety_off","power_input_valid","usb_connected","open_drone_id_system_present","open_drone_id_system_healthy","parachute_system_present","parachute_system_healthy","avoidance_system_required","avoidance_system_valid","rc_calibration_in_progress","calibration_enabled","pre_flight_checks_pass"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/VehicleStatus");
    // MESSAGE_VERSION
    auto currentElement_MESSAGE_VERSION = (msg + ctr)->MESSAGE_VERSION;
    outArray[ctr]["MESSAGE_VERSION"] = factory.createScalar(currentElement_MESSAGE_VERSION);
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // armed_time
    auto currentElement_armed_time = (msg + ctr)->armed_time;
    outArray[ctr]["armed_time"] = factory.createScalar(currentElement_armed_time);
    // takeoff_time
    auto currentElement_takeoff_time = (msg + ctr)->takeoff_time;
    outArray[ctr]["takeoff_time"] = factory.createScalar(currentElement_takeoff_time);
    // arming_state
    auto currentElement_arming_state = (msg + ctr)->arming_state;
    outArray[ctr]["arming_state"] = factory.createScalar(currentElement_arming_state);
    // ARMING_STATE_DISARMED
    auto currentElement_ARMING_STATE_DISARMED = (msg + ctr)->ARMING_STATE_DISARMED;
    outArray[ctr]["ARMING_STATE_DISARMED"] = factory.createScalar(currentElement_ARMING_STATE_DISARMED);
    // ARMING_STATE_ARMED
    auto currentElement_ARMING_STATE_ARMED = (msg + ctr)->ARMING_STATE_ARMED;
    outArray[ctr]["ARMING_STATE_ARMED"] = factory.createScalar(currentElement_ARMING_STATE_ARMED);
    // latest_arming_reason
    auto currentElement_latest_arming_reason = (msg + ctr)->latest_arming_reason;
    outArray[ctr]["latest_arming_reason"] = factory.createScalar(currentElement_latest_arming_reason);
    // latest_disarming_reason
    auto currentElement_latest_disarming_reason = (msg + ctr)->latest_disarming_reason;
    outArray[ctr]["latest_disarming_reason"] = factory.createScalar(currentElement_latest_disarming_reason);
    // ARM_DISARM_REASON_TRANSITION_TO_STANDBY
    auto currentElement_ARM_DISARM_REASON_TRANSITION_TO_STANDBY = (msg + ctr)->ARM_DISARM_REASON_TRANSITION_TO_STANDBY;
    outArray[ctr]["ARM_DISARM_REASON_TRANSITION_TO_STANDBY"] = factory.createScalar(currentElement_ARM_DISARM_REASON_TRANSITION_TO_STANDBY);
    // ARM_DISARM_REASON_STICK_GESTURE
    auto currentElement_ARM_DISARM_REASON_STICK_GESTURE = (msg + ctr)->ARM_DISARM_REASON_STICK_GESTURE;
    outArray[ctr]["ARM_DISARM_REASON_STICK_GESTURE"] = factory.createScalar(currentElement_ARM_DISARM_REASON_STICK_GESTURE);
    // ARM_DISARM_REASON_RC_SWITCH
    auto currentElement_ARM_DISARM_REASON_RC_SWITCH = (msg + ctr)->ARM_DISARM_REASON_RC_SWITCH;
    outArray[ctr]["ARM_DISARM_REASON_RC_SWITCH"] = factory.createScalar(currentElement_ARM_DISARM_REASON_RC_SWITCH);
    // ARM_DISARM_REASON_COMMAND_INTERNAL
    auto currentElement_ARM_DISARM_REASON_COMMAND_INTERNAL = (msg + ctr)->ARM_DISARM_REASON_COMMAND_INTERNAL;
    outArray[ctr]["ARM_DISARM_REASON_COMMAND_INTERNAL"] = factory.createScalar(currentElement_ARM_DISARM_REASON_COMMAND_INTERNAL);
    // ARM_DISARM_REASON_COMMAND_EXTERNAL
    auto currentElement_ARM_DISARM_REASON_COMMAND_EXTERNAL = (msg + ctr)->ARM_DISARM_REASON_COMMAND_EXTERNAL;
    outArray[ctr]["ARM_DISARM_REASON_COMMAND_EXTERNAL"] = factory.createScalar(currentElement_ARM_DISARM_REASON_COMMAND_EXTERNAL);
    // ARM_DISARM_REASON_MISSION_START
    auto currentElement_ARM_DISARM_REASON_MISSION_START = (msg + ctr)->ARM_DISARM_REASON_MISSION_START;
    outArray[ctr]["ARM_DISARM_REASON_MISSION_START"] = factory.createScalar(currentElement_ARM_DISARM_REASON_MISSION_START);
    // ARM_DISARM_REASON_SAFETY_BUTTON
    auto currentElement_ARM_DISARM_REASON_SAFETY_BUTTON = (msg + ctr)->ARM_DISARM_REASON_SAFETY_BUTTON;
    outArray[ctr]["ARM_DISARM_REASON_SAFETY_BUTTON"] = factory.createScalar(currentElement_ARM_DISARM_REASON_SAFETY_BUTTON);
    // ARM_DISARM_REASON_AUTO_DISARM_LAND
    auto currentElement_ARM_DISARM_REASON_AUTO_DISARM_LAND = (msg + ctr)->ARM_DISARM_REASON_AUTO_DISARM_LAND;
    outArray[ctr]["ARM_DISARM_REASON_AUTO_DISARM_LAND"] = factory.createScalar(currentElement_ARM_DISARM_REASON_AUTO_DISARM_LAND);
    // ARM_DISARM_REASON_AUTO_DISARM_PREFLIGHT
    auto currentElement_ARM_DISARM_REASON_AUTO_DISARM_PREFLIGHT = (msg + ctr)->ARM_DISARM_REASON_AUTO_DISARM_PREFLIGHT;
    outArray[ctr]["ARM_DISARM_REASON_AUTO_DISARM_PREFLIGHT"] = factory.createScalar(currentElement_ARM_DISARM_REASON_AUTO_DISARM_PREFLIGHT);
    // ARM_DISARM_REASON_KILL_SWITCH
    auto currentElement_ARM_DISARM_REASON_KILL_SWITCH = (msg + ctr)->ARM_DISARM_REASON_KILL_SWITCH;
    outArray[ctr]["ARM_DISARM_REASON_KILL_SWITCH"] = factory.createScalar(currentElement_ARM_DISARM_REASON_KILL_SWITCH);
    // ARM_DISARM_REASON_LOCKDOWN
    auto currentElement_ARM_DISARM_REASON_LOCKDOWN = (msg + ctr)->ARM_DISARM_REASON_LOCKDOWN;
    outArray[ctr]["ARM_DISARM_REASON_LOCKDOWN"] = factory.createScalar(currentElement_ARM_DISARM_REASON_LOCKDOWN);
    // ARM_DISARM_REASON_FAILURE_DETECTOR
    auto currentElement_ARM_DISARM_REASON_FAILURE_DETECTOR = (msg + ctr)->ARM_DISARM_REASON_FAILURE_DETECTOR;
    outArray[ctr]["ARM_DISARM_REASON_FAILURE_DETECTOR"] = factory.createScalar(currentElement_ARM_DISARM_REASON_FAILURE_DETECTOR);
    // ARM_DISARM_REASON_SHUTDOWN
    auto currentElement_ARM_DISARM_REASON_SHUTDOWN = (msg + ctr)->ARM_DISARM_REASON_SHUTDOWN;
    outArray[ctr]["ARM_DISARM_REASON_SHUTDOWN"] = factory.createScalar(currentElement_ARM_DISARM_REASON_SHUTDOWN);
    // ARM_DISARM_REASON_UNIT_TEST
    auto currentElement_ARM_DISARM_REASON_UNIT_TEST = (msg + ctr)->ARM_DISARM_REASON_UNIT_TEST;
    outArray[ctr]["ARM_DISARM_REASON_UNIT_TEST"] = factory.createScalar(currentElement_ARM_DISARM_REASON_UNIT_TEST);
    // nav_state_timestamp
    auto currentElement_nav_state_timestamp = (msg + ctr)->nav_state_timestamp;
    outArray[ctr]["nav_state_timestamp"] = factory.createScalar(currentElement_nav_state_timestamp);
    // nav_state_user_intention
    auto currentElement_nav_state_user_intention = (msg + ctr)->nav_state_user_intention;
    outArray[ctr]["nav_state_user_intention"] = factory.createScalar(currentElement_nav_state_user_intention);
    // nav_state
    auto currentElement_nav_state = (msg + ctr)->nav_state;
    outArray[ctr]["nav_state"] = factory.createScalar(currentElement_nav_state);
    // NAVIGATION_STATE_MANUAL
    auto currentElement_NAVIGATION_STATE_MANUAL = (msg + ctr)->NAVIGATION_STATE_MANUAL;
    outArray[ctr]["NAVIGATION_STATE_MANUAL"] = factory.createScalar(currentElement_NAVIGATION_STATE_MANUAL);
    // NAVIGATION_STATE_ALTCTL
    auto currentElement_NAVIGATION_STATE_ALTCTL = (msg + ctr)->NAVIGATION_STATE_ALTCTL;
    outArray[ctr]["NAVIGATION_STATE_ALTCTL"] = factory.createScalar(currentElement_NAVIGATION_STATE_ALTCTL);
    // NAVIGATION_STATE_POSCTL
    auto currentElement_NAVIGATION_STATE_POSCTL = (msg + ctr)->NAVIGATION_STATE_POSCTL;
    outArray[ctr]["NAVIGATION_STATE_POSCTL"] = factory.createScalar(currentElement_NAVIGATION_STATE_POSCTL);
    // NAVIGATION_STATE_AUTO_MISSION
    auto currentElement_NAVIGATION_STATE_AUTO_MISSION = (msg + ctr)->NAVIGATION_STATE_AUTO_MISSION;
    outArray[ctr]["NAVIGATION_STATE_AUTO_MISSION"] = factory.createScalar(currentElement_NAVIGATION_STATE_AUTO_MISSION);
    // NAVIGATION_STATE_AUTO_LOITER
    auto currentElement_NAVIGATION_STATE_AUTO_LOITER = (msg + ctr)->NAVIGATION_STATE_AUTO_LOITER;
    outArray[ctr]["NAVIGATION_STATE_AUTO_LOITER"] = factory.createScalar(currentElement_NAVIGATION_STATE_AUTO_LOITER);
    // NAVIGATION_STATE_AUTO_RTL
    auto currentElement_NAVIGATION_STATE_AUTO_RTL = (msg + ctr)->NAVIGATION_STATE_AUTO_RTL;
    outArray[ctr]["NAVIGATION_STATE_AUTO_RTL"] = factory.createScalar(currentElement_NAVIGATION_STATE_AUTO_RTL);
    // NAVIGATION_STATE_POSITION_SLOW
    auto currentElement_NAVIGATION_STATE_POSITION_SLOW = (msg + ctr)->NAVIGATION_STATE_POSITION_SLOW;
    outArray[ctr]["NAVIGATION_STATE_POSITION_SLOW"] = factory.createScalar(currentElement_NAVIGATION_STATE_POSITION_SLOW);
    // NAVIGATION_STATE_FREE5
    auto currentElement_NAVIGATION_STATE_FREE5 = (msg + ctr)->NAVIGATION_STATE_FREE5;
    outArray[ctr]["NAVIGATION_STATE_FREE5"] = factory.createScalar(currentElement_NAVIGATION_STATE_FREE5);
    // NAVIGATION_STATE_FREE4
    auto currentElement_NAVIGATION_STATE_FREE4 = (msg + ctr)->NAVIGATION_STATE_FREE4;
    outArray[ctr]["NAVIGATION_STATE_FREE4"] = factory.createScalar(currentElement_NAVIGATION_STATE_FREE4);
    // NAVIGATION_STATE_FREE3
    auto currentElement_NAVIGATION_STATE_FREE3 = (msg + ctr)->NAVIGATION_STATE_FREE3;
    outArray[ctr]["NAVIGATION_STATE_FREE3"] = factory.createScalar(currentElement_NAVIGATION_STATE_FREE3);
    // NAVIGATION_STATE_ACRO
    auto currentElement_NAVIGATION_STATE_ACRO = (msg + ctr)->NAVIGATION_STATE_ACRO;
    outArray[ctr]["NAVIGATION_STATE_ACRO"] = factory.createScalar(currentElement_NAVIGATION_STATE_ACRO);
    // NAVIGATION_STATE_FREE2
    auto currentElement_NAVIGATION_STATE_FREE2 = (msg + ctr)->NAVIGATION_STATE_FREE2;
    outArray[ctr]["NAVIGATION_STATE_FREE2"] = factory.createScalar(currentElement_NAVIGATION_STATE_FREE2);
    // NAVIGATION_STATE_DESCEND
    auto currentElement_NAVIGATION_STATE_DESCEND = (msg + ctr)->NAVIGATION_STATE_DESCEND;
    outArray[ctr]["NAVIGATION_STATE_DESCEND"] = factory.createScalar(currentElement_NAVIGATION_STATE_DESCEND);
    // NAVIGATION_STATE_TERMINATION
    auto currentElement_NAVIGATION_STATE_TERMINATION = (msg + ctr)->NAVIGATION_STATE_TERMINATION;
    outArray[ctr]["NAVIGATION_STATE_TERMINATION"] = factory.createScalar(currentElement_NAVIGATION_STATE_TERMINATION);
    // NAVIGATION_STATE_OFFBOARD
    auto currentElement_NAVIGATION_STATE_OFFBOARD = (msg + ctr)->NAVIGATION_STATE_OFFBOARD;
    outArray[ctr]["NAVIGATION_STATE_OFFBOARD"] = factory.createScalar(currentElement_NAVIGATION_STATE_OFFBOARD);
    // NAVIGATION_STATE_STAB
    auto currentElement_NAVIGATION_STATE_STAB = (msg + ctr)->NAVIGATION_STATE_STAB;
    outArray[ctr]["NAVIGATION_STATE_STAB"] = factory.createScalar(currentElement_NAVIGATION_STATE_STAB);
    // NAVIGATION_STATE_FREE1
    auto currentElement_NAVIGATION_STATE_FREE1 = (msg + ctr)->NAVIGATION_STATE_FREE1;
    outArray[ctr]["NAVIGATION_STATE_FREE1"] = factory.createScalar(currentElement_NAVIGATION_STATE_FREE1);
    // NAVIGATION_STATE_AUTO_TAKEOFF
    auto currentElement_NAVIGATION_STATE_AUTO_TAKEOFF = (msg + ctr)->NAVIGATION_STATE_AUTO_TAKEOFF;
    outArray[ctr]["NAVIGATION_STATE_AUTO_TAKEOFF"] = factory.createScalar(currentElement_NAVIGATION_STATE_AUTO_TAKEOFF);
    // NAVIGATION_STATE_AUTO_LAND
    auto currentElement_NAVIGATION_STATE_AUTO_LAND = (msg + ctr)->NAVIGATION_STATE_AUTO_LAND;
    outArray[ctr]["NAVIGATION_STATE_AUTO_LAND"] = factory.createScalar(currentElement_NAVIGATION_STATE_AUTO_LAND);
    // NAVIGATION_STATE_AUTO_FOLLOW_TARGET
    auto currentElement_NAVIGATION_STATE_AUTO_FOLLOW_TARGET = (msg + ctr)->NAVIGATION_STATE_AUTO_FOLLOW_TARGET;
    outArray[ctr]["NAVIGATION_STATE_AUTO_FOLLOW_TARGET"] = factory.createScalar(currentElement_NAVIGATION_STATE_AUTO_FOLLOW_TARGET);
    // NAVIGATION_STATE_AUTO_PRECLAND
    auto currentElement_NAVIGATION_STATE_AUTO_PRECLAND = (msg + ctr)->NAVIGATION_STATE_AUTO_PRECLAND;
    outArray[ctr]["NAVIGATION_STATE_AUTO_PRECLAND"] = factory.createScalar(currentElement_NAVIGATION_STATE_AUTO_PRECLAND);
    // NAVIGATION_STATE_ORBIT
    auto currentElement_NAVIGATION_STATE_ORBIT = (msg + ctr)->NAVIGATION_STATE_ORBIT;
    outArray[ctr]["NAVIGATION_STATE_ORBIT"] = factory.createScalar(currentElement_NAVIGATION_STATE_ORBIT);
    // NAVIGATION_STATE_AUTO_VTOL_TAKEOFF
    auto currentElement_NAVIGATION_STATE_AUTO_VTOL_TAKEOFF = (msg + ctr)->NAVIGATION_STATE_AUTO_VTOL_TAKEOFF;
    outArray[ctr]["NAVIGATION_STATE_AUTO_VTOL_TAKEOFF"] = factory.createScalar(currentElement_NAVIGATION_STATE_AUTO_VTOL_TAKEOFF);
    // NAVIGATION_STATE_EXTERNAL1
    auto currentElement_NAVIGATION_STATE_EXTERNAL1 = (msg + ctr)->NAVIGATION_STATE_EXTERNAL1;
    outArray[ctr]["NAVIGATION_STATE_EXTERNAL1"] = factory.createScalar(currentElement_NAVIGATION_STATE_EXTERNAL1);
    // NAVIGATION_STATE_EXTERNAL2
    auto currentElement_NAVIGATION_STATE_EXTERNAL2 = (msg + ctr)->NAVIGATION_STATE_EXTERNAL2;
    outArray[ctr]["NAVIGATION_STATE_EXTERNAL2"] = factory.createScalar(currentElement_NAVIGATION_STATE_EXTERNAL2);
    // NAVIGATION_STATE_EXTERNAL3
    auto currentElement_NAVIGATION_STATE_EXTERNAL3 = (msg + ctr)->NAVIGATION_STATE_EXTERNAL3;
    outArray[ctr]["NAVIGATION_STATE_EXTERNAL3"] = factory.createScalar(currentElement_NAVIGATION_STATE_EXTERNAL3);
    // NAVIGATION_STATE_EXTERNAL4
    auto currentElement_NAVIGATION_STATE_EXTERNAL4 = (msg + ctr)->NAVIGATION_STATE_EXTERNAL4;
    outArray[ctr]["NAVIGATION_STATE_EXTERNAL4"] = factory.createScalar(currentElement_NAVIGATION_STATE_EXTERNAL4);
    // NAVIGATION_STATE_EXTERNAL5
    auto currentElement_NAVIGATION_STATE_EXTERNAL5 = (msg + ctr)->NAVIGATION_STATE_EXTERNAL5;
    outArray[ctr]["NAVIGATION_STATE_EXTERNAL5"] = factory.createScalar(currentElement_NAVIGATION_STATE_EXTERNAL5);
    // NAVIGATION_STATE_EXTERNAL6
    auto currentElement_NAVIGATION_STATE_EXTERNAL6 = (msg + ctr)->NAVIGATION_STATE_EXTERNAL6;
    outArray[ctr]["NAVIGATION_STATE_EXTERNAL6"] = factory.createScalar(currentElement_NAVIGATION_STATE_EXTERNAL6);
    // NAVIGATION_STATE_EXTERNAL7
    auto currentElement_NAVIGATION_STATE_EXTERNAL7 = (msg + ctr)->NAVIGATION_STATE_EXTERNAL7;
    outArray[ctr]["NAVIGATION_STATE_EXTERNAL7"] = factory.createScalar(currentElement_NAVIGATION_STATE_EXTERNAL7);
    // NAVIGATION_STATE_EXTERNAL8
    auto currentElement_NAVIGATION_STATE_EXTERNAL8 = (msg + ctr)->NAVIGATION_STATE_EXTERNAL8;
    outArray[ctr]["NAVIGATION_STATE_EXTERNAL8"] = factory.createScalar(currentElement_NAVIGATION_STATE_EXTERNAL8);
    // NAVIGATION_STATE_MAX
    auto currentElement_NAVIGATION_STATE_MAX = (msg + ctr)->NAVIGATION_STATE_MAX;
    outArray[ctr]["NAVIGATION_STATE_MAX"] = factory.createScalar(currentElement_NAVIGATION_STATE_MAX);
    // executor_in_charge
    auto currentElement_executor_in_charge = (msg + ctr)->executor_in_charge;
    outArray[ctr]["executor_in_charge"] = factory.createScalar(currentElement_executor_in_charge);
    // valid_nav_states_mask
    auto currentElement_valid_nav_states_mask = (msg + ctr)->valid_nav_states_mask;
    outArray[ctr]["valid_nav_states_mask"] = factory.createScalar(currentElement_valid_nav_states_mask);
    // can_set_nav_states_mask
    auto currentElement_can_set_nav_states_mask = (msg + ctr)->can_set_nav_states_mask;
    outArray[ctr]["can_set_nav_states_mask"] = factory.createScalar(currentElement_can_set_nav_states_mask);
    // failure_detector_status
    auto currentElement_failure_detector_status = (msg + ctr)->failure_detector_status;
    outArray[ctr]["failure_detector_status"] = factory.createScalar(currentElement_failure_detector_status);
    // FAILURE_NONE
    auto currentElement_FAILURE_NONE = (msg + ctr)->FAILURE_NONE;
    outArray[ctr]["FAILURE_NONE"] = factory.createScalar(currentElement_FAILURE_NONE);
    // FAILURE_ROLL
    auto currentElement_FAILURE_ROLL = (msg + ctr)->FAILURE_ROLL;
    outArray[ctr]["FAILURE_ROLL"] = factory.createScalar(currentElement_FAILURE_ROLL);
    // FAILURE_PITCH
    auto currentElement_FAILURE_PITCH = (msg + ctr)->FAILURE_PITCH;
    outArray[ctr]["FAILURE_PITCH"] = factory.createScalar(currentElement_FAILURE_PITCH);
    // FAILURE_ALT
    auto currentElement_FAILURE_ALT = (msg + ctr)->FAILURE_ALT;
    outArray[ctr]["FAILURE_ALT"] = factory.createScalar(currentElement_FAILURE_ALT);
    // FAILURE_EXT
    auto currentElement_FAILURE_EXT = (msg + ctr)->FAILURE_EXT;
    outArray[ctr]["FAILURE_EXT"] = factory.createScalar(currentElement_FAILURE_EXT);
    // FAILURE_ARM_ESC
    auto currentElement_FAILURE_ARM_ESC = (msg + ctr)->FAILURE_ARM_ESC;
    outArray[ctr]["FAILURE_ARM_ESC"] = factory.createScalar(currentElement_FAILURE_ARM_ESC);
    // FAILURE_BATTERY
    auto currentElement_FAILURE_BATTERY = (msg + ctr)->FAILURE_BATTERY;
    outArray[ctr]["FAILURE_BATTERY"] = factory.createScalar(currentElement_FAILURE_BATTERY);
    // FAILURE_IMBALANCED_PROP
    auto currentElement_FAILURE_IMBALANCED_PROP = (msg + ctr)->FAILURE_IMBALANCED_PROP;
    outArray[ctr]["FAILURE_IMBALANCED_PROP"] = factory.createScalar(currentElement_FAILURE_IMBALANCED_PROP);
    // FAILURE_MOTOR
    auto currentElement_FAILURE_MOTOR = (msg + ctr)->FAILURE_MOTOR;
    outArray[ctr]["FAILURE_MOTOR"] = factory.createScalar(currentElement_FAILURE_MOTOR);
    // hil_state
    auto currentElement_hil_state = (msg + ctr)->hil_state;
    outArray[ctr]["hil_state"] = factory.createScalar(currentElement_hil_state);
    // HIL_STATE_OFF
    auto currentElement_HIL_STATE_OFF = (msg + ctr)->HIL_STATE_OFF;
    outArray[ctr]["HIL_STATE_OFF"] = factory.createScalar(currentElement_HIL_STATE_OFF);
    // HIL_STATE_ON
    auto currentElement_HIL_STATE_ON = (msg + ctr)->HIL_STATE_ON;
    outArray[ctr]["HIL_STATE_ON"] = factory.createScalar(currentElement_HIL_STATE_ON);
    // vehicle_type
    auto currentElement_vehicle_type = (msg + ctr)->vehicle_type;
    outArray[ctr]["vehicle_type"] = factory.createScalar(currentElement_vehicle_type);
    // VEHICLE_TYPE_UNKNOWN
    auto currentElement_VEHICLE_TYPE_UNKNOWN = (msg + ctr)->VEHICLE_TYPE_UNKNOWN;
    outArray[ctr]["VEHICLE_TYPE_UNKNOWN"] = factory.createScalar(currentElement_VEHICLE_TYPE_UNKNOWN);
    // VEHICLE_TYPE_ROTARY_WING
    auto currentElement_VEHICLE_TYPE_ROTARY_WING = (msg + ctr)->VEHICLE_TYPE_ROTARY_WING;
    outArray[ctr]["VEHICLE_TYPE_ROTARY_WING"] = factory.createScalar(currentElement_VEHICLE_TYPE_ROTARY_WING);
    // VEHICLE_TYPE_FIXED_WING
    auto currentElement_VEHICLE_TYPE_FIXED_WING = (msg + ctr)->VEHICLE_TYPE_FIXED_WING;
    outArray[ctr]["VEHICLE_TYPE_FIXED_WING"] = factory.createScalar(currentElement_VEHICLE_TYPE_FIXED_WING);
    // VEHICLE_TYPE_ROVER
    auto currentElement_VEHICLE_TYPE_ROVER = (msg + ctr)->VEHICLE_TYPE_ROVER;
    outArray[ctr]["VEHICLE_TYPE_ROVER"] = factory.createScalar(currentElement_VEHICLE_TYPE_ROVER);
    // VEHICLE_TYPE_AIRSHIP
    auto currentElement_VEHICLE_TYPE_AIRSHIP = (msg + ctr)->VEHICLE_TYPE_AIRSHIP;
    outArray[ctr]["VEHICLE_TYPE_AIRSHIP"] = factory.createScalar(currentElement_VEHICLE_TYPE_AIRSHIP);
    // FAILSAFE_DEFER_STATE_DISABLED
    auto currentElement_FAILSAFE_DEFER_STATE_DISABLED = (msg + ctr)->FAILSAFE_DEFER_STATE_DISABLED;
    outArray[ctr]["FAILSAFE_DEFER_STATE_DISABLED"] = factory.createScalar(currentElement_FAILSAFE_DEFER_STATE_DISABLED);
    // FAILSAFE_DEFER_STATE_ENABLED
    auto currentElement_FAILSAFE_DEFER_STATE_ENABLED = (msg + ctr)->FAILSAFE_DEFER_STATE_ENABLED;
    outArray[ctr]["FAILSAFE_DEFER_STATE_ENABLED"] = factory.createScalar(currentElement_FAILSAFE_DEFER_STATE_ENABLED);
    // FAILSAFE_DEFER_STATE_WOULD_FAILSAFE
    auto currentElement_FAILSAFE_DEFER_STATE_WOULD_FAILSAFE = (msg + ctr)->FAILSAFE_DEFER_STATE_WOULD_FAILSAFE;
    outArray[ctr]["FAILSAFE_DEFER_STATE_WOULD_FAILSAFE"] = factory.createScalar(currentElement_FAILSAFE_DEFER_STATE_WOULD_FAILSAFE);
    // failsafe
    auto currentElement_failsafe = (msg + ctr)->failsafe;
    outArray[ctr]["failsafe"] = factory.createScalar(currentElement_failsafe);
    // failsafe_and_user_took_over
    auto currentElement_failsafe_and_user_took_over = (msg + ctr)->failsafe_and_user_took_over;
    outArray[ctr]["failsafe_and_user_took_over"] = factory.createScalar(currentElement_failsafe_and_user_took_over);
    // failsafe_defer_state
    auto currentElement_failsafe_defer_state = (msg + ctr)->failsafe_defer_state;
    outArray[ctr]["failsafe_defer_state"] = factory.createScalar(currentElement_failsafe_defer_state);
    // gcs_connection_lost
    auto currentElement_gcs_connection_lost = (msg + ctr)->gcs_connection_lost;
    outArray[ctr]["gcs_connection_lost"] = factory.createScalar(currentElement_gcs_connection_lost);
    // gcs_connection_lost_counter
    auto currentElement_gcs_connection_lost_counter = (msg + ctr)->gcs_connection_lost_counter;
    outArray[ctr]["gcs_connection_lost_counter"] = factory.createScalar(currentElement_gcs_connection_lost_counter);
    // high_latency_data_link_lost
    auto currentElement_high_latency_data_link_lost = (msg + ctr)->high_latency_data_link_lost;
    outArray[ctr]["high_latency_data_link_lost"] = factory.createScalar(currentElement_high_latency_data_link_lost);
    // is_vtol
    auto currentElement_is_vtol = (msg + ctr)->is_vtol;
    outArray[ctr]["is_vtol"] = factory.createScalar(currentElement_is_vtol);
    // is_vtol_tailsitter
    auto currentElement_is_vtol_tailsitter = (msg + ctr)->is_vtol_tailsitter;
    outArray[ctr]["is_vtol_tailsitter"] = factory.createScalar(currentElement_is_vtol_tailsitter);
    // in_transition_mode
    auto currentElement_in_transition_mode = (msg + ctr)->in_transition_mode;
    outArray[ctr]["in_transition_mode"] = factory.createScalar(currentElement_in_transition_mode);
    // in_transition_to_fw
    auto currentElement_in_transition_to_fw = (msg + ctr)->in_transition_to_fw;
    outArray[ctr]["in_transition_to_fw"] = factory.createScalar(currentElement_in_transition_to_fw);
    // system_type
    auto currentElement_system_type = (msg + ctr)->system_type;
    outArray[ctr]["system_type"] = factory.createScalar(currentElement_system_type);
    // system_id
    auto currentElement_system_id = (msg + ctr)->system_id;
    outArray[ctr]["system_id"] = factory.createScalar(currentElement_system_id);
    // component_id
    auto currentElement_component_id = (msg + ctr)->component_id;
    outArray[ctr]["component_id"] = factory.createScalar(currentElement_component_id);
    // safety_button_available
    auto currentElement_safety_button_available = (msg + ctr)->safety_button_available;
    outArray[ctr]["safety_button_available"] = factory.createScalar(currentElement_safety_button_available);
    // safety_off
    auto currentElement_safety_off = (msg + ctr)->safety_off;
    outArray[ctr]["safety_off"] = factory.createScalar(currentElement_safety_off);
    // power_input_valid
    auto currentElement_power_input_valid = (msg + ctr)->power_input_valid;
    outArray[ctr]["power_input_valid"] = factory.createScalar(currentElement_power_input_valid);
    // usb_connected
    auto currentElement_usb_connected = (msg + ctr)->usb_connected;
    outArray[ctr]["usb_connected"] = factory.createScalar(currentElement_usb_connected);
    // open_drone_id_system_present
    auto currentElement_open_drone_id_system_present = (msg + ctr)->open_drone_id_system_present;
    outArray[ctr]["open_drone_id_system_present"] = factory.createScalar(currentElement_open_drone_id_system_present);
    // open_drone_id_system_healthy
    auto currentElement_open_drone_id_system_healthy = (msg + ctr)->open_drone_id_system_healthy;
    outArray[ctr]["open_drone_id_system_healthy"] = factory.createScalar(currentElement_open_drone_id_system_healthy);
    // parachute_system_present
    auto currentElement_parachute_system_present = (msg + ctr)->parachute_system_present;
    outArray[ctr]["parachute_system_present"] = factory.createScalar(currentElement_parachute_system_present);
    // parachute_system_healthy
    auto currentElement_parachute_system_healthy = (msg + ctr)->parachute_system_healthy;
    outArray[ctr]["parachute_system_healthy"] = factory.createScalar(currentElement_parachute_system_healthy);
    // avoidance_system_required
    auto currentElement_avoidance_system_required = (msg + ctr)->avoidance_system_required;
    outArray[ctr]["avoidance_system_required"] = factory.createScalar(currentElement_avoidance_system_required);
    // avoidance_system_valid
    auto currentElement_avoidance_system_valid = (msg + ctr)->avoidance_system_valid;
    outArray[ctr]["avoidance_system_valid"] = factory.createScalar(currentElement_avoidance_system_valid);
    // rc_calibration_in_progress
    auto currentElement_rc_calibration_in_progress = (msg + ctr)->rc_calibration_in_progress;
    outArray[ctr]["rc_calibration_in_progress"] = factory.createScalar(currentElement_rc_calibration_in_progress);
    // calibration_enabled
    auto currentElement_calibration_enabled = (msg + ctr)->calibration_enabled;
    outArray[ctr]["calibration_enabled"] = factory.createScalar(currentElement_calibration_enabled);
    // pre_flight_checks_pass
    auto currentElement_pre_flight_checks_pass = (msg + ctr)->pre_flight_checks_pass;
    outArray[ctr]["pre_flight_checks_pass"] = factory.createScalar(currentElement_pre_flight_checks_pass);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_VehicleStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_VehicleStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_VehicleStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::VehicleStatus,ros2_px4_msgs_msg_VehicleStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_VehicleStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::VehicleStatus,ros2_px4_msgs_msg_VehicleStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_VehicleStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::VehicleStatus>();
    ros2_px4_msgs_msg_VehicleStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_VehicleStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_VehicleStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::VehicleStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_VehicleStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::VehicleStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_VehicleStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER