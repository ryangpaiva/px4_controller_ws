// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/EscReport
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
#include "px4_msgs/msg/esc_report.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_EscReport_common : public MATLABROS2MsgInterface<px4_msgs::msg::EscReport> {
  public:
    virtual ~ros2_px4_msgs_msg_EscReport_common(){}
    virtual void copy_from_struct(px4_msgs::msg::EscReport* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::EscReport* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_EscReport_common::copy_from_struct(px4_msgs::msg::EscReport* msg, const matlab::data::Struct& arr,
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
        //esc_errorcount
        const matlab::data::TypedArray<uint32_t> esc_errorcount_arr = arr["esc_errorcount"];
        msg->esc_errorcount = esc_errorcount_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'esc_errorcount' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'esc_errorcount' is wrong type; expected a uint32.");
    }
    try {
        //esc_rpm
        const matlab::data::TypedArray<int32_t> esc_rpm_arr = arr["esc_rpm"];
        msg->esc_rpm = esc_rpm_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'esc_rpm' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'esc_rpm' is wrong type; expected a int32.");
    }
    try {
        //esc_voltage
        const matlab::data::TypedArray<float> esc_voltage_arr = arr["esc_voltage"];
        msg->esc_voltage = esc_voltage_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'esc_voltage' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'esc_voltage' is wrong type; expected a single.");
    }
    try {
        //esc_current
        const matlab::data::TypedArray<float> esc_current_arr = arr["esc_current"];
        msg->esc_current = esc_current_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'esc_current' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'esc_current' is wrong type; expected a single.");
    }
    try {
        //esc_temperature
        const matlab::data::TypedArray<float> esc_temperature_arr = arr["esc_temperature"];
        msg->esc_temperature = esc_temperature_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'esc_temperature' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'esc_temperature' is wrong type; expected a single.");
    }
    try {
        //esc_address
        const matlab::data::TypedArray<uint8_t> esc_address_arr = arr["esc_address"];
        msg->esc_address = esc_address_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'esc_address' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'esc_address' is wrong type; expected a uint8.");
    }
    try {
        //esc_cmdcount
        const matlab::data::TypedArray<uint8_t> esc_cmdcount_arr = arr["esc_cmdcount"];
        msg->esc_cmdcount = esc_cmdcount_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'esc_cmdcount' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'esc_cmdcount' is wrong type; expected a uint8.");
    }
    try {
        //esc_state
        const matlab::data::TypedArray<uint8_t> esc_state_arr = arr["esc_state"];
        msg->esc_state = esc_state_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'esc_state' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'esc_state' is wrong type; expected a uint8.");
    }
    try {
        //actuator_function
        const matlab::data::TypedArray<uint8_t> actuator_function_arr = arr["actuator_function"];
        msg->actuator_function = actuator_function_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'actuator_function' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'actuator_function' is wrong type; expected a uint8.");
    }
    try {
        //failures
        const matlab::data::TypedArray<uint16_t> failures_arr = arr["failures"];
        msg->failures = failures_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'failures' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'failures' is wrong type; expected a uint16.");
    }
    try {
        //esc_power
        const matlab::data::TypedArray<int8_t> esc_power_arr = arr["esc_power"];
        msg->esc_power = esc_power_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'esc_power' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'esc_power' is wrong type; expected a int8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_EscReport_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::EscReport* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","esc_errorcount","esc_rpm","esc_voltage","esc_current","esc_temperature","esc_address","esc_cmdcount","esc_state","actuator_function","failures","esc_power","FAILURE_OVER_CURRENT","FAILURE_OVER_VOLTAGE","FAILURE_MOTOR_OVER_TEMPERATURE","FAILURE_OVER_RPM","FAILURE_INCONSISTENT_CMD","FAILURE_MOTOR_STUCK","FAILURE_GENERIC","FAILURE_MOTOR_WARN_TEMPERATURE","FAILURE_WARN_ESC_TEMPERATURE","FAILURE_OVER_ESC_TEMPERATURE","ESC_FAILURE_COUNT"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/EscReport");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // esc_errorcount
    auto currentElement_esc_errorcount = (msg + ctr)->esc_errorcount;
    outArray[ctr]["esc_errorcount"] = factory.createScalar(currentElement_esc_errorcount);
    // esc_rpm
    auto currentElement_esc_rpm = (msg + ctr)->esc_rpm;
    outArray[ctr]["esc_rpm"] = factory.createScalar(currentElement_esc_rpm);
    // esc_voltage
    auto currentElement_esc_voltage = (msg + ctr)->esc_voltage;
    outArray[ctr]["esc_voltage"] = factory.createScalar(currentElement_esc_voltage);
    // esc_current
    auto currentElement_esc_current = (msg + ctr)->esc_current;
    outArray[ctr]["esc_current"] = factory.createScalar(currentElement_esc_current);
    // esc_temperature
    auto currentElement_esc_temperature = (msg + ctr)->esc_temperature;
    outArray[ctr]["esc_temperature"] = factory.createScalar(currentElement_esc_temperature);
    // esc_address
    auto currentElement_esc_address = (msg + ctr)->esc_address;
    outArray[ctr]["esc_address"] = factory.createScalar(currentElement_esc_address);
    // esc_cmdcount
    auto currentElement_esc_cmdcount = (msg + ctr)->esc_cmdcount;
    outArray[ctr]["esc_cmdcount"] = factory.createScalar(currentElement_esc_cmdcount);
    // esc_state
    auto currentElement_esc_state = (msg + ctr)->esc_state;
    outArray[ctr]["esc_state"] = factory.createScalar(currentElement_esc_state);
    // actuator_function
    auto currentElement_actuator_function = (msg + ctr)->actuator_function;
    outArray[ctr]["actuator_function"] = factory.createScalar(currentElement_actuator_function);
    // failures
    auto currentElement_failures = (msg + ctr)->failures;
    outArray[ctr]["failures"] = factory.createScalar(currentElement_failures);
    // esc_power
    auto currentElement_esc_power = (msg + ctr)->esc_power;
    outArray[ctr]["esc_power"] = factory.createScalar(currentElement_esc_power);
    // FAILURE_OVER_CURRENT
    auto currentElement_FAILURE_OVER_CURRENT = (msg + ctr)->FAILURE_OVER_CURRENT;
    outArray[ctr]["FAILURE_OVER_CURRENT"] = factory.createScalar(currentElement_FAILURE_OVER_CURRENT);
    // FAILURE_OVER_VOLTAGE
    auto currentElement_FAILURE_OVER_VOLTAGE = (msg + ctr)->FAILURE_OVER_VOLTAGE;
    outArray[ctr]["FAILURE_OVER_VOLTAGE"] = factory.createScalar(currentElement_FAILURE_OVER_VOLTAGE);
    // FAILURE_MOTOR_OVER_TEMPERATURE
    auto currentElement_FAILURE_MOTOR_OVER_TEMPERATURE = (msg + ctr)->FAILURE_MOTOR_OVER_TEMPERATURE;
    outArray[ctr]["FAILURE_MOTOR_OVER_TEMPERATURE"] = factory.createScalar(currentElement_FAILURE_MOTOR_OVER_TEMPERATURE);
    // FAILURE_OVER_RPM
    auto currentElement_FAILURE_OVER_RPM = (msg + ctr)->FAILURE_OVER_RPM;
    outArray[ctr]["FAILURE_OVER_RPM"] = factory.createScalar(currentElement_FAILURE_OVER_RPM);
    // FAILURE_INCONSISTENT_CMD
    auto currentElement_FAILURE_INCONSISTENT_CMD = (msg + ctr)->FAILURE_INCONSISTENT_CMD;
    outArray[ctr]["FAILURE_INCONSISTENT_CMD"] = factory.createScalar(currentElement_FAILURE_INCONSISTENT_CMD);
    // FAILURE_MOTOR_STUCK
    auto currentElement_FAILURE_MOTOR_STUCK = (msg + ctr)->FAILURE_MOTOR_STUCK;
    outArray[ctr]["FAILURE_MOTOR_STUCK"] = factory.createScalar(currentElement_FAILURE_MOTOR_STUCK);
    // FAILURE_GENERIC
    auto currentElement_FAILURE_GENERIC = (msg + ctr)->FAILURE_GENERIC;
    outArray[ctr]["FAILURE_GENERIC"] = factory.createScalar(currentElement_FAILURE_GENERIC);
    // FAILURE_MOTOR_WARN_TEMPERATURE
    auto currentElement_FAILURE_MOTOR_WARN_TEMPERATURE = (msg + ctr)->FAILURE_MOTOR_WARN_TEMPERATURE;
    outArray[ctr]["FAILURE_MOTOR_WARN_TEMPERATURE"] = factory.createScalar(currentElement_FAILURE_MOTOR_WARN_TEMPERATURE);
    // FAILURE_WARN_ESC_TEMPERATURE
    auto currentElement_FAILURE_WARN_ESC_TEMPERATURE = (msg + ctr)->FAILURE_WARN_ESC_TEMPERATURE;
    outArray[ctr]["FAILURE_WARN_ESC_TEMPERATURE"] = factory.createScalar(currentElement_FAILURE_WARN_ESC_TEMPERATURE);
    // FAILURE_OVER_ESC_TEMPERATURE
    auto currentElement_FAILURE_OVER_ESC_TEMPERATURE = (msg + ctr)->FAILURE_OVER_ESC_TEMPERATURE;
    outArray[ctr]["FAILURE_OVER_ESC_TEMPERATURE"] = factory.createScalar(currentElement_FAILURE_OVER_ESC_TEMPERATURE);
    // ESC_FAILURE_COUNT
    auto currentElement_ESC_FAILURE_COUNT = (msg + ctr)->ESC_FAILURE_COUNT;
    outArray[ctr]["ESC_FAILURE_COUNT"] = factory.createScalar(currentElement_ESC_FAILURE_COUNT);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_EscReport_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_EscReport_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_EscReport_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::EscReport,ros2_px4_msgs_msg_EscReport_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_EscReport_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::EscReport,ros2_px4_msgs_msg_EscReport_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_EscReport_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::EscReport>();
    ros2_px4_msgs_msg_EscReport_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_EscReport_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_EscReport_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::EscReport*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_EscReport_common, MATLABROS2MsgInterface<px4_msgs::msg::EscReport>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_EscReport_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER