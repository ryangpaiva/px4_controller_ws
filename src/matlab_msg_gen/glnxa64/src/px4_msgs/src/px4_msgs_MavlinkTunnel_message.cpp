// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/MavlinkTunnel
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
#include "px4_msgs/msg/mavlink_tunnel.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_MavlinkTunnel_common : public MATLABROS2MsgInterface<px4_msgs::msg::MavlinkTunnel> {
  public:
    virtual ~ros2_px4_msgs_msg_MavlinkTunnel_common(){}
    virtual void copy_from_struct(px4_msgs::msg::MavlinkTunnel* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::MavlinkTunnel* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_MavlinkTunnel_common::copy_from_struct(px4_msgs::msg::MavlinkTunnel* msg, const matlab::data::Struct& arr,
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
        //payload_type
        const matlab::data::TypedArray<uint16_t> payload_type_arr = arr["payload_type"];
        msg->payload_type = payload_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'payload_type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'payload_type' is wrong type; expected a uint16.");
    }
    try {
        //target_system
        const matlab::data::TypedArray<uint8_t> target_system_arr = arr["target_system"];
        msg->target_system = target_system_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'target_system' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'target_system' is wrong type; expected a uint8.");
    }
    try {
        //target_component
        const matlab::data::TypedArray<uint8_t> target_component_arr = arr["target_component"];
        msg->target_component = target_component_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'target_component' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'target_component' is wrong type; expected a uint8.");
    }
    try {
        //payload_length
        const matlab::data::TypedArray<uint8_t> payload_length_arr = arr["payload_length"];
        msg->payload_length = payload_length_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'payload_length' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'payload_length' is wrong type; expected a uint8.");
    }
    try {
        //payload
        const matlab::data::TypedArray<uint8_t> payload_arr = arr["payload"];
        size_t nelem = 128;
        	std::copy(payload_arr.begin(), payload_arr.begin()+nelem, msg->payload.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'payload' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'payload' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_MavlinkTunnel_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::MavlinkTunnel* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","MAV_TUNNEL_PAYLOAD_TYPE_UNKNOWN","MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED0","MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED1","MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED2","MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED3","MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED4","MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED5","MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED6","MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED7","MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED8","MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED9","timestamp","payload_type","target_system","target_component","payload_length","payload"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/MavlinkTunnel");
    // MAV_TUNNEL_PAYLOAD_TYPE_UNKNOWN
    auto currentElement_MAV_TUNNEL_PAYLOAD_TYPE_UNKNOWN = (msg + ctr)->MAV_TUNNEL_PAYLOAD_TYPE_UNKNOWN;
    outArray[ctr]["MAV_TUNNEL_PAYLOAD_TYPE_UNKNOWN"] = factory.createScalar(currentElement_MAV_TUNNEL_PAYLOAD_TYPE_UNKNOWN);
    // MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED0
    auto currentElement_MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED0 = (msg + ctr)->MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED0;
    outArray[ctr]["MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED0"] = factory.createScalar(currentElement_MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED0);
    // MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED1
    auto currentElement_MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED1 = (msg + ctr)->MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED1;
    outArray[ctr]["MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED1"] = factory.createScalar(currentElement_MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED1);
    // MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED2
    auto currentElement_MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED2 = (msg + ctr)->MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED2;
    outArray[ctr]["MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED2"] = factory.createScalar(currentElement_MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED2);
    // MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED3
    auto currentElement_MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED3 = (msg + ctr)->MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED3;
    outArray[ctr]["MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED3"] = factory.createScalar(currentElement_MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED3);
    // MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED4
    auto currentElement_MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED4 = (msg + ctr)->MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED4;
    outArray[ctr]["MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED4"] = factory.createScalar(currentElement_MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED4);
    // MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED5
    auto currentElement_MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED5 = (msg + ctr)->MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED5;
    outArray[ctr]["MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED5"] = factory.createScalar(currentElement_MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED5);
    // MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED6
    auto currentElement_MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED6 = (msg + ctr)->MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED6;
    outArray[ctr]["MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED6"] = factory.createScalar(currentElement_MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED6);
    // MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED7
    auto currentElement_MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED7 = (msg + ctr)->MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED7;
    outArray[ctr]["MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED7"] = factory.createScalar(currentElement_MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED7);
    // MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED8
    auto currentElement_MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED8 = (msg + ctr)->MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED8;
    outArray[ctr]["MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED8"] = factory.createScalar(currentElement_MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED8);
    // MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED9
    auto currentElement_MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED9 = (msg + ctr)->MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED9;
    outArray[ctr]["MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED9"] = factory.createScalar(currentElement_MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED9);
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // payload_type
    auto currentElement_payload_type = (msg + ctr)->payload_type;
    outArray[ctr]["payload_type"] = factory.createScalar(currentElement_payload_type);
    // target_system
    auto currentElement_target_system = (msg + ctr)->target_system;
    outArray[ctr]["target_system"] = factory.createScalar(currentElement_target_system);
    // target_component
    auto currentElement_target_component = (msg + ctr)->target_component;
    outArray[ctr]["target_component"] = factory.createScalar(currentElement_target_component);
    // payload_length
    auto currentElement_payload_length = (msg + ctr)->payload_length;
    outArray[ctr]["payload_length"] = factory.createScalar(currentElement_payload_length);
    // payload
    auto currentElement_payload = (msg + ctr)->payload;
    outArray[ctr]["payload"] = factory.createArray<px4_msgs::msg::MavlinkTunnel::_payload_type::const_iterator, uint8_t>({currentElement_payload.size(), 1}, currentElement_payload.begin(), currentElement_payload.end());
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_MavlinkTunnel_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_MavlinkTunnel_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_MavlinkTunnel_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::MavlinkTunnel,ros2_px4_msgs_msg_MavlinkTunnel_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_MavlinkTunnel_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::MavlinkTunnel,ros2_px4_msgs_msg_MavlinkTunnel_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_MavlinkTunnel_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::MavlinkTunnel>();
    ros2_px4_msgs_msg_MavlinkTunnel_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_MavlinkTunnel_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_MavlinkTunnel_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::MavlinkTunnel*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_MavlinkTunnel_common, MATLABROS2MsgInterface<px4_msgs::msg::MavlinkTunnel>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_MavlinkTunnel_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER