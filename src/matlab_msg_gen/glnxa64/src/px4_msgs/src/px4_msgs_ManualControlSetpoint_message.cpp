// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/ManualControlSetpoint
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
#include "px4_msgs/msg/manual_control_setpoint.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_ManualControlSetpoint_common : public MATLABROS2MsgInterface<px4_msgs::msg::ManualControlSetpoint> {
  public:
    virtual ~ros2_px4_msgs_msg_ManualControlSetpoint_common(){}
    virtual void copy_from_struct(px4_msgs::msg::ManualControlSetpoint* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::ManualControlSetpoint* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_ManualControlSetpoint_common::copy_from_struct(px4_msgs::msg::ManualControlSetpoint* msg, const matlab::data::Struct& arr,
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
        //timestamp_sample
        const matlab::data::TypedArray<uint64_t> timestamp_sample_arr = arr["timestamp_sample"];
        msg->timestamp_sample = timestamp_sample_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'timestamp_sample' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'timestamp_sample' is wrong type; expected a uint64.");
    }
    try {
        //valid
        const matlab::data::TypedArray<bool> valid_arr = arr["valid"];
        msg->valid = valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'valid' is wrong type; expected a logical.");
    }
    try {
        //data_source
        const matlab::data::TypedArray<uint8_t> data_source_arr = arr["data_source"];
        msg->data_source = data_source_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'data_source' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'data_source' is wrong type; expected a uint8.");
    }
    try {
        //roll
        const matlab::data::TypedArray<float> roll_arr = arr["roll"];
        msg->roll = roll_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'roll' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'roll' is wrong type; expected a single.");
    }
    try {
        //pitch
        const matlab::data::TypedArray<float> pitch_arr = arr["pitch"];
        msg->pitch = pitch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pitch' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pitch' is wrong type; expected a single.");
    }
    try {
        //yaw
        const matlab::data::TypedArray<float> yaw_arr = arr["yaw"];
        msg->yaw = yaw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'yaw' is wrong type; expected a single.");
    }
    try {
        //throttle
        const matlab::data::TypedArray<float> throttle_arr = arr["throttle"];
        msg->throttle = throttle_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'throttle' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'throttle' is wrong type; expected a single.");
    }
    try {
        //flaps
        const matlab::data::TypedArray<float> flaps_arr = arr["flaps"];
        msg->flaps = flaps_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flaps' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flaps' is wrong type; expected a single.");
    }
    try {
        //aux1
        const matlab::data::TypedArray<float> aux1_arr = arr["aux1"];
        msg->aux1 = aux1_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'aux1' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'aux1' is wrong type; expected a single.");
    }
    try {
        //aux2
        const matlab::data::TypedArray<float> aux2_arr = arr["aux2"];
        msg->aux2 = aux2_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'aux2' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'aux2' is wrong type; expected a single.");
    }
    try {
        //aux3
        const matlab::data::TypedArray<float> aux3_arr = arr["aux3"];
        msg->aux3 = aux3_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'aux3' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'aux3' is wrong type; expected a single.");
    }
    try {
        //aux4
        const matlab::data::TypedArray<float> aux4_arr = arr["aux4"];
        msg->aux4 = aux4_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'aux4' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'aux4' is wrong type; expected a single.");
    }
    try {
        //aux5
        const matlab::data::TypedArray<float> aux5_arr = arr["aux5"];
        msg->aux5 = aux5_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'aux5' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'aux5' is wrong type; expected a single.");
    }
    try {
        //aux6
        const matlab::data::TypedArray<float> aux6_arr = arr["aux6"];
        msg->aux6 = aux6_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'aux6' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'aux6' is wrong type; expected a single.");
    }
    try {
        //sticks_moving
        const matlab::data::TypedArray<bool> sticks_moving_arr = arr["sticks_moving"];
        msg->sticks_moving = sticks_moving_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sticks_moving' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'sticks_moving' is wrong type; expected a logical.");
    }
    try {
        //buttons
        const matlab::data::TypedArray<uint16_t> buttons_arr = arr["buttons"];
        msg->buttons = buttons_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'buttons' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'buttons' is wrong type; expected a uint16.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_ManualControlSetpoint_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::ManualControlSetpoint* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","MESSAGE_VERSION","timestamp","timestamp_sample","valid","SOURCE_UNKNOWN","SOURCE_RC","SOURCE_MAVLINK_0","SOURCE_MAVLINK_1","SOURCE_MAVLINK_2","SOURCE_MAVLINK_3","SOURCE_MAVLINK_4","SOURCE_MAVLINK_5","data_source","roll","pitch","yaw","throttle","flaps","aux1","aux2","aux3","aux4","aux5","aux6","sticks_moving","buttons"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/ManualControlSetpoint");
    // MESSAGE_VERSION
    auto currentElement_MESSAGE_VERSION = (msg + ctr)->MESSAGE_VERSION;
    outArray[ctr]["MESSAGE_VERSION"] = factory.createScalar(currentElement_MESSAGE_VERSION);
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // valid
    auto currentElement_valid = (msg + ctr)->valid;
    outArray[ctr]["valid"] = factory.createScalar(currentElement_valid);
    // SOURCE_UNKNOWN
    auto currentElement_SOURCE_UNKNOWN = (msg + ctr)->SOURCE_UNKNOWN;
    outArray[ctr]["SOURCE_UNKNOWN"] = factory.createScalar(currentElement_SOURCE_UNKNOWN);
    // SOURCE_RC
    auto currentElement_SOURCE_RC = (msg + ctr)->SOURCE_RC;
    outArray[ctr]["SOURCE_RC"] = factory.createScalar(currentElement_SOURCE_RC);
    // SOURCE_MAVLINK_0
    auto currentElement_SOURCE_MAVLINK_0 = (msg + ctr)->SOURCE_MAVLINK_0;
    outArray[ctr]["SOURCE_MAVLINK_0"] = factory.createScalar(currentElement_SOURCE_MAVLINK_0);
    // SOURCE_MAVLINK_1
    auto currentElement_SOURCE_MAVLINK_1 = (msg + ctr)->SOURCE_MAVLINK_1;
    outArray[ctr]["SOURCE_MAVLINK_1"] = factory.createScalar(currentElement_SOURCE_MAVLINK_1);
    // SOURCE_MAVLINK_2
    auto currentElement_SOURCE_MAVLINK_2 = (msg + ctr)->SOURCE_MAVLINK_2;
    outArray[ctr]["SOURCE_MAVLINK_2"] = factory.createScalar(currentElement_SOURCE_MAVLINK_2);
    // SOURCE_MAVLINK_3
    auto currentElement_SOURCE_MAVLINK_3 = (msg + ctr)->SOURCE_MAVLINK_3;
    outArray[ctr]["SOURCE_MAVLINK_3"] = factory.createScalar(currentElement_SOURCE_MAVLINK_3);
    // SOURCE_MAVLINK_4
    auto currentElement_SOURCE_MAVLINK_4 = (msg + ctr)->SOURCE_MAVLINK_4;
    outArray[ctr]["SOURCE_MAVLINK_4"] = factory.createScalar(currentElement_SOURCE_MAVLINK_4);
    // SOURCE_MAVLINK_5
    auto currentElement_SOURCE_MAVLINK_5 = (msg + ctr)->SOURCE_MAVLINK_5;
    outArray[ctr]["SOURCE_MAVLINK_5"] = factory.createScalar(currentElement_SOURCE_MAVLINK_5);
    // data_source
    auto currentElement_data_source = (msg + ctr)->data_source;
    outArray[ctr]["data_source"] = factory.createScalar(currentElement_data_source);
    // roll
    auto currentElement_roll = (msg + ctr)->roll;
    outArray[ctr]["roll"] = factory.createScalar(currentElement_roll);
    // pitch
    auto currentElement_pitch = (msg + ctr)->pitch;
    outArray[ctr]["pitch"] = factory.createScalar(currentElement_pitch);
    // yaw
    auto currentElement_yaw = (msg + ctr)->yaw;
    outArray[ctr]["yaw"] = factory.createScalar(currentElement_yaw);
    // throttle
    auto currentElement_throttle = (msg + ctr)->throttle;
    outArray[ctr]["throttle"] = factory.createScalar(currentElement_throttle);
    // flaps
    auto currentElement_flaps = (msg + ctr)->flaps;
    outArray[ctr]["flaps"] = factory.createScalar(currentElement_flaps);
    // aux1
    auto currentElement_aux1 = (msg + ctr)->aux1;
    outArray[ctr]["aux1"] = factory.createScalar(currentElement_aux1);
    // aux2
    auto currentElement_aux2 = (msg + ctr)->aux2;
    outArray[ctr]["aux2"] = factory.createScalar(currentElement_aux2);
    // aux3
    auto currentElement_aux3 = (msg + ctr)->aux3;
    outArray[ctr]["aux3"] = factory.createScalar(currentElement_aux3);
    // aux4
    auto currentElement_aux4 = (msg + ctr)->aux4;
    outArray[ctr]["aux4"] = factory.createScalar(currentElement_aux4);
    // aux5
    auto currentElement_aux5 = (msg + ctr)->aux5;
    outArray[ctr]["aux5"] = factory.createScalar(currentElement_aux5);
    // aux6
    auto currentElement_aux6 = (msg + ctr)->aux6;
    outArray[ctr]["aux6"] = factory.createScalar(currentElement_aux6);
    // sticks_moving
    auto currentElement_sticks_moving = (msg + ctr)->sticks_moving;
    outArray[ctr]["sticks_moving"] = factory.createScalar(currentElement_sticks_moving);
    // buttons
    auto currentElement_buttons = (msg + ctr)->buttons;
    outArray[ctr]["buttons"] = factory.createScalar(currentElement_buttons);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_ManualControlSetpoint_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_ManualControlSetpoint_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_ManualControlSetpoint_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::ManualControlSetpoint,ros2_px4_msgs_msg_ManualControlSetpoint_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_ManualControlSetpoint_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::ManualControlSetpoint,ros2_px4_msgs_msg_ManualControlSetpoint_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_ManualControlSetpoint_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::ManualControlSetpoint>();
    ros2_px4_msgs_msg_ManualControlSetpoint_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_ManualControlSetpoint_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_ManualControlSetpoint_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::ManualControlSetpoint*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_ManualControlSetpoint_common, MATLABROS2MsgInterface<px4_msgs::msg::ManualControlSetpoint>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_ManualControlSetpoint_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER