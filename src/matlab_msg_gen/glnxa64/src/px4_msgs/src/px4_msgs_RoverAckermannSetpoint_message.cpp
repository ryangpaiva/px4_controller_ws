// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/RoverAckermannSetpoint
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
#include "px4_msgs/msg/rover_ackermann_setpoint.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_RoverAckermannSetpoint_common : public MATLABROS2MsgInterface<px4_msgs::msg::RoverAckermannSetpoint> {
  public:
    virtual ~ros2_px4_msgs_msg_RoverAckermannSetpoint_common(){}
    virtual void copy_from_struct(px4_msgs::msg::RoverAckermannSetpoint* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::RoverAckermannSetpoint* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_RoverAckermannSetpoint_common::copy_from_struct(px4_msgs::msg::RoverAckermannSetpoint* msg, const matlab::data::Struct& arr,
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
        //steering_setpoint
        const matlab::data::TypedArray<float> steering_setpoint_arr = arr["steering_setpoint"];
        msg->steering_setpoint = steering_setpoint_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'steering_setpoint' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'steering_setpoint' is wrong type; expected a single.");
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
        //lateral_acceleration_setpoint
        const matlab::data::TypedArray<float> lateral_acceleration_setpoint_arr = arr["lateral_acceleration_setpoint"];
        msg->lateral_acceleration_setpoint = lateral_acceleration_setpoint_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'lateral_acceleration_setpoint' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'lateral_acceleration_setpoint' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_RoverAckermannSetpoint_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::RoverAckermannSetpoint* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","forward_speed_setpoint","forward_speed_setpoint_normalized","steering_setpoint","steering_setpoint_normalized","lateral_acceleration_setpoint"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/RoverAckermannSetpoint");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // forward_speed_setpoint
    auto currentElement_forward_speed_setpoint = (msg + ctr)->forward_speed_setpoint;
    outArray[ctr]["forward_speed_setpoint"] = factory.createScalar(currentElement_forward_speed_setpoint);
    // forward_speed_setpoint_normalized
    auto currentElement_forward_speed_setpoint_normalized = (msg + ctr)->forward_speed_setpoint_normalized;
    outArray[ctr]["forward_speed_setpoint_normalized"] = factory.createScalar(currentElement_forward_speed_setpoint_normalized);
    // steering_setpoint
    auto currentElement_steering_setpoint = (msg + ctr)->steering_setpoint;
    outArray[ctr]["steering_setpoint"] = factory.createScalar(currentElement_steering_setpoint);
    // steering_setpoint_normalized
    auto currentElement_steering_setpoint_normalized = (msg + ctr)->steering_setpoint_normalized;
    outArray[ctr]["steering_setpoint_normalized"] = factory.createScalar(currentElement_steering_setpoint_normalized);
    // lateral_acceleration_setpoint
    auto currentElement_lateral_acceleration_setpoint = (msg + ctr)->lateral_acceleration_setpoint;
    outArray[ctr]["lateral_acceleration_setpoint"] = factory.createScalar(currentElement_lateral_acceleration_setpoint);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_RoverAckermannSetpoint_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_RoverAckermannSetpoint_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_RoverAckermannSetpoint_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::RoverAckermannSetpoint,ros2_px4_msgs_msg_RoverAckermannSetpoint_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_RoverAckermannSetpoint_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::RoverAckermannSetpoint,ros2_px4_msgs_msg_RoverAckermannSetpoint_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_RoverAckermannSetpoint_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::RoverAckermannSetpoint>();
    ros2_px4_msgs_msg_RoverAckermannSetpoint_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_RoverAckermannSetpoint_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_RoverAckermannSetpoint_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::RoverAckermannSetpoint*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_RoverAckermannSetpoint_common, MATLABROS2MsgInterface<px4_msgs::msg::RoverAckermannSetpoint>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_RoverAckermannSetpoint_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER