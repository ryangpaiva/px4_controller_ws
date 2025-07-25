// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/ArmingCheckReply
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
#include "px4_msgs/msg/arming_check_reply.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_ArmingCheckReply_common : public MATLABROS2MsgInterface<px4_msgs::msg::ArmingCheckReply> {
  public:
    virtual ~ros2_px4_msgs_msg_ArmingCheckReply_common(){}
    virtual void copy_from_struct(px4_msgs::msg::ArmingCheckReply* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::ArmingCheckReply* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_ArmingCheckReply_common::copy_from_struct(px4_msgs::msg::ArmingCheckReply* msg, const matlab::data::Struct& arr,
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
        //request_id
        const matlab::data::TypedArray<uint8_t> request_id_arr = arr["request_id"];
        msg->request_id = request_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'request_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'request_id' is wrong type; expected a uint8.");
    }
    try {
        //registration_id
        const matlab::data::TypedArray<uint8_t> registration_id_arr = arr["registration_id"];
        msg->registration_id = registration_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'registration_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'registration_id' is wrong type; expected a uint8.");
    }
    try {
        //health_component_index
        const matlab::data::TypedArray<uint8_t> health_component_index_arr = arr["health_component_index"];
        msg->health_component_index = health_component_index_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'health_component_index' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'health_component_index' is wrong type; expected a uint8.");
    }
    try {
        //health_component_is_present
        const matlab::data::TypedArray<bool> health_component_is_present_arr = arr["health_component_is_present"];
        msg->health_component_is_present = health_component_is_present_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'health_component_is_present' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'health_component_is_present' is wrong type; expected a logical.");
    }
    try {
        //health_component_warning
        const matlab::data::TypedArray<bool> health_component_warning_arr = arr["health_component_warning"];
        msg->health_component_warning = health_component_warning_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'health_component_warning' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'health_component_warning' is wrong type; expected a logical.");
    }
    try {
        //health_component_error
        const matlab::data::TypedArray<bool> health_component_error_arr = arr["health_component_error"];
        msg->health_component_error = health_component_error_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'health_component_error' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'health_component_error' is wrong type; expected a logical.");
    }
    try {
        //can_arm_and_run
        const matlab::data::TypedArray<bool> can_arm_and_run_arr = arr["can_arm_and_run"];
        msg->can_arm_and_run = can_arm_and_run_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'can_arm_and_run' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'can_arm_and_run' is wrong type; expected a logical.");
    }
    try {
        //num_events
        const matlab::data::TypedArray<uint8_t> num_events_arr = arr["num_events"];
        msg->num_events = num_events_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'num_events' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'num_events' is wrong type; expected a uint8.");
    }
    try {
        //events
        const matlab::data::StructArray events_arr = arr["events"];
        if (events_arr.getNumberOfElements() < 5)
        	throw(std::invalid_argument("Field 'events' must have minimum of 5 elements."));
        size_t idx_events = 0;
        for (auto _eventsarr : events_arr) {
        	px4_msgs::msg::Event _val;
        auto msgClassPtr_events = getCommonObject<px4_msgs::msg::Event>("ros2_px4_msgs_msg_Event_common",loader);
        msgClassPtr_events->copy_from_struct(&_val,_eventsarr,loader);
        	msg->events[idx_events++] = _val;
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'events' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'events' is wrong type; expected a struct.");
    }
    try {
        //mode_req_angular_velocity
        const matlab::data::TypedArray<bool> mode_req_angular_velocity_arr = arr["mode_req_angular_velocity"];
        msg->mode_req_angular_velocity = mode_req_angular_velocity_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_req_angular_velocity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_req_angular_velocity' is wrong type; expected a logical.");
    }
    try {
        //mode_req_attitude
        const matlab::data::TypedArray<bool> mode_req_attitude_arr = arr["mode_req_attitude"];
        msg->mode_req_attitude = mode_req_attitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_req_attitude' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_req_attitude' is wrong type; expected a logical.");
    }
    try {
        //mode_req_local_alt
        const matlab::data::TypedArray<bool> mode_req_local_alt_arr = arr["mode_req_local_alt"];
        msg->mode_req_local_alt = mode_req_local_alt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_req_local_alt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_req_local_alt' is wrong type; expected a logical.");
    }
    try {
        //mode_req_local_position
        const matlab::data::TypedArray<bool> mode_req_local_position_arr = arr["mode_req_local_position"];
        msg->mode_req_local_position = mode_req_local_position_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_req_local_position' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_req_local_position' is wrong type; expected a logical.");
    }
    try {
        //mode_req_local_position_relaxed
        const matlab::data::TypedArray<bool> mode_req_local_position_relaxed_arr = arr["mode_req_local_position_relaxed"];
        msg->mode_req_local_position_relaxed = mode_req_local_position_relaxed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_req_local_position_relaxed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_req_local_position_relaxed' is wrong type; expected a logical.");
    }
    try {
        //mode_req_global_position
        const matlab::data::TypedArray<bool> mode_req_global_position_arr = arr["mode_req_global_position"];
        msg->mode_req_global_position = mode_req_global_position_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_req_global_position' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_req_global_position' is wrong type; expected a logical.");
    }
    try {
        //mode_req_mission
        const matlab::data::TypedArray<bool> mode_req_mission_arr = arr["mode_req_mission"];
        msg->mode_req_mission = mode_req_mission_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_req_mission' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_req_mission' is wrong type; expected a logical.");
    }
    try {
        //mode_req_home_position
        const matlab::data::TypedArray<bool> mode_req_home_position_arr = arr["mode_req_home_position"];
        msg->mode_req_home_position = mode_req_home_position_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_req_home_position' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_req_home_position' is wrong type; expected a logical.");
    }
    try {
        //mode_req_prevent_arming
        const matlab::data::TypedArray<bool> mode_req_prevent_arming_arr = arr["mode_req_prevent_arming"];
        msg->mode_req_prevent_arming = mode_req_prevent_arming_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_req_prevent_arming' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_req_prevent_arming' is wrong type; expected a logical.");
    }
    try {
        //mode_req_manual_control
        const matlab::data::TypedArray<bool> mode_req_manual_control_arr = arr["mode_req_manual_control"];
        msg->mode_req_manual_control = mode_req_manual_control_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_req_manual_control' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_req_manual_control' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_ArmingCheckReply_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::ArmingCheckReply* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","MESSAGE_VERSION","timestamp","request_id","registration_id","HEALTH_COMPONENT_INDEX_NONE","HEALTH_COMPONENT_INDEX_AVOIDANCE","health_component_index","health_component_is_present","health_component_warning","health_component_error","can_arm_and_run","num_events","events","mode_req_angular_velocity","mode_req_attitude","mode_req_local_alt","mode_req_local_position","mode_req_local_position_relaxed","mode_req_global_position","mode_req_mission","mode_req_home_position","mode_req_prevent_arming","mode_req_manual_control","ORB_QUEUE_LENGTH"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/ArmingCheckReply");
    // MESSAGE_VERSION
    auto currentElement_MESSAGE_VERSION = (msg + ctr)->MESSAGE_VERSION;
    outArray[ctr]["MESSAGE_VERSION"] = factory.createScalar(currentElement_MESSAGE_VERSION);
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // request_id
    auto currentElement_request_id = (msg + ctr)->request_id;
    outArray[ctr]["request_id"] = factory.createScalar(currentElement_request_id);
    // registration_id
    auto currentElement_registration_id = (msg + ctr)->registration_id;
    outArray[ctr]["registration_id"] = factory.createScalar(currentElement_registration_id);
    // HEALTH_COMPONENT_INDEX_NONE
    auto currentElement_HEALTH_COMPONENT_INDEX_NONE = (msg + ctr)->HEALTH_COMPONENT_INDEX_NONE;
    outArray[ctr]["HEALTH_COMPONENT_INDEX_NONE"] = factory.createScalar(currentElement_HEALTH_COMPONENT_INDEX_NONE);
    // HEALTH_COMPONENT_INDEX_AVOIDANCE
    auto currentElement_HEALTH_COMPONENT_INDEX_AVOIDANCE = (msg + ctr)->HEALTH_COMPONENT_INDEX_AVOIDANCE;
    outArray[ctr]["HEALTH_COMPONENT_INDEX_AVOIDANCE"] = factory.createScalar(currentElement_HEALTH_COMPONENT_INDEX_AVOIDANCE);
    // health_component_index
    auto currentElement_health_component_index = (msg + ctr)->health_component_index;
    outArray[ctr]["health_component_index"] = factory.createScalar(currentElement_health_component_index);
    // health_component_is_present
    auto currentElement_health_component_is_present = (msg + ctr)->health_component_is_present;
    outArray[ctr]["health_component_is_present"] = factory.createScalar(currentElement_health_component_is_present);
    // health_component_warning
    auto currentElement_health_component_warning = (msg + ctr)->health_component_warning;
    outArray[ctr]["health_component_warning"] = factory.createScalar(currentElement_health_component_warning);
    // health_component_error
    auto currentElement_health_component_error = (msg + ctr)->health_component_error;
    outArray[ctr]["health_component_error"] = factory.createScalar(currentElement_health_component_error);
    // can_arm_and_run
    auto currentElement_can_arm_and_run = (msg + ctr)->can_arm_and_run;
    outArray[ctr]["can_arm_and_run"] = factory.createScalar(currentElement_can_arm_and_run);
    // num_events
    auto currentElement_num_events = (msg + ctr)->num_events;
    outArray[ctr]["num_events"] = factory.createScalar(currentElement_num_events);
    // events
    auto currentElement_events = (msg + ctr)->events;
    auto msgClassPtr_events = getCommonObject<px4_msgs::msg::Event>("ros2_px4_msgs_msg_Event_common",loader);
    outArray[ctr]["events"] = msgClassPtr_events->get_arr(factory,&currentElement_events[0],loader,currentElement_events.size());
    // mode_req_angular_velocity
    auto currentElement_mode_req_angular_velocity = (msg + ctr)->mode_req_angular_velocity;
    outArray[ctr]["mode_req_angular_velocity"] = factory.createScalar(currentElement_mode_req_angular_velocity);
    // mode_req_attitude
    auto currentElement_mode_req_attitude = (msg + ctr)->mode_req_attitude;
    outArray[ctr]["mode_req_attitude"] = factory.createScalar(currentElement_mode_req_attitude);
    // mode_req_local_alt
    auto currentElement_mode_req_local_alt = (msg + ctr)->mode_req_local_alt;
    outArray[ctr]["mode_req_local_alt"] = factory.createScalar(currentElement_mode_req_local_alt);
    // mode_req_local_position
    auto currentElement_mode_req_local_position = (msg + ctr)->mode_req_local_position;
    outArray[ctr]["mode_req_local_position"] = factory.createScalar(currentElement_mode_req_local_position);
    // mode_req_local_position_relaxed
    auto currentElement_mode_req_local_position_relaxed = (msg + ctr)->mode_req_local_position_relaxed;
    outArray[ctr]["mode_req_local_position_relaxed"] = factory.createScalar(currentElement_mode_req_local_position_relaxed);
    // mode_req_global_position
    auto currentElement_mode_req_global_position = (msg + ctr)->mode_req_global_position;
    outArray[ctr]["mode_req_global_position"] = factory.createScalar(currentElement_mode_req_global_position);
    // mode_req_mission
    auto currentElement_mode_req_mission = (msg + ctr)->mode_req_mission;
    outArray[ctr]["mode_req_mission"] = factory.createScalar(currentElement_mode_req_mission);
    // mode_req_home_position
    auto currentElement_mode_req_home_position = (msg + ctr)->mode_req_home_position;
    outArray[ctr]["mode_req_home_position"] = factory.createScalar(currentElement_mode_req_home_position);
    // mode_req_prevent_arming
    auto currentElement_mode_req_prevent_arming = (msg + ctr)->mode_req_prevent_arming;
    outArray[ctr]["mode_req_prevent_arming"] = factory.createScalar(currentElement_mode_req_prevent_arming);
    // mode_req_manual_control
    auto currentElement_mode_req_manual_control = (msg + ctr)->mode_req_manual_control;
    outArray[ctr]["mode_req_manual_control"] = factory.createScalar(currentElement_mode_req_manual_control);
    // ORB_QUEUE_LENGTH
    auto currentElement_ORB_QUEUE_LENGTH = (msg + ctr)->ORB_QUEUE_LENGTH;
    outArray[ctr]["ORB_QUEUE_LENGTH"] = factory.createScalar(currentElement_ORB_QUEUE_LENGTH);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_ArmingCheckReply_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_ArmingCheckReply_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_ArmingCheckReply_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::ArmingCheckReply,ros2_px4_msgs_msg_ArmingCheckReply_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_ArmingCheckReply_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::ArmingCheckReply,ros2_px4_msgs_msg_ArmingCheckReply_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_ArmingCheckReply_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::ArmingCheckReply>();
    ros2_px4_msgs_msg_ArmingCheckReply_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_ArmingCheckReply_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_ArmingCheckReply_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::ArmingCheckReply*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_ArmingCheckReply_common, MATLABROS2MsgInterface<px4_msgs::msg::ArmingCheckReply>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_ArmingCheckReply_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER