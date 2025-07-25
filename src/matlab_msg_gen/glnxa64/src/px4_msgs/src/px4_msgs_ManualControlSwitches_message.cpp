// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/ManualControlSwitches
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
#include "px4_msgs/msg/manual_control_switches.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_ManualControlSwitches_common : public MATLABROS2MsgInterface<px4_msgs::msg::ManualControlSwitches> {
  public:
    virtual ~ros2_px4_msgs_msg_ManualControlSwitches_common(){}
    virtual void copy_from_struct(px4_msgs::msg::ManualControlSwitches* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::ManualControlSwitches* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_ManualControlSwitches_common::copy_from_struct(px4_msgs::msg::ManualControlSwitches* msg, const matlab::data::Struct& arr,
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
        //mode_slot
        const matlab::data::TypedArray<uint8_t> mode_slot_arr = arr["mode_slot"];
        msg->mode_slot = mode_slot_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_slot' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_slot' is wrong type; expected a uint8.");
    }
    try {
        //arm_switch
        const matlab::data::TypedArray<uint8_t> arm_switch_arr = arr["arm_switch"];
        msg->arm_switch = arm_switch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'arm_switch' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'arm_switch' is wrong type; expected a uint8.");
    }
    try {
        //return_switch
        const matlab::data::TypedArray<uint8_t> return_switch_arr = arr["return_switch"];
        msg->return_switch = return_switch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'return_switch' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'return_switch' is wrong type; expected a uint8.");
    }
    try {
        //loiter_switch
        const matlab::data::TypedArray<uint8_t> loiter_switch_arr = arr["loiter_switch"];
        msg->loiter_switch = loiter_switch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'loiter_switch' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'loiter_switch' is wrong type; expected a uint8.");
    }
    try {
        //offboard_switch
        const matlab::data::TypedArray<uint8_t> offboard_switch_arr = arr["offboard_switch"];
        msg->offboard_switch = offboard_switch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'offboard_switch' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'offboard_switch' is wrong type; expected a uint8.");
    }
    try {
        //kill_switch
        const matlab::data::TypedArray<uint8_t> kill_switch_arr = arr["kill_switch"];
        msg->kill_switch = kill_switch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'kill_switch' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'kill_switch' is wrong type; expected a uint8.");
    }
    try {
        //gear_switch
        const matlab::data::TypedArray<uint8_t> gear_switch_arr = arr["gear_switch"];
        msg->gear_switch = gear_switch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gear_switch' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gear_switch' is wrong type; expected a uint8.");
    }
    try {
        //transition_switch
        const matlab::data::TypedArray<uint8_t> transition_switch_arr = arr["transition_switch"];
        msg->transition_switch = transition_switch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'transition_switch' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'transition_switch' is wrong type; expected a uint8.");
    }
    try {
        //photo_switch
        const matlab::data::TypedArray<uint8_t> photo_switch_arr = arr["photo_switch"];
        msg->photo_switch = photo_switch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'photo_switch' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'photo_switch' is wrong type; expected a uint8.");
    }
    try {
        //video_switch
        const matlab::data::TypedArray<uint8_t> video_switch_arr = arr["video_switch"];
        msg->video_switch = video_switch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'video_switch' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'video_switch' is wrong type; expected a uint8.");
    }
    try {
        //payload_power_switch
        const matlab::data::TypedArray<uint8_t> payload_power_switch_arr = arr["payload_power_switch"];
        msg->payload_power_switch = payload_power_switch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'payload_power_switch' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'payload_power_switch' is wrong type; expected a uint8.");
    }
    try {
        //engage_main_motor_switch
        const matlab::data::TypedArray<uint8_t> engage_main_motor_switch_arr = arr["engage_main_motor_switch"];
        msg->engage_main_motor_switch = engage_main_motor_switch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'engage_main_motor_switch' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'engage_main_motor_switch' is wrong type; expected a uint8.");
    }
    try {
        //switch_changes
        const matlab::data::TypedArray<uint32_t> switch_changes_arr = arr["switch_changes"];
        msg->switch_changes = switch_changes_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'switch_changes' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'switch_changes' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_ManualControlSwitches_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::ManualControlSwitches* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","timestamp_sample","SWITCH_POS_NONE","SWITCH_POS_ON","SWITCH_POS_MIDDLE","SWITCH_POS_OFF","MODE_SLOT_NONE","MODE_SLOT_1","MODE_SLOT_2","MODE_SLOT_3","MODE_SLOT_4","MODE_SLOT_5","MODE_SLOT_6","MODE_SLOT_NUM","mode_slot","arm_switch","return_switch","loiter_switch","offboard_switch","kill_switch","gear_switch","transition_switch","photo_switch","video_switch","payload_power_switch","engage_main_motor_switch","switch_changes"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/ManualControlSwitches");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // SWITCH_POS_NONE
    auto currentElement_SWITCH_POS_NONE = (msg + ctr)->SWITCH_POS_NONE;
    outArray[ctr]["SWITCH_POS_NONE"] = factory.createScalar(currentElement_SWITCH_POS_NONE);
    // SWITCH_POS_ON
    auto currentElement_SWITCH_POS_ON = (msg + ctr)->SWITCH_POS_ON;
    outArray[ctr]["SWITCH_POS_ON"] = factory.createScalar(currentElement_SWITCH_POS_ON);
    // SWITCH_POS_MIDDLE
    auto currentElement_SWITCH_POS_MIDDLE = (msg + ctr)->SWITCH_POS_MIDDLE;
    outArray[ctr]["SWITCH_POS_MIDDLE"] = factory.createScalar(currentElement_SWITCH_POS_MIDDLE);
    // SWITCH_POS_OFF
    auto currentElement_SWITCH_POS_OFF = (msg + ctr)->SWITCH_POS_OFF;
    outArray[ctr]["SWITCH_POS_OFF"] = factory.createScalar(currentElement_SWITCH_POS_OFF);
    // MODE_SLOT_NONE
    auto currentElement_MODE_SLOT_NONE = (msg + ctr)->MODE_SLOT_NONE;
    outArray[ctr]["MODE_SLOT_NONE"] = factory.createScalar(currentElement_MODE_SLOT_NONE);
    // MODE_SLOT_1
    auto currentElement_MODE_SLOT_1 = (msg + ctr)->MODE_SLOT_1;
    outArray[ctr]["MODE_SLOT_1"] = factory.createScalar(currentElement_MODE_SLOT_1);
    // MODE_SLOT_2
    auto currentElement_MODE_SLOT_2 = (msg + ctr)->MODE_SLOT_2;
    outArray[ctr]["MODE_SLOT_2"] = factory.createScalar(currentElement_MODE_SLOT_2);
    // MODE_SLOT_3
    auto currentElement_MODE_SLOT_3 = (msg + ctr)->MODE_SLOT_3;
    outArray[ctr]["MODE_SLOT_3"] = factory.createScalar(currentElement_MODE_SLOT_3);
    // MODE_SLOT_4
    auto currentElement_MODE_SLOT_4 = (msg + ctr)->MODE_SLOT_4;
    outArray[ctr]["MODE_SLOT_4"] = factory.createScalar(currentElement_MODE_SLOT_4);
    // MODE_SLOT_5
    auto currentElement_MODE_SLOT_5 = (msg + ctr)->MODE_SLOT_5;
    outArray[ctr]["MODE_SLOT_5"] = factory.createScalar(currentElement_MODE_SLOT_5);
    // MODE_SLOT_6
    auto currentElement_MODE_SLOT_6 = (msg + ctr)->MODE_SLOT_6;
    outArray[ctr]["MODE_SLOT_6"] = factory.createScalar(currentElement_MODE_SLOT_6);
    // MODE_SLOT_NUM
    auto currentElement_MODE_SLOT_NUM = (msg + ctr)->MODE_SLOT_NUM;
    outArray[ctr]["MODE_SLOT_NUM"] = factory.createScalar(currentElement_MODE_SLOT_NUM);
    // mode_slot
    auto currentElement_mode_slot = (msg + ctr)->mode_slot;
    outArray[ctr]["mode_slot"] = factory.createScalar(currentElement_mode_slot);
    // arm_switch
    auto currentElement_arm_switch = (msg + ctr)->arm_switch;
    outArray[ctr]["arm_switch"] = factory.createScalar(currentElement_arm_switch);
    // return_switch
    auto currentElement_return_switch = (msg + ctr)->return_switch;
    outArray[ctr]["return_switch"] = factory.createScalar(currentElement_return_switch);
    // loiter_switch
    auto currentElement_loiter_switch = (msg + ctr)->loiter_switch;
    outArray[ctr]["loiter_switch"] = factory.createScalar(currentElement_loiter_switch);
    // offboard_switch
    auto currentElement_offboard_switch = (msg + ctr)->offboard_switch;
    outArray[ctr]["offboard_switch"] = factory.createScalar(currentElement_offboard_switch);
    // kill_switch
    auto currentElement_kill_switch = (msg + ctr)->kill_switch;
    outArray[ctr]["kill_switch"] = factory.createScalar(currentElement_kill_switch);
    // gear_switch
    auto currentElement_gear_switch = (msg + ctr)->gear_switch;
    outArray[ctr]["gear_switch"] = factory.createScalar(currentElement_gear_switch);
    // transition_switch
    auto currentElement_transition_switch = (msg + ctr)->transition_switch;
    outArray[ctr]["transition_switch"] = factory.createScalar(currentElement_transition_switch);
    // photo_switch
    auto currentElement_photo_switch = (msg + ctr)->photo_switch;
    outArray[ctr]["photo_switch"] = factory.createScalar(currentElement_photo_switch);
    // video_switch
    auto currentElement_video_switch = (msg + ctr)->video_switch;
    outArray[ctr]["video_switch"] = factory.createScalar(currentElement_video_switch);
    // payload_power_switch
    auto currentElement_payload_power_switch = (msg + ctr)->payload_power_switch;
    outArray[ctr]["payload_power_switch"] = factory.createScalar(currentElement_payload_power_switch);
    // engage_main_motor_switch
    auto currentElement_engage_main_motor_switch = (msg + ctr)->engage_main_motor_switch;
    outArray[ctr]["engage_main_motor_switch"] = factory.createScalar(currentElement_engage_main_motor_switch);
    // switch_changes
    auto currentElement_switch_changes = (msg + ctr)->switch_changes;
    outArray[ctr]["switch_changes"] = factory.createScalar(currentElement_switch_changes);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_ManualControlSwitches_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_ManualControlSwitches_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_ManualControlSwitches_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::ManualControlSwitches,ros2_px4_msgs_msg_ManualControlSwitches_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_ManualControlSwitches_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::ManualControlSwitches,ros2_px4_msgs_msg_ManualControlSwitches_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_ManualControlSwitches_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::ManualControlSwitches>();
    ros2_px4_msgs_msg_ManualControlSwitches_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_ManualControlSwitches_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_ManualControlSwitches_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::ManualControlSwitches*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_ManualControlSwitches_common, MATLABROS2MsgInterface<px4_msgs::msg::ManualControlSwitches>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_ManualControlSwitches_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER