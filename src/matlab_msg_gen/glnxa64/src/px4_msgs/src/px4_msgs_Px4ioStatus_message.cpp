// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/Px4ioStatus
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
#include "px4_msgs/msg/px4io_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_Px4ioStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::Px4ioStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_Px4ioStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::Px4ioStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::Px4ioStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_Px4ioStatus_common::copy_from_struct(px4_msgs::msg::Px4ioStatus* msg, const matlab::data::Struct& arr,
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
        //free_memory_bytes
        const matlab::data::TypedArray<uint16_t> free_memory_bytes_arr = arr["free_memory_bytes"];
        msg->free_memory_bytes = free_memory_bytes_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'free_memory_bytes' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'free_memory_bytes' is wrong type; expected a uint16.");
    }
    try {
        //voltage_v
        const matlab::data::TypedArray<float> voltage_v_arr = arr["voltage_v"];
        msg->voltage_v = voltage_v_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'voltage_v' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'voltage_v' is wrong type; expected a single.");
    }
    try {
        //rssi_v
        const matlab::data::TypedArray<float> rssi_v_arr = arr["rssi_v"];
        msg->rssi_v = rssi_v_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rssi_v' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rssi_v' is wrong type; expected a single.");
    }
    try {
        //status_arm_sync
        const matlab::data::TypedArray<bool> status_arm_sync_arr = arr["status_arm_sync"];
        msg->status_arm_sync = status_arm_sync_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'status_arm_sync' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'status_arm_sync' is wrong type; expected a logical.");
    }
    try {
        //status_failsafe
        const matlab::data::TypedArray<bool> status_failsafe_arr = arr["status_failsafe"];
        msg->status_failsafe = status_failsafe_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'status_failsafe' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'status_failsafe' is wrong type; expected a logical.");
    }
    try {
        //status_fmu_initialized
        const matlab::data::TypedArray<bool> status_fmu_initialized_arr = arr["status_fmu_initialized"];
        msg->status_fmu_initialized = status_fmu_initialized_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'status_fmu_initialized' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'status_fmu_initialized' is wrong type; expected a logical.");
    }
    try {
        //status_fmu_ok
        const matlab::data::TypedArray<bool> status_fmu_ok_arr = arr["status_fmu_ok"];
        msg->status_fmu_ok = status_fmu_ok_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'status_fmu_ok' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'status_fmu_ok' is wrong type; expected a logical.");
    }
    try {
        //status_init_ok
        const matlab::data::TypedArray<bool> status_init_ok_arr = arr["status_init_ok"];
        msg->status_init_ok = status_init_ok_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'status_init_ok' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'status_init_ok' is wrong type; expected a logical.");
    }
    try {
        //status_outputs_armed
        const matlab::data::TypedArray<bool> status_outputs_armed_arr = arr["status_outputs_armed"];
        msg->status_outputs_armed = status_outputs_armed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'status_outputs_armed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'status_outputs_armed' is wrong type; expected a logical.");
    }
    try {
        //status_raw_pwm
        const matlab::data::TypedArray<bool> status_raw_pwm_arr = arr["status_raw_pwm"];
        msg->status_raw_pwm = status_raw_pwm_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'status_raw_pwm' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'status_raw_pwm' is wrong type; expected a logical.");
    }
    try {
        //status_rc_ok
        const matlab::data::TypedArray<bool> status_rc_ok_arr = arr["status_rc_ok"];
        msg->status_rc_ok = status_rc_ok_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'status_rc_ok' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'status_rc_ok' is wrong type; expected a logical.");
    }
    try {
        //status_rc_dsm
        const matlab::data::TypedArray<bool> status_rc_dsm_arr = arr["status_rc_dsm"];
        msg->status_rc_dsm = status_rc_dsm_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'status_rc_dsm' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'status_rc_dsm' is wrong type; expected a logical.");
    }
    try {
        //status_rc_ppm
        const matlab::data::TypedArray<bool> status_rc_ppm_arr = arr["status_rc_ppm"];
        msg->status_rc_ppm = status_rc_ppm_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'status_rc_ppm' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'status_rc_ppm' is wrong type; expected a logical.");
    }
    try {
        //status_rc_sbus
        const matlab::data::TypedArray<bool> status_rc_sbus_arr = arr["status_rc_sbus"];
        msg->status_rc_sbus = status_rc_sbus_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'status_rc_sbus' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'status_rc_sbus' is wrong type; expected a logical.");
    }
    try {
        //status_rc_st24
        const matlab::data::TypedArray<bool> status_rc_st24_arr = arr["status_rc_st24"];
        msg->status_rc_st24 = status_rc_st24_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'status_rc_st24' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'status_rc_st24' is wrong type; expected a logical.");
    }
    try {
        //status_rc_sumd
        const matlab::data::TypedArray<bool> status_rc_sumd_arr = arr["status_rc_sumd"];
        msg->status_rc_sumd = status_rc_sumd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'status_rc_sumd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'status_rc_sumd' is wrong type; expected a logical.");
    }
    try {
        //status_safety_button_event
        const matlab::data::TypedArray<bool> status_safety_button_event_arr = arr["status_safety_button_event"];
        msg->status_safety_button_event = status_safety_button_event_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'status_safety_button_event' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'status_safety_button_event' is wrong type; expected a logical.");
    }
    try {
        //alarm_pwm_error
        const matlab::data::TypedArray<bool> alarm_pwm_error_arr = arr["alarm_pwm_error"];
        msg->alarm_pwm_error = alarm_pwm_error_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'alarm_pwm_error' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'alarm_pwm_error' is wrong type; expected a logical.");
    }
    try {
        //alarm_rc_lost
        const matlab::data::TypedArray<bool> alarm_rc_lost_arr = arr["alarm_rc_lost"];
        msg->alarm_rc_lost = alarm_rc_lost_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'alarm_rc_lost' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'alarm_rc_lost' is wrong type; expected a logical.");
    }
    try {
        //arming_failsafe_custom
        const matlab::data::TypedArray<bool> arming_failsafe_custom_arr = arr["arming_failsafe_custom"];
        msg->arming_failsafe_custom = arming_failsafe_custom_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'arming_failsafe_custom' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'arming_failsafe_custom' is wrong type; expected a logical.");
    }
    try {
        //arming_fmu_armed
        const matlab::data::TypedArray<bool> arming_fmu_armed_arr = arr["arming_fmu_armed"];
        msg->arming_fmu_armed = arming_fmu_armed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'arming_fmu_armed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'arming_fmu_armed' is wrong type; expected a logical.");
    }
    try {
        //arming_fmu_prearmed
        const matlab::data::TypedArray<bool> arming_fmu_prearmed_arr = arr["arming_fmu_prearmed"];
        msg->arming_fmu_prearmed = arming_fmu_prearmed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'arming_fmu_prearmed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'arming_fmu_prearmed' is wrong type; expected a logical.");
    }
    try {
        //arming_force_failsafe
        const matlab::data::TypedArray<bool> arming_force_failsafe_arr = arr["arming_force_failsafe"];
        msg->arming_force_failsafe = arming_force_failsafe_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'arming_force_failsafe' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'arming_force_failsafe' is wrong type; expected a logical.");
    }
    try {
        //arming_io_arm_ok
        const matlab::data::TypedArray<bool> arming_io_arm_ok_arr = arr["arming_io_arm_ok"];
        msg->arming_io_arm_ok = arming_io_arm_ok_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'arming_io_arm_ok' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'arming_io_arm_ok' is wrong type; expected a logical.");
    }
    try {
        //arming_lockdown
        const matlab::data::TypedArray<bool> arming_lockdown_arr = arr["arming_lockdown"];
        msg->arming_lockdown = arming_lockdown_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'arming_lockdown' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'arming_lockdown' is wrong type; expected a logical.");
    }
    try {
        //arming_termination_failsafe
        const matlab::data::TypedArray<bool> arming_termination_failsafe_arr = arr["arming_termination_failsafe"];
        msg->arming_termination_failsafe = arming_termination_failsafe_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'arming_termination_failsafe' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'arming_termination_failsafe' is wrong type; expected a logical.");
    }
    try {
        //pwm
        const matlab::data::TypedArray<uint16_t> pwm_arr = arr["pwm"];
        size_t nelem = 8;
        	std::copy(pwm_arr.begin(), pwm_arr.begin()+nelem, msg->pwm.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pwm' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pwm' is wrong type; expected a uint16.");
    }
    try {
        //pwm_disarmed
        const matlab::data::TypedArray<uint16_t> pwm_disarmed_arr = arr["pwm_disarmed"];
        size_t nelem = 8;
        	std::copy(pwm_disarmed_arr.begin(), pwm_disarmed_arr.begin()+nelem, msg->pwm_disarmed.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pwm_disarmed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pwm_disarmed' is wrong type; expected a uint16.");
    }
    try {
        //pwm_failsafe
        const matlab::data::TypedArray<uint16_t> pwm_failsafe_arr = arr["pwm_failsafe"];
        size_t nelem = 8;
        	std::copy(pwm_failsafe_arr.begin(), pwm_failsafe_arr.begin()+nelem, msg->pwm_failsafe.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pwm_failsafe' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pwm_failsafe' is wrong type; expected a uint16.");
    }
    try {
        //pwm_rate_hz
        const matlab::data::TypedArray<uint16_t> pwm_rate_hz_arr = arr["pwm_rate_hz"];
        size_t nelem = 8;
        	std::copy(pwm_rate_hz_arr.begin(), pwm_rate_hz_arr.begin()+nelem, msg->pwm_rate_hz.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pwm_rate_hz' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pwm_rate_hz' is wrong type; expected a uint16.");
    }
    try {
        //raw_inputs
        const matlab::data::TypedArray<uint16_t> raw_inputs_arr = arr["raw_inputs"];
        size_t nelem = 18;
        	std::copy(raw_inputs_arr.begin(), raw_inputs_arr.begin()+nelem, msg->raw_inputs.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'raw_inputs' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'raw_inputs' is wrong type; expected a uint16.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_Px4ioStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::Px4ioStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","free_memory_bytes","voltage_v","rssi_v","status_arm_sync","status_failsafe","status_fmu_initialized","status_fmu_ok","status_init_ok","status_outputs_armed","status_raw_pwm","status_rc_ok","status_rc_dsm","status_rc_ppm","status_rc_sbus","status_rc_st24","status_rc_sumd","status_safety_button_event","alarm_pwm_error","alarm_rc_lost","arming_failsafe_custom","arming_fmu_armed","arming_fmu_prearmed","arming_force_failsafe","arming_io_arm_ok","arming_lockdown","arming_termination_failsafe","pwm","pwm_disarmed","pwm_failsafe","pwm_rate_hz","raw_inputs"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/Px4ioStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // free_memory_bytes
    auto currentElement_free_memory_bytes = (msg + ctr)->free_memory_bytes;
    outArray[ctr]["free_memory_bytes"] = factory.createScalar(currentElement_free_memory_bytes);
    // voltage_v
    auto currentElement_voltage_v = (msg + ctr)->voltage_v;
    outArray[ctr]["voltage_v"] = factory.createScalar(currentElement_voltage_v);
    // rssi_v
    auto currentElement_rssi_v = (msg + ctr)->rssi_v;
    outArray[ctr]["rssi_v"] = factory.createScalar(currentElement_rssi_v);
    // status_arm_sync
    auto currentElement_status_arm_sync = (msg + ctr)->status_arm_sync;
    outArray[ctr]["status_arm_sync"] = factory.createScalar(currentElement_status_arm_sync);
    // status_failsafe
    auto currentElement_status_failsafe = (msg + ctr)->status_failsafe;
    outArray[ctr]["status_failsafe"] = factory.createScalar(currentElement_status_failsafe);
    // status_fmu_initialized
    auto currentElement_status_fmu_initialized = (msg + ctr)->status_fmu_initialized;
    outArray[ctr]["status_fmu_initialized"] = factory.createScalar(currentElement_status_fmu_initialized);
    // status_fmu_ok
    auto currentElement_status_fmu_ok = (msg + ctr)->status_fmu_ok;
    outArray[ctr]["status_fmu_ok"] = factory.createScalar(currentElement_status_fmu_ok);
    // status_init_ok
    auto currentElement_status_init_ok = (msg + ctr)->status_init_ok;
    outArray[ctr]["status_init_ok"] = factory.createScalar(currentElement_status_init_ok);
    // status_outputs_armed
    auto currentElement_status_outputs_armed = (msg + ctr)->status_outputs_armed;
    outArray[ctr]["status_outputs_armed"] = factory.createScalar(currentElement_status_outputs_armed);
    // status_raw_pwm
    auto currentElement_status_raw_pwm = (msg + ctr)->status_raw_pwm;
    outArray[ctr]["status_raw_pwm"] = factory.createScalar(currentElement_status_raw_pwm);
    // status_rc_ok
    auto currentElement_status_rc_ok = (msg + ctr)->status_rc_ok;
    outArray[ctr]["status_rc_ok"] = factory.createScalar(currentElement_status_rc_ok);
    // status_rc_dsm
    auto currentElement_status_rc_dsm = (msg + ctr)->status_rc_dsm;
    outArray[ctr]["status_rc_dsm"] = factory.createScalar(currentElement_status_rc_dsm);
    // status_rc_ppm
    auto currentElement_status_rc_ppm = (msg + ctr)->status_rc_ppm;
    outArray[ctr]["status_rc_ppm"] = factory.createScalar(currentElement_status_rc_ppm);
    // status_rc_sbus
    auto currentElement_status_rc_sbus = (msg + ctr)->status_rc_sbus;
    outArray[ctr]["status_rc_sbus"] = factory.createScalar(currentElement_status_rc_sbus);
    // status_rc_st24
    auto currentElement_status_rc_st24 = (msg + ctr)->status_rc_st24;
    outArray[ctr]["status_rc_st24"] = factory.createScalar(currentElement_status_rc_st24);
    // status_rc_sumd
    auto currentElement_status_rc_sumd = (msg + ctr)->status_rc_sumd;
    outArray[ctr]["status_rc_sumd"] = factory.createScalar(currentElement_status_rc_sumd);
    // status_safety_button_event
    auto currentElement_status_safety_button_event = (msg + ctr)->status_safety_button_event;
    outArray[ctr]["status_safety_button_event"] = factory.createScalar(currentElement_status_safety_button_event);
    // alarm_pwm_error
    auto currentElement_alarm_pwm_error = (msg + ctr)->alarm_pwm_error;
    outArray[ctr]["alarm_pwm_error"] = factory.createScalar(currentElement_alarm_pwm_error);
    // alarm_rc_lost
    auto currentElement_alarm_rc_lost = (msg + ctr)->alarm_rc_lost;
    outArray[ctr]["alarm_rc_lost"] = factory.createScalar(currentElement_alarm_rc_lost);
    // arming_failsafe_custom
    auto currentElement_arming_failsafe_custom = (msg + ctr)->arming_failsafe_custom;
    outArray[ctr]["arming_failsafe_custom"] = factory.createScalar(currentElement_arming_failsafe_custom);
    // arming_fmu_armed
    auto currentElement_arming_fmu_armed = (msg + ctr)->arming_fmu_armed;
    outArray[ctr]["arming_fmu_armed"] = factory.createScalar(currentElement_arming_fmu_armed);
    // arming_fmu_prearmed
    auto currentElement_arming_fmu_prearmed = (msg + ctr)->arming_fmu_prearmed;
    outArray[ctr]["arming_fmu_prearmed"] = factory.createScalar(currentElement_arming_fmu_prearmed);
    // arming_force_failsafe
    auto currentElement_arming_force_failsafe = (msg + ctr)->arming_force_failsafe;
    outArray[ctr]["arming_force_failsafe"] = factory.createScalar(currentElement_arming_force_failsafe);
    // arming_io_arm_ok
    auto currentElement_arming_io_arm_ok = (msg + ctr)->arming_io_arm_ok;
    outArray[ctr]["arming_io_arm_ok"] = factory.createScalar(currentElement_arming_io_arm_ok);
    // arming_lockdown
    auto currentElement_arming_lockdown = (msg + ctr)->arming_lockdown;
    outArray[ctr]["arming_lockdown"] = factory.createScalar(currentElement_arming_lockdown);
    // arming_termination_failsafe
    auto currentElement_arming_termination_failsafe = (msg + ctr)->arming_termination_failsafe;
    outArray[ctr]["arming_termination_failsafe"] = factory.createScalar(currentElement_arming_termination_failsafe);
    // pwm
    auto currentElement_pwm = (msg + ctr)->pwm;
    outArray[ctr]["pwm"] = factory.createArray<px4_msgs::msg::Px4ioStatus::_pwm_type::const_iterator, uint16_t>({currentElement_pwm.size(), 1}, currentElement_pwm.begin(), currentElement_pwm.end());
    // pwm_disarmed
    auto currentElement_pwm_disarmed = (msg + ctr)->pwm_disarmed;
    outArray[ctr]["pwm_disarmed"] = factory.createArray<px4_msgs::msg::Px4ioStatus::_pwm_disarmed_type::const_iterator, uint16_t>({currentElement_pwm_disarmed.size(), 1}, currentElement_pwm_disarmed.begin(), currentElement_pwm_disarmed.end());
    // pwm_failsafe
    auto currentElement_pwm_failsafe = (msg + ctr)->pwm_failsafe;
    outArray[ctr]["pwm_failsafe"] = factory.createArray<px4_msgs::msg::Px4ioStatus::_pwm_failsafe_type::const_iterator, uint16_t>({currentElement_pwm_failsafe.size(), 1}, currentElement_pwm_failsafe.begin(), currentElement_pwm_failsafe.end());
    // pwm_rate_hz
    auto currentElement_pwm_rate_hz = (msg + ctr)->pwm_rate_hz;
    outArray[ctr]["pwm_rate_hz"] = factory.createArray<px4_msgs::msg::Px4ioStatus::_pwm_rate_hz_type::const_iterator, uint16_t>({currentElement_pwm_rate_hz.size(), 1}, currentElement_pwm_rate_hz.begin(), currentElement_pwm_rate_hz.end());
    // raw_inputs
    auto currentElement_raw_inputs = (msg + ctr)->raw_inputs;
    outArray[ctr]["raw_inputs"] = factory.createArray<px4_msgs::msg::Px4ioStatus::_raw_inputs_type::const_iterator, uint16_t>({currentElement_raw_inputs.size(), 1}, currentElement_raw_inputs.begin(), currentElement_raw_inputs.end());
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_Px4ioStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_Px4ioStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_Px4ioStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::Px4ioStatus,ros2_px4_msgs_msg_Px4ioStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_Px4ioStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::Px4ioStatus,ros2_px4_msgs_msg_Px4ioStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_Px4ioStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::Px4ioStatus>();
    ros2_px4_msgs_msg_Px4ioStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_Px4ioStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_Px4ioStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::Px4ioStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_Px4ioStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::Px4ioStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_Px4ioStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER