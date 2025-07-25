// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/Mission
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
#include "px4_msgs/msg/mission.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_Mission_common : public MATLABROS2MsgInterface<px4_msgs::msg::Mission> {
  public:
    virtual ~ros2_px4_msgs_msg_Mission_common(){}
    virtual void copy_from_struct(px4_msgs::msg::Mission* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::Mission* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_Mission_common::copy_from_struct(px4_msgs::msg::Mission* msg, const matlab::data::Struct& arr,
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
        //mission_dataman_id
        const matlab::data::TypedArray<uint8_t> mission_dataman_id_arr = arr["mission_dataman_id"];
        msg->mission_dataman_id = mission_dataman_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mission_dataman_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mission_dataman_id' is wrong type; expected a uint8.");
    }
    try {
        //fence_dataman_id
        const matlab::data::TypedArray<uint8_t> fence_dataman_id_arr = arr["fence_dataman_id"];
        msg->fence_dataman_id = fence_dataman_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fence_dataman_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fence_dataman_id' is wrong type; expected a uint8.");
    }
    try {
        //safepoint_dataman_id
        const matlab::data::TypedArray<uint8_t> safepoint_dataman_id_arr = arr["safepoint_dataman_id"];
        msg->safepoint_dataman_id = safepoint_dataman_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'safepoint_dataman_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'safepoint_dataman_id' is wrong type; expected a uint8.");
    }
    try {
        //count
        const matlab::data::TypedArray<uint16_t> count_arr = arr["count"];
        msg->count = count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'count' is wrong type; expected a uint16.");
    }
    try {
        //current_seq
        const matlab::data::TypedArray<int32_t> current_seq_arr = arr["current_seq"];
        msg->current_seq = current_seq_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'current_seq' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'current_seq' is wrong type; expected a int32.");
    }
    try {
        //land_start_index
        const matlab::data::TypedArray<int32_t> land_start_index_arr = arr["land_start_index"];
        msg->land_start_index = land_start_index_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'land_start_index' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'land_start_index' is wrong type; expected a int32.");
    }
    try {
        //land_index
        const matlab::data::TypedArray<int32_t> land_index_arr = arr["land_index"];
        msg->land_index = land_index_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'land_index' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'land_index' is wrong type; expected a int32.");
    }
    try {
        //mission_id
        const matlab::data::TypedArray<uint32_t> mission_id_arr = arr["mission_id"];
        msg->mission_id = mission_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mission_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mission_id' is wrong type; expected a uint32.");
    }
    try {
        //geofence_id
        const matlab::data::TypedArray<uint32_t> geofence_id_arr = arr["geofence_id"];
        msg->geofence_id = geofence_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'geofence_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'geofence_id' is wrong type; expected a uint32.");
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
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_Mission_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::Mission* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","mission_dataman_id","fence_dataman_id","safepoint_dataman_id","count","current_seq","land_start_index","land_index","mission_id","geofence_id","safe_points_id"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/Mission");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // mission_dataman_id
    auto currentElement_mission_dataman_id = (msg + ctr)->mission_dataman_id;
    outArray[ctr]["mission_dataman_id"] = factory.createScalar(currentElement_mission_dataman_id);
    // fence_dataman_id
    auto currentElement_fence_dataman_id = (msg + ctr)->fence_dataman_id;
    outArray[ctr]["fence_dataman_id"] = factory.createScalar(currentElement_fence_dataman_id);
    // safepoint_dataman_id
    auto currentElement_safepoint_dataman_id = (msg + ctr)->safepoint_dataman_id;
    outArray[ctr]["safepoint_dataman_id"] = factory.createScalar(currentElement_safepoint_dataman_id);
    // count
    auto currentElement_count = (msg + ctr)->count;
    outArray[ctr]["count"] = factory.createScalar(currentElement_count);
    // current_seq
    auto currentElement_current_seq = (msg + ctr)->current_seq;
    outArray[ctr]["current_seq"] = factory.createScalar(currentElement_current_seq);
    // land_start_index
    auto currentElement_land_start_index = (msg + ctr)->land_start_index;
    outArray[ctr]["land_start_index"] = factory.createScalar(currentElement_land_start_index);
    // land_index
    auto currentElement_land_index = (msg + ctr)->land_index;
    outArray[ctr]["land_index"] = factory.createScalar(currentElement_land_index);
    // mission_id
    auto currentElement_mission_id = (msg + ctr)->mission_id;
    outArray[ctr]["mission_id"] = factory.createScalar(currentElement_mission_id);
    // geofence_id
    auto currentElement_geofence_id = (msg + ctr)->geofence_id;
    outArray[ctr]["geofence_id"] = factory.createScalar(currentElement_geofence_id);
    // safe_points_id
    auto currentElement_safe_points_id = (msg + ctr)->safe_points_id;
    outArray[ctr]["safe_points_id"] = factory.createScalar(currentElement_safe_points_id);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_Mission_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_Mission_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_Mission_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::Mission,ros2_px4_msgs_msg_Mission_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_Mission_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::Mission,ros2_px4_msgs_msg_Mission_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_Mission_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::Mission>();
    ros2_px4_msgs_msg_Mission_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_Mission_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_Mission_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::Mission*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_Mission_common, MATLABROS2MsgInterface<px4_msgs::msg::Mission>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_Mission_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER