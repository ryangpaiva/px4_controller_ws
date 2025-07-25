// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/TimesyncStatus
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
#include "px4_msgs/msg/timesync_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_TimesyncStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::TimesyncStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_TimesyncStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::TimesyncStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::TimesyncStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_TimesyncStatus_common::copy_from_struct(px4_msgs::msg::TimesyncStatus* msg, const matlab::data::Struct& arr,
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
        //source_protocol
        const matlab::data::TypedArray<uint8_t> source_protocol_arr = arr["source_protocol"];
        msg->source_protocol = source_protocol_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'source_protocol' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'source_protocol' is wrong type; expected a uint8.");
    }
    try {
        //remote_timestamp
        const matlab::data::TypedArray<uint64_t> remote_timestamp_arr = arr["remote_timestamp"];
        msg->remote_timestamp = remote_timestamp_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'remote_timestamp' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'remote_timestamp' is wrong type; expected a uint64.");
    }
    try {
        //observed_offset
        const matlab::data::TypedArray<int64_t> observed_offset_arr = arr["observed_offset"];
        msg->observed_offset = observed_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'observed_offset' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'observed_offset' is wrong type; expected a int64.");
    }
    try {
        //estimated_offset
        const matlab::data::TypedArray<int64_t> estimated_offset_arr = arr["estimated_offset"];
        msg->estimated_offset = estimated_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'estimated_offset' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'estimated_offset' is wrong type; expected a int64.");
    }
    try {
        //round_trip_time
        const matlab::data::TypedArray<uint32_t> round_trip_time_arr = arr["round_trip_time"];
        msg->round_trip_time = round_trip_time_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'round_trip_time' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'round_trip_time' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_TimesyncStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::TimesyncStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","SOURCE_PROTOCOL_UNKNOWN","SOURCE_PROTOCOL_MAVLINK","SOURCE_PROTOCOL_DDS","source_protocol","remote_timestamp","observed_offset","estimated_offset","round_trip_time"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/TimesyncStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // SOURCE_PROTOCOL_UNKNOWN
    auto currentElement_SOURCE_PROTOCOL_UNKNOWN = (msg + ctr)->SOURCE_PROTOCOL_UNKNOWN;
    outArray[ctr]["SOURCE_PROTOCOL_UNKNOWN"] = factory.createScalar(currentElement_SOURCE_PROTOCOL_UNKNOWN);
    // SOURCE_PROTOCOL_MAVLINK
    auto currentElement_SOURCE_PROTOCOL_MAVLINK = (msg + ctr)->SOURCE_PROTOCOL_MAVLINK;
    outArray[ctr]["SOURCE_PROTOCOL_MAVLINK"] = factory.createScalar(currentElement_SOURCE_PROTOCOL_MAVLINK);
    // SOURCE_PROTOCOL_DDS
    auto currentElement_SOURCE_PROTOCOL_DDS = (msg + ctr)->SOURCE_PROTOCOL_DDS;
    outArray[ctr]["SOURCE_PROTOCOL_DDS"] = factory.createScalar(currentElement_SOURCE_PROTOCOL_DDS);
    // source_protocol
    auto currentElement_source_protocol = (msg + ctr)->source_protocol;
    outArray[ctr]["source_protocol"] = factory.createScalar(currentElement_source_protocol);
    // remote_timestamp
    auto currentElement_remote_timestamp = (msg + ctr)->remote_timestamp;
    outArray[ctr]["remote_timestamp"] = factory.createScalar(currentElement_remote_timestamp);
    // observed_offset
    auto currentElement_observed_offset = (msg + ctr)->observed_offset;
    outArray[ctr]["observed_offset"] = factory.createScalar(currentElement_observed_offset);
    // estimated_offset
    auto currentElement_estimated_offset = (msg + ctr)->estimated_offset;
    outArray[ctr]["estimated_offset"] = factory.createScalar(currentElement_estimated_offset);
    // round_trip_time
    auto currentElement_round_trip_time = (msg + ctr)->round_trip_time;
    outArray[ctr]["round_trip_time"] = factory.createScalar(currentElement_round_trip_time);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_TimesyncStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_TimesyncStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_TimesyncStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::TimesyncStatus,ros2_px4_msgs_msg_TimesyncStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_TimesyncStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::TimesyncStatus,ros2_px4_msgs_msg_TimesyncStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_TimesyncStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::TimesyncStatus>();
    ros2_px4_msgs_msg_TimesyncStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_TimesyncStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_TimesyncStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::TimesyncStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_TimesyncStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::TimesyncStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_TimesyncStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER