// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/LoggerStatus
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
#include "px4_msgs/msg/logger_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_LoggerStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::LoggerStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_LoggerStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::LoggerStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::LoggerStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_LoggerStatus_common::copy_from_struct(px4_msgs::msg::LoggerStatus* msg, const matlab::data::Struct& arr,
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
        //type
        const matlab::data::TypedArray<uint8_t> type_arr = arr["type"];
        msg->type = type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'type' is wrong type; expected a uint8.");
    }
    try {
        //backend
        const matlab::data::TypedArray<uint8_t> backend_arr = arr["backend"];
        msg->backend = backend_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'backend' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'backend' is wrong type; expected a uint8.");
    }
    try {
        //is_logging
        const matlab::data::TypedArray<bool> is_logging_arr = arr["is_logging"];
        msg->is_logging = is_logging_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'is_logging' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'is_logging' is wrong type; expected a logical.");
    }
    try {
        //total_written_kb
        const matlab::data::TypedArray<float> total_written_kb_arr = arr["total_written_kb"];
        msg->total_written_kb = total_written_kb_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'total_written_kb' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'total_written_kb' is wrong type; expected a single.");
    }
    try {
        //write_rate_kb_s
        const matlab::data::TypedArray<float> write_rate_kb_s_arr = arr["write_rate_kb_s"];
        msg->write_rate_kb_s = write_rate_kb_s_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'write_rate_kb_s' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'write_rate_kb_s' is wrong type; expected a single.");
    }
    try {
        //dropouts
        const matlab::data::TypedArray<uint32_t> dropouts_arr = arr["dropouts"];
        msg->dropouts = dropouts_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'dropouts' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'dropouts' is wrong type; expected a uint32.");
    }
    try {
        //message_gaps
        const matlab::data::TypedArray<uint32_t> message_gaps_arr = arr["message_gaps"];
        msg->message_gaps = message_gaps_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'message_gaps' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'message_gaps' is wrong type; expected a uint32.");
    }
    try {
        //buffer_used_bytes
        const matlab::data::TypedArray<uint32_t> buffer_used_bytes_arr = arr["buffer_used_bytes"];
        msg->buffer_used_bytes = buffer_used_bytes_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'buffer_used_bytes' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'buffer_used_bytes' is wrong type; expected a uint32.");
    }
    try {
        //buffer_size_bytes
        const matlab::data::TypedArray<uint32_t> buffer_size_bytes_arr = arr["buffer_size_bytes"];
        msg->buffer_size_bytes = buffer_size_bytes_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'buffer_size_bytes' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'buffer_size_bytes' is wrong type; expected a uint32.");
    }
    try {
        //num_messages
        const matlab::data::TypedArray<uint8_t> num_messages_arr = arr["num_messages"];
        msg->num_messages = num_messages_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'num_messages' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'num_messages' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_LoggerStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::LoggerStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","LOGGER_TYPE_FULL","LOGGER_TYPE_MISSION","type","BACKEND_FILE","BACKEND_MAVLINK","BACKEND_ALL","backend","is_logging","total_written_kb","write_rate_kb_s","dropouts","message_gaps","buffer_used_bytes","buffer_size_bytes","num_messages"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/LoggerStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // LOGGER_TYPE_FULL
    auto currentElement_LOGGER_TYPE_FULL = (msg + ctr)->LOGGER_TYPE_FULL;
    outArray[ctr]["LOGGER_TYPE_FULL"] = factory.createScalar(currentElement_LOGGER_TYPE_FULL);
    // LOGGER_TYPE_MISSION
    auto currentElement_LOGGER_TYPE_MISSION = (msg + ctr)->LOGGER_TYPE_MISSION;
    outArray[ctr]["LOGGER_TYPE_MISSION"] = factory.createScalar(currentElement_LOGGER_TYPE_MISSION);
    // type
    auto currentElement_type = (msg + ctr)->type;
    outArray[ctr]["type"] = factory.createScalar(currentElement_type);
    // BACKEND_FILE
    auto currentElement_BACKEND_FILE = (msg + ctr)->BACKEND_FILE;
    outArray[ctr]["BACKEND_FILE"] = factory.createScalar(currentElement_BACKEND_FILE);
    // BACKEND_MAVLINK
    auto currentElement_BACKEND_MAVLINK = (msg + ctr)->BACKEND_MAVLINK;
    outArray[ctr]["BACKEND_MAVLINK"] = factory.createScalar(currentElement_BACKEND_MAVLINK);
    // BACKEND_ALL
    auto currentElement_BACKEND_ALL = (msg + ctr)->BACKEND_ALL;
    outArray[ctr]["BACKEND_ALL"] = factory.createScalar(currentElement_BACKEND_ALL);
    // backend
    auto currentElement_backend = (msg + ctr)->backend;
    outArray[ctr]["backend"] = factory.createScalar(currentElement_backend);
    // is_logging
    auto currentElement_is_logging = (msg + ctr)->is_logging;
    outArray[ctr]["is_logging"] = factory.createScalar(currentElement_is_logging);
    // total_written_kb
    auto currentElement_total_written_kb = (msg + ctr)->total_written_kb;
    outArray[ctr]["total_written_kb"] = factory.createScalar(currentElement_total_written_kb);
    // write_rate_kb_s
    auto currentElement_write_rate_kb_s = (msg + ctr)->write_rate_kb_s;
    outArray[ctr]["write_rate_kb_s"] = factory.createScalar(currentElement_write_rate_kb_s);
    // dropouts
    auto currentElement_dropouts = (msg + ctr)->dropouts;
    outArray[ctr]["dropouts"] = factory.createScalar(currentElement_dropouts);
    // message_gaps
    auto currentElement_message_gaps = (msg + ctr)->message_gaps;
    outArray[ctr]["message_gaps"] = factory.createScalar(currentElement_message_gaps);
    // buffer_used_bytes
    auto currentElement_buffer_used_bytes = (msg + ctr)->buffer_used_bytes;
    outArray[ctr]["buffer_used_bytes"] = factory.createScalar(currentElement_buffer_used_bytes);
    // buffer_size_bytes
    auto currentElement_buffer_size_bytes = (msg + ctr)->buffer_size_bytes;
    outArray[ctr]["buffer_size_bytes"] = factory.createScalar(currentElement_buffer_size_bytes);
    // num_messages
    auto currentElement_num_messages = (msg + ctr)->num_messages;
    outArray[ctr]["num_messages"] = factory.createScalar(currentElement_num_messages);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_LoggerStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_LoggerStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_LoggerStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::LoggerStatus,ros2_px4_msgs_msg_LoggerStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_LoggerStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::LoggerStatus,ros2_px4_msgs_msg_LoggerStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_LoggerStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::LoggerStatus>();
    ros2_px4_msgs_msg_LoggerStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_LoggerStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_LoggerStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::LoggerStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_LoggerStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::LoggerStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_LoggerStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER