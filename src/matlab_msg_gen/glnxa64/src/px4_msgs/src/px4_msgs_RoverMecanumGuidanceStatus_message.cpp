// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/RoverMecanumGuidanceStatus
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
#include "px4_msgs/msg/rover_mecanum_guidance_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_RoverMecanumGuidanceStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::RoverMecanumGuidanceStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_RoverMecanumGuidanceStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::RoverMecanumGuidanceStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::RoverMecanumGuidanceStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_RoverMecanumGuidanceStatus_common::copy_from_struct(px4_msgs::msg::RoverMecanumGuidanceStatus* msg, const matlab::data::Struct& arr,
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
        //lookahead_distance
        const matlab::data::TypedArray<float> lookahead_distance_arr = arr["lookahead_distance"];
        msg->lookahead_distance = lookahead_distance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'lookahead_distance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'lookahead_distance' is wrong type; expected a single.");
    }
    try {
        //heading_error
        const matlab::data::TypedArray<float> heading_error_arr = arr["heading_error"];
        msg->heading_error = heading_error_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heading_error' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heading_error' is wrong type; expected a single.");
    }
    try {
        //desired_speed
        const matlab::data::TypedArray<float> desired_speed_arr = arr["desired_speed"];
        msg->desired_speed = desired_speed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'desired_speed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'desired_speed' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_RoverMecanumGuidanceStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::RoverMecanumGuidanceStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","lookahead_distance","heading_error","desired_speed"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/RoverMecanumGuidanceStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // lookahead_distance
    auto currentElement_lookahead_distance = (msg + ctr)->lookahead_distance;
    outArray[ctr]["lookahead_distance"] = factory.createScalar(currentElement_lookahead_distance);
    // heading_error
    auto currentElement_heading_error = (msg + ctr)->heading_error;
    outArray[ctr]["heading_error"] = factory.createScalar(currentElement_heading_error);
    // desired_speed
    auto currentElement_desired_speed = (msg + ctr)->desired_speed;
    outArray[ctr]["desired_speed"] = factory.createScalar(currentElement_desired_speed);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_RoverMecanumGuidanceStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_RoverMecanumGuidanceStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_RoverMecanumGuidanceStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::RoverMecanumGuidanceStatus,ros2_px4_msgs_msg_RoverMecanumGuidanceStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_RoverMecanumGuidanceStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::RoverMecanumGuidanceStatus,ros2_px4_msgs_msg_RoverMecanumGuidanceStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_RoverMecanumGuidanceStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::RoverMecanumGuidanceStatus>();
    ros2_px4_msgs_msg_RoverMecanumGuidanceStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_RoverMecanumGuidanceStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_RoverMecanumGuidanceStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::RoverMecanumGuidanceStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_RoverMecanumGuidanceStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::RoverMecanumGuidanceStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_RoverMecanumGuidanceStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER