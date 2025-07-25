// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/ActuatorTest
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
#include "px4_msgs/msg/actuator_test.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_ActuatorTest_common : public MATLABROS2MsgInterface<px4_msgs::msg::ActuatorTest> {
  public:
    virtual ~ros2_px4_msgs_msg_ActuatorTest_common(){}
    virtual void copy_from_struct(px4_msgs::msg::ActuatorTest* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::ActuatorTest* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_ActuatorTest_common::copy_from_struct(px4_msgs::msg::ActuatorTest* msg, const matlab::data::Struct& arr,
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
        //action
        const matlab::data::TypedArray<uint8_t> action_arr = arr["action"];
        msg->action = action_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'action' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'action' is wrong type; expected a uint8.");
    }
    try {
        //function
        const matlab::data::TypedArray<uint16_t> function_arr = arr["function"];
        msg->function = function_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'function' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'function' is wrong type; expected a uint16.");
    }
    try {
        //value
        const matlab::data::TypedArray<float> value_arr = arr["value"];
        msg->value = value_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'value' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'value' is wrong type; expected a single.");
    }
    try {
        //timeout_ms
        const matlab::data::TypedArray<uint32_t> timeout_ms_arr = arr["timeout_ms"];
        msg->timeout_ms = timeout_ms_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'timeout_ms' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'timeout_ms' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_ActuatorTest_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::ActuatorTest* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","ACTION_RELEASE_CONTROL","ACTION_DO_CONTROL","FUNCTION_MOTOR1","MAX_NUM_MOTORS","FUNCTION_SERVO1","MAX_NUM_SERVOS","action","function","value","timeout_ms","ORB_QUEUE_LENGTH"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/ActuatorTest");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // ACTION_RELEASE_CONTROL
    auto currentElement_ACTION_RELEASE_CONTROL = (msg + ctr)->ACTION_RELEASE_CONTROL;
    outArray[ctr]["ACTION_RELEASE_CONTROL"] = factory.createScalar(currentElement_ACTION_RELEASE_CONTROL);
    // ACTION_DO_CONTROL
    auto currentElement_ACTION_DO_CONTROL = (msg + ctr)->ACTION_DO_CONTROL;
    outArray[ctr]["ACTION_DO_CONTROL"] = factory.createScalar(currentElement_ACTION_DO_CONTROL);
    // FUNCTION_MOTOR1
    auto currentElement_FUNCTION_MOTOR1 = (msg + ctr)->FUNCTION_MOTOR1;
    outArray[ctr]["FUNCTION_MOTOR1"] = factory.createScalar(currentElement_FUNCTION_MOTOR1);
    // MAX_NUM_MOTORS
    auto currentElement_MAX_NUM_MOTORS = (msg + ctr)->MAX_NUM_MOTORS;
    outArray[ctr]["MAX_NUM_MOTORS"] = factory.createScalar(currentElement_MAX_NUM_MOTORS);
    // FUNCTION_SERVO1
    auto currentElement_FUNCTION_SERVO1 = (msg + ctr)->FUNCTION_SERVO1;
    outArray[ctr]["FUNCTION_SERVO1"] = factory.createScalar(currentElement_FUNCTION_SERVO1);
    // MAX_NUM_SERVOS
    auto currentElement_MAX_NUM_SERVOS = (msg + ctr)->MAX_NUM_SERVOS;
    outArray[ctr]["MAX_NUM_SERVOS"] = factory.createScalar(currentElement_MAX_NUM_SERVOS);
    // action
    auto currentElement_action = (msg + ctr)->action;
    outArray[ctr]["action"] = factory.createScalar(currentElement_action);
    // function
    auto currentElement_function = (msg + ctr)->function;
    outArray[ctr]["function"] = factory.createScalar(currentElement_function);
    // value
    auto currentElement_value = (msg + ctr)->value;
    outArray[ctr]["value"] = factory.createScalar(currentElement_value);
    // timeout_ms
    auto currentElement_timeout_ms = (msg + ctr)->timeout_ms;
    outArray[ctr]["timeout_ms"] = factory.createScalar(currentElement_timeout_ms);
    // ORB_QUEUE_LENGTH
    auto currentElement_ORB_QUEUE_LENGTH = (msg + ctr)->ORB_QUEUE_LENGTH;
    outArray[ctr]["ORB_QUEUE_LENGTH"] = factory.createScalar(currentElement_ORB_QUEUE_LENGTH);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_ActuatorTest_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_ActuatorTest_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_ActuatorTest_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::ActuatorTest,ros2_px4_msgs_msg_ActuatorTest_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_ActuatorTest_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::ActuatorTest,ros2_px4_msgs_msg_ActuatorTest_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_ActuatorTest_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::ActuatorTest>();
    ros2_px4_msgs_msg_ActuatorTest_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_ActuatorTest_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_ActuatorTest_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::ActuatorTest*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_ActuatorTest_common, MATLABROS2MsgInterface<px4_msgs::msg::ActuatorTest>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_ActuatorTest_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER