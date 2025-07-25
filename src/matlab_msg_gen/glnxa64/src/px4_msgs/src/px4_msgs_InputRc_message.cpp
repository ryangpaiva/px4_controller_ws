// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/InputRc
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
#include "px4_msgs/msg/input_rc.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_InputRc_common : public MATLABROS2MsgInterface<px4_msgs::msg::InputRc> {
  public:
    virtual ~ros2_px4_msgs_msg_InputRc_common(){}
    virtual void copy_from_struct(px4_msgs::msg::InputRc* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::InputRc* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_InputRc_common::copy_from_struct(px4_msgs::msg::InputRc* msg, const matlab::data::Struct& arr,
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
        //timestamp_last_signal
        const matlab::data::TypedArray<uint64_t> timestamp_last_signal_arr = arr["timestamp_last_signal"];
        msg->timestamp_last_signal = timestamp_last_signal_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'timestamp_last_signal' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'timestamp_last_signal' is wrong type; expected a uint64.");
    }
    try {
        //channel_count
        const matlab::data::TypedArray<uint8_t> channel_count_arr = arr["channel_count"];
        msg->channel_count = channel_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'channel_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'channel_count' is wrong type; expected a uint8.");
    }
    try {
        //rssi
        const matlab::data::TypedArray<int32_t> rssi_arr = arr["rssi"];
        msg->rssi = rssi_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rssi' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rssi' is wrong type; expected a int32.");
    }
    try {
        //rc_failsafe
        const matlab::data::TypedArray<bool> rc_failsafe_arr = arr["rc_failsafe"];
        msg->rc_failsafe = rc_failsafe_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rc_failsafe' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rc_failsafe' is wrong type; expected a logical.");
    }
    try {
        //rc_lost
        const matlab::data::TypedArray<bool> rc_lost_arr = arr["rc_lost"];
        msg->rc_lost = rc_lost_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rc_lost' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rc_lost' is wrong type; expected a logical.");
    }
    try {
        //rc_lost_frame_count
        const matlab::data::TypedArray<uint16_t> rc_lost_frame_count_arr = arr["rc_lost_frame_count"];
        msg->rc_lost_frame_count = rc_lost_frame_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rc_lost_frame_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rc_lost_frame_count' is wrong type; expected a uint16.");
    }
    try {
        //rc_total_frame_count
        const matlab::data::TypedArray<uint16_t> rc_total_frame_count_arr = arr["rc_total_frame_count"];
        msg->rc_total_frame_count = rc_total_frame_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rc_total_frame_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rc_total_frame_count' is wrong type; expected a uint16.");
    }
    try {
        //rc_ppm_frame_length
        const matlab::data::TypedArray<uint16_t> rc_ppm_frame_length_arr = arr["rc_ppm_frame_length"];
        msg->rc_ppm_frame_length = rc_ppm_frame_length_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rc_ppm_frame_length' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rc_ppm_frame_length' is wrong type; expected a uint16.");
    }
    try {
        //input_source
        const matlab::data::TypedArray<uint8_t> input_source_arr = arr["input_source"];
        msg->input_source = input_source_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'input_source' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'input_source' is wrong type; expected a uint8.");
    }
    try {
        //values
        const matlab::data::TypedArray<uint16_t> values_arr = arr["values"];
        size_t nelem = 18;
        	std::copy(values_arr.begin(), values_arr.begin()+nelem, msg->values.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'values' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'values' is wrong type; expected a uint16.");
    }
    try {
        //link_quality
        const matlab::data::TypedArray<int8_t> link_quality_arr = arr["link_quality"];
        msg->link_quality = link_quality_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'link_quality' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'link_quality' is wrong type; expected a int8.");
    }
    try {
        //rssi_dbm
        const matlab::data::TypedArray<float> rssi_dbm_arr = arr["rssi_dbm"];
        msg->rssi_dbm = rssi_dbm_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rssi_dbm' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rssi_dbm' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_InputRc_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::InputRc* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","RC_INPUT_SOURCE_UNKNOWN","RC_INPUT_SOURCE_PX4FMU_PPM","RC_INPUT_SOURCE_PX4IO_PPM","RC_INPUT_SOURCE_PX4IO_SPEKTRUM","RC_INPUT_SOURCE_PX4IO_SBUS","RC_INPUT_SOURCE_PX4IO_ST24","RC_INPUT_SOURCE_MAVLINK","RC_INPUT_SOURCE_QURT","RC_INPUT_SOURCE_PX4FMU_SPEKTRUM","RC_INPUT_SOURCE_PX4FMU_SBUS","RC_INPUT_SOURCE_PX4FMU_ST24","RC_INPUT_SOURCE_PX4FMU_SUMD","RC_INPUT_SOURCE_PX4FMU_DSM","RC_INPUT_SOURCE_PX4IO_SUMD","RC_INPUT_SOURCE_PX4FMU_CRSF","RC_INPUT_SOURCE_PX4FMU_GHST","RC_INPUT_MAX_CHANNELS","timestamp_last_signal","channel_count","RSSI_MAX","rssi","rc_failsafe","rc_lost","rc_lost_frame_count","rc_total_frame_count","rc_ppm_frame_length","input_source","values","link_quality","rssi_dbm"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/InputRc");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // RC_INPUT_SOURCE_UNKNOWN
    auto currentElement_RC_INPUT_SOURCE_UNKNOWN = (msg + ctr)->RC_INPUT_SOURCE_UNKNOWN;
    outArray[ctr]["RC_INPUT_SOURCE_UNKNOWN"] = factory.createScalar(currentElement_RC_INPUT_SOURCE_UNKNOWN);
    // RC_INPUT_SOURCE_PX4FMU_PPM
    auto currentElement_RC_INPUT_SOURCE_PX4FMU_PPM = (msg + ctr)->RC_INPUT_SOURCE_PX4FMU_PPM;
    outArray[ctr]["RC_INPUT_SOURCE_PX4FMU_PPM"] = factory.createScalar(currentElement_RC_INPUT_SOURCE_PX4FMU_PPM);
    // RC_INPUT_SOURCE_PX4IO_PPM
    auto currentElement_RC_INPUT_SOURCE_PX4IO_PPM = (msg + ctr)->RC_INPUT_SOURCE_PX4IO_PPM;
    outArray[ctr]["RC_INPUT_SOURCE_PX4IO_PPM"] = factory.createScalar(currentElement_RC_INPUT_SOURCE_PX4IO_PPM);
    // RC_INPUT_SOURCE_PX4IO_SPEKTRUM
    auto currentElement_RC_INPUT_SOURCE_PX4IO_SPEKTRUM = (msg + ctr)->RC_INPUT_SOURCE_PX4IO_SPEKTRUM;
    outArray[ctr]["RC_INPUT_SOURCE_PX4IO_SPEKTRUM"] = factory.createScalar(currentElement_RC_INPUT_SOURCE_PX4IO_SPEKTRUM);
    // RC_INPUT_SOURCE_PX4IO_SBUS
    auto currentElement_RC_INPUT_SOURCE_PX4IO_SBUS = (msg + ctr)->RC_INPUT_SOURCE_PX4IO_SBUS;
    outArray[ctr]["RC_INPUT_SOURCE_PX4IO_SBUS"] = factory.createScalar(currentElement_RC_INPUT_SOURCE_PX4IO_SBUS);
    // RC_INPUT_SOURCE_PX4IO_ST24
    auto currentElement_RC_INPUT_SOURCE_PX4IO_ST24 = (msg + ctr)->RC_INPUT_SOURCE_PX4IO_ST24;
    outArray[ctr]["RC_INPUT_SOURCE_PX4IO_ST24"] = factory.createScalar(currentElement_RC_INPUT_SOURCE_PX4IO_ST24);
    // RC_INPUT_SOURCE_MAVLINK
    auto currentElement_RC_INPUT_SOURCE_MAVLINK = (msg + ctr)->RC_INPUT_SOURCE_MAVLINK;
    outArray[ctr]["RC_INPUT_SOURCE_MAVLINK"] = factory.createScalar(currentElement_RC_INPUT_SOURCE_MAVLINK);
    // RC_INPUT_SOURCE_QURT
    auto currentElement_RC_INPUT_SOURCE_QURT = (msg + ctr)->RC_INPUT_SOURCE_QURT;
    outArray[ctr]["RC_INPUT_SOURCE_QURT"] = factory.createScalar(currentElement_RC_INPUT_SOURCE_QURT);
    // RC_INPUT_SOURCE_PX4FMU_SPEKTRUM
    auto currentElement_RC_INPUT_SOURCE_PX4FMU_SPEKTRUM = (msg + ctr)->RC_INPUT_SOURCE_PX4FMU_SPEKTRUM;
    outArray[ctr]["RC_INPUT_SOURCE_PX4FMU_SPEKTRUM"] = factory.createScalar(currentElement_RC_INPUT_SOURCE_PX4FMU_SPEKTRUM);
    // RC_INPUT_SOURCE_PX4FMU_SBUS
    auto currentElement_RC_INPUT_SOURCE_PX4FMU_SBUS = (msg + ctr)->RC_INPUT_SOURCE_PX4FMU_SBUS;
    outArray[ctr]["RC_INPUT_SOURCE_PX4FMU_SBUS"] = factory.createScalar(currentElement_RC_INPUT_SOURCE_PX4FMU_SBUS);
    // RC_INPUT_SOURCE_PX4FMU_ST24
    auto currentElement_RC_INPUT_SOURCE_PX4FMU_ST24 = (msg + ctr)->RC_INPUT_SOURCE_PX4FMU_ST24;
    outArray[ctr]["RC_INPUT_SOURCE_PX4FMU_ST24"] = factory.createScalar(currentElement_RC_INPUT_SOURCE_PX4FMU_ST24);
    // RC_INPUT_SOURCE_PX4FMU_SUMD
    auto currentElement_RC_INPUT_SOURCE_PX4FMU_SUMD = (msg + ctr)->RC_INPUT_SOURCE_PX4FMU_SUMD;
    outArray[ctr]["RC_INPUT_SOURCE_PX4FMU_SUMD"] = factory.createScalar(currentElement_RC_INPUT_SOURCE_PX4FMU_SUMD);
    // RC_INPUT_SOURCE_PX4FMU_DSM
    auto currentElement_RC_INPUT_SOURCE_PX4FMU_DSM = (msg + ctr)->RC_INPUT_SOURCE_PX4FMU_DSM;
    outArray[ctr]["RC_INPUT_SOURCE_PX4FMU_DSM"] = factory.createScalar(currentElement_RC_INPUT_SOURCE_PX4FMU_DSM);
    // RC_INPUT_SOURCE_PX4IO_SUMD
    auto currentElement_RC_INPUT_SOURCE_PX4IO_SUMD = (msg + ctr)->RC_INPUT_SOURCE_PX4IO_SUMD;
    outArray[ctr]["RC_INPUT_SOURCE_PX4IO_SUMD"] = factory.createScalar(currentElement_RC_INPUT_SOURCE_PX4IO_SUMD);
    // RC_INPUT_SOURCE_PX4FMU_CRSF
    auto currentElement_RC_INPUT_SOURCE_PX4FMU_CRSF = (msg + ctr)->RC_INPUT_SOURCE_PX4FMU_CRSF;
    outArray[ctr]["RC_INPUT_SOURCE_PX4FMU_CRSF"] = factory.createScalar(currentElement_RC_INPUT_SOURCE_PX4FMU_CRSF);
    // RC_INPUT_SOURCE_PX4FMU_GHST
    auto currentElement_RC_INPUT_SOURCE_PX4FMU_GHST = (msg + ctr)->RC_INPUT_SOURCE_PX4FMU_GHST;
    outArray[ctr]["RC_INPUT_SOURCE_PX4FMU_GHST"] = factory.createScalar(currentElement_RC_INPUT_SOURCE_PX4FMU_GHST);
    // RC_INPUT_MAX_CHANNELS
    auto currentElement_RC_INPUT_MAX_CHANNELS = (msg + ctr)->RC_INPUT_MAX_CHANNELS;
    outArray[ctr]["RC_INPUT_MAX_CHANNELS"] = factory.createScalar(currentElement_RC_INPUT_MAX_CHANNELS);
    // timestamp_last_signal
    auto currentElement_timestamp_last_signal = (msg + ctr)->timestamp_last_signal;
    outArray[ctr]["timestamp_last_signal"] = factory.createScalar(currentElement_timestamp_last_signal);
    // channel_count
    auto currentElement_channel_count = (msg + ctr)->channel_count;
    outArray[ctr]["channel_count"] = factory.createScalar(currentElement_channel_count);
    // RSSI_MAX
    auto currentElement_RSSI_MAX = (msg + ctr)->RSSI_MAX;
    outArray[ctr]["RSSI_MAX"] = factory.createScalar(currentElement_RSSI_MAX);
    // rssi
    auto currentElement_rssi = (msg + ctr)->rssi;
    outArray[ctr]["rssi"] = factory.createScalar(currentElement_rssi);
    // rc_failsafe
    auto currentElement_rc_failsafe = (msg + ctr)->rc_failsafe;
    outArray[ctr]["rc_failsafe"] = factory.createScalar(currentElement_rc_failsafe);
    // rc_lost
    auto currentElement_rc_lost = (msg + ctr)->rc_lost;
    outArray[ctr]["rc_lost"] = factory.createScalar(currentElement_rc_lost);
    // rc_lost_frame_count
    auto currentElement_rc_lost_frame_count = (msg + ctr)->rc_lost_frame_count;
    outArray[ctr]["rc_lost_frame_count"] = factory.createScalar(currentElement_rc_lost_frame_count);
    // rc_total_frame_count
    auto currentElement_rc_total_frame_count = (msg + ctr)->rc_total_frame_count;
    outArray[ctr]["rc_total_frame_count"] = factory.createScalar(currentElement_rc_total_frame_count);
    // rc_ppm_frame_length
    auto currentElement_rc_ppm_frame_length = (msg + ctr)->rc_ppm_frame_length;
    outArray[ctr]["rc_ppm_frame_length"] = factory.createScalar(currentElement_rc_ppm_frame_length);
    // input_source
    auto currentElement_input_source = (msg + ctr)->input_source;
    outArray[ctr]["input_source"] = factory.createScalar(currentElement_input_source);
    // values
    auto currentElement_values = (msg + ctr)->values;
    outArray[ctr]["values"] = factory.createArray<px4_msgs::msg::InputRc::_values_type::const_iterator, uint16_t>({currentElement_values.size(), 1}, currentElement_values.begin(), currentElement_values.end());
    // link_quality
    auto currentElement_link_quality = (msg + ctr)->link_quality;
    outArray[ctr]["link_quality"] = factory.createScalar(currentElement_link_quality);
    // rssi_dbm
    auto currentElement_rssi_dbm = (msg + ctr)->rssi_dbm;
    outArray[ctr]["rssi_dbm"] = factory.createScalar(currentElement_rssi_dbm);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_InputRc_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_InputRc_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_InputRc_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::InputRc,ros2_px4_msgs_msg_InputRc_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_InputRc_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::InputRc,ros2_px4_msgs_msg_InputRc_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_InputRc_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::InputRc>();
    ros2_px4_msgs_msg_InputRc_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_InputRc_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_InputRc_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::InputRc*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_InputRc_common, MATLABROS2MsgInterface<px4_msgs::msg::InputRc>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_InputRc_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER