// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/PositionControllerStatus
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
#include "px4_msgs/msg/position_controller_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_PositionControllerStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::PositionControllerStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_PositionControllerStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::PositionControllerStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::PositionControllerStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_PositionControllerStatus_common::copy_from_struct(px4_msgs::msg::PositionControllerStatus* msg, const matlab::data::Struct& arr,
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
        //nav_roll
        const matlab::data::TypedArray<float> nav_roll_arr = arr["nav_roll"];
        msg->nav_roll = nav_roll_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'nav_roll' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'nav_roll' is wrong type; expected a single.");
    }
    try {
        //nav_pitch
        const matlab::data::TypedArray<float> nav_pitch_arr = arr["nav_pitch"];
        msg->nav_pitch = nav_pitch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'nav_pitch' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'nav_pitch' is wrong type; expected a single.");
    }
    try {
        //nav_bearing
        const matlab::data::TypedArray<float> nav_bearing_arr = arr["nav_bearing"];
        msg->nav_bearing = nav_bearing_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'nav_bearing' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'nav_bearing' is wrong type; expected a single.");
    }
    try {
        //target_bearing
        const matlab::data::TypedArray<float> target_bearing_arr = arr["target_bearing"];
        msg->target_bearing = target_bearing_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'target_bearing' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'target_bearing' is wrong type; expected a single.");
    }
    try {
        //xtrack_error
        const matlab::data::TypedArray<float> xtrack_error_arr = arr["xtrack_error"];
        msg->xtrack_error = xtrack_error_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'xtrack_error' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'xtrack_error' is wrong type; expected a single.");
    }
    try {
        //wp_dist
        const matlab::data::TypedArray<float> wp_dist_arr = arr["wp_dist"];
        msg->wp_dist = wp_dist_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'wp_dist' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'wp_dist' is wrong type; expected a single.");
    }
    try {
        //acceptance_radius
        const matlab::data::TypedArray<float> acceptance_radius_arr = arr["acceptance_radius"];
        msg->acceptance_radius = acceptance_radius_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'acceptance_radius' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'acceptance_radius' is wrong type; expected a single.");
    }
    try {
        //yaw_acceptance
        const matlab::data::TypedArray<float> yaw_acceptance_arr = arr["yaw_acceptance"];
        msg->yaw_acceptance = yaw_acceptance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw_acceptance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'yaw_acceptance' is wrong type; expected a single.");
    }
    try {
        //altitude_acceptance
        const matlab::data::TypedArray<float> altitude_acceptance_arr = arr["altitude_acceptance"];
        msg->altitude_acceptance = altitude_acceptance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'altitude_acceptance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'altitude_acceptance' is wrong type; expected a single.");
    }
    try {
        //type
        const matlab::data::TypedArray<uint8_t> type_arr = arr["type"];
        msg->type = type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'type' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_PositionControllerStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::PositionControllerStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","nav_roll","nav_pitch","nav_bearing","target_bearing","xtrack_error","wp_dist","acceptance_radius","yaw_acceptance","altitude_acceptance","type"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/PositionControllerStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // nav_roll
    auto currentElement_nav_roll = (msg + ctr)->nav_roll;
    outArray[ctr]["nav_roll"] = factory.createScalar(currentElement_nav_roll);
    // nav_pitch
    auto currentElement_nav_pitch = (msg + ctr)->nav_pitch;
    outArray[ctr]["nav_pitch"] = factory.createScalar(currentElement_nav_pitch);
    // nav_bearing
    auto currentElement_nav_bearing = (msg + ctr)->nav_bearing;
    outArray[ctr]["nav_bearing"] = factory.createScalar(currentElement_nav_bearing);
    // target_bearing
    auto currentElement_target_bearing = (msg + ctr)->target_bearing;
    outArray[ctr]["target_bearing"] = factory.createScalar(currentElement_target_bearing);
    // xtrack_error
    auto currentElement_xtrack_error = (msg + ctr)->xtrack_error;
    outArray[ctr]["xtrack_error"] = factory.createScalar(currentElement_xtrack_error);
    // wp_dist
    auto currentElement_wp_dist = (msg + ctr)->wp_dist;
    outArray[ctr]["wp_dist"] = factory.createScalar(currentElement_wp_dist);
    // acceptance_radius
    auto currentElement_acceptance_radius = (msg + ctr)->acceptance_radius;
    outArray[ctr]["acceptance_radius"] = factory.createScalar(currentElement_acceptance_radius);
    // yaw_acceptance
    auto currentElement_yaw_acceptance = (msg + ctr)->yaw_acceptance;
    outArray[ctr]["yaw_acceptance"] = factory.createScalar(currentElement_yaw_acceptance);
    // altitude_acceptance
    auto currentElement_altitude_acceptance = (msg + ctr)->altitude_acceptance;
    outArray[ctr]["altitude_acceptance"] = factory.createScalar(currentElement_altitude_acceptance);
    // type
    auto currentElement_type = (msg + ctr)->type;
    outArray[ctr]["type"] = factory.createScalar(currentElement_type);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_PositionControllerStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_PositionControllerStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_PositionControllerStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::PositionControllerStatus,ros2_px4_msgs_msg_PositionControllerStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_PositionControllerStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::PositionControllerStatus,ros2_px4_msgs_msg_PositionControllerStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_PositionControllerStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::PositionControllerStatus>();
    ros2_px4_msgs_msg_PositionControllerStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_PositionControllerStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_PositionControllerStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::PositionControllerStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_PositionControllerStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::PositionControllerStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_PositionControllerStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER