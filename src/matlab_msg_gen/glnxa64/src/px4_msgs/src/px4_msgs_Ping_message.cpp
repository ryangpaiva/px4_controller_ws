// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/Ping
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
#include "px4_msgs/msg/ping.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_Ping_common : public MATLABROS2MsgInterface<px4_msgs::msg::Ping> {
  public:
    virtual ~ros2_px4_msgs_msg_Ping_common(){}
    virtual void copy_from_struct(px4_msgs::msg::Ping* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::Ping* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_Ping_common::copy_from_struct(px4_msgs::msg::Ping* msg, const matlab::data::Struct& arr,
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
        //ping_time
        const matlab::data::TypedArray<uint64_t> ping_time_arr = arr["ping_time"];
        msg->ping_time = ping_time_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ping_time' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ping_time' is wrong type; expected a uint64.");
    }
    try {
        //ping_sequence
        const matlab::data::TypedArray<uint32_t> ping_sequence_arr = arr["ping_sequence"];
        msg->ping_sequence = ping_sequence_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ping_sequence' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ping_sequence' is wrong type; expected a uint32.");
    }
    try {
        //dropped_packets
        const matlab::data::TypedArray<uint32_t> dropped_packets_arr = arr["dropped_packets"];
        msg->dropped_packets = dropped_packets_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'dropped_packets' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'dropped_packets' is wrong type; expected a uint32.");
    }
    try {
        //rtt_ms
        const matlab::data::TypedArray<float> rtt_ms_arr = arr["rtt_ms"];
        msg->rtt_ms = rtt_ms_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rtt_ms' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rtt_ms' is wrong type; expected a single.");
    }
    try {
        //system_id
        const matlab::data::TypedArray<uint8_t> system_id_arr = arr["system_id"];
        msg->system_id = system_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'system_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'system_id' is wrong type; expected a uint8.");
    }
    try {
        //component_id
        const matlab::data::TypedArray<uint8_t> component_id_arr = arr["component_id"];
        msg->component_id = component_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'component_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'component_id' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_Ping_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::Ping* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","ping_time","ping_sequence","dropped_packets","rtt_ms","system_id","component_id"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/Ping");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // ping_time
    auto currentElement_ping_time = (msg + ctr)->ping_time;
    outArray[ctr]["ping_time"] = factory.createScalar(currentElement_ping_time);
    // ping_sequence
    auto currentElement_ping_sequence = (msg + ctr)->ping_sequence;
    outArray[ctr]["ping_sequence"] = factory.createScalar(currentElement_ping_sequence);
    // dropped_packets
    auto currentElement_dropped_packets = (msg + ctr)->dropped_packets;
    outArray[ctr]["dropped_packets"] = factory.createScalar(currentElement_dropped_packets);
    // rtt_ms
    auto currentElement_rtt_ms = (msg + ctr)->rtt_ms;
    outArray[ctr]["rtt_ms"] = factory.createScalar(currentElement_rtt_ms);
    // system_id
    auto currentElement_system_id = (msg + ctr)->system_id;
    outArray[ctr]["system_id"] = factory.createScalar(currentElement_system_id);
    // component_id
    auto currentElement_component_id = (msg + ctr)->component_id;
    outArray[ctr]["component_id"] = factory.createScalar(currentElement_component_id);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_Ping_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_Ping_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_Ping_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::Ping,ros2_px4_msgs_msg_Ping_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_Ping_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::Ping,ros2_px4_msgs_msg_Ping_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_Ping_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::Ping>();
    ros2_px4_msgs_msg_Ping_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_Ping_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_Ping_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::Ping*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_Ping_common, MATLABROS2MsgInterface<px4_msgs::msg::Ping>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_Ping_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER