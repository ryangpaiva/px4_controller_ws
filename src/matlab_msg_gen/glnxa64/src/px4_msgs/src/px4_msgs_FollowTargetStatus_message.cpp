// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/FollowTargetStatus
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
#include "px4_msgs/msg/follow_target_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_FollowTargetStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::FollowTargetStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_FollowTargetStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::FollowTargetStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::FollowTargetStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_FollowTargetStatus_common::copy_from_struct(px4_msgs::msg::FollowTargetStatus* msg, const matlab::data::Struct& arr,
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
        //tracked_target_course
        const matlab::data::TypedArray<float> tracked_target_course_arr = arr["tracked_target_course"];
        msg->tracked_target_course = tracked_target_course_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'tracked_target_course' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'tracked_target_course' is wrong type; expected a single.");
    }
    try {
        //follow_angle
        const matlab::data::TypedArray<float> follow_angle_arr = arr["follow_angle"];
        msg->follow_angle = follow_angle_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'follow_angle' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'follow_angle' is wrong type; expected a single.");
    }
    try {
        //orbit_angle_setpoint
        const matlab::data::TypedArray<float> orbit_angle_setpoint_arr = arr["orbit_angle_setpoint"];
        msg->orbit_angle_setpoint = orbit_angle_setpoint_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'orbit_angle_setpoint' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'orbit_angle_setpoint' is wrong type; expected a single.");
    }
    try {
        //angular_rate_setpoint
        const matlab::data::TypedArray<float> angular_rate_setpoint_arr = arr["angular_rate_setpoint"];
        msg->angular_rate_setpoint = angular_rate_setpoint_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'angular_rate_setpoint' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'angular_rate_setpoint' is wrong type; expected a single.");
    }
    try {
        //desired_position_raw
        const matlab::data::TypedArray<float> desired_position_raw_arr = arr["desired_position_raw"];
        size_t nelem = 3;
        	std::copy(desired_position_raw_arr.begin(), desired_position_raw_arr.begin()+nelem, msg->desired_position_raw.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'desired_position_raw' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'desired_position_raw' is wrong type; expected a single.");
    }
    try {
        //in_emergency_ascent
        const matlab::data::TypedArray<bool> in_emergency_ascent_arr = arr["in_emergency_ascent"];
        msg->in_emergency_ascent = in_emergency_ascent_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'in_emergency_ascent' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'in_emergency_ascent' is wrong type; expected a logical.");
    }
    try {
        //gimbal_pitch
        const matlab::data::TypedArray<float> gimbal_pitch_arr = arr["gimbal_pitch"];
        msg->gimbal_pitch = gimbal_pitch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gimbal_pitch' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gimbal_pitch' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_FollowTargetStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::FollowTargetStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","tracked_target_course","follow_angle","orbit_angle_setpoint","angular_rate_setpoint","desired_position_raw","in_emergency_ascent","gimbal_pitch"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/FollowTargetStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // tracked_target_course
    auto currentElement_tracked_target_course = (msg + ctr)->tracked_target_course;
    outArray[ctr]["tracked_target_course"] = factory.createScalar(currentElement_tracked_target_course);
    // follow_angle
    auto currentElement_follow_angle = (msg + ctr)->follow_angle;
    outArray[ctr]["follow_angle"] = factory.createScalar(currentElement_follow_angle);
    // orbit_angle_setpoint
    auto currentElement_orbit_angle_setpoint = (msg + ctr)->orbit_angle_setpoint;
    outArray[ctr]["orbit_angle_setpoint"] = factory.createScalar(currentElement_orbit_angle_setpoint);
    // angular_rate_setpoint
    auto currentElement_angular_rate_setpoint = (msg + ctr)->angular_rate_setpoint;
    outArray[ctr]["angular_rate_setpoint"] = factory.createScalar(currentElement_angular_rate_setpoint);
    // desired_position_raw
    auto currentElement_desired_position_raw = (msg + ctr)->desired_position_raw;
    outArray[ctr]["desired_position_raw"] = factory.createArray<px4_msgs::msg::FollowTargetStatus::_desired_position_raw_type::const_iterator, float>({currentElement_desired_position_raw.size(), 1}, currentElement_desired_position_raw.begin(), currentElement_desired_position_raw.end());
    // in_emergency_ascent
    auto currentElement_in_emergency_ascent = (msg + ctr)->in_emergency_ascent;
    outArray[ctr]["in_emergency_ascent"] = factory.createScalar(currentElement_in_emergency_ascent);
    // gimbal_pitch
    auto currentElement_gimbal_pitch = (msg + ctr)->gimbal_pitch;
    outArray[ctr]["gimbal_pitch"] = factory.createScalar(currentElement_gimbal_pitch);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_FollowTargetStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_FollowTargetStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_FollowTargetStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::FollowTargetStatus,ros2_px4_msgs_msg_FollowTargetStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_FollowTargetStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::FollowTargetStatus,ros2_px4_msgs_msg_FollowTargetStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_FollowTargetStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::FollowTargetStatus>();
    ros2_px4_msgs_msg_FollowTargetStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_FollowTargetStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_FollowTargetStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::FollowTargetStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_FollowTargetStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::FollowTargetStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_FollowTargetStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER