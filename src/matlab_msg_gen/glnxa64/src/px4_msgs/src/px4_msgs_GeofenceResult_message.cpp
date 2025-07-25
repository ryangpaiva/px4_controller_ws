// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/GeofenceResult
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
#include "px4_msgs/msg/geofence_result.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_GeofenceResult_common : public MATLABROS2MsgInterface<px4_msgs::msg::GeofenceResult> {
  public:
    virtual ~ros2_px4_msgs_msg_GeofenceResult_common(){}
    virtual void copy_from_struct(px4_msgs::msg::GeofenceResult* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::GeofenceResult* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_GeofenceResult_common::copy_from_struct(px4_msgs::msg::GeofenceResult* msg, const matlab::data::Struct& arr,
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
        //geofence_max_dist_triggered
        const matlab::data::TypedArray<bool> geofence_max_dist_triggered_arr = arr["geofence_max_dist_triggered"];
        msg->geofence_max_dist_triggered = geofence_max_dist_triggered_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'geofence_max_dist_triggered' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'geofence_max_dist_triggered' is wrong type; expected a logical.");
    }
    try {
        //geofence_max_alt_triggered
        const matlab::data::TypedArray<bool> geofence_max_alt_triggered_arr = arr["geofence_max_alt_triggered"];
        msg->geofence_max_alt_triggered = geofence_max_alt_triggered_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'geofence_max_alt_triggered' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'geofence_max_alt_triggered' is wrong type; expected a logical.");
    }
    try {
        //geofence_custom_fence_triggered
        const matlab::data::TypedArray<bool> geofence_custom_fence_triggered_arr = arr["geofence_custom_fence_triggered"];
        msg->geofence_custom_fence_triggered = geofence_custom_fence_triggered_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'geofence_custom_fence_triggered' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'geofence_custom_fence_triggered' is wrong type; expected a logical.");
    }
    try {
        //geofence_action
        const matlab::data::TypedArray<uint8_t> geofence_action_arr = arr["geofence_action"];
        msg->geofence_action = geofence_action_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'geofence_action' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'geofence_action' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_GeofenceResult_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::GeofenceResult* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","GF_ACTION_NONE","GF_ACTION_WARN","GF_ACTION_LOITER","GF_ACTION_RTL","GF_ACTION_TERMINATE","GF_ACTION_LAND","geofence_max_dist_triggered","geofence_max_alt_triggered","geofence_custom_fence_triggered","geofence_action"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/GeofenceResult");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // GF_ACTION_NONE
    auto currentElement_GF_ACTION_NONE = (msg + ctr)->GF_ACTION_NONE;
    outArray[ctr]["GF_ACTION_NONE"] = factory.createScalar(currentElement_GF_ACTION_NONE);
    // GF_ACTION_WARN
    auto currentElement_GF_ACTION_WARN = (msg + ctr)->GF_ACTION_WARN;
    outArray[ctr]["GF_ACTION_WARN"] = factory.createScalar(currentElement_GF_ACTION_WARN);
    // GF_ACTION_LOITER
    auto currentElement_GF_ACTION_LOITER = (msg + ctr)->GF_ACTION_LOITER;
    outArray[ctr]["GF_ACTION_LOITER"] = factory.createScalar(currentElement_GF_ACTION_LOITER);
    // GF_ACTION_RTL
    auto currentElement_GF_ACTION_RTL = (msg + ctr)->GF_ACTION_RTL;
    outArray[ctr]["GF_ACTION_RTL"] = factory.createScalar(currentElement_GF_ACTION_RTL);
    // GF_ACTION_TERMINATE
    auto currentElement_GF_ACTION_TERMINATE = (msg + ctr)->GF_ACTION_TERMINATE;
    outArray[ctr]["GF_ACTION_TERMINATE"] = factory.createScalar(currentElement_GF_ACTION_TERMINATE);
    // GF_ACTION_LAND
    auto currentElement_GF_ACTION_LAND = (msg + ctr)->GF_ACTION_LAND;
    outArray[ctr]["GF_ACTION_LAND"] = factory.createScalar(currentElement_GF_ACTION_LAND);
    // geofence_max_dist_triggered
    auto currentElement_geofence_max_dist_triggered = (msg + ctr)->geofence_max_dist_triggered;
    outArray[ctr]["geofence_max_dist_triggered"] = factory.createScalar(currentElement_geofence_max_dist_triggered);
    // geofence_max_alt_triggered
    auto currentElement_geofence_max_alt_triggered = (msg + ctr)->geofence_max_alt_triggered;
    outArray[ctr]["geofence_max_alt_triggered"] = factory.createScalar(currentElement_geofence_max_alt_triggered);
    // geofence_custom_fence_triggered
    auto currentElement_geofence_custom_fence_triggered = (msg + ctr)->geofence_custom_fence_triggered;
    outArray[ctr]["geofence_custom_fence_triggered"] = factory.createScalar(currentElement_geofence_custom_fence_triggered);
    // geofence_action
    auto currentElement_geofence_action = (msg + ctr)->geofence_action;
    outArray[ctr]["geofence_action"] = factory.createScalar(currentElement_geofence_action);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_GeofenceResult_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_GeofenceResult_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_GeofenceResult_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::GeofenceResult,ros2_px4_msgs_msg_GeofenceResult_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_GeofenceResult_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::GeofenceResult,ros2_px4_msgs_msg_GeofenceResult_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_GeofenceResult_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::GeofenceResult>();
    ros2_px4_msgs_msg_GeofenceResult_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_GeofenceResult_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_GeofenceResult_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::GeofenceResult*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_GeofenceResult_common, MATLABROS2MsgInterface<px4_msgs::msg::GeofenceResult>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_GeofenceResult_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER