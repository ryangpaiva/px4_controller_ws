// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/UavcanParameterRequest
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
#include "px4_msgs/msg/uavcan_parameter_request.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_UavcanParameterRequest_common : public MATLABROS2MsgInterface<px4_msgs::msg::UavcanParameterRequest> {
  public:
    virtual ~ros2_px4_msgs_msg_UavcanParameterRequest_common(){}
    virtual void copy_from_struct(px4_msgs::msg::UavcanParameterRequest* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::UavcanParameterRequest* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_UavcanParameterRequest_common::copy_from_struct(px4_msgs::msg::UavcanParameterRequest* msg, const matlab::data::Struct& arr,
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
        //message_type
        const matlab::data::TypedArray<uint8_t> message_type_arr = arr["message_type"];
        msg->message_type = message_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'message_type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'message_type' is wrong type; expected a uint8.");
    }
    try {
        //node_id
        const matlab::data::TypedArray<uint8_t> node_id_arr = arr["node_id"];
        msg->node_id = node_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'node_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'node_id' is wrong type; expected a uint8.");
    }
    try {
        //param_id
        const matlab::data::CharArray param_id_arr = arr["param_id"];
        const std::string param_id_str = param_id_arr.toAscii();
        size_t nelem = 17;
        	std::copy(param_id_arr.begin(), param_id_arr.begin()+nelem, msg->param_id.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'param_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'param_id' is wrong type; expected a char.");
    }
    try {
        //param_index
        const matlab::data::TypedArray<int16_t> param_index_arr = arr["param_index"];
        msg->param_index = param_index_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'param_index' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'param_index' is wrong type; expected a int16.");
    }
    try {
        //param_type
        const matlab::data::TypedArray<uint8_t> param_type_arr = arr["param_type"];
        msg->param_type = param_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'param_type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'param_type' is wrong type; expected a uint8.");
    }
    try {
        //int_value
        const matlab::data::TypedArray<int64_t> int_value_arr = arr["int_value"];
        msg->int_value = int_value_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'int_value' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'int_value' is wrong type; expected a int64.");
    }
    try {
        //real_value
        const matlab::data::TypedArray<float> real_value_arr = arr["real_value"];
        msg->real_value = real_value_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'real_value' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'real_value' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_UavcanParameterRequest_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::UavcanParameterRequest* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","MESSAGE_TYPE_PARAM_REQUEST_READ","MESSAGE_TYPE_PARAM_REQUEST_LIST","MESSAGE_TYPE_PARAM_SET","message_type","NODE_ID_ALL","node_id","param_id","param_index","PARAM_TYPE_UINT8","PARAM_TYPE_INT64","PARAM_TYPE_REAL32","param_type","int_value","real_value","ORB_QUEUE_LENGTH"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/UavcanParameterRequest");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // MESSAGE_TYPE_PARAM_REQUEST_READ
    auto currentElement_MESSAGE_TYPE_PARAM_REQUEST_READ = (msg + ctr)->MESSAGE_TYPE_PARAM_REQUEST_READ;
    outArray[ctr]["MESSAGE_TYPE_PARAM_REQUEST_READ"] = factory.createScalar(currentElement_MESSAGE_TYPE_PARAM_REQUEST_READ);
    // MESSAGE_TYPE_PARAM_REQUEST_LIST
    auto currentElement_MESSAGE_TYPE_PARAM_REQUEST_LIST = (msg + ctr)->MESSAGE_TYPE_PARAM_REQUEST_LIST;
    outArray[ctr]["MESSAGE_TYPE_PARAM_REQUEST_LIST"] = factory.createScalar(currentElement_MESSAGE_TYPE_PARAM_REQUEST_LIST);
    // MESSAGE_TYPE_PARAM_SET
    auto currentElement_MESSAGE_TYPE_PARAM_SET = (msg + ctr)->MESSAGE_TYPE_PARAM_SET;
    outArray[ctr]["MESSAGE_TYPE_PARAM_SET"] = factory.createScalar(currentElement_MESSAGE_TYPE_PARAM_SET);
    // message_type
    auto currentElement_message_type = (msg + ctr)->message_type;
    outArray[ctr]["message_type"] = factory.createScalar(currentElement_message_type);
    // NODE_ID_ALL
    auto currentElement_NODE_ID_ALL = (msg + ctr)->NODE_ID_ALL;
    outArray[ctr]["NODE_ID_ALL"] = factory.createScalar(currentElement_NODE_ID_ALL);
    // node_id
    auto currentElement_node_id = (msg + ctr)->node_id;
    outArray[ctr]["node_id"] = factory.createScalar(currentElement_node_id);
    // param_id
    auto currentElement_param_id = (msg + ctr)->param_id;
    outArray[ctr]["param_id"] = factory.createCharArray(std::string(currentElement_param_id.begin(),currentElement_param_id.end()));
    // param_index
    auto currentElement_param_index = (msg + ctr)->param_index;
    outArray[ctr]["param_index"] = factory.createScalar(currentElement_param_index);
    // PARAM_TYPE_UINT8
    auto currentElement_PARAM_TYPE_UINT8 = (msg + ctr)->PARAM_TYPE_UINT8;
    outArray[ctr]["PARAM_TYPE_UINT8"] = factory.createScalar(currentElement_PARAM_TYPE_UINT8);
    // PARAM_TYPE_INT64
    auto currentElement_PARAM_TYPE_INT64 = (msg + ctr)->PARAM_TYPE_INT64;
    outArray[ctr]["PARAM_TYPE_INT64"] = factory.createScalar(currentElement_PARAM_TYPE_INT64);
    // PARAM_TYPE_REAL32
    auto currentElement_PARAM_TYPE_REAL32 = (msg + ctr)->PARAM_TYPE_REAL32;
    outArray[ctr]["PARAM_TYPE_REAL32"] = factory.createScalar(currentElement_PARAM_TYPE_REAL32);
    // param_type
    auto currentElement_param_type = (msg + ctr)->param_type;
    outArray[ctr]["param_type"] = factory.createScalar(currentElement_param_type);
    // int_value
    auto currentElement_int_value = (msg + ctr)->int_value;
    outArray[ctr]["int_value"] = factory.createScalar(currentElement_int_value);
    // real_value
    auto currentElement_real_value = (msg + ctr)->real_value;
    outArray[ctr]["real_value"] = factory.createScalar(currentElement_real_value);
    // ORB_QUEUE_LENGTH
    auto currentElement_ORB_QUEUE_LENGTH = (msg + ctr)->ORB_QUEUE_LENGTH;
    outArray[ctr]["ORB_QUEUE_LENGTH"] = factory.createScalar(currentElement_ORB_QUEUE_LENGTH);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_UavcanParameterRequest_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_UavcanParameterRequest_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_UavcanParameterRequest_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::UavcanParameterRequest,ros2_px4_msgs_msg_UavcanParameterRequest_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_UavcanParameterRequest_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::UavcanParameterRequest,ros2_px4_msgs_msg_UavcanParameterRequest_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_UavcanParameterRequest_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::UavcanParameterRequest>();
    ros2_px4_msgs_msg_UavcanParameterRequest_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_UavcanParameterRequest_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_UavcanParameterRequest_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::UavcanParameterRequest*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_UavcanParameterRequest_common, MATLABROS2MsgInterface<px4_msgs::msg::UavcanParameterRequest>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_UavcanParameterRequest_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER