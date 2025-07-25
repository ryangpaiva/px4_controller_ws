// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/DatamanResponse
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
#include "px4_msgs/msg/dataman_response.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_DatamanResponse_common : public MATLABROS2MsgInterface<px4_msgs::msg::DatamanResponse> {
  public:
    virtual ~ros2_px4_msgs_msg_DatamanResponse_common(){}
    virtual void copy_from_struct(px4_msgs::msg::DatamanResponse* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::DatamanResponse* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_DatamanResponse_common::copy_from_struct(px4_msgs::msg::DatamanResponse* msg, const matlab::data::Struct& arr,
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
        //client_id
        const matlab::data::TypedArray<uint8_t> client_id_arr = arr["client_id"];
        msg->client_id = client_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'client_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'client_id' is wrong type; expected a uint8.");
    }
    try {
        //request_type
        const matlab::data::TypedArray<uint8_t> request_type_arr = arr["request_type"];
        msg->request_type = request_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'request_type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'request_type' is wrong type; expected a uint8.");
    }
    try {
        //item
        const matlab::data::TypedArray<uint8_t> item_arr = arr["item"];
        msg->item = item_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'item' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'item' is wrong type; expected a uint8.");
    }
    try {
        //index
        const matlab::data::TypedArray<uint32_t> index_arr = arr["index"];
        msg->index = index_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'index' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'index' is wrong type; expected a uint32.");
    }
    try {
        //data
        const matlab::data::TypedArray<uint8_t> data_arr = arr["data"];
        size_t nelem = 56;
        	std::copy(data_arr.begin(), data_arr.begin()+nelem, msg->data.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'data' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'data' is wrong type; expected a uint8.");
    }
    try {
        //status
        const matlab::data::TypedArray<uint8_t> status_arr = arr["status"];
        msg->status = status_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'status' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'status' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_DatamanResponse_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::DatamanResponse* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","client_id","request_type","item","index","data","STATUS_SUCCESS","STATUS_FAILURE_ID_ERR","STATUS_FAILURE_NO_DATA","STATUS_FAILURE_READ_FAILED","STATUS_FAILURE_WRITE_FAILED","STATUS_FAILURE_CLEAR_FAILED","status"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/DatamanResponse");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // client_id
    auto currentElement_client_id = (msg + ctr)->client_id;
    outArray[ctr]["client_id"] = factory.createScalar(currentElement_client_id);
    // request_type
    auto currentElement_request_type = (msg + ctr)->request_type;
    outArray[ctr]["request_type"] = factory.createScalar(currentElement_request_type);
    // item
    auto currentElement_item = (msg + ctr)->item;
    outArray[ctr]["item"] = factory.createScalar(currentElement_item);
    // index
    auto currentElement_index = (msg + ctr)->index;
    outArray[ctr]["index"] = factory.createScalar(currentElement_index);
    // data
    auto currentElement_data = (msg + ctr)->data;
    outArray[ctr]["data"] = factory.createArray<px4_msgs::msg::DatamanResponse::_data_type::const_iterator, uint8_t>({currentElement_data.size(), 1}, currentElement_data.begin(), currentElement_data.end());
    // STATUS_SUCCESS
    auto currentElement_STATUS_SUCCESS = (msg + ctr)->STATUS_SUCCESS;
    outArray[ctr]["STATUS_SUCCESS"] = factory.createScalar(currentElement_STATUS_SUCCESS);
    // STATUS_FAILURE_ID_ERR
    auto currentElement_STATUS_FAILURE_ID_ERR = (msg + ctr)->STATUS_FAILURE_ID_ERR;
    outArray[ctr]["STATUS_FAILURE_ID_ERR"] = factory.createScalar(currentElement_STATUS_FAILURE_ID_ERR);
    // STATUS_FAILURE_NO_DATA
    auto currentElement_STATUS_FAILURE_NO_DATA = (msg + ctr)->STATUS_FAILURE_NO_DATA;
    outArray[ctr]["STATUS_FAILURE_NO_DATA"] = factory.createScalar(currentElement_STATUS_FAILURE_NO_DATA);
    // STATUS_FAILURE_READ_FAILED
    auto currentElement_STATUS_FAILURE_READ_FAILED = (msg + ctr)->STATUS_FAILURE_READ_FAILED;
    outArray[ctr]["STATUS_FAILURE_READ_FAILED"] = factory.createScalar(currentElement_STATUS_FAILURE_READ_FAILED);
    // STATUS_FAILURE_WRITE_FAILED
    auto currentElement_STATUS_FAILURE_WRITE_FAILED = (msg + ctr)->STATUS_FAILURE_WRITE_FAILED;
    outArray[ctr]["STATUS_FAILURE_WRITE_FAILED"] = factory.createScalar(currentElement_STATUS_FAILURE_WRITE_FAILED);
    // STATUS_FAILURE_CLEAR_FAILED
    auto currentElement_STATUS_FAILURE_CLEAR_FAILED = (msg + ctr)->STATUS_FAILURE_CLEAR_FAILED;
    outArray[ctr]["STATUS_FAILURE_CLEAR_FAILED"] = factory.createScalar(currentElement_STATUS_FAILURE_CLEAR_FAILED);
    // status
    auto currentElement_status = (msg + ctr)->status;
    outArray[ctr]["status"] = factory.createScalar(currentElement_status);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_DatamanResponse_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_DatamanResponse_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_DatamanResponse_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::DatamanResponse,ros2_px4_msgs_msg_DatamanResponse_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_DatamanResponse_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::DatamanResponse,ros2_px4_msgs_msg_DatamanResponse_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_DatamanResponse_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::DatamanResponse>();
    ros2_px4_msgs_msg_DatamanResponse_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_DatamanResponse_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_DatamanResponse_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::DatamanResponse*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_DatamanResponse_common, MATLABROS2MsgInterface<px4_msgs::msg::DatamanResponse>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_DatamanResponse_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER