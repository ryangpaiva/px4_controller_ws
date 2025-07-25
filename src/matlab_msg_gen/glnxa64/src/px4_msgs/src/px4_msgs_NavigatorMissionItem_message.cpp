// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/NavigatorMissionItem
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
#include "px4_msgs/msg/navigator_mission_item.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_NavigatorMissionItem_common : public MATLABROS2MsgInterface<px4_msgs::msg::NavigatorMissionItem> {
  public:
    virtual ~ros2_px4_msgs_msg_NavigatorMissionItem_common(){}
    virtual void copy_from_struct(px4_msgs::msg::NavigatorMissionItem* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::NavigatorMissionItem* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_NavigatorMissionItem_common::copy_from_struct(px4_msgs::msg::NavigatorMissionItem* msg, const matlab::data::Struct& arr,
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
        //sequence_current
        const matlab::data::TypedArray<uint16_t> sequence_current_arr = arr["sequence_current"];
        msg->sequence_current = sequence_current_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sequence_current' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'sequence_current' is wrong type; expected a uint16.");
    }
    try {
        //nav_cmd
        const matlab::data::TypedArray<uint16_t> nav_cmd_arr = arr["nav_cmd"];
        msg->nav_cmd = nav_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'nav_cmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'nav_cmd' is wrong type; expected a uint16.");
    }
    try {
        //latitude
        const matlab::data::TypedArray<float> latitude_arr = arr["latitude"];
        msg->latitude = latitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'latitude' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'latitude' is wrong type; expected a single.");
    }
    try {
        //longitude
        const matlab::data::TypedArray<float> longitude_arr = arr["longitude"];
        msg->longitude = longitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'longitude' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'longitude' is wrong type; expected a single.");
    }
    try {
        //time_inside
        const matlab::data::TypedArray<float> time_inside_arr = arr["time_inside"];
        msg->time_inside = time_inside_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'time_inside' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'time_inside' is wrong type; expected a single.");
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
        //loiter_radius
        const matlab::data::TypedArray<float> loiter_radius_arr = arr["loiter_radius"];
        msg->loiter_radius = loiter_radius_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'loiter_radius' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'loiter_radius' is wrong type; expected a single.");
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
        //altitude
        const matlab::data::TypedArray<float> altitude_arr = arr["altitude"];
        msg->altitude = altitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'altitude' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'altitude' is wrong type; expected a single.");
    }
    try {
        //frame
        const matlab::data::TypedArray<uint8_t> frame_arr = arr["frame"];
        msg->frame = frame_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'frame' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'frame' is wrong type; expected a uint8.");
    }
    try {
        //origin
        const matlab::data::TypedArray<uint8_t> origin_arr = arr["origin"];
        msg->origin = origin_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'origin' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'origin' is wrong type; expected a uint8.");
    }
    try {
        //loiter_exit_xtrack
        const matlab::data::TypedArray<bool> loiter_exit_xtrack_arr = arr["loiter_exit_xtrack"];
        msg->loiter_exit_xtrack = loiter_exit_xtrack_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'loiter_exit_xtrack' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'loiter_exit_xtrack' is wrong type; expected a logical.");
    }
    try {
        //force_heading
        const matlab::data::TypedArray<bool> force_heading_arr = arr["force_heading"];
        msg->force_heading = force_heading_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'force_heading' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'force_heading' is wrong type; expected a logical.");
    }
    try {
        //altitude_is_relative
        const matlab::data::TypedArray<bool> altitude_is_relative_arr = arr["altitude_is_relative"];
        msg->altitude_is_relative = altitude_is_relative_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'altitude_is_relative' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'altitude_is_relative' is wrong type; expected a logical.");
    }
    try {
        //autocontinue
        const matlab::data::TypedArray<bool> autocontinue_arr = arr["autocontinue"];
        msg->autocontinue = autocontinue_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'autocontinue' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'autocontinue' is wrong type; expected a logical.");
    }
    try {
        //vtol_back_transition
        const matlab::data::TypedArray<bool> vtol_back_transition_arr = arr["vtol_back_transition"];
        msg->vtol_back_transition = vtol_back_transition_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vtol_back_transition' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vtol_back_transition' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_NavigatorMissionItem_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::NavigatorMissionItem* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","sequence_current","nav_cmd","latitude","longitude","time_inside","acceptance_radius","loiter_radius","yaw","altitude","frame","origin","loiter_exit_xtrack","force_heading","altitude_is_relative","autocontinue","vtol_back_transition"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/NavigatorMissionItem");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // sequence_current
    auto currentElement_sequence_current = (msg + ctr)->sequence_current;
    outArray[ctr]["sequence_current"] = factory.createScalar(currentElement_sequence_current);
    // nav_cmd
    auto currentElement_nav_cmd = (msg + ctr)->nav_cmd;
    outArray[ctr]["nav_cmd"] = factory.createScalar(currentElement_nav_cmd);
    // latitude
    auto currentElement_latitude = (msg + ctr)->latitude;
    outArray[ctr]["latitude"] = factory.createScalar(currentElement_latitude);
    // longitude
    auto currentElement_longitude = (msg + ctr)->longitude;
    outArray[ctr]["longitude"] = factory.createScalar(currentElement_longitude);
    // time_inside
    auto currentElement_time_inside = (msg + ctr)->time_inside;
    outArray[ctr]["time_inside"] = factory.createScalar(currentElement_time_inside);
    // acceptance_radius
    auto currentElement_acceptance_radius = (msg + ctr)->acceptance_radius;
    outArray[ctr]["acceptance_radius"] = factory.createScalar(currentElement_acceptance_radius);
    // loiter_radius
    auto currentElement_loiter_radius = (msg + ctr)->loiter_radius;
    outArray[ctr]["loiter_radius"] = factory.createScalar(currentElement_loiter_radius);
    // yaw
    auto currentElement_yaw = (msg + ctr)->yaw;
    outArray[ctr]["yaw"] = factory.createScalar(currentElement_yaw);
    // altitude
    auto currentElement_altitude = (msg + ctr)->altitude;
    outArray[ctr]["altitude"] = factory.createScalar(currentElement_altitude);
    // frame
    auto currentElement_frame = (msg + ctr)->frame;
    outArray[ctr]["frame"] = factory.createScalar(currentElement_frame);
    // origin
    auto currentElement_origin = (msg + ctr)->origin;
    outArray[ctr]["origin"] = factory.createScalar(currentElement_origin);
    // loiter_exit_xtrack
    auto currentElement_loiter_exit_xtrack = (msg + ctr)->loiter_exit_xtrack;
    outArray[ctr]["loiter_exit_xtrack"] = factory.createScalar(currentElement_loiter_exit_xtrack);
    // force_heading
    auto currentElement_force_heading = (msg + ctr)->force_heading;
    outArray[ctr]["force_heading"] = factory.createScalar(currentElement_force_heading);
    // altitude_is_relative
    auto currentElement_altitude_is_relative = (msg + ctr)->altitude_is_relative;
    outArray[ctr]["altitude_is_relative"] = factory.createScalar(currentElement_altitude_is_relative);
    // autocontinue
    auto currentElement_autocontinue = (msg + ctr)->autocontinue;
    outArray[ctr]["autocontinue"] = factory.createScalar(currentElement_autocontinue);
    // vtol_back_transition
    auto currentElement_vtol_back_transition = (msg + ctr)->vtol_back_transition;
    outArray[ctr]["vtol_back_transition"] = factory.createScalar(currentElement_vtol_back_transition);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_NavigatorMissionItem_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_NavigatorMissionItem_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_NavigatorMissionItem_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::NavigatorMissionItem,ros2_px4_msgs_msg_NavigatorMissionItem_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_NavigatorMissionItem_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::NavigatorMissionItem,ros2_px4_msgs_msg_NavigatorMissionItem_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_NavigatorMissionItem_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::NavigatorMissionItem>();
    ros2_px4_msgs_msg_NavigatorMissionItem_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_NavigatorMissionItem_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_NavigatorMissionItem_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::NavigatorMissionItem*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_NavigatorMissionItem_common, MATLABROS2MsgInterface<px4_msgs::msg::NavigatorMissionItem>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_NavigatorMissionItem_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER