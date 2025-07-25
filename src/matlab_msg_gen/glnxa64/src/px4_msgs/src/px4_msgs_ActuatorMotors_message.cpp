// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/ActuatorMotors
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
#include "px4_msgs/msg/actuator_motors.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_ActuatorMotors_common : public MATLABROS2MsgInterface<px4_msgs::msg::ActuatorMotors> {
  public:
    virtual ~ros2_px4_msgs_msg_ActuatorMotors_common(){}
    virtual void copy_from_struct(px4_msgs::msg::ActuatorMotors* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::ActuatorMotors* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_ActuatorMotors_common::copy_from_struct(px4_msgs::msg::ActuatorMotors* msg, const matlab::data::Struct& arr,
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
        //timestamp_sample
        const matlab::data::TypedArray<uint64_t> timestamp_sample_arr = arr["timestamp_sample"];
        msg->timestamp_sample = timestamp_sample_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'timestamp_sample' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'timestamp_sample' is wrong type; expected a uint64.");
    }
    try {
        //reversible_flags
        const matlab::data::TypedArray<uint16_t> reversible_flags_arr = arr["reversible_flags"];
        msg->reversible_flags = reversible_flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reversible_flags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reversible_flags' is wrong type; expected a uint16.");
    }
    try {
        //control
        const matlab::data::TypedArray<float> control_arr = arr["control"];
        size_t nelem = 12;
        	std::copy(control_arr.begin(), control_arr.begin()+nelem, msg->control.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'control' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'control' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_ActuatorMotors_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::ActuatorMotors* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","MESSAGE_VERSION","timestamp","timestamp_sample","reversible_flags","ACTUATOR_FUNCTION_MOTOR1","NUM_CONTROLS","control"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/ActuatorMotors");
    // MESSAGE_VERSION
    auto currentElement_MESSAGE_VERSION = (msg + ctr)->MESSAGE_VERSION;
    outArray[ctr]["MESSAGE_VERSION"] = factory.createScalar(currentElement_MESSAGE_VERSION);
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // reversible_flags
    auto currentElement_reversible_flags = (msg + ctr)->reversible_flags;
    outArray[ctr]["reversible_flags"] = factory.createScalar(currentElement_reversible_flags);
    // ACTUATOR_FUNCTION_MOTOR1
    auto currentElement_ACTUATOR_FUNCTION_MOTOR1 = (msg + ctr)->ACTUATOR_FUNCTION_MOTOR1;
    outArray[ctr]["ACTUATOR_FUNCTION_MOTOR1"] = factory.createScalar(currentElement_ACTUATOR_FUNCTION_MOTOR1);
    // NUM_CONTROLS
    auto currentElement_NUM_CONTROLS = (msg + ctr)->NUM_CONTROLS;
    outArray[ctr]["NUM_CONTROLS"] = factory.createScalar(currentElement_NUM_CONTROLS);
    // control
    auto currentElement_control = (msg + ctr)->control;
    outArray[ctr]["control"] = factory.createArray<px4_msgs::msg::ActuatorMotors::_control_type::const_iterator, float>({currentElement_control.size(), 1}, currentElement_control.begin(), currentElement_control.end());
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_ActuatorMotors_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_ActuatorMotors_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_ActuatorMotors_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::ActuatorMotors,ros2_px4_msgs_msg_ActuatorMotors_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_ActuatorMotors_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::ActuatorMotors,ros2_px4_msgs_msg_ActuatorMotors_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_ActuatorMotors_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::ActuatorMotors>();
    ros2_px4_msgs_msg_ActuatorMotors_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_ActuatorMotors_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_ActuatorMotors_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::ActuatorMotors*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_ActuatorMotors_common, MATLABROS2MsgInterface<px4_msgs::msg::ActuatorMotors>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_ActuatorMotors_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER