// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/UlogStream
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
#include "px4_msgs/msg/ulog_stream.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_UlogStream_common : public MATLABROS2MsgInterface<px4_msgs::msg::UlogStream> {
  public:
    virtual ~ros2_px4_msgs_msg_UlogStream_common(){}
    virtual void copy_from_struct(px4_msgs::msg::UlogStream* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::UlogStream* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_UlogStream_common::copy_from_struct(px4_msgs::msg::UlogStream* msg, const matlab::data::Struct& arr,
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
        //length
        const matlab::data::TypedArray<uint8_t> length_arr = arr["length"];
        msg->length = length_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'length' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'length' is wrong type; expected a uint8.");
    }
    try {
        //first_message_offset
        const matlab::data::TypedArray<uint8_t> first_message_offset_arr = arr["first_message_offset"];
        msg->first_message_offset = first_message_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'first_message_offset' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'first_message_offset' is wrong type; expected a uint8.");
    }
    try {
        //msg_sequence
        const matlab::data::TypedArray<uint16_t> msg_sequence_arr = arr["msg_sequence"];
        msg->msg_sequence = msg_sequence_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'msg_sequence' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'msg_sequence' is wrong type; expected a uint16.");
    }
    try {
        //flags
        const matlab::data::TypedArray<uint8_t> flags_arr = arr["flags"];
        msg->flags = flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flags' is wrong type; expected a uint8.");
    }
    try {
        //data
        const matlab::data::TypedArray<uint8_t> data_arr = arr["data"];
        size_t nelem = 249;
        	std::copy(data_arr.begin(), data_arr.begin()+nelem, msg->data.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'data' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'data' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_UlogStream_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::UlogStream* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","FLAGS_NEED_ACK","length","first_message_offset","msg_sequence","flags","data","ORB_QUEUE_LENGTH"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/UlogStream");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // FLAGS_NEED_ACK
    auto currentElement_FLAGS_NEED_ACK = (msg + ctr)->FLAGS_NEED_ACK;
    outArray[ctr]["FLAGS_NEED_ACK"] = factory.createScalar(currentElement_FLAGS_NEED_ACK);
    // length
    auto currentElement_length = (msg + ctr)->length;
    outArray[ctr]["length"] = factory.createScalar(currentElement_length);
    // first_message_offset
    auto currentElement_first_message_offset = (msg + ctr)->first_message_offset;
    outArray[ctr]["first_message_offset"] = factory.createScalar(currentElement_first_message_offset);
    // msg_sequence
    auto currentElement_msg_sequence = (msg + ctr)->msg_sequence;
    outArray[ctr]["msg_sequence"] = factory.createScalar(currentElement_msg_sequence);
    // flags
    auto currentElement_flags = (msg + ctr)->flags;
    outArray[ctr]["flags"] = factory.createScalar(currentElement_flags);
    // data
    auto currentElement_data = (msg + ctr)->data;
    outArray[ctr]["data"] = factory.createArray<px4_msgs::msg::UlogStream::_data_type::const_iterator, uint8_t>({currentElement_data.size(), 1}, currentElement_data.begin(), currentElement_data.end());
    // ORB_QUEUE_LENGTH
    auto currentElement_ORB_QUEUE_LENGTH = (msg + ctr)->ORB_QUEUE_LENGTH;
    outArray[ctr]["ORB_QUEUE_LENGTH"] = factory.createScalar(currentElement_ORB_QUEUE_LENGTH);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_UlogStream_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_UlogStream_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_UlogStream_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::UlogStream,ros2_px4_msgs_msg_UlogStream_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_UlogStream_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::UlogStream,ros2_px4_msgs_msg_UlogStream_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_UlogStream_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::UlogStream>();
    ros2_px4_msgs_msg_UlogStream_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_UlogStream_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_UlogStream_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::UlogStream*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_UlogStream_common, MATLABROS2MsgInterface<px4_msgs::msg::UlogStream>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_UlogStream_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER