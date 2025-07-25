// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/RcChannels
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
#include "px4_msgs/msg/rc_channels.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_RcChannels_common : public MATLABROS2MsgInterface<px4_msgs::msg::RcChannels> {
  public:
    virtual ~ros2_px4_msgs_msg_RcChannels_common(){}
    virtual void copy_from_struct(px4_msgs::msg::RcChannels* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::RcChannels* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_RcChannels_common::copy_from_struct(px4_msgs::msg::RcChannels* msg, const matlab::data::Struct& arr,
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
        //timestamp_last_valid
        const matlab::data::TypedArray<uint64_t> timestamp_last_valid_arr = arr["timestamp_last_valid"];
        msg->timestamp_last_valid = timestamp_last_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'timestamp_last_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'timestamp_last_valid' is wrong type; expected a uint64.");
    }
    try {
        //channels
        const matlab::data::TypedArray<float> channels_arr = arr["channels"];
        size_t nelem = 18;
        	std::copy(channels_arr.begin(), channels_arr.begin()+nelem, msg->channels.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'channels' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'channels' is wrong type; expected a single.");
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
        //function
        const matlab::data::TypedArray<int8_t> function_arr = arr["function"];
        size_t nelem = 29;
        	std::copy(function_arr.begin(), function_arr.begin()+nelem, msg->function.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'function' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'function' is wrong type; expected a int8.");
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
        //signal_lost
        const matlab::data::TypedArray<bool> signal_lost_arr = arr["signal_lost"];
        msg->signal_lost = signal_lost_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'signal_lost' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'signal_lost' is wrong type; expected a logical.");
    }
    try {
        //frame_drop_count
        const matlab::data::TypedArray<uint32_t> frame_drop_count_arr = arr["frame_drop_count"];
        msg->frame_drop_count = frame_drop_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'frame_drop_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'frame_drop_count' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_RcChannels_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::RcChannels* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","FUNCTION_THROTTLE","FUNCTION_ROLL","FUNCTION_PITCH","FUNCTION_YAW","FUNCTION_RETURN","FUNCTION_LOITER","FUNCTION_OFFBOARD","FUNCTION_FLAPS","FUNCTION_AUX_1","FUNCTION_AUX_2","FUNCTION_AUX_3","FUNCTION_AUX_4","FUNCTION_AUX_5","FUNCTION_AUX_6","FUNCTION_PARAM_1","FUNCTION_PARAM_2","FUNCTION_PARAM_3_5","FUNCTION_KILLSWITCH","FUNCTION_TRANSITION","FUNCTION_GEAR","FUNCTION_ARMSWITCH","FUNCTION_FLTBTN_SLOT_1","FUNCTION_FLTBTN_SLOT_2","FUNCTION_FLTBTN_SLOT_3","FUNCTION_FLTBTN_SLOT_4","FUNCTION_FLTBTN_SLOT_5","FUNCTION_FLTBTN_SLOT_6","FUNCTION_ENGAGE_MAIN_MOTOR","FUNCTION_PAYLOAD_POWER","FUNCTION_FLTBTN_SLOT_COUNT","timestamp_last_valid","channels","channel_count","function","rssi","signal_lost","frame_drop_count"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/RcChannels");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // FUNCTION_THROTTLE
    auto currentElement_FUNCTION_THROTTLE = (msg + ctr)->FUNCTION_THROTTLE;
    outArray[ctr]["FUNCTION_THROTTLE"] = factory.createScalar(currentElement_FUNCTION_THROTTLE);
    // FUNCTION_ROLL
    auto currentElement_FUNCTION_ROLL = (msg + ctr)->FUNCTION_ROLL;
    outArray[ctr]["FUNCTION_ROLL"] = factory.createScalar(currentElement_FUNCTION_ROLL);
    // FUNCTION_PITCH
    auto currentElement_FUNCTION_PITCH = (msg + ctr)->FUNCTION_PITCH;
    outArray[ctr]["FUNCTION_PITCH"] = factory.createScalar(currentElement_FUNCTION_PITCH);
    // FUNCTION_YAW
    auto currentElement_FUNCTION_YAW = (msg + ctr)->FUNCTION_YAW;
    outArray[ctr]["FUNCTION_YAW"] = factory.createScalar(currentElement_FUNCTION_YAW);
    // FUNCTION_RETURN
    auto currentElement_FUNCTION_RETURN = (msg + ctr)->FUNCTION_RETURN;
    outArray[ctr]["FUNCTION_RETURN"] = factory.createScalar(currentElement_FUNCTION_RETURN);
    // FUNCTION_LOITER
    auto currentElement_FUNCTION_LOITER = (msg + ctr)->FUNCTION_LOITER;
    outArray[ctr]["FUNCTION_LOITER"] = factory.createScalar(currentElement_FUNCTION_LOITER);
    // FUNCTION_OFFBOARD
    auto currentElement_FUNCTION_OFFBOARD = (msg + ctr)->FUNCTION_OFFBOARD;
    outArray[ctr]["FUNCTION_OFFBOARD"] = factory.createScalar(currentElement_FUNCTION_OFFBOARD);
    // FUNCTION_FLAPS
    auto currentElement_FUNCTION_FLAPS = (msg + ctr)->FUNCTION_FLAPS;
    outArray[ctr]["FUNCTION_FLAPS"] = factory.createScalar(currentElement_FUNCTION_FLAPS);
    // FUNCTION_AUX_1
    auto currentElement_FUNCTION_AUX_1 = (msg + ctr)->FUNCTION_AUX_1;
    outArray[ctr]["FUNCTION_AUX_1"] = factory.createScalar(currentElement_FUNCTION_AUX_1);
    // FUNCTION_AUX_2
    auto currentElement_FUNCTION_AUX_2 = (msg + ctr)->FUNCTION_AUX_2;
    outArray[ctr]["FUNCTION_AUX_2"] = factory.createScalar(currentElement_FUNCTION_AUX_2);
    // FUNCTION_AUX_3
    auto currentElement_FUNCTION_AUX_3 = (msg + ctr)->FUNCTION_AUX_3;
    outArray[ctr]["FUNCTION_AUX_3"] = factory.createScalar(currentElement_FUNCTION_AUX_3);
    // FUNCTION_AUX_4
    auto currentElement_FUNCTION_AUX_4 = (msg + ctr)->FUNCTION_AUX_4;
    outArray[ctr]["FUNCTION_AUX_4"] = factory.createScalar(currentElement_FUNCTION_AUX_4);
    // FUNCTION_AUX_5
    auto currentElement_FUNCTION_AUX_5 = (msg + ctr)->FUNCTION_AUX_5;
    outArray[ctr]["FUNCTION_AUX_5"] = factory.createScalar(currentElement_FUNCTION_AUX_5);
    // FUNCTION_AUX_6
    auto currentElement_FUNCTION_AUX_6 = (msg + ctr)->FUNCTION_AUX_6;
    outArray[ctr]["FUNCTION_AUX_6"] = factory.createScalar(currentElement_FUNCTION_AUX_6);
    // FUNCTION_PARAM_1
    auto currentElement_FUNCTION_PARAM_1 = (msg + ctr)->FUNCTION_PARAM_1;
    outArray[ctr]["FUNCTION_PARAM_1"] = factory.createScalar(currentElement_FUNCTION_PARAM_1);
    // FUNCTION_PARAM_2
    auto currentElement_FUNCTION_PARAM_2 = (msg + ctr)->FUNCTION_PARAM_2;
    outArray[ctr]["FUNCTION_PARAM_2"] = factory.createScalar(currentElement_FUNCTION_PARAM_2);
    // FUNCTION_PARAM_3_5
    auto currentElement_FUNCTION_PARAM_3_5 = (msg + ctr)->FUNCTION_PARAM_3_5;
    outArray[ctr]["FUNCTION_PARAM_3_5"] = factory.createScalar(currentElement_FUNCTION_PARAM_3_5);
    // FUNCTION_KILLSWITCH
    auto currentElement_FUNCTION_KILLSWITCH = (msg + ctr)->FUNCTION_KILLSWITCH;
    outArray[ctr]["FUNCTION_KILLSWITCH"] = factory.createScalar(currentElement_FUNCTION_KILLSWITCH);
    // FUNCTION_TRANSITION
    auto currentElement_FUNCTION_TRANSITION = (msg + ctr)->FUNCTION_TRANSITION;
    outArray[ctr]["FUNCTION_TRANSITION"] = factory.createScalar(currentElement_FUNCTION_TRANSITION);
    // FUNCTION_GEAR
    auto currentElement_FUNCTION_GEAR = (msg + ctr)->FUNCTION_GEAR;
    outArray[ctr]["FUNCTION_GEAR"] = factory.createScalar(currentElement_FUNCTION_GEAR);
    // FUNCTION_ARMSWITCH
    auto currentElement_FUNCTION_ARMSWITCH = (msg + ctr)->FUNCTION_ARMSWITCH;
    outArray[ctr]["FUNCTION_ARMSWITCH"] = factory.createScalar(currentElement_FUNCTION_ARMSWITCH);
    // FUNCTION_FLTBTN_SLOT_1
    auto currentElement_FUNCTION_FLTBTN_SLOT_1 = (msg + ctr)->FUNCTION_FLTBTN_SLOT_1;
    outArray[ctr]["FUNCTION_FLTBTN_SLOT_1"] = factory.createScalar(currentElement_FUNCTION_FLTBTN_SLOT_1);
    // FUNCTION_FLTBTN_SLOT_2
    auto currentElement_FUNCTION_FLTBTN_SLOT_2 = (msg + ctr)->FUNCTION_FLTBTN_SLOT_2;
    outArray[ctr]["FUNCTION_FLTBTN_SLOT_2"] = factory.createScalar(currentElement_FUNCTION_FLTBTN_SLOT_2);
    // FUNCTION_FLTBTN_SLOT_3
    auto currentElement_FUNCTION_FLTBTN_SLOT_3 = (msg + ctr)->FUNCTION_FLTBTN_SLOT_3;
    outArray[ctr]["FUNCTION_FLTBTN_SLOT_3"] = factory.createScalar(currentElement_FUNCTION_FLTBTN_SLOT_3);
    // FUNCTION_FLTBTN_SLOT_4
    auto currentElement_FUNCTION_FLTBTN_SLOT_4 = (msg + ctr)->FUNCTION_FLTBTN_SLOT_4;
    outArray[ctr]["FUNCTION_FLTBTN_SLOT_4"] = factory.createScalar(currentElement_FUNCTION_FLTBTN_SLOT_4);
    // FUNCTION_FLTBTN_SLOT_5
    auto currentElement_FUNCTION_FLTBTN_SLOT_5 = (msg + ctr)->FUNCTION_FLTBTN_SLOT_5;
    outArray[ctr]["FUNCTION_FLTBTN_SLOT_5"] = factory.createScalar(currentElement_FUNCTION_FLTBTN_SLOT_5);
    // FUNCTION_FLTBTN_SLOT_6
    auto currentElement_FUNCTION_FLTBTN_SLOT_6 = (msg + ctr)->FUNCTION_FLTBTN_SLOT_6;
    outArray[ctr]["FUNCTION_FLTBTN_SLOT_6"] = factory.createScalar(currentElement_FUNCTION_FLTBTN_SLOT_6);
    // FUNCTION_ENGAGE_MAIN_MOTOR
    auto currentElement_FUNCTION_ENGAGE_MAIN_MOTOR = (msg + ctr)->FUNCTION_ENGAGE_MAIN_MOTOR;
    outArray[ctr]["FUNCTION_ENGAGE_MAIN_MOTOR"] = factory.createScalar(currentElement_FUNCTION_ENGAGE_MAIN_MOTOR);
    // FUNCTION_PAYLOAD_POWER
    auto currentElement_FUNCTION_PAYLOAD_POWER = (msg + ctr)->FUNCTION_PAYLOAD_POWER;
    outArray[ctr]["FUNCTION_PAYLOAD_POWER"] = factory.createScalar(currentElement_FUNCTION_PAYLOAD_POWER);
    // FUNCTION_FLTBTN_SLOT_COUNT
    auto currentElement_FUNCTION_FLTBTN_SLOT_COUNT = (msg + ctr)->FUNCTION_FLTBTN_SLOT_COUNT;
    outArray[ctr]["FUNCTION_FLTBTN_SLOT_COUNT"] = factory.createScalar(currentElement_FUNCTION_FLTBTN_SLOT_COUNT);
    // timestamp_last_valid
    auto currentElement_timestamp_last_valid = (msg + ctr)->timestamp_last_valid;
    outArray[ctr]["timestamp_last_valid"] = factory.createScalar(currentElement_timestamp_last_valid);
    // channels
    auto currentElement_channels = (msg + ctr)->channels;
    outArray[ctr]["channels"] = factory.createArray<px4_msgs::msg::RcChannels::_channels_type::const_iterator, float>({currentElement_channels.size(), 1}, currentElement_channels.begin(), currentElement_channels.end());
    // channel_count
    auto currentElement_channel_count = (msg + ctr)->channel_count;
    outArray[ctr]["channel_count"] = factory.createScalar(currentElement_channel_count);
    // function
    auto currentElement_function = (msg + ctr)->function;
    outArray[ctr]["function"] = factory.createArray<px4_msgs::msg::RcChannels::_function_type::const_iterator, int8_t>({currentElement_function.size(), 1}, currentElement_function.begin(), currentElement_function.end());
    // rssi
    auto currentElement_rssi = (msg + ctr)->rssi;
    outArray[ctr]["rssi"] = factory.createScalar(currentElement_rssi);
    // signal_lost
    auto currentElement_signal_lost = (msg + ctr)->signal_lost;
    outArray[ctr]["signal_lost"] = factory.createScalar(currentElement_signal_lost);
    // frame_drop_count
    auto currentElement_frame_drop_count = (msg + ctr)->frame_drop_count;
    outArray[ctr]["frame_drop_count"] = factory.createScalar(currentElement_frame_drop_count);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_RcChannels_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_RcChannels_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_RcChannels_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::RcChannels,ros2_px4_msgs_msg_RcChannels_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_RcChannels_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::RcChannels,ros2_px4_msgs_msg_RcChannels_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_RcChannels_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::RcChannels>();
    ros2_px4_msgs_msg_RcChannels_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_RcChannels_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_RcChannels_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::RcChannels*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_RcChannels_common, MATLABROS2MsgInterface<px4_msgs::msg::RcChannels>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_RcChannels_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER