// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/HomePosition
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
#include "px4_msgs/msg/home_position.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_HomePosition_common : public MATLABROS2MsgInterface<px4_msgs::msg::HomePosition> {
  public:
    virtual ~ros2_px4_msgs_msg_HomePosition_common(){}
    virtual void copy_from_struct(px4_msgs::msg::HomePosition* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::HomePosition* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_HomePosition_common::copy_from_struct(px4_msgs::msg::HomePosition* msg, const matlab::data::Struct& arr,
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
        //x
        const matlab::data::TypedArray<float> x_arr = arr["x"];
        msg->x = x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a single.");
    }
    try {
        //y
        const matlab::data::TypedArray<float> y_arr = arr["y"];
        msg->y = y_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a single.");
    }
    try {
        //z
        const matlab::data::TypedArray<float> z_arr = arr["z"];
        msg->z = z_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a single.");
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
        //valid_alt
        const matlab::data::TypedArray<bool> valid_alt_arr = arr["valid_alt"];
        msg->valid_alt = valid_alt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'valid_alt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'valid_alt' is wrong type; expected a logical.");
    }
    try {
        //valid_hpos
        const matlab::data::TypedArray<bool> valid_hpos_arr = arr["valid_hpos"];
        msg->valid_hpos = valid_hpos_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'valid_hpos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'valid_hpos' is wrong type; expected a logical.");
    }
    try {
        //valid_lpos
        const matlab::data::TypedArray<bool> valid_lpos_arr = arr["valid_lpos"];
        msg->valid_lpos = valid_lpos_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'valid_lpos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'valid_lpos' is wrong type; expected a logical.");
    }
    try {
        //manual_home
        const matlab::data::TypedArray<bool> manual_home_arr = arr["manual_home"];
        msg->manual_home = manual_home_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'manual_home' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'manual_home' is wrong type; expected a logical.");
    }
    try {
        //update_count
        const matlab::data::TypedArray<uint32_t> update_count_arr = arr["update_count"];
        msg->update_count = update_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'update_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'update_count' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_HomePosition_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::HomePosition* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","MESSAGE_VERSION","timestamp","lat","lon","alt","x","y","z","yaw","valid_alt","valid_hpos","valid_lpos","manual_home","update_count"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/HomePosition");
    // MESSAGE_VERSION
    auto currentElement_MESSAGE_VERSION = (msg + ctr)->MESSAGE_VERSION;
    outArray[ctr]["MESSAGE_VERSION"] = factory.createScalar(currentElement_MESSAGE_VERSION);
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // lat
    auto currentElement_lat = (msg + ctr)->lat;
    outArray[ctr]["lat"] = factory.createScalar(currentElement_lat);
    // lon
    auto currentElement_lon = (msg + ctr)->lon;
    outArray[ctr]["lon"] = factory.createScalar(currentElement_lon);
    // alt
    auto currentElement_alt = (msg + ctr)->alt;
    outArray[ctr]["alt"] = factory.createScalar(currentElement_alt);
    // x
    auto currentElement_x = (msg + ctr)->x;
    outArray[ctr]["x"] = factory.createScalar(currentElement_x);
    // y
    auto currentElement_y = (msg + ctr)->y;
    outArray[ctr]["y"] = factory.createScalar(currentElement_y);
    // z
    auto currentElement_z = (msg + ctr)->z;
    outArray[ctr]["z"] = factory.createScalar(currentElement_z);
    // yaw
    auto currentElement_yaw = (msg + ctr)->yaw;
    outArray[ctr]["yaw"] = factory.createScalar(currentElement_yaw);
    // valid_alt
    auto currentElement_valid_alt = (msg + ctr)->valid_alt;
    outArray[ctr]["valid_alt"] = factory.createScalar(currentElement_valid_alt);
    // valid_hpos
    auto currentElement_valid_hpos = (msg + ctr)->valid_hpos;
    outArray[ctr]["valid_hpos"] = factory.createScalar(currentElement_valid_hpos);
    // valid_lpos
    auto currentElement_valid_lpos = (msg + ctr)->valid_lpos;
    outArray[ctr]["valid_lpos"] = factory.createScalar(currentElement_valid_lpos);
    // manual_home
    auto currentElement_manual_home = (msg + ctr)->manual_home;
    outArray[ctr]["manual_home"] = factory.createScalar(currentElement_manual_home);
    // update_count
    auto currentElement_update_count = (msg + ctr)->update_count;
    outArray[ctr]["update_count"] = factory.createScalar(currentElement_update_count);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_HomePosition_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_HomePosition_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_HomePosition_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::HomePosition,ros2_px4_msgs_msg_HomePosition_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_HomePosition_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::HomePosition,ros2_px4_msgs_msg_HomePosition_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_HomePosition_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::HomePosition>();
    ros2_px4_msgs_msg_HomePosition_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_HomePosition_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_HomePosition_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::HomePosition*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_HomePosition_common, MATLABROS2MsgInterface<px4_msgs::msg::HomePosition>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_HomePosition_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER