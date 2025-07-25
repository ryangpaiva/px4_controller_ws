// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/OffboardControlMode
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
#include "px4_msgs/msg/offboard_control_mode.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_OffboardControlMode_common : public MATLABROS2MsgInterface<px4_msgs::msg::OffboardControlMode> {
  public:
    virtual ~ros2_px4_msgs_msg_OffboardControlMode_common(){}
    virtual void copy_from_struct(px4_msgs::msg::OffboardControlMode* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::OffboardControlMode* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_OffboardControlMode_common::copy_from_struct(px4_msgs::msg::OffboardControlMode* msg, const matlab::data::Struct& arr,
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
        //position
        const matlab::data::TypedArray<bool> position_arr = arr["position"];
        msg->position = position_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'position' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'position' is wrong type; expected a logical.");
    }
    try {
        //velocity
        const matlab::data::TypedArray<bool> velocity_arr = arr["velocity"];
        msg->velocity = velocity_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'velocity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'velocity' is wrong type; expected a logical.");
    }
    try {
        //acceleration
        const matlab::data::TypedArray<bool> acceleration_arr = arr["acceleration"];
        msg->acceleration = acceleration_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'acceleration' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'acceleration' is wrong type; expected a logical.");
    }
    try {
        //attitude
        const matlab::data::TypedArray<bool> attitude_arr = arr["attitude"];
        msg->attitude = attitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'attitude' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'attitude' is wrong type; expected a logical.");
    }
    try {
        //body_rate
        const matlab::data::TypedArray<bool> body_rate_arr = arr["body_rate"];
        msg->body_rate = body_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'body_rate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'body_rate' is wrong type; expected a logical.");
    }
    try {
        //thrust_and_torque
        const matlab::data::TypedArray<bool> thrust_and_torque_arr = arr["thrust_and_torque"];
        msg->thrust_and_torque = thrust_and_torque_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'thrust_and_torque' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'thrust_and_torque' is wrong type; expected a logical.");
    }
    try {
        //direct_actuator
        const matlab::data::TypedArray<bool> direct_actuator_arr = arr["direct_actuator"];
        msg->direct_actuator = direct_actuator_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'direct_actuator' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'direct_actuator' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_OffboardControlMode_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::OffboardControlMode* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","position","velocity","acceleration","attitude","body_rate","thrust_and_torque","direct_actuator"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/OffboardControlMode");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // position
    auto currentElement_position = (msg + ctr)->position;
    outArray[ctr]["position"] = factory.createScalar(currentElement_position);
    // velocity
    auto currentElement_velocity = (msg + ctr)->velocity;
    outArray[ctr]["velocity"] = factory.createScalar(currentElement_velocity);
    // acceleration
    auto currentElement_acceleration = (msg + ctr)->acceleration;
    outArray[ctr]["acceleration"] = factory.createScalar(currentElement_acceleration);
    // attitude
    auto currentElement_attitude = (msg + ctr)->attitude;
    outArray[ctr]["attitude"] = factory.createScalar(currentElement_attitude);
    // body_rate
    auto currentElement_body_rate = (msg + ctr)->body_rate;
    outArray[ctr]["body_rate"] = factory.createScalar(currentElement_body_rate);
    // thrust_and_torque
    auto currentElement_thrust_and_torque = (msg + ctr)->thrust_and_torque;
    outArray[ctr]["thrust_and_torque"] = factory.createScalar(currentElement_thrust_and_torque);
    // direct_actuator
    auto currentElement_direct_actuator = (msg + ctr)->direct_actuator;
    outArray[ctr]["direct_actuator"] = factory.createScalar(currentElement_direct_actuator);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_OffboardControlMode_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_OffboardControlMode_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_OffboardControlMode_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::OffboardControlMode,ros2_px4_msgs_msg_OffboardControlMode_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_OffboardControlMode_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::OffboardControlMode,ros2_px4_msgs_msg_OffboardControlMode_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_OffboardControlMode_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::OffboardControlMode>();
    ros2_px4_msgs_msg_OffboardControlMode_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_OffboardControlMode_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_OffboardControlMode_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::OffboardControlMode*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_OffboardControlMode_common, MATLABROS2MsgInterface<px4_msgs::msg::OffboardControlMode>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_OffboardControlMode_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER