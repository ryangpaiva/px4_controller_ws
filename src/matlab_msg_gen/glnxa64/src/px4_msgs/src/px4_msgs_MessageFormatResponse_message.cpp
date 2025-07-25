// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/MessageFormatResponse
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
#include "px4_msgs/msg/message_format_response.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_MessageFormatResponse_common : public MATLABROS2MsgInterface<px4_msgs::msg::MessageFormatResponse> {
  public:
    virtual ~ros2_px4_msgs_msg_MessageFormatResponse_common(){}
    virtual void copy_from_struct(px4_msgs::msg::MessageFormatResponse* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::MessageFormatResponse* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_MessageFormatResponse_common::copy_from_struct(px4_msgs::msg::MessageFormatResponse* msg, const matlab::data::Struct& arr,
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
        //protocol_version
        const matlab::data::TypedArray<uint16_t> protocol_version_arr = arr["protocol_version"];
        msg->protocol_version = protocol_version_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'protocol_version' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'protocol_version' is wrong type; expected a uint16.");
    }
    try {
        //topic_name
        const matlab::data::CharArray topic_name_arr = arr["topic_name"];
        const std::string topic_name_str = topic_name_arr.toAscii();
        size_t nelem = 50;
        	std::copy(topic_name_arr.begin(), topic_name_arr.begin()+nelem, msg->topic_name.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'topic_name' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'topic_name' is wrong type; expected a char.");
    }
    try {
        //success
        const matlab::data::TypedArray<bool> success_arr = arr["success"];
        msg->success = success_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'success' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'success' is wrong type; expected a logical.");
    }
    try {
        //message_hash
        const matlab::data::TypedArray<uint32_t> message_hash_arr = arr["message_hash"];
        msg->message_hash = message_hash_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'message_hash' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'message_hash' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_MessageFormatResponse_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::MessageFormatResponse* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","protocol_version","topic_name","success","message_hash"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/MessageFormatResponse");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // protocol_version
    auto currentElement_protocol_version = (msg + ctr)->protocol_version;
    outArray[ctr]["protocol_version"] = factory.createScalar(currentElement_protocol_version);
    // topic_name
    auto currentElement_topic_name = (msg + ctr)->topic_name;
    outArray[ctr]["topic_name"] = factory.createCharArray(std::string(currentElement_topic_name.begin(),currentElement_topic_name.end()));
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["success"] = factory.createScalar(currentElement_success);
    // message_hash
    auto currentElement_message_hash = (msg + ctr)->message_hash;
    outArray[ctr]["message_hash"] = factory.createScalar(currentElement_message_hash);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_MessageFormatResponse_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_MessageFormatResponse_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_MessageFormatResponse_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::MessageFormatResponse,ros2_px4_msgs_msg_MessageFormatResponse_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_MessageFormatResponse_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::MessageFormatResponse,ros2_px4_msgs_msg_MessageFormatResponse_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_MessageFormatResponse_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::MessageFormatResponse>();
    ros2_px4_msgs_msg_MessageFormatResponse_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_MessageFormatResponse_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_MessageFormatResponse_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::MessageFormatResponse*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_MessageFormatResponse_common, MATLABROS2MsgInterface<px4_msgs::msg::MessageFormatResponse>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_MessageFormatResponse_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER