// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/ActionRequest
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
#include "px4_msgs/msg/action_request.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_ActionRequest_common : public MATLABROS2MsgInterface<px4_msgs::msg::ActionRequest> {
  public:
    virtual ~ros2_px4_msgs_msg_ActionRequest_common(){}
    virtual void copy_from_struct(px4_msgs::msg::ActionRequest* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::ActionRequest* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_ActionRequest_common::copy_from_struct(px4_msgs::msg::ActionRequest* msg, const matlab::data::Struct& arr,
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
        //source
        const matlab::data::TypedArray<uint8_t> source_arr = arr["source"];
        msg->source = source_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'source' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'source' is wrong type; expected a uint8.");
    }
    try {
        //mode
        const matlab::data::TypedArray<uint8_t> mode_arr = arr["mode"];
        msg->mode = mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_ActionRequest_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::ActionRequest* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","action","ACTION_DISARM","ACTION_ARM","ACTION_TOGGLE_ARMING","ACTION_UNKILL","ACTION_KILL","ACTION_SWITCH_MODE","ACTION_VTOL_TRANSITION_TO_MULTICOPTER","ACTION_VTOL_TRANSITION_TO_FIXEDWING","source","SOURCE_STICK_GESTURE","SOURCE_RC_SWITCH","SOURCE_RC_BUTTON","SOURCE_RC_MODE_SLOT","mode"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/ActionRequest");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // action
    auto currentElement_action = (msg + ctr)->action;
    outArray[ctr]["action"] = factory.createScalar(currentElement_action);
    // ACTION_DISARM
    auto currentElement_ACTION_DISARM = (msg + ctr)->ACTION_DISARM;
    outArray[ctr]["ACTION_DISARM"] = factory.createScalar(currentElement_ACTION_DISARM);
    // ACTION_ARM
    auto currentElement_ACTION_ARM = (msg + ctr)->ACTION_ARM;
    outArray[ctr]["ACTION_ARM"] = factory.createScalar(currentElement_ACTION_ARM);
    // ACTION_TOGGLE_ARMING
    auto currentElement_ACTION_TOGGLE_ARMING = (msg + ctr)->ACTION_TOGGLE_ARMING;
    outArray[ctr]["ACTION_TOGGLE_ARMING"] = factory.createScalar(currentElement_ACTION_TOGGLE_ARMING);
    // ACTION_UNKILL
    auto currentElement_ACTION_UNKILL = (msg + ctr)->ACTION_UNKILL;
    outArray[ctr]["ACTION_UNKILL"] = factory.createScalar(currentElement_ACTION_UNKILL);
    // ACTION_KILL
    auto currentElement_ACTION_KILL = (msg + ctr)->ACTION_KILL;
    outArray[ctr]["ACTION_KILL"] = factory.createScalar(currentElement_ACTION_KILL);
    // ACTION_SWITCH_MODE
    auto currentElement_ACTION_SWITCH_MODE = (msg + ctr)->ACTION_SWITCH_MODE;
    outArray[ctr]["ACTION_SWITCH_MODE"] = factory.createScalar(currentElement_ACTION_SWITCH_MODE);
    // ACTION_VTOL_TRANSITION_TO_MULTICOPTER
    auto currentElement_ACTION_VTOL_TRANSITION_TO_MULTICOPTER = (msg + ctr)->ACTION_VTOL_TRANSITION_TO_MULTICOPTER;
    outArray[ctr]["ACTION_VTOL_TRANSITION_TO_MULTICOPTER"] = factory.createScalar(currentElement_ACTION_VTOL_TRANSITION_TO_MULTICOPTER);
    // ACTION_VTOL_TRANSITION_TO_FIXEDWING
    auto currentElement_ACTION_VTOL_TRANSITION_TO_FIXEDWING = (msg + ctr)->ACTION_VTOL_TRANSITION_TO_FIXEDWING;
    outArray[ctr]["ACTION_VTOL_TRANSITION_TO_FIXEDWING"] = factory.createScalar(currentElement_ACTION_VTOL_TRANSITION_TO_FIXEDWING);
    // source
    auto currentElement_source = (msg + ctr)->source;
    outArray[ctr]["source"] = factory.createScalar(currentElement_source);
    // SOURCE_STICK_GESTURE
    auto currentElement_SOURCE_STICK_GESTURE = (msg + ctr)->SOURCE_STICK_GESTURE;
    outArray[ctr]["SOURCE_STICK_GESTURE"] = factory.createScalar(currentElement_SOURCE_STICK_GESTURE);
    // SOURCE_RC_SWITCH
    auto currentElement_SOURCE_RC_SWITCH = (msg + ctr)->SOURCE_RC_SWITCH;
    outArray[ctr]["SOURCE_RC_SWITCH"] = factory.createScalar(currentElement_SOURCE_RC_SWITCH);
    // SOURCE_RC_BUTTON
    auto currentElement_SOURCE_RC_BUTTON = (msg + ctr)->SOURCE_RC_BUTTON;
    outArray[ctr]["SOURCE_RC_BUTTON"] = factory.createScalar(currentElement_SOURCE_RC_BUTTON);
    // SOURCE_RC_MODE_SLOT
    auto currentElement_SOURCE_RC_MODE_SLOT = (msg + ctr)->SOURCE_RC_MODE_SLOT;
    outArray[ctr]["SOURCE_RC_MODE_SLOT"] = factory.createScalar(currentElement_SOURCE_RC_MODE_SLOT);
    // mode
    auto currentElement_mode = (msg + ctr)->mode;
    outArray[ctr]["mode"] = factory.createScalar(currentElement_mode);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_ActionRequest_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_ActionRequest_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_ActionRequest_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::ActionRequest,ros2_px4_msgs_msg_ActionRequest_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_ActionRequest_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::ActionRequest,ros2_px4_msgs_msg_ActionRequest_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_ActionRequest_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::ActionRequest>();
    ros2_px4_msgs_msg_ActionRequest_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_ActionRequest_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_ActionRequest_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::ActionRequest*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_ActionRequest_common, MATLABROS2MsgInterface<px4_msgs::msg::ActionRequest>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_ActionRequest_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER