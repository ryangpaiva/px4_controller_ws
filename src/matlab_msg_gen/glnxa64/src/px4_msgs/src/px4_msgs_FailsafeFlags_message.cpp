// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/FailsafeFlags
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
#include "px4_msgs/msg/failsafe_flags.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_FailsafeFlags_common : public MATLABROS2MsgInterface<px4_msgs::msg::FailsafeFlags> {
  public:
    virtual ~ros2_px4_msgs_msg_FailsafeFlags_common(){}
    virtual void copy_from_struct(px4_msgs::msg::FailsafeFlags* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::FailsafeFlags* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_FailsafeFlags_common::copy_from_struct(px4_msgs::msg::FailsafeFlags* msg, const matlab::data::Struct& arr,
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
        //mode_req_angular_velocity
        const matlab::data::TypedArray<uint32_t> mode_req_angular_velocity_arr = arr["mode_req_angular_velocity"];
        msg->mode_req_angular_velocity = mode_req_angular_velocity_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_req_angular_velocity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_req_angular_velocity' is wrong type; expected a uint32.");
    }
    try {
        //mode_req_attitude
        const matlab::data::TypedArray<uint32_t> mode_req_attitude_arr = arr["mode_req_attitude"];
        msg->mode_req_attitude = mode_req_attitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_req_attitude' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_req_attitude' is wrong type; expected a uint32.");
    }
    try {
        //mode_req_local_alt
        const matlab::data::TypedArray<uint32_t> mode_req_local_alt_arr = arr["mode_req_local_alt"];
        msg->mode_req_local_alt = mode_req_local_alt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_req_local_alt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_req_local_alt' is wrong type; expected a uint32.");
    }
    try {
        //mode_req_local_position
        const matlab::data::TypedArray<uint32_t> mode_req_local_position_arr = arr["mode_req_local_position"];
        msg->mode_req_local_position = mode_req_local_position_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_req_local_position' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_req_local_position' is wrong type; expected a uint32.");
    }
    try {
        //mode_req_local_position_relaxed
        const matlab::data::TypedArray<uint32_t> mode_req_local_position_relaxed_arr = arr["mode_req_local_position_relaxed"];
        msg->mode_req_local_position_relaxed = mode_req_local_position_relaxed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_req_local_position_relaxed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_req_local_position_relaxed' is wrong type; expected a uint32.");
    }
    try {
        //mode_req_global_position
        const matlab::data::TypedArray<uint32_t> mode_req_global_position_arr = arr["mode_req_global_position"];
        msg->mode_req_global_position = mode_req_global_position_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_req_global_position' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_req_global_position' is wrong type; expected a uint32.");
    }
    try {
        //mode_req_mission
        const matlab::data::TypedArray<uint32_t> mode_req_mission_arr = arr["mode_req_mission"];
        msg->mode_req_mission = mode_req_mission_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_req_mission' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_req_mission' is wrong type; expected a uint32.");
    }
    try {
        //mode_req_offboard_signal
        const matlab::data::TypedArray<uint32_t> mode_req_offboard_signal_arr = arr["mode_req_offboard_signal"];
        msg->mode_req_offboard_signal = mode_req_offboard_signal_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_req_offboard_signal' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_req_offboard_signal' is wrong type; expected a uint32.");
    }
    try {
        //mode_req_home_position
        const matlab::data::TypedArray<uint32_t> mode_req_home_position_arr = arr["mode_req_home_position"];
        msg->mode_req_home_position = mode_req_home_position_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_req_home_position' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_req_home_position' is wrong type; expected a uint32.");
    }
    try {
        //mode_req_wind_and_flight_time_compliance
        const matlab::data::TypedArray<uint32_t> mode_req_wind_and_flight_time_compliance_arr = arr["mode_req_wind_and_flight_time_compliance"];
        msg->mode_req_wind_and_flight_time_compliance = mode_req_wind_and_flight_time_compliance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_req_wind_and_flight_time_compliance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_req_wind_and_flight_time_compliance' is wrong type; expected a uint32.");
    }
    try {
        //mode_req_prevent_arming
        const matlab::data::TypedArray<uint32_t> mode_req_prevent_arming_arr = arr["mode_req_prevent_arming"];
        msg->mode_req_prevent_arming = mode_req_prevent_arming_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_req_prevent_arming' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_req_prevent_arming' is wrong type; expected a uint32.");
    }
    try {
        //mode_req_manual_control
        const matlab::data::TypedArray<uint32_t> mode_req_manual_control_arr = arr["mode_req_manual_control"];
        msg->mode_req_manual_control = mode_req_manual_control_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_req_manual_control' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_req_manual_control' is wrong type; expected a uint32.");
    }
    try {
        //mode_req_other
        const matlab::data::TypedArray<uint32_t> mode_req_other_arr = arr["mode_req_other"];
        msg->mode_req_other = mode_req_other_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_req_other' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_req_other' is wrong type; expected a uint32.");
    }
    try {
        //angular_velocity_invalid
        const matlab::data::TypedArray<bool> angular_velocity_invalid_arr = arr["angular_velocity_invalid"];
        msg->angular_velocity_invalid = angular_velocity_invalid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'angular_velocity_invalid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'angular_velocity_invalid' is wrong type; expected a logical.");
    }
    try {
        //attitude_invalid
        const matlab::data::TypedArray<bool> attitude_invalid_arr = arr["attitude_invalid"];
        msg->attitude_invalid = attitude_invalid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'attitude_invalid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'attitude_invalid' is wrong type; expected a logical.");
    }
    try {
        //local_altitude_invalid
        const matlab::data::TypedArray<bool> local_altitude_invalid_arr = arr["local_altitude_invalid"];
        msg->local_altitude_invalid = local_altitude_invalid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'local_altitude_invalid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'local_altitude_invalid' is wrong type; expected a logical.");
    }
    try {
        //local_position_invalid
        const matlab::data::TypedArray<bool> local_position_invalid_arr = arr["local_position_invalid"];
        msg->local_position_invalid = local_position_invalid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'local_position_invalid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'local_position_invalid' is wrong type; expected a logical.");
    }
    try {
        //local_position_invalid_relaxed
        const matlab::data::TypedArray<bool> local_position_invalid_relaxed_arr = arr["local_position_invalid_relaxed"];
        msg->local_position_invalid_relaxed = local_position_invalid_relaxed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'local_position_invalid_relaxed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'local_position_invalid_relaxed' is wrong type; expected a logical.");
    }
    try {
        //local_velocity_invalid
        const matlab::data::TypedArray<bool> local_velocity_invalid_arr = arr["local_velocity_invalid"];
        msg->local_velocity_invalid = local_velocity_invalid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'local_velocity_invalid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'local_velocity_invalid' is wrong type; expected a logical.");
    }
    try {
        //global_position_invalid
        const matlab::data::TypedArray<bool> global_position_invalid_arr = arr["global_position_invalid"];
        msg->global_position_invalid = global_position_invalid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'global_position_invalid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'global_position_invalid' is wrong type; expected a logical.");
    }
    try {
        //auto_mission_missing
        const matlab::data::TypedArray<bool> auto_mission_missing_arr = arr["auto_mission_missing"];
        msg->auto_mission_missing = auto_mission_missing_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'auto_mission_missing' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'auto_mission_missing' is wrong type; expected a logical.");
    }
    try {
        //offboard_control_signal_lost
        const matlab::data::TypedArray<bool> offboard_control_signal_lost_arr = arr["offboard_control_signal_lost"];
        msg->offboard_control_signal_lost = offboard_control_signal_lost_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'offboard_control_signal_lost' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'offboard_control_signal_lost' is wrong type; expected a logical.");
    }
    try {
        //home_position_invalid
        const matlab::data::TypedArray<bool> home_position_invalid_arr = arr["home_position_invalid"];
        msg->home_position_invalid = home_position_invalid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'home_position_invalid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'home_position_invalid' is wrong type; expected a logical.");
    }
    try {
        //manual_control_signal_lost
        const matlab::data::TypedArray<bool> manual_control_signal_lost_arr = arr["manual_control_signal_lost"];
        msg->manual_control_signal_lost = manual_control_signal_lost_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'manual_control_signal_lost' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'manual_control_signal_lost' is wrong type; expected a logical.");
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
        //battery_warning
        const matlab::data::TypedArray<uint8_t> battery_warning_arr = arr["battery_warning"];
        msg->battery_warning = battery_warning_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'battery_warning' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'battery_warning' is wrong type; expected a uint8.");
    }
    try {
        //battery_low_remaining_time
        const matlab::data::TypedArray<bool> battery_low_remaining_time_arr = arr["battery_low_remaining_time"];
        msg->battery_low_remaining_time = battery_low_remaining_time_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'battery_low_remaining_time' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'battery_low_remaining_time' is wrong type; expected a logical.");
    }
    try {
        //battery_unhealthy
        const matlab::data::TypedArray<bool> battery_unhealthy_arr = arr["battery_unhealthy"];
        msg->battery_unhealthy = battery_unhealthy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'battery_unhealthy' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'battery_unhealthy' is wrong type; expected a logical.");
    }
    try {
        //geofence_breached
        const matlab::data::TypedArray<bool> geofence_breached_arr = arr["geofence_breached"];
        msg->geofence_breached = geofence_breached_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'geofence_breached' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'geofence_breached' is wrong type; expected a logical.");
    }
    try {
        //mission_failure
        const matlab::data::TypedArray<bool> mission_failure_arr = arr["mission_failure"];
        msg->mission_failure = mission_failure_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mission_failure' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mission_failure' is wrong type; expected a logical.");
    }
    try {
        //vtol_fixed_wing_system_failure
        const matlab::data::TypedArray<bool> vtol_fixed_wing_system_failure_arr = arr["vtol_fixed_wing_system_failure"];
        msg->vtol_fixed_wing_system_failure = vtol_fixed_wing_system_failure_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vtol_fixed_wing_system_failure' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vtol_fixed_wing_system_failure' is wrong type; expected a logical.");
    }
    try {
        //wind_limit_exceeded
        const matlab::data::TypedArray<bool> wind_limit_exceeded_arr = arr["wind_limit_exceeded"];
        msg->wind_limit_exceeded = wind_limit_exceeded_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'wind_limit_exceeded' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'wind_limit_exceeded' is wrong type; expected a logical.");
    }
    try {
        //flight_time_limit_exceeded
        const matlab::data::TypedArray<bool> flight_time_limit_exceeded_arr = arr["flight_time_limit_exceeded"];
        msg->flight_time_limit_exceeded = flight_time_limit_exceeded_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flight_time_limit_exceeded' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flight_time_limit_exceeded' is wrong type; expected a logical.");
    }
    try {
        //local_position_accuracy_low
        const matlab::data::TypedArray<bool> local_position_accuracy_low_arr = arr["local_position_accuracy_low"];
        msg->local_position_accuracy_low = local_position_accuracy_low_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'local_position_accuracy_low' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'local_position_accuracy_low' is wrong type; expected a logical.");
    }
    try {
        //navigator_failure
        const matlab::data::TypedArray<bool> navigator_failure_arr = arr["navigator_failure"];
        msg->navigator_failure = navigator_failure_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'navigator_failure' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'navigator_failure' is wrong type; expected a logical.");
    }
    try {
        //fd_critical_failure
        const matlab::data::TypedArray<bool> fd_critical_failure_arr = arr["fd_critical_failure"];
        msg->fd_critical_failure = fd_critical_failure_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fd_critical_failure' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fd_critical_failure' is wrong type; expected a logical.");
    }
    try {
        //fd_esc_arming_failure
        const matlab::data::TypedArray<bool> fd_esc_arming_failure_arr = arr["fd_esc_arming_failure"];
        msg->fd_esc_arming_failure = fd_esc_arming_failure_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fd_esc_arming_failure' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fd_esc_arming_failure' is wrong type; expected a logical.");
    }
    try {
        //fd_imbalanced_prop
        const matlab::data::TypedArray<bool> fd_imbalanced_prop_arr = arr["fd_imbalanced_prop"];
        msg->fd_imbalanced_prop = fd_imbalanced_prop_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fd_imbalanced_prop' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fd_imbalanced_prop' is wrong type; expected a logical.");
    }
    try {
        //fd_motor_failure
        const matlab::data::TypedArray<bool> fd_motor_failure_arr = arr["fd_motor_failure"];
        msg->fd_motor_failure = fd_motor_failure_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fd_motor_failure' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fd_motor_failure' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_FailsafeFlags_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::FailsafeFlags* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","mode_req_angular_velocity","mode_req_attitude","mode_req_local_alt","mode_req_local_position","mode_req_local_position_relaxed","mode_req_global_position","mode_req_mission","mode_req_offboard_signal","mode_req_home_position","mode_req_wind_and_flight_time_compliance","mode_req_prevent_arming","mode_req_manual_control","mode_req_other","angular_velocity_invalid","attitude_invalid","local_altitude_invalid","local_position_invalid","local_position_invalid_relaxed","local_velocity_invalid","global_position_invalid","auto_mission_missing","offboard_control_signal_lost","home_position_invalid","manual_control_signal_lost","gcs_connection_lost","battery_warning","battery_low_remaining_time","battery_unhealthy","geofence_breached","mission_failure","vtol_fixed_wing_system_failure","wind_limit_exceeded","flight_time_limit_exceeded","local_position_accuracy_low","navigator_failure","fd_critical_failure","fd_esc_arming_failure","fd_imbalanced_prop","fd_motor_failure"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/FailsafeFlags");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // mode_req_angular_velocity
    auto currentElement_mode_req_angular_velocity = (msg + ctr)->mode_req_angular_velocity;
    outArray[ctr]["mode_req_angular_velocity"] = factory.createScalar(currentElement_mode_req_angular_velocity);
    // mode_req_attitude
    auto currentElement_mode_req_attitude = (msg + ctr)->mode_req_attitude;
    outArray[ctr]["mode_req_attitude"] = factory.createScalar(currentElement_mode_req_attitude);
    // mode_req_local_alt
    auto currentElement_mode_req_local_alt = (msg + ctr)->mode_req_local_alt;
    outArray[ctr]["mode_req_local_alt"] = factory.createScalar(currentElement_mode_req_local_alt);
    // mode_req_local_position
    auto currentElement_mode_req_local_position = (msg + ctr)->mode_req_local_position;
    outArray[ctr]["mode_req_local_position"] = factory.createScalar(currentElement_mode_req_local_position);
    // mode_req_local_position_relaxed
    auto currentElement_mode_req_local_position_relaxed = (msg + ctr)->mode_req_local_position_relaxed;
    outArray[ctr]["mode_req_local_position_relaxed"] = factory.createScalar(currentElement_mode_req_local_position_relaxed);
    // mode_req_global_position
    auto currentElement_mode_req_global_position = (msg + ctr)->mode_req_global_position;
    outArray[ctr]["mode_req_global_position"] = factory.createScalar(currentElement_mode_req_global_position);
    // mode_req_mission
    auto currentElement_mode_req_mission = (msg + ctr)->mode_req_mission;
    outArray[ctr]["mode_req_mission"] = factory.createScalar(currentElement_mode_req_mission);
    // mode_req_offboard_signal
    auto currentElement_mode_req_offboard_signal = (msg + ctr)->mode_req_offboard_signal;
    outArray[ctr]["mode_req_offboard_signal"] = factory.createScalar(currentElement_mode_req_offboard_signal);
    // mode_req_home_position
    auto currentElement_mode_req_home_position = (msg + ctr)->mode_req_home_position;
    outArray[ctr]["mode_req_home_position"] = factory.createScalar(currentElement_mode_req_home_position);
    // mode_req_wind_and_flight_time_compliance
    auto currentElement_mode_req_wind_and_flight_time_compliance = (msg + ctr)->mode_req_wind_and_flight_time_compliance;
    outArray[ctr]["mode_req_wind_and_flight_time_compliance"] = factory.createScalar(currentElement_mode_req_wind_and_flight_time_compliance);
    // mode_req_prevent_arming
    auto currentElement_mode_req_prevent_arming = (msg + ctr)->mode_req_prevent_arming;
    outArray[ctr]["mode_req_prevent_arming"] = factory.createScalar(currentElement_mode_req_prevent_arming);
    // mode_req_manual_control
    auto currentElement_mode_req_manual_control = (msg + ctr)->mode_req_manual_control;
    outArray[ctr]["mode_req_manual_control"] = factory.createScalar(currentElement_mode_req_manual_control);
    // mode_req_other
    auto currentElement_mode_req_other = (msg + ctr)->mode_req_other;
    outArray[ctr]["mode_req_other"] = factory.createScalar(currentElement_mode_req_other);
    // angular_velocity_invalid
    auto currentElement_angular_velocity_invalid = (msg + ctr)->angular_velocity_invalid;
    outArray[ctr]["angular_velocity_invalid"] = factory.createScalar(currentElement_angular_velocity_invalid);
    // attitude_invalid
    auto currentElement_attitude_invalid = (msg + ctr)->attitude_invalid;
    outArray[ctr]["attitude_invalid"] = factory.createScalar(currentElement_attitude_invalid);
    // local_altitude_invalid
    auto currentElement_local_altitude_invalid = (msg + ctr)->local_altitude_invalid;
    outArray[ctr]["local_altitude_invalid"] = factory.createScalar(currentElement_local_altitude_invalid);
    // local_position_invalid
    auto currentElement_local_position_invalid = (msg + ctr)->local_position_invalid;
    outArray[ctr]["local_position_invalid"] = factory.createScalar(currentElement_local_position_invalid);
    // local_position_invalid_relaxed
    auto currentElement_local_position_invalid_relaxed = (msg + ctr)->local_position_invalid_relaxed;
    outArray[ctr]["local_position_invalid_relaxed"] = factory.createScalar(currentElement_local_position_invalid_relaxed);
    // local_velocity_invalid
    auto currentElement_local_velocity_invalid = (msg + ctr)->local_velocity_invalid;
    outArray[ctr]["local_velocity_invalid"] = factory.createScalar(currentElement_local_velocity_invalid);
    // global_position_invalid
    auto currentElement_global_position_invalid = (msg + ctr)->global_position_invalid;
    outArray[ctr]["global_position_invalid"] = factory.createScalar(currentElement_global_position_invalid);
    // auto_mission_missing
    auto currentElement_auto_mission_missing = (msg + ctr)->auto_mission_missing;
    outArray[ctr]["auto_mission_missing"] = factory.createScalar(currentElement_auto_mission_missing);
    // offboard_control_signal_lost
    auto currentElement_offboard_control_signal_lost = (msg + ctr)->offboard_control_signal_lost;
    outArray[ctr]["offboard_control_signal_lost"] = factory.createScalar(currentElement_offboard_control_signal_lost);
    // home_position_invalid
    auto currentElement_home_position_invalid = (msg + ctr)->home_position_invalid;
    outArray[ctr]["home_position_invalid"] = factory.createScalar(currentElement_home_position_invalid);
    // manual_control_signal_lost
    auto currentElement_manual_control_signal_lost = (msg + ctr)->manual_control_signal_lost;
    outArray[ctr]["manual_control_signal_lost"] = factory.createScalar(currentElement_manual_control_signal_lost);
    // gcs_connection_lost
    auto currentElement_gcs_connection_lost = (msg + ctr)->gcs_connection_lost;
    outArray[ctr]["gcs_connection_lost"] = factory.createScalar(currentElement_gcs_connection_lost);
    // battery_warning
    auto currentElement_battery_warning = (msg + ctr)->battery_warning;
    outArray[ctr]["battery_warning"] = factory.createScalar(currentElement_battery_warning);
    // battery_low_remaining_time
    auto currentElement_battery_low_remaining_time = (msg + ctr)->battery_low_remaining_time;
    outArray[ctr]["battery_low_remaining_time"] = factory.createScalar(currentElement_battery_low_remaining_time);
    // battery_unhealthy
    auto currentElement_battery_unhealthy = (msg + ctr)->battery_unhealthy;
    outArray[ctr]["battery_unhealthy"] = factory.createScalar(currentElement_battery_unhealthy);
    // geofence_breached
    auto currentElement_geofence_breached = (msg + ctr)->geofence_breached;
    outArray[ctr]["geofence_breached"] = factory.createScalar(currentElement_geofence_breached);
    // mission_failure
    auto currentElement_mission_failure = (msg + ctr)->mission_failure;
    outArray[ctr]["mission_failure"] = factory.createScalar(currentElement_mission_failure);
    // vtol_fixed_wing_system_failure
    auto currentElement_vtol_fixed_wing_system_failure = (msg + ctr)->vtol_fixed_wing_system_failure;
    outArray[ctr]["vtol_fixed_wing_system_failure"] = factory.createScalar(currentElement_vtol_fixed_wing_system_failure);
    // wind_limit_exceeded
    auto currentElement_wind_limit_exceeded = (msg + ctr)->wind_limit_exceeded;
    outArray[ctr]["wind_limit_exceeded"] = factory.createScalar(currentElement_wind_limit_exceeded);
    // flight_time_limit_exceeded
    auto currentElement_flight_time_limit_exceeded = (msg + ctr)->flight_time_limit_exceeded;
    outArray[ctr]["flight_time_limit_exceeded"] = factory.createScalar(currentElement_flight_time_limit_exceeded);
    // local_position_accuracy_low
    auto currentElement_local_position_accuracy_low = (msg + ctr)->local_position_accuracy_low;
    outArray[ctr]["local_position_accuracy_low"] = factory.createScalar(currentElement_local_position_accuracy_low);
    // navigator_failure
    auto currentElement_navigator_failure = (msg + ctr)->navigator_failure;
    outArray[ctr]["navigator_failure"] = factory.createScalar(currentElement_navigator_failure);
    // fd_critical_failure
    auto currentElement_fd_critical_failure = (msg + ctr)->fd_critical_failure;
    outArray[ctr]["fd_critical_failure"] = factory.createScalar(currentElement_fd_critical_failure);
    // fd_esc_arming_failure
    auto currentElement_fd_esc_arming_failure = (msg + ctr)->fd_esc_arming_failure;
    outArray[ctr]["fd_esc_arming_failure"] = factory.createScalar(currentElement_fd_esc_arming_failure);
    // fd_imbalanced_prop
    auto currentElement_fd_imbalanced_prop = (msg + ctr)->fd_imbalanced_prop;
    outArray[ctr]["fd_imbalanced_prop"] = factory.createScalar(currentElement_fd_imbalanced_prop);
    // fd_motor_failure
    auto currentElement_fd_motor_failure = (msg + ctr)->fd_motor_failure;
    outArray[ctr]["fd_motor_failure"] = factory.createScalar(currentElement_fd_motor_failure);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_FailsafeFlags_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_FailsafeFlags_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_FailsafeFlags_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::FailsafeFlags,ros2_px4_msgs_msg_FailsafeFlags_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_FailsafeFlags_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::FailsafeFlags,ros2_px4_msgs_msg_FailsafeFlags_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_FailsafeFlags_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::FailsafeFlags>();
    ros2_px4_msgs_msg_FailsafeFlags_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_FailsafeFlags_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_FailsafeFlags_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::FailsafeFlags*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_FailsafeFlags_common, MATLABROS2MsgInterface<px4_msgs::msg::FailsafeFlags>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_FailsafeFlags_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER