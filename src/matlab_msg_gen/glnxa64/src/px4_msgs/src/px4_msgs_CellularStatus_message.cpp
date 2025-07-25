// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/CellularStatus
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
#include "px4_msgs/msg/cellular_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_CellularStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::CellularStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_CellularStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::CellularStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::CellularStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_CellularStatus_common::copy_from_struct(px4_msgs::msg::CellularStatus* msg, const matlab::data::Struct& arr,
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
        //status
        const matlab::data::TypedArray<uint16_t> status_arr = arr["status"];
        msg->status = status_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'status' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'status' is wrong type; expected a uint16.");
    }
    try {
        //failure_reason
        const matlab::data::TypedArray<uint8_t> failure_reason_arr = arr["failure_reason"];
        msg->failure_reason = failure_reason_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'failure_reason' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'failure_reason' is wrong type; expected a uint8.");
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
        //quality
        const matlab::data::TypedArray<uint8_t> quality_arr = arr["quality"];
        msg->quality = quality_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'quality' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'quality' is wrong type; expected a uint8.");
    }
    try {
        //mcc
        const matlab::data::TypedArray<uint16_t> mcc_arr = arr["mcc"];
        msg->mcc = mcc_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mcc' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mcc' is wrong type; expected a uint16.");
    }
    try {
        //mnc
        const matlab::data::TypedArray<uint16_t> mnc_arr = arr["mnc"];
        msg->mnc = mnc_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mnc' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mnc' is wrong type; expected a uint16.");
    }
    try {
        //lac
        const matlab::data::TypedArray<uint16_t> lac_arr = arr["lac"];
        msg->lac = lac_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'lac' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'lac' is wrong type; expected a uint16.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_CellularStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::CellularStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","CELLULAR_STATUS_FLAG_UNKNOWN","CELLULAR_STATUS_FLAG_FAILED","CELLULAR_STATUS_FLAG_INITIALIZING","CELLULAR_STATUS_FLAG_LOCKED","CELLULAR_STATUS_FLAG_DISABLED","CELLULAR_STATUS_FLAG_DISABLING","CELLULAR_STATUS_FLAG_ENABLING","CELLULAR_STATUS_FLAG_ENABLED","CELLULAR_STATUS_FLAG_SEARCHING","CELLULAR_STATUS_FLAG_REGISTERED","CELLULAR_STATUS_FLAG_DISCONNECTING","CELLULAR_STATUS_FLAG_CONNECTING","CELLULAR_STATUS_FLAG_CONNECTED","CELLULAR_NETWORK_FAILED_REASON_NONE","CELLULAR_NETWORK_FAILED_REASON_UNKNOWN","CELLULAR_NETWORK_FAILED_REASON_SIM_MISSING","CELLULAR_NETWORK_FAILED_REASON_SIM_ERROR","status","failure_reason","type","quality","mcc","mnc","lac"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/CellularStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // CELLULAR_STATUS_FLAG_UNKNOWN
    auto currentElement_CELLULAR_STATUS_FLAG_UNKNOWN = (msg + ctr)->CELLULAR_STATUS_FLAG_UNKNOWN;
    outArray[ctr]["CELLULAR_STATUS_FLAG_UNKNOWN"] = factory.createScalar(currentElement_CELLULAR_STATUS_FLAG_UNKNOWN);
    // CELLULAR_STATUS_FLAG_FAILED
    auto currentElement_CELLULAR_STATUS_FLAG_FAILED = (msg + ctr)->CELLULAR_STATUS_FLAG_FAILED;
    outArray[ctr]["CELLULAR_STATUS_FLAG_FAILED"] = factory.createScalar(currentElement_CELLULAR_STATUS_FLAG_FAILED);
    // CELLULAR_STATUS_FLAG_INITIALIZING
    auto currentElement_CELLULAR_STATUS_FLAG_INITIALIZING = (msg + ctr)->CELLULAR_STATUS_FLAG_INITIALIZING;
    outArray[ctr]["CELLULAR_STATUS_FLAG_INITIALIZING"] = factory.createScalar(currentElement_CELLULAR_STATUS_FLAG_INITIALIZING);
    // CELLULAR_STATUS_FLAG_LOCKED
    auto currentElement_CELLULAR_STATUS_FLAG_LOCKED = (msg + ctr)->CELLULAR_STATUS_FLAG_LOCKED;
    outArray[ctr]["CELLULAR_STATUS_FLAG_LOCKED"] = factory.createScalar(currentElement_CELLULAR_STATUS_FLAG_LOCKED);
    // CELLULAR_STATUS_FLAG_DISABLED
    auto currentElement_CELLULAR_STATUS_FLAG_DISABLED = (msg + ctr)->CELLULAR_STATUS_FLAG_DISABLED;
    outArray[ctr]["CELLULAR_STATUS_FLAG_DISABLED"] = factory.createScalar(currentElement_CELLULAR_STATUS_FLAG_DISABLED);
    // CELLULAR_STATUS_FLAG_DISABLING
    auto currentElement_CELLULAR_STATUS_FLAG_DISABLING = (msg + ctr)->CELLULAR_STATUS_FLAG_DISABLING;
    outArray[ctr]["CELLULAR_STATUS_FLAG_DISABLING"] = factory.createScalar(currentElement_CELLULAR_STATUS_FLAG_DISABLING);
    // CELLULAR_STATUS_FLAG_ENABLING
    auto currentElement_CELLULAR_STATUS_FLAG_ENABLING = (msg + ctr)->CELLULAR_STATUS_FLAG_ENABLING;
    outArray[ctr]["CELLULAR_STATUS_FLAG_ENABLING"] = factory.createScalar(currentElement_CELLULAR_STATUS_FLAG_ENABLING);
    // CELLULAR_STATUS_FLAG_ENABLED
    auto currentElement_CELLULAR_STATUS_FLAG_ENABLED = (msg + ctr)->CELLULAR_STATUS_FLAG_ENABLED;
    outArray[ctr]["CELLULAR_STATUS_FLAG_ENABLED"] = factory.createScalar(currentElement_CELLULAR_STATUS_FLAG_ENABLED);
    // CELLULAR_STATUS_FLAG_SEARCHING
    auto currentElement_CELLULAR_STATUS_FLAG_SEARCHING = (msg + ctr)->CELLULAR_STATUS_FLAG_SEARCHING;
    outArray[ctr]["CELLULAR_STATUS_FLAG_SEARCHING"] = factory.createScalar(currentElement_CELLULAR_STATUS_FLAG_SEARCHING);
    // CELLULAR_STATUS_FLAG_REGISTERED
    auto currentElement_CELLULAR_STATUS_FLAG_REGISTERED = (msg + ctr)->CELLULAR_STATUS_FLAG_REGISTERED;
    outArray[ctr]["CELLULAR_STATUS_FLAG_REGISTERED"] = factory.createScalar(currentElement_CELLULAR_STATUS_FLAG_REGISTERED);
    // CELLULAR_STATUS_FLAG_DISCONNECTING
    auto currentElement_CELLULAR_STATUS_FLAG_DISCONNECTING = (msg + ctr)->CELLULAR_STATUS_FLAG_DISCONNECTING;
    outArray[ctr]["CELLULAR_STATUS_FLAG_DISCONNECTING"] = factory.createScalar(currentElement_CELLULAR_STATUS_FLAG_DISCONNECTING);
    // CELLULAR_STATUS_FLAG_CONNECTING
    auto currentElement_CELLULAR_STATUS_FLAG_CONNECTING = (msg + ctr)->CELLULAR_STATUS_FLAG_CONNECTING;
    outArray[ctr]["CELLULAR_STATUS_FLAG_CONNECTING"] = factory.createScalar(currentElement_CELLULAR_STATUS_FLAG_CONNECTING);
    // CELLULAR_STATUS_FLAG_CONNECTED
    auto currentElement_CELLULAR_STATUS_FLAG_CONNECTED = (msg + ctr)->CELLULAR_STATUS_FLAG_CONNECTED;
    outArray[ctr]["CELLULAR_STATUS_FLAG_CONNECTED"] = factory.createScalar(currentElement_CELLULAR_STATUS_FLAG_CONNECTED);
    // CELLULAR_NETWORK_FAILED_REASON_NONE
    auto currentElement_CELLULAR_NETWORK_FAILED_REASON_NONE = (msg + ctr)->CELLULAR_NETWORK_FAILED_REASON_NONE;
    outArray[ctr]["CELLULAR_NETWORK_FAILED_REASON_NONE"] = factory.createScalar(currentElement_CELLULAR_NETWORK_FAILED_REASON_NONE);
    // CELLULAR_NETWORK_FAILED_REASON_UNKNOWN
    auto currentElement_CELLULAR_NETWORK_FAILED_REASON_UNKNOWN = (msg + ctr)->CELLULAR_NETWORK_FAILED_REASON_UNKNOWN;
    outArray[ctr]["CELLULAR_NETWORK_FAILED_REASON_UNKNOWN"] = factory.createScalar(currentElement_CELLULAR_NETWORK_FAILED_REASON_UNKNOWN);
    // CELLULAR_NETWORK_FAILED_REASON_SIM_MISSING
    auto currentElement_CELLULAR_NETWORK_FAILED_REASON_SIM_MISSING = (msg + ctr)->CELLULAR_NETWORK_FAILED_REASON_SIM_MISSING;
    outArray[ctr]["CELLULAR_NETWORK_FAILED_REASON_SIM_MISSING"] = factory.createScalar(currentElement_CELLULAR_NETWORK_FAILED_REASON_SIM_MISSING);
    // CELLULAR_NETWORK_FAILED_REASON_SIM_ERROR
    auto currentElement_CELLULAR_NETWORK_FAILED_REASON_SIM_ERROR = (msg + ctr)->CELLULAR_NETWORK_FAILED_REASON_SIM_ERROR;
    outArray[ctr]["CELLULAR_NETWORK_FAILED_REASON_SIM_ERROR"] = factory.createScalar(currentElement_CELLULAR_NETWORK_FAILED_REASON_SIM_ERROR);
    // status
    auto currentElement_status = (msg + ctr)->status;
    outArray[ctr]["status"] = factory.createScalar(currentElement_status);
    // failure_reason
    auto currentElement_failure_reason = (msg + ctr)->failure_reason;
    outArray[ctr]["failure_reason"] = factory.createScalar(currentElement_failure_reason);
    // type
    auto currentElement_type = (msg + ctr)->type;
    outArray[ctr]["type"] = factory.createScalar(currentElement_type);
    // quality
    auto currentElement_quality = (msg + ctr)->quality;
    outArray[ctr]["quality"] = factory.createScalar(currentElement_quality);
    // mcc
    auto currentElement_mcc = (msg + ctr)->mcc;
    outArray[ctr]["mcc"] = factory.createScalar(currentElement_mcc);
    // mnc
    auto currentElement_mnc = (msg + ctr)->mnc;
    outArray[ctr]["mnc"] = factory.createScalar(currentElement_mnc);
    // lac
    auto currentElement_lac = (msg + ctr)->lac;
    outArray[ctr]["lac"] = factory.createScalar(currentElement_lac);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_CellularStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_CellularStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_CellularStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::CellularStatus,ros2_px4_msgs_msg_CellularStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_CellularStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::CellularStatus,ros2_px4_msgs_msg_CellularStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_CellularStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::CellularStatus>();
    ros2_px4_msgs_msg_CellularStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_CellularStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_CellularStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::CellularStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_CellularStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::CellularStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_CellularStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER