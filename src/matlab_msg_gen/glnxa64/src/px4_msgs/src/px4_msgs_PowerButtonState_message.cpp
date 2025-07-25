// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/PowerButtonState
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
#include "px4_msgs/msg/power_button_state.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_PowerButtonState_common : public MATLABROS2MsgInterface<px4_msgs::msg::PowerButtonState> {
  public:
    virtual ~ros2_px4_msgs_msg_PowerButtonState_common(){}
    virtual void copy_from_struct(px4_msgs::msg::PowerButtonState* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::PowerButtonState* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_PowerButtonState_common::copy_from_struct(px4_msgs::msg::PowerButtonState* msg, const matlab::data::Struct& arr,
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
        //event
        const matlab::data::TypedArray<uint8_t> event_arr = arr["event"];
        msg->event = event_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'event' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'event' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_PowerButtonState_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::PowerButtonState* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","PWR_BUTTON_STATE_IDEL","PWR_BUTTON_STATE_DOWN","PWR_BUTTON_STATE_UP","PWR_BUTTON_STATE_REQUEST_SHUTDOWN","event"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/PowerButtonState");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // PWR_BUTTON_STATE_IDEL
    auto currentElement_PWR_BUTTON_STATE_IDEL = (msg + ctr)->PWR_BUTTON_STATE_IDEL;
    outArray[ctr]["PWR_BUTTON_STATE_IDEL"] = factory.createScalar(currentElement_PWR_BUTTON_STATE_IDEL);
    // PWR_BUTTON_STATE_DOWN
    auto currentElement_PWR_BUTTON_STATE_DOWN = (msg + ctr)->PWR_BUTTON_STATE_DOWN;
    outArray[ctr]["PWR_BUTTON_STATE_DOWN"] = factory.createScalar(currentElement_PWR_BUTTON_STATE_DOWN);
    // PWR_BUTTON_STATE_UP
    auto currentElement_PWR_BUTTON_STATE_UP = (msg + ctr)->PWR_BUTTON_STATE_UP;
    outArray[ctr]["PWR_BUTTON_STATE_UP"] = factory.createScalar(currentElement_PWR_BUTTON_STATE_UP);
    // PWR_BUTTON_STATE_REQUEST_SHUTDOWN
    auto currentElement_PWR_BUTTON_STATE_REQUEST_SHUTDOWN = (msg + ctr)->PWR_BUTTON_STATE_REQUEST_SHUTDOWN;
    outArray[ctr]["PWR_BUTTON_STATE_REQUEST_SHUTDOWN"] = factory.createScalar(currentElement_PWR_BUTTON_STATE_REQUEST_SHUTDOWN);
    // event
    auto currentElement_event = (msg + ctr)->event;
    outArray[ctr]["event"] = factory.createScalar(currentElement_event);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_PowerButtonState_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_PowerButtonState_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_PowerButtonState_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::PowerButtonState,ros2_px4_msgs_msg_PowerButtonState_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_PowerButtonState_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::PowerButtonState,ros2_px4_msgs_msg_PowerButtonState_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_PowerButtonState_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::PowerButtonState>();
    ros2_px4_msgs_msg_PowerButtonState_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_PowerButtonState_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_PowerButtonState_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::PowerButtonState*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_PowerButtonState_common, MATLABROS2MsgInterface<px4_msgs::msg::PowerButtonState>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_PowerButtonState_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER