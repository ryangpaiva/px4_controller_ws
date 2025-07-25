// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/TakeoffStatus
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
#include "px4_msgs/msg/takeoff_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_TakeoffStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::TakeoffStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_TakeoffStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::TakeoffStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::TakeoffStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_TakeoffStatus_common::copy_from_struct(px4_msgs::msg::TakeoffStatus* msg, const matlab::data::Struct& arr,
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
        //takeoff_state
        const matlab::data::TypedArray<uint8_t> takeoff_state_arr = arr["takeoff_state"];
        msg->takeoff_state = takeoff_state_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'takeoff_state' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'takeoff_state' is wrong type; expected a uint8.");
    }
    try {
        //tilt_limit
        const matlab::data::TypedArray<float> tilt_limit_arr = arr["tilt_limit"];
        msg->tilt_limit = tilt_limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'tilt_limit' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'tilt_limit' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_TakeoffStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::TakeoffStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","TAKEOFF_STATE_UNINITIALIZED","TAKEOFF_STATE_DISARMED","TAKEOFF_STATE_SPOOLUP","TAKEOFF_STATE_READY_FOR_TAKEOFF","TAKEOFF_STATE_RAMPUP","TAKEOFF_STATE_FLIGHT","takeoff_state","tilt_limit"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/TakeoffStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // TAKEOFF_STATE_UNINITIALIZED
    auto currentElement_TAKEOFF_STATE_UNINITIALIZED = (msg + ctr)->TAKEOFF_STATE_UNINITIALIZED;
    outArray[ctr]["TAKEOFF_STATE_UNINITIALIZED"] = factory.createScalar(currentElement_TAKEOFF_STATE_UNINITIALIZED);
    // TAKEOFF_STATE_DISARMED
    auto currentElement_TAKEOFF_STATE_DISARMED = (msg + ctr)->TAKEOFF_STATE_DISARMED;
    outArray[ctr]["TAKEOFF_STATE_DISARMED"] = factory.createScalar(currentElement_TAKEOFF_STATE_DISARMED);
    // TAKEOFF_STATE_SPOOLUP
    auto currentElement_TAKEOFF_STATE_SPOOLUP = (msg + ctr)->TAKEOFF_STATE_SPOOLUP;
    outArray[ctr]["TAKEOFF_STATE_SPOOLUP"] = factory.createScalar(currentElement_TAKEOFF_STATE_SPOOLUP);
    // TAKEOFF_STATE_READY_FOR_TAKEOFF
    auto currentElement_TAKEOFF_STATE_READY_FOR_TAKEOFF = (msg + ctr)->TAKEOFF_STATE_READY_FOR_TAKEOFF;
    outArray[ctr]["TAKEOFF_STATE_READY_FOR_TAKEOFF"] = factory.createScalar(currentElement_TAKEOFF_STATE_READY_FOR_TAKEOFF);
    // TAKEOFF_STATE_RAMPUP
    auto currentElement_TAKEOFF_STATE_RAMPUP = (msg + ctr)->TAKEOFF_STATE_RAMPUP;
    outArray[ctr]["TAKEOFF_STATE_RAMPUP"] = factory.createScalar(currentElement_TAKEOFF_STATE_RAMPUP);
    // TAKEOFF_STATE_FLIGHT
    auto currentElement_TAKEOFF_STATE_FLIGHT = (msg + ctr)->TAKEOFF_STATE_FLIGHT;
    outArray[ctr]["TAKEOFF_STATE_FLIGHT"] = factory.createScalar(currentElement_TAKEOFF_STATE_FLIGHT);
    // takeoff_state
    auto currentElement_takeoff_state = (msg + ctr)->takeoff_state;
    outArray[ctr]["takeoff_state"] = factory.createScalar(currentElement_takeoff_state);
    // tilt_limit
    auto currentElement_tilt_limit = (msg + ctr)->tilt_limit;
    outArray[ctr]["tilt_limit"] = factory.createScalar(currentElement_tilt_limit);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_TakeoffStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_TakeoffStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_TakeoffStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::TakeoffStatus,ros2_px4_msgs_msg_TakeoffStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_TakeoffStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::TakeoffStatus,ros2_px4_msgs_msg_TakeoffStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_TakeoffStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::TakeoffStatus>();
    ros2_px4_msgs_msg_TakeoffStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_TakeoffStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_TakeoffStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::TakeoffStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_TakeoffStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::TakeoffStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_TakeoffStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER