// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/IridiumsbdStatus
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
#include "px4_msgs/msg/iridiumsbd_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_IridiumsbdStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::IridiumsbdStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_IridiumsbdStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::IridiumsbdStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::IridiumsbdStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_IridiumsbdStatus_common::copy_from_struct(px4_msgs::msg::IridiumsbdStatus* msg, const matlab::data::Struct& arr,
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
        //last_at_ok_timestamp
        const matlab::data::TypedArray<uint64_t> last_at_ok_timestamp_arr = arr["last_at_ok_timestamp"];
        msg->last_at_ok_timestamp = last_at_ok_timestamp_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'last_at_ok_timestamp' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'last_at_ok_timestamp' is wrong type; expected a uint64.");
    }
    try {
        //tx_buf_write_index
        const matlab::data::TypedArray<uint16_t> tx_buf_write_index_arr = arr["tx_buf_write_index"];
        msg->tx_buf_write_index = tx_buf_write_index_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'tx_buf_write_index' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'tx_buf_write_index' is wrong type; expected a uint16.");
    }
    try {
        //rx_buf_read_index
        const matlab::data::TypedArray<uint16_t> rx_buf_read_index_arr = arr["rx_buf_read_index"];
        msg->rx_buf_read_index = rx_buf_read_index_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rx_buf_read_index' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rx_buf_read_index' is wrong type; expected a uint16.");
    }
    try {
        //rx_buf_end_index
        const matlab::data::TypedArray<uint16_t> rx_buf_end_index_arr = arr["rx_buf_end_index"];
        msg->rx_buf_end_index = rx_buf_end_index_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rx_buf_end_index' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rx_buf_end_index' is wrong type; expected a uint16.");
    }
    try {
        //failed_sbd_sessions
        const matlab::data::TypedArray<uint16_t> failed_sbd_sessions_arr = arr["failed_sbd_sessions"];
        msg->failed_sbd_sessions = failed_sbd_sessions_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'failed_sbd_sessions' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'failed_sbd_sessions' is wrong type; expected a uint16.");
    }
    try {
        //successful_sbd_sessions
        const matlab::data::TypedArray<uint16_t> successful_sbd_sessions_arr = arr["successful_sbd_sessions"];
        msg->successful_sbd_sessions = successful_sbd_sessions_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'successful_sbd_sessions' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'successful_sbd_sessions' is wrong type; expected a uint16.");
    }
    try {
        //num_tx_buf_reset
        const matlab::data::TypedArray<uint16_t> num_tx_buf_reset_arr = arr["num_tx_buf_reset"];
        msg->num_tx_buf_reset = num_tx_buf_reset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'num_tx_buf_reset' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'num_tx_buf_reset' is wrong type; expected a uint16.");
    }
    try {
        //signal_quality
        const matlab::data::TypedArray<uint8_t> signal_quality_arr = arr["signal_quality"];
        msg->signal_quality = signal_quality_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'signal_quality' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'signal_quality' is wrong type; expected a uint8.");
    }
    try {
        //state
        const matlab::data::TypedArray<uint8_t> state_arr = arr["state"];
        msg->state = state_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'state' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'state' is wrong type; expected a uint8.");
    }
    try {
        //ring_pending
        const matlab::data::TypedArray<bool> ring_pending_arr = arr["ring_pending"];
        msg->ring_pending = ring_pending_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ring_pending' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ring_pending' is wrong type; expected a logical.");
    }
    try {
        //tx_buf_write_pending
        const matlab::data::TypedArray<bool> tx_buf_write_pending_arr = arr["tx_buf_write_pending"];
        msg->tx_buf_write_pending = tx_buf_write_pending_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'tx_buf_write_pending' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'tx_buf_write_pending' is wrong type; expected a logical.");
    }
    try {
        //tx_session_pending
        const matlab::data::TypedArray<bool> tx_session_pending_arr = arr["tx_session_pending"];
        msg->tx_session_pending = tx_session_pending_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'tx_session_pending' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'tx_session_pending' is wrong type; expected a logical.");
    }
    try {
        //rx_read_pending
        const matlab::data::TypedArray<bool> rx_read_pending_arr = arr["rx_read_pending"];
        msg->rx_read_pending = rx_read_pending_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rx_read_pending' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rx_read_pending' is wrong type; expected a logical.");
    }
    try {
        //rx_session_pending
        const matlab::data::TypedArray<bool> rx_session_pending_arr = arr["rx_session_pending"];
        msg->rx_session_pending = rx_session_pending_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rx_session_pending' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rx_session_pending' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_IridiumsbdStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::IridiumsbdStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","last_at_ok_timestamp","tx_buf_write_index","rx_buf_read_index","rx_buf_end_index","failed_sbd_sessions","successful_sbd_sessions","num_tx_buf_reset","signal_quality","state","ring_pending","tx_buf_write_pending","tx_session_pending","rx_read_pending","rx_session_pending"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/IridiumsbdStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // last_at_ok_timestamp
    auto currentElement_last_at_ok_timestamp = (msg + ctr)->last_at_ok_timestamp;
    outArray[ctr]["last_at_ok_timestamp"] = factory.createScalar(currentElement_last_at_ok_timestamp);
    // tx_buf_write_index
    auto currentElement_tx_buf_write_index = (msg + ctr)->tx_buf_write_index;
    outArray[ctr]["tx_buf_write_index"] = factory.createScalar(currentElement_tx_buf_write_index);
    // rx_buf_read_index
    auto currentElement_rx_buf_read_index = (msg + ctr)->rx_buf_read_index;
    outArray[ctr]["rx_buf_read_index"] = factory.createScalar(currentElement_rx_buf_read_index);
    // rx_buf_end_index
    auto currentElement_rx_buf_end_index = (msg + ctr)->rx_buf_end_index;
    outArray[ctr]["rx_buf_end_index"] = factory.createScalar(currentElement_rx_buf_end_index);
    // failed_sbd_sessions
    auto currentElement_failed_sbd_sessions = (msg + ctr)->failed_sbd_sessions;
    outArray[ctr]["failed_sbd_sessions"] = factory.createScalar(currentElement_failed_sbd_sessions);
    // successful_sbd_sessions
    auto currentElement_successful_sbd_sessions = (msg + ctr)->successful_sbd_sessions;
    outArray[ctr]["successful_sbd_sessions"] = factory.createScalar(currentElement_successful_sbd_sessions);
    // num_tx_buf_reset
    auto currentElement_num_tx_buf_reset = (msg + ctr)->num_tx_buf_reset;
    outArray[ctr]["num_tx_buf_reset"] = factory.createScalar(currentElement_num_tx_buf_reset);
    // signal_quality
    auto currentElement_signal_quality = (msg + ctr)->signal_quality;
    outArray[ctr]["signal_quality"] = factory.createScalar(currentElement_signal_quality);
    // state
    auto currentElement_state = (msg + ctr)->state;
    outArray[ctr]["state"] = factory.createScalar(currentElement_state);
    // ring_pending
    auto currentElement_ring_pending = (msg + ctr)->ring_pending;
    outArray[ctr]["ring_pending"] = factory.createScalar(currentElement_ring_pending);
    // tx_buf_write_pending
    auto currentElement_tx_buf_write_pending = (msg + ctr)->tx_buf_write_pending;
    outArray[ctr]["tx_buf_write_pending"] = factory.createScalar(currentElement_tx_buf_write_pending);
    // tx_session_pending
    auto currentElement_tx_session_pending = (msg + ctr)->tx_session_pending;
    outArray[ctr]["tx_session_pending"] = factory.createScalar(currentElement_tx_session_pending);
    // rx_read_pending
    auto currentElement_rx_read_pending = (msg + ctr)->rx_read_pending;
    outArray[ctr]["rx_read_pending"] = factory.createScalar(currentElement_rx_read_pending);
    // rx_session_pending
    auto currentElement_rx_session_pending = (msg + ctr)->rx_session_pending;
    outArray[ctr]["rx_session_pending"] = factory.createScalar(currentElement_rx_session_pending);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_IridiumsbdStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_IridiumsbdStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_IridiumsbdStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::IridiumsbdStatus,ros2_px4_msgs_msg_IridiumsbdStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_IridiumsbdStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::IridiumsbdStatus,ros2_px4_msgs_msg_IridiumsbdStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_IridiumsbdStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::IridiumsbdStatus>();
    ros2_px4_msgs_msg_IridiumsbdStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_IridiumsbdStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_IridiumsbdStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::IridiumsbdStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_IridiumsbdStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::IridiumsbdStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_IridiumsbdStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER