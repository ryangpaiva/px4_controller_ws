// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/RtlStatus
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
#include "px4_msgs/msg/rtl_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_RtlStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::RtlStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_RtlStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::RtlStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::RtlStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_RtlStatus_common::copy_from_struct(px4_msgs::msg::RtlStatus* msg, const matlab::data::Struct& arr,
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
        //safe_points_id
        const matlab::data::TypedArray<uint32_t> safe_points_id_arr = arr["safe_points_id"];
        msg->safe_points_id = safe_points_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'safe_points_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'safe_points_id' is wrong type; expected a uint32.");
    }
    try {
        //is_evaluation_pending
        const matlab::data::TypedArray<bool> is_evaluation_pending_arr = arr["is_evaluation_pending"];
        msg->is_evaluation_pending = is_evaluation_pending_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'is_evaluation_pending' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'is_evaluation_pending' is wrong type; expected a logical.");
    }
    try {
        //has_vtol_approach
        const matlab::data::TypedArray<bool> has_vtol_approach_arr = arr["has_vtol_approach"];
        msg->has_vtol_approach = has_vtol_approach_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'has_vtol_approach' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'has_vtol_approach' is wrong type; expected a logical.");
    }
    try {
        //rtl_type
        const matlab::data::TypedArray<uint8_t> rtl_type_arr = arr["rtl_type"];
        msg->rtl_type = rtl_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rtl_type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rtl_type' is wrong type; expected a uint8.");
    }
    try {
        //safe_point_index
        const matlab::data::TypedArray<uint8_t> safe_point_index_arr = arr["safe_point_index"];
        msg->safe_point_index = safe_point_index_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'safe_point_index' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'safe_point_index' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_RtlStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::RtlStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","safe_points_id","is_evaluation_pending","has_vtol_approach","rtl_type","safe_point_index","RTL_STATUS_TYPE_NONE","RTL_STATUS_TYPE_DIRECT_SAFE_POINT","RTL_STATUS_TYPE_DIRECT_MISSION_LAND","RTL_STATUS_TYPE_FOLLOW_MISSION","RTL_STATUS_TYPE_FOLLOW_MISSION_REVERSE"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/RtlStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // safe_points_id
    auto currentElement_safe_points_id = (msg + ctr)->safe_points_id;
    outArray[ctr]["safe_points_id"] = factory.createScalar(currentElement_safe_points_id);
    // is_evaluation_pending
    auto currentElement_is_evaluation_pending = (msg + ctr)->is_evaluation_pending;
    outArray[ctr]["is_evaluation_pending"] = factory.createScalar(currentElement_is_evaluation_pending);
    // has_vtol_approach
    auto currentElement_has_vtol_approach = (msg + ctr)->has_vtol_approach;
    outArray[ctr]["has_vtol_approach"] = factory.createScalar(currentElement_has_vtol_approach);
    // rtl_type
    auto currentElement_rtl_type = (msg + ctr)->rtl_type;
    outArray[ctr]["rtl_type"] = factory.createScalar(currentElement_rtl_type);
    // safe_point_index
    auto currentElement_safe_point_index = (msg + ctr)->safe_point_index;
    outArray[ctr]["safe_point_index"] = factory.createScalar(currentElement_safe_point_index);
    // RTL_STATUS_TYPE_NONE
    auto currentElement_RTL_STATUS_TYPE_NONE = (msg + ctr)->RTL_STATUS_TYPE_NONE;
    outArray[ctr]["RTL_STATUS_TYPE_NONE"] = factory.createScalar(currentElement_RTL_STATUS_TYPE_NONE);
    // RTL_STATUS_TYPE_DIRECT_SAFE_POINT
    auto currentElement_RTL_STATUS_TYPE_DIRECT_SAFE_POINT = (msg + ctr)->RTL_STATUS_TYPE_DIRECT_SAFE_POINT;
    outArray[ctr]["RTL_STATUS_TYPE_DIRECT_SAFE_POINT"] = factory.createScalar(currentElement_RTL_STATUS_TYPE_DIRECT_SAFE_POINT);
    // RTL_STATUS_TYPE_DIRECT_MISSION_LAND
    auto currentElement_RTL_STATUS_TYPE_DIRECT_MISSION_LAND = (msg + ctr)->RTL_STATUS_TYPE_DIRECT_MISSION_LAND;
    outArray[ctr]["RTL_STATUS_TYPE_DIRECT_MISSION_LAND"] = factory.createScalar(currentElement_RTL_STATUS_TYPE_DIRECT_MISSION_LAND);
    // RTL_STATUS_TYPE_FOLLOW_MISSION
    auto currentElement_RTL_STATUS_TYPE_FOLLOW_MISSION = (msg + ctr)->RTL_STATUS_TYPE_FOLLOW_MISSION;
    outArray[ctr]["RTL_STATUS_TYPE_FOLLOW_MISSION"] = factory.createScalar(currentElement_RTL_STATUS_TYPE_FOLLOW_MISSION);
    // RTL_STATUS_TYPE_FOLLOW_MISSION_REVERSE
    auto currentElement_RTL_STATUS_TYPE_FOLLOW_MISSION_REVERSE = (msg + ctr)->RTL_STATUS_TYPE_FOLLOW_MISSION_REVERSE;
    outArray[ctr]["RTL_STATUS_TYPE_FOLLOW_MISSION_REVERSE"] = factory.createScalar(currentElement_RTL_STATUS_TYPE_FOLLOW_MISSION_REVERSE);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_RtlStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_RtlStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_RtlStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::RtlStatus,ros2_px4_msgs_msg_RtlStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_RtlStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::RtlStatus,ros2_px4_msgs_msg_RtlStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_RtlStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::RtlStatus>();
    ros2_px4_msgs_msg_RtlStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_RtlStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_RtlStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::RtlStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_RtlStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::RtlStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_RtlStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER