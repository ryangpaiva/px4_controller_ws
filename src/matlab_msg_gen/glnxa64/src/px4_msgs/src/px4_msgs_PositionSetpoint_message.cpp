// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/PositionSetpoint
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
#include "px4_msgs/msg/position_setpoint.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_PositionSetpoint_common : public MATLABROS2MsgInterface<px4_msgs::msg::PositionSetpoint> {
  public:
    virtual ~ros2_px4_msgs_msg_PositionSetpoint_common(){}
    virtual void copy_from_struct(px4_msgs::msg::PositionSetpoint* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::PositionSetpoint* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_PositionSetpoint_common::copy_from_struct(px4_msgs::msg::PositionSetpoint* msg, const matlab::data::Struct& arr,
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
        //valid
        const matlab::data::TypedArray<bool> valid_arr = arr["valid"];
        msg->valid = valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'valid' is wrong type; expected a logical.");
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
    try {
        //vx
        const matlab::data::TypedArray<float> vx_arr = arr["vx"];
        msg->vx = vx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vx' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vx' is wrong type; expected a single.");
    }
    try {
        //vy
        const matlab::data::TypedArray<float> vy_arr = arr["vy"];
        msg->vy = vy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vy' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vy' is wrong type; expected a single.");
    }
    try {
        //vz
        const matlab::data::TypedArray<float> vz_arr = arr["vz"];
        msg->vz = vz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vz' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vz' is wrong type; expected a single.");
    }
    try {
        //lat
        const matlab::data::TypedArray<double> lat_arr = arr["lat"];
        msg->lat = lat_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'lat' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'lat' is wrong type; expected a double.");
    }
    try {
        //lon
        const matlab::data::TypedArray<double> lon_arr = arr["lon"];
        msg->lon = lon_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'lon' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'lon' is wrong type; expected a double.");
    }
    try {
        //alt
        const matlab::data::TypedArray<float> alt_arr = arr["alt"];
        msg->alt = alt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'alt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'alt' is wrong type; expected a single.");
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
        //loiter_radius
        const matlab::data::TypedArray<float> loiter_radius_arr = arr["loiter_radius"];
        msg->loiter_radius = loiter_radius_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'loiter_radius' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'loiter_radius' is wrong type; expected a single.");
    }
    try {
        //loiter_minor_radius
        const matlab::data::TypedArray<float> loiter_minor_radius_arr = arr["loiter_minor_radius"];
        msg->loiter_minor_radius = loiter_minor_radius_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'loiter_minor_radius' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'loiter_minor_radius' is wrong type; expected a single.");
    }
    try {
        //loiter_direction_counter_clockwise
        const matlab::data::TypedArray<bool> loiter_direction_counter_clockwise_arr = arr["loiter_direction_counter_clockwise"];
        msg->loiter_direction_counter_clockwise = loiter_direction_counter_clockwise_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'loiter_direction_counter_clockwise' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'loiter_direction_counter_clockwise' is wrong type; expected a logical.");
    }
    try {
        //loiter_orientation
        const matlab::data::TypedArray<float> loiter_orientation_arr = arr["loiter_orientation"];
        msg->loiter_orientation = loiter_orientation_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'loiter_orientation' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'loiter_orientation' is wrong type; expected a single.");
    }
    try {
        //loiter_pattern
        const matlab::data::TypedArray<uint8_t> loiter_pattern_arr = arr["loiter_pattern"];
        msg->loiter_pattern = loiter_pattern_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'loiter_pattern' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'loiter_pattern' is wrong type; expected a uint8.");
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
        //alt_acceptance_radius
        const matlab::data::TypedArray<float> alt_acceptance_radius_arr = arr["alt_acceptance_radius"];
        msg->alt_acceptance_radius = alt_acceptance_radius_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'alt_acceptance_radius' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'alt_acceptance_radius' is wrong type; expected a single.");
    }
    try {
        //cruising_speed
        const matlab::data::TypedArray<float> cruising_speed_arr = arr["cruising_speed"];
        msg->cruising_speed = cruising_speed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cruising_speed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cruising_speed' is wrong type; expected a single.");
    }
    try {
        //gliding_enabled
        const matlab::data::TypedArray<bool> gliding_enabled_arr = arr["gliding_enabled"];
        msg->gliding_enabled = gliding_enabled_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gliding_enabled' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gliding_enabled' is wrong type; expected a logical.");
    }
    try {
        //cruising_throttle
        const matlab::data::TypedArray<float> cruising_throttle_arr = arr["cruising_throttle"];
        msg->cruising_throttle = cruising_throttle_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cruising_throttle' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cruising_throttle' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_PositionSetpoint_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::PositionSetpoint* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","SETPOINT_TYPE_POSITION","SETPOINT_TYPE_VELOCITY","SETPOINT_TYPE_LOITER","SETPOINT_TYPE_TAKEOFF","SETPOINT_TYPE_LAND","SETPOINT_TYPE_IDLE","LOITER_TYPE_ORBIT","LOITER_TYPE_FIGUREEIGHT","valid","type","vx","vy","vz","lat","lon","alt","yaw","loiter_radius","loiter_minor_radius","loiter_direction_counter_clockwise","loiter_orientation","loiter_pattern","acceptance_radius","alt_acceptance_radius","cruising_speed","gliding_enabled","cruising_throttle"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/PositionSetpoint");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // SETPOINT_TYPE_POSITION
    auto currentElement_SETPOINT_TYPE_POSITION = (msg + ctr)->SETPOINT_TYPE_POSITION;
    outArray[ctr]["SETPOINT_TYPE_POSITION"] = factory.createScalar(currentElement_SETPOINT_TYPE_POSITION);
    // SETPOINT_TYPE_VELOCITY
    auto currentElement_SETPOINT_TYPE_VELOCITY = (msg + ctr)->SETPOINT_TYPE_VELOCITY;
    outArray[ctr]["SETPOINT_TYPE_VELOCITY"] = factory.createScalar(currentElement_SETPOINT_TYPE_VELOCITY);
    // SETPOINT_TYPE_LOITER
    auto currentElement_SETPOINT_TYPE_LOITER = (msg + ctr)->SETPOINT_TYPE_LOITER;
    outArray[ctr]["SETPOINT_TYPE_LOITER"] = factory.createScalar(currentElement_SETPOINT_TYPE_LOITER);
    // SETPOINT_TYPE_TAKEOFF
    auto currentElement_SETPOINT_TYPE_TAKEOFF = (msg + ctr)->SETPOINT_TYPE_TAKEOFF;
    outArray[ctr]["SETPOINT_TYPE_TAKEOFF"] = factory.createScalar(currentElement_SETPOINT_TYPE_TAKEOFF);
    // SETPOINT_TYPE_LAND
    auto currentElement_SETPOINT_TYPE_LAND = (msg + ctr)->SETPOINT_TYPE_LAND;
    outArray[ctr]["SETPOINT_TYPE_LAND"] = factory.createScalar(currentElement_SETPOINT_TYPE_LAND);
    // SETPOINT_TYPE_IDLE
    auto currentElement_SETPOINT_TYPE_IDLE = (msg + ctr)->SETPOINT_TYPE_IDLE;
    outArray[ctr]["SETPOINT_TYPE_IDLE"] = factory.createScalar(currentElement_SETPOINT_TYPE_IDLE);
    // LOITER_TYPE_ORBIT
    auto currentElement_LOITER_TYPE_ORBIT = (msg + ctr)->LOITER_TYPE_ORBIT;
    outArray[ctr]["LOITER_TYPE_ORBIT"] = factory.createScalar(currentElement_LOITER_TYPE_ORBIT);
    // LOITER_TYPE_FIGUREEIGHT
    auto currentElement_LOITER_TYPE_FIGUREEIGHT = (msg + ctr)->LOITER_TYPE_FIGUREEIGHT;
    outArray[ctr]["LOITER_TYPE_FIGUREEIGHT"] = factory.createScalar(currentElement_LOITER_TYPE_FIGUREEIGHT);
    // valid
    auto currentElement_valid = (msg + ctr)->valid;
    outArray[ctr]["valid"] = factory.createScalar(currentElement_valid);
    // type
    auto currentElement_type = (msg + ctr)->type;
    outArray[ctr]["type"] = factory.createScalar(currentElement_type);
    // vx
    auto currentElement_vx = (msg + ctr)->vx;
    outArray[ctr]["vx"] = factory.createScalar(currentElement_vx);
    // vy
    auto currentElement_vy = (msg + ctr)->vy;
    outArray[ctr]["vy"] = factory.createScalar(currentElement_vy);
    // vz
    auto currentElement_vz = (msg + ctr)->vz;
    outArray[ctr]["vz"] = factory.createScalar(currentElement_vz);
    // lat
    auto currentElement_lat = (msg + ctr)->lat;
    outArray[ctr]["lat"] = factory.createScalar(currentElement_lat);
    // lon
    auto currentElement_lon = (msg + ctr)->lon;
    outArray[ctr]["lon"] = factory.createScalar(currentElement_lon);
    // alt
    auto currentElement_alt = (msg + ctr)->alt;
    outArray[ctr]["alt"] = factory.createScalar(currentElement_alt);
    // yaw
    auto currentElement_yaw = (msg + ctr)->yaw;
    outArray[ctr]["yaw"] = factory.createScalar(currentElement_yaw);
    // loiter_radius
    auto currentElement_loiter_radius = (msg + ctr)->loiter_radius;
    outArray[ctr]["loiter_radius"] = factory.createScalar(currentElement_loiter_radius);
    // loiter_minor_radius
    auto currentElement_loiter_minor_radius = (msg + ctr)->loiter_minor_radius;
    outArray[ctr]["loiter_minor_radius"] = factory.createScalar(currentElement_loiter_minor_radius);
    // loiter_direction_counter_clockwise
    auto currentElement_loiter_direction_counter_clockwise = (msg + ctr)->loiter_direction_counter_clockwise;
    outArray[ctr]["loiter_direction_counter_clockwise"] = factory.createScalar(currentElement_loiter_direction_counter_clockwise);
    // loiter_orientation
    auto currentElement_loiter_orientation = (msg + ctr)->loiter_orientation;
    outArray[ctr]["loiter_orientation"] = factory.createScalar(currentElement_loiter_orientation);
    // loiter_pattern
    auto currentElement_loiter_pattern = (msg + ctr)->loiter_pattern;
    outArray[ctr]["loiter_pattern"] = factory.createScalar(currentElement_loiter_pattern);
    // acceptance_radius
    auto currentElement_acceptance_radius = (msg + ctr)->acceptance_radius;
    outArray[ctr]["acceptance_radius"] = factory.createScalar(currentElement_acceptance_radius);
    // alt_acceptance_radius
    auto currentElement_alt_acceptance_radius = (msg + ctr)->alt_acceptance_radius;
    outArray[ctr]["alt_acceptance_radius"] = factory.createScalar(currentElement_alt_acceptance_radius);
    // cruising_speed
    auto currentElement_cruising_speed = (msg + ctr)->cruising_speed;
    outArray[ctr]["cruising_speed"] = factory.createScalar(currentElement_cruising_speed);
    // gliding_enabled
    auto currentElement_gliding_enabled = (msg + ctr)->gliding_enabled;
    outArray[ctr]["gliding_enabled"] = factory.createScalar(currentElement_gliding_enabled);
    // cruising_throttle
    auto currentElement_cruising_throttle = (msg + ctr)->cruising_throttle;
    outArray[ctr]["cruising_throttle"] = factory.createScalar(currentElement_cruising_throttle);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_PositionSetpoint_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_PositionSetpoint_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_PositionSetpoint_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::PositionSetpoint,ros2_px4_msgs_msg_PositionSetpoint_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_PositionSetpoint_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::PositionSetpoint,ros2_px4_msgs_msg_PositionSetpoint_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_PositionSetpoint_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::PositionSetpoint>();
    ros2_px4_msgs_msg_PositionSetpoint_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_PositionSetpoint_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_PositionSetpoint_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::PositionSetpoint*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_PositionSetpoint_common, MATLABROS2MsgInterface<px4_msgs::msg::PositionSetpoint>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_PositionSetpoint_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER