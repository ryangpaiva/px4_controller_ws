// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/ActuatorArmed
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
#include "px4_msgs/msg/actuator_armed.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_ActuatorArmed_common : public MATLABROS2MsgInterface<px4_msgs::msg::ActuatorArmed> {
  public:
    virtual ~ros2_px4_msgs_msg_ActuatorArmed_common(){}
    virtual void copy_from_struct(px4_msgs::msg::ActuatorArmed* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::ActuatorArmed* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_ActuatorArmed_common::copy_from_struct(px4_msgs::msg::ActuatorArmed* msg, const matlab::data::Struct& arr,
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
        //armed
        const matlab::data::TypedArray<bool> armed_arr = arr["armed"];
        msg->armed = armed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'armed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'armed' is wrong type; expected a logical.");
    }
    try {
        //prearmed
        const matlab::data::TypedArray<bool> prearmed_arr = arr["prearmed"];
        msg->prearmed = prearmed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'prearmed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'prearmed' is wrong type; expected a logical.");
    }
    try {
        //ready_to_arm
        const matlab::data::TypedArray<bool> ready_to_arm_arr = arr["ready_to_arm"];
        msg->ready_to_arm = ready_to_arm_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ready_to_arm' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ready_to_arm' is wrong type; expected a logical.");
    }
    try {
        //lockdown
        const matlab::data::TypedArray<bool> lockdown_arr = arr["lockdown"];
        msg->lockdown = lockdown_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'lockdown' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'lockdown' is wrong type; expected a logical.");
    }
    try {
        //manual_lockdown
        const matlab::data::TypedArray<bool> manual_lockdown_arr = arr["manual_lockdown"];
        msg->manual_lockdown = manual_lockdown_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'manual_lockdown' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'manual_lockdown' is wrong type; expected a logical.");
    }
    try {
        //force_failsafe
        const matlab::data::TypedArray<bool> force_failsafe_arr = arr["force_failsafe"];
        msg->force_failsafe = force_failsafe_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'force_failsafe' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'force_failsafe' is wrong type; expected a logical.");
    }
    try {
        //in_esc_calibration_mode
        const matlab::data::TypedArray<bool> in_esc_calibration_mode_arr = arr["in_esc_calibration_mode"];
        msg->in_esc_calibration_mode = in_esc_calibration_mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'in_esc_calibration_mode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'in_esc_calibration_mode' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_ActuatorArmed_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::ActuatorArmed* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","armed","prearmed","ready_to_arm","lockdown","manual_lockdown","force_failsafe","in_esc_calibration_mode"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/ActuatorArmed");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // armed
    auto currentElement_armed = (msg + ctr)->armed;
    outArray[ctr]["armed"] = factory.createScalar(currentElement_armed);
    // prearmed
    auto currentElement_prearmed = (msg + ctr)->prearmed;
    outArray[ctr]["prearmed"] = factory.createScalar(currentElement_prearmed);
    // ready_to_arm
    auto currentElement_ready_to_arm = (msg + ctr)->ready_to_arm;
    outArray[ctr]["ready_to_arm"] = factory.createScalar(currentElement_ready_to_arm);
    // lockdown
    auto currentElement_lockdown = (msg + ctr)->lockdown;
    outArray[ctr]["lockdown"] = factory.createScalar(currentElement_lockdown);
    // manual_lockdown
    auto currentElement_manual_lockdown = (msg + ctr)->manual_lockdown;
    outArray[ctr]["manual_lockdown"] = factory.createScalar(currentElement_manual_lockdown);
    // force_failsafe
    auto currentElement_force_failsafe = (msg + ctr)->force_failsafe;
    outArray[ctr]["force_failsafe"] = factory.createScalar(currentElement_force_failsafe);
    // in_esc_calibration_mode
    auto currentElement_in_esc_calibration_mode = (msg + ctr)->in_esc_calibration_mode;
    outArray[ctr]["in_esc_calibration_mode"] = factory.createScalar(currentElement_in_esc_calibration_mode);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_ActuatorArmed_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_ActuatorArmed_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_ActuatorArmed_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::ActuatorArmed,ros2_px4_msgs_msg_ActuatorArmed_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_ActuatorArmed_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::ActuatorArmed,ros2_px4_msgs_msg_ActuatorArmed_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_ActuatorArmed_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::ActuatorArmed>();
    ros2_px4_msgs_msg_ActuatorArmed_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_ActuatorArmed_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_ActuatorArmed_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::ActuatorArmed*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_ActuatorArmed_common, MATLABROS2MsgInterface<px4_msgs::msg::ActuatorArmed>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_ActuatorArmed_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER