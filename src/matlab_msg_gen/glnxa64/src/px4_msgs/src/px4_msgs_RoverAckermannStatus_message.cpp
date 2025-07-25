// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/RoverAckermannStatus
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
#include "px4_msgs/msg/rover_ackermann_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_RoverAckermannStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::RoverAckermannStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_RoverAckermannStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::RoverAckermannStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::RoverAckermannStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_RoverAckermannStatus_common::copy_from_struct(px4_msgs::msg::RoverAckermannStatus* msg, const matlab::data::Struct& arr,
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
        //measured_forward_speed
        const matlab::data::TypedArray<float> measured_forward_speed_arr = arr["measured_forward_speed"];
        msg->measured_forward_speed = measured_forward_speed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'measured_forward_speed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'measured_forward_speed' is wrong type; expected a single.");
    }
    try {
        //adjusted_forward_speed_setpoint
        const matlab::data::TypedArray<float> adjusted_forward_speed_setpoint_arr = arr["adjusted_forward_speed_setpoint"];
        msg->adjusted_forward_speed_setpoint = adjusted_forward_speed_setpoint_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'adjusted_forward_speed_setpoint' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'adjusted_forward_speed_setpoint' is wrong type; expected a single.");
    }
    try {
        //steering_setpoint_normalized
        const matlab::data::TypedArray<float> steering_setpoint_normalized_arr = arr["steering_setpoint_normalized"];
        msg->steering_setpoint_normalized = steering_setpoint_normalized_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'steering_setpoint_normalized' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'steering_setpoint_normalized' is wrong type; expected a single.");
    }
    try {
        //adjusted_steering_setpoint_normalized
        const matlab::data::TypedArray<float> adjusted_steering_setpoint_normalized_arr = arr["adjusted_steering_setpoint_normalized"];
        msg->adjusted_steering_setpoint_normalized = adjusted_steering_setpoint_normalized_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'adjusted_steering_setpoint_normalized' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'adjusted_steering_setpoint_normalized' is wrong type; expected a single.");
    }
    try {
        //measured_lateral_acceleration
        const matlab::data::TypedArray<float> measured_lateral_acceleration_arr = arr["measured_lateral_acceleration"];
        msg->measured_lateral_acceleration = measured_lateral_acceleration_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'measured_lateral_acceleration' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'measured_lateral_acceleration' is wrong type; expected a single.");
    }
    try {
        //pid_throttle_integral
        const matlab::data::TypedArray<float> pid_throttle_integral_arr = arr["pid_throttle_integral"];
        msg->pid_throttle_integral = pid_throttle_integral_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pid_throttle_integral' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pid_throttle_integral' is wrong type; expected a single.");
    }
    try {
        //pid_lat_accel_integral
        const matlab::data::TypedArray<float> pid_lat_accel_integral_arr = arr["pid_lat_accel_integral"];
        msg->pid_lat_accel_integral = pid_lat_accel_integral_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pid_lat_accel_integral' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pid_lat_accel_integral' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_RoverAckermannStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::RoverAckermannStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","measured_forward_speed","adjusted_forward_speed_setpoint","steering_setpoint_normalized","adjusted_steering_setpoint_normalized","measured_lateral_acceleration","pid_throttle_integral","pid_lat_accel_integral"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/RoverAckermannStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // measured_forward_speed
    auto currentElement_measured_forward_speed = (msg + ctr)->measured_forward_speed;
    outArray[ctr]["measured_forward_speed"] = factory.createScalar(currentElement_measured_forward_speed);
    // adjusted_forward_speed_setpoint
    auto currentElement_adjusted_forward_speed_setpoint = (msg + ctr)->adjusted_forward_speed_setpoint;
    outArray[ctr]["adjusted_forward_speed_setpoint"] = factory.createScalar(currentElement_adjusted_forward_speed_setpoint);
    // steering_setpoint_normalized
    auto currentElement_steering_setpoint_normalized = (msg + ctr)->steering_setpoint_normalized;
    outArray[ctr]["steering_setpoint_normalized"] = factory.createScalar(currentElement_steering_setpoint_normalized);
    // adjusted_steering_setpoint_normalized
    auto currentElement_adjusted_steering_setpoint_normalized = (msg + ctr)->adjusted_steering_setpoint_normalized;
    outArray[ctr]["adjusted_steering_setpoint_normalized"] = factory.createScalar(currentElement_adjusted_steering_setpoint_normalized);
    // measured_lateral_acceleration
    auto currentElement_measured_lateral_acceleration = (msg + ctr)->measured_lateral_acceleration;
    outArray[ctr]["measured_lateral_acceleration"] = factory.createScalar(currentElement_measured_lateral_acceleration);
    // pid_throttle_integral
    auto currentElement_pid_throttle_integral = (msg + ctr)->pid_throttle_integral;
    outArray[ctr]["pid_throttle_integral"] = factory.createScalar(currentElement_pid_throttle_integral);
    // pid_lat_accel_integral
    auto currentElement_pid_lat_accel_integral = (msg + ctr)->pid_lat_accel_integral;
    outArray[ctr]["pid_lat_accel_integral"] = factory.createScalar(currentElement_pid_lat_accel_integral);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_RoverAckermannStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_RoverAckermannStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_RoverAckermannStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::RoverAckermannStatus,ros2_px4_msgs_msg_RoverAckermannStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_RoverAckermannStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::RoverAckermannStatus,ros2_px4_msgs_msg_RoverAckermannStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_RoverAckermannStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::RoverAckermannStatus>();
    ros2_px4_msgs_msg_RoverAckermannStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_RoverAckermannStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_RoverAckermannStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::RoverAckermannStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_RoverAckermannStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::RoverAckermannStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_RoverAckermannStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER