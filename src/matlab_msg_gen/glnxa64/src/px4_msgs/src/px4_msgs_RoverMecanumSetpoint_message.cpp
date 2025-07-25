// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/RoverMecanumSetpoint
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
#include "px4_msgs/msg/rover_mecanum_setpoint.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_RoverMecanumSetpoint_common : public MATLABROS2MsgInterface<px4_msgs::msg::RoverMecanumSetpoint> {
  public:
    virtual ~ros2_px4_msgs_msg_RoverMecanumSetpoint_common(){}
    virtual void copy_from_struct(px4_msgs::msg::RoverMecanumSetpoint* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::RoverMecanumSetpoint* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_RoverMecanumSetpoint_common::copy_from_struct(px4_msgs::msg::RoverMecanumSetpoint* msg, const matlab::data::Struct& arr,
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
        //forward_speed_setpoint
        const matlab::data::TypedArray<float> forward_speed_setpoint_arr = arr["forward_speed_setpoint"];
        msg->forward_speed_setpoint = forward_speed_setpoint_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'forward_speed_setpoint' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'forward_speed_setpoint' is wrong type; expected a single.");
    }
    try {
        //forward_speed_setpoint_normalized
        const matlab::data::TypedArray<float> forward_speed_setpoint_normalized_arr = arr["forward_speed_setpoint_normalized"];
        msg->forward_speed_setpoint_normalized = forward_speed_setpoint_normalized_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'forward_speed_setpoint_normalized' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'forward_speed_setpoint_normalized' is wrong type; expected a single.");
    }
    try {
        //lateral_speed_setpoint
        const matlab::data::TypedArray<float> lateral_speed_setpoint_arr = arr["lateral_speed_setpoint"];
        msg->lateral_speed_setpoint = lateral_speed_setpoint_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'lateral_speed_setpoint' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'lateral_speed_setpoint' is wrong type; expected a single.");
    }
    try {
        //lateral_speed_setpoint_normalized
        const matlab::data::TypedArray<float> lateral_speed_setpoint_normalized_arr = arr["lateral_speed_setpoint_normalized"];
        msg->lateral_speed_setpoint_normalized = lateral_speed_setpoint_normalized_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'lateral_speed_setpoint_normalized' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'lateral_speed_setpoint_normalized' is wrong type; expected a single.");
    }
    try {
        //yaw_rate_setpoint
        const matlab::data::TypedArray<float> yaw_rate_setpoint_arr = arr["yaw_rate_setpoint"];
        msg->yaw_rate_setpoint = yaw_rate_setpoint_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw_rate_setpoint' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'yaw_rate_setpoint' is wrong type; expected a single.");
    }
    try {
        //speed_diff_setpoint_normalized
        const matlab::data::TypedArray<float> speed_diff_setpoint_normalized_arr = arr["speed_diff_setpoint_normalized"];
        msg->speed_diff_setpoint_normalized = speed_diff_setpoint_normalized_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'speed_diff_setpoint_normalized' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'speed_diff_setpoint_normalized' is wrong type; expected a single.");
    }
    try {
        //yaw_setpoint
        const matlab::data::TypedArray<float> yaw_setpoint_arr = arr["yaw_setpoint"];
        msg->yaw_setpoint = yaw_setpoint_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw_setpoint' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'yaw_setpoint' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_RoverMecanumSetpoint_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::RoverMecanumSetpoint* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","forward_speed_setpoint","forward_speed_setpoint_normalized","lateral_speed_setpoint","lateral_speed_setpoint_normalized","yaw_rate_setpoint","speed_diff_setpoint_normalized","yaw_setpoint"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/RoverMecanumSetpoint");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // forward_speed_setpoint
    auto currentElement_forward_speed_setpoint = (msg + ctr)->forward_speed_setpoint;
    outArray[ctr]["forward_speed_setpoint"] = factory.createScalar(currentElement_forward_speed_setpoint);
    // forward_speed_setpoint_normalized
    auto currentElement_forward_speed_setpoint_normalized = (msg + ctr)->forward_speed_setpoint_normalized;
    outArray[ctr]["forward_speed_setpoint_normalized"] = factory.createScalar(currentElement_forward_speed_setpoint_normalized);
    // lateral_speed_setpoint
    auto currentElement_lateral_speed_setpoint = (msg + ctr)->lateral_speed_setpoint;
    outArray[ctr]["lateral_speed_setpoint"] = factory.createScalar(currentElement_lateral_speed_setpoint);
    // lateral_speed_setpoint_normalized
    auto currentElement_lateral_speed_setpoint_normalized = (msg + ctr)->lateral_speed_setpoint_normalized;
    outArray[ctr]["lateral_speed_setpoint_normalized"] = factory.createScalar(currentElement_lateral_speed_setpoint_normalized);
    // yaw_rate_setpoint
    auto currentElement_yaw_rate_setpoint = (msg + ctr)->yaw_rate_setpoint;
    outArray[ctr]["yaw_rate_setpoint"] = factory.createScalar(currentElement_yaw_rate_setpoint);
    // speed_diff_setpoint_normalized
    auto currentElement_speed_diff_setpoint_normalized = (msg + ctr)->speed_diff_setpoint_normalized;
    outArray[ctr]["speed_diff_setpoint_normalized"] = factory.createScalar(currentElement_speed_diff_setpoint_normalized);
    // yaw_setpoint
    auto currentElement_yaw_setpoint = (msg + ctr)->yaw_setpoint;
    outArray[ctr]["yaw_setpoint"] = factory.createScalar(currentElement_yaw_setpoint);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_RoverMecanumSetpoint_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_RoverMecanumSetpoint_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_RoverMecanumSetpoint_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::RoverMecanumSetpoint,ros2_px4_msgs_msg_RoverMecanumSetpoint_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_RoverMecanumSetpoint_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::RoverMecanumSetpoint,ros2_px4_msgs_msg_RoverMecanumSetpoint_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_RoverMecanumSetpoint_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::RoverMecanumSetpoint>();
    ros2_px4_msgs_msg_RoverMecanumSetpoint_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_RoverMecanumSetpoint_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_RoverMecanumSetpoint_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::RoverMecanumSetpoint*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_RoverMecanumSetpoint_common, MATLABROS2MsgInterface<px4_msgs::msg::RoverMecanumSetpoint>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_RoverMecanumSetpoint_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER