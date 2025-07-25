// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/CanInterfaceStatus
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
#include "px4_msgs/msg/can_interface_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_CanInterfaceStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::CanInterfaceStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_CanInterfaceStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::CanInterfaceStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::CanInterfaceStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_CanInterfaceStatus_common::copy_from_struct(px4_msgs::msg::CanInterfaceStatus* msg, const matlab::data::Struct& arr,
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
        //interface
        const matlab::data::TypedArray<uint8_t> interface_arr = arr["interface"];
        msg->interface = interface_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'interface' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'interface' is wrong type; expected a uint8.");
    }
    try {
        //io_errors
        const matlab::data::TypedArray<uint64_t> io_errors_arr = arr["io_errors"];
        msg->io_errors = io_errors_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'io_errors' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'io_errors' is wrong type; expected a uint64.");
    }
    try {
        //frames_tx
        const matlab::data::TypedArray<uint64_t> frames_tx_arr = arr["frames_tx"];
        msg->frames_tx = frames_tx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'frames_tx' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'frames_tx' is wrong type; expected a uint64.");
    }
    try {
        //frames_rx
        const matlab::data::TypedArray<uint64_t> frames_rx_arr = arr["frames_rx"];
        msg->frames_rx = frames_rx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'frames_rx' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'frames_rx' is wrong type; expected a uint64.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_CanInterfaceStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::CanInterfaceStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","interface","io_errors","frames_tx","frames_rx"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/CanInterfaceStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // interface
    auto currentElement_interface = (msg + ctr)->interface;
    outArray[ctr]["interface"] = factory.createScalar(currentElement_interface);
    // io_errors
    auto currentElement_io_errors = (msg + ctr)->io_errors;
    outArray[ctr]["io_errors"] = factory.createScalar(currentElement_io_errors);
    // frames_tx
    auto currentElement_frames_tx = (msg + ctr)->frames_tx;
    outArray[ctr]["frames_tx"] = factory.createScalar(currentElement_frames_tx);
    // frames_rx
    auto currentElement_frames_rx = (msg + ctr)->frames_rx;
    outArray[ctr]["frames_rx"] = factory.createScalar(currentElement_frames_rx);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_CanInterfaceStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_CanInterfaceStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_CanInterfaceStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::CanInterfaceStatus,ros2_px4_msgs_msg_CanInterfaceStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_CanInterfaceStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::CanInterfaceStatus,ros2_px4_msgs_msg_CanInterfaceStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_CanInterfaceStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::CanInterfaceStatus>();
    ros2_px4_msgs_msg_CanInterfaceStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_CanInterfaceStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_CanInterfaceStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::CanInterfaceStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_CanInterfaceStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::CanInterfaceStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_CanInterfaceStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER