// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/RadioStatus
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
#include "px4_msgs/msg/radio_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_RadioStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::RadioStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_RadioStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::RadioStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::RadioStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_RadioStatus_common::copy_from_struct(px4_msgs::msg::RadioStatus* msg, const matlab::data::Struct& arr,
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
        //rssi
        const matlab::data::TypedArray<uint8_t> rssi_arr = arr["rssi"];
        msg->rssi = rssi_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rssi' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rssi' is wrong type; expected a uint8.");
    }
    try {
        //remote_rssi
        const matlab::data::TypedArray<uint8_t> remote_rssi_arr = arr["remote_rssi"];
        msg->remote_rssi = remote_rssi_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'remote_rssi' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'remote_rssi' is wrong type; expected a uint8.");
    }
    try {
        //txbuf
        const matlab::data::TypedArray<uint8_t> txbuf_arr = arr["txbuf"];
        msg->txbuf = txbuf_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'txbuf' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'txbuf' is wrong type; expected a uint8.");
    }
    try {
        //noise
        const matlab::data::TypedArray<uint8_t> noise_arr = arr["noise"];
        msg->noise = noise_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'noise' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'noise' is wrong type; expected a uint8.");
    }
    try {
        //remote_noise
        const matlab::data::TypedArray<uint8_t> remote_noise_arr = arr["remote_noise"];
        msg->remote_noise = remote_noise_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'remote_noise' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'remote_noise' is wrong type; expected a uint8.");
    }
    try {
        //rxerrors
        const matlab::data::TypedArray<uint16_t> rxerrors_arr = arr["rxerrors"];
        msg->rxerrors = rxerrors_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rxerrors' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rxerrors' is wrong type; expected a uint16.");
    }
    try {
        //fix
        const matlab::data::TypedArray<uint16_t> fix_arr = arr["fix"];
        msg->fix = fix_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fix' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fix' is wrong type; expected a uint16.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_RadioStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::RadioStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","rssi","remote_rssi","txbuf","noise","remote_noise","rxerrors","fix"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/RadioStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // rssi
    auto currentElement_rssi = (msg + ctr)->rssi;
    outArray[ctr]["rssi"] = factory.createScalar(currentElement_rssi);
    // remote_rssi
    auto currentElement_remote_rssi = (msg + ctr)->remote_rssi;
    outArray[ctr]["remote_rssi"] = factory.createScalar(currentElement_remote_rssi);
    // txbuf
    auto currentElement_txbuf = (msg + ctr)->txbuf;
    outArray[ctr]["txbuf"] = factory.createScalar(currentElement_txbuf);
    // noise
    auto currentElement_noise = (msg + ctr)->noise;
    outArray[ctr]["noise"] = factory.createScalar(currentElement_noise);
    // remote_noise
    auto currentElement_remote_noise = (msg + ctr)->remote_noise;
    outArray[ctr]["remote_noise"] = factory.createScalar(currentElement_remote_noise);
    // rxerrors
    auto currentElement_rxerrors = (msg + ctr)->rxerrors;
    outArray[ctr]["rxerrors"] = factory.createScalar(currentElement_rxerrors);
    // fix
    auto currentElement_fix = (msg + ctr)->fix;
    outArray[ctr]["fix"] = factory.createScalar(currentElement_fix);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_RadioStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_RadioStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_RadioStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::RadioStatus,ros2_px4_msgs_msg_RadioStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_RadioStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::RadioStatus,ros2_px4_msgs_msg_RadioStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_RadioStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::RadioStatus>();
    ros2_px4_msgs_msg_RadioStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_RadioStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_RadioStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::RadioStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_RadioStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::RadioStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_RadioStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER