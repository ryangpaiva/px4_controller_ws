// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/VehicleRoi
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
#include "px4_msgs/msg/vehicle_roi.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_VehicleRoi_common : public MATLABROS2MsgInterface<px4_msgs::msg::VehicleRoi> {
  public:
    virtual ~ros2_px4_msgs_msg_VehicleRoi_common(){}
    virtual void copy_from_struct(px4_msgs::msg::VehicleRoi* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleRoi* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_VehicleRoi_common::copy_from_struct(px4_msgs::msg::VehicleRoi* msg, const matlab::data::Struct& arr,
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
        //mode
        const matlab::data::TypedArray<uint8_t> mode_arr = arr["mode"];
        msg->mode = mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode' is wrong type; expected a uint8.");
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
        //roll_offset
        const matlab::data::TypedArray<float> roll_offset_arr = arr["roll_offset"];
        msg->roll_offset = roll_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'roll_offset' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'roll_offset' is wrong type; expected a single.");
    }
    try {
        //pitch_offset
        const matlab::data::TypedArray<float> pitch_offset_arr = arr["pitch_offset"];
        msg->pitch_offset = pitch_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pitch_offset' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pitch_offset' is wrong type; expected a single.");
    }
    try {
        //yaw_offset
        const matlab::data::TypedArray<float> yaw_offset_arr = arr["yaw_offset"];
        msg->yaw_offset = yaw_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw_offset' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'yaw_offset' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_VehicleRoi_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleRoi* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","ROI_NONE","ROI_WPNEXT","ROI_WPINDEX","ROI_LOCATION","ROI_TARGET","ROI_ENUM_END","mode","lat","lon","alt","roll_offset","pitch_offset","yaw_offset"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/VehicleRoi");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // ROI_NONE
    auto currentElement_ROI_NONE = (msg + ctr)->ROI_NONE;
    outArray[ctr]["ROI_NONE"] = factory.createScalar(currentElement_ROI_NONE);
    // ROI_WPNEXT
    auto currentElement_ROI_WPNEXT = (msg + ctr)->ROI_WPNEXT;
    outArray[ctr]["ROI_WPNEXT"] = factory.createScalar(currentElement_ROI_WPNEXT);
    // ROI_WPINDEX
    auto currentElement_ROI_WPINDEX = (msg + ctr)->ROI_WPINDEX;
    outArray[ctr]["ROI_WPINDEX"] = factory.createScalar(currentElement_ROI_WPINDEX);
    // ROI_LOCATION
    auto currentElement_ROI_LOCATION = (msg + ctr)->ROI_LOCATION;
    outArray[ctr]["ROI_LOCATION"] = factory.createScalar(currentElement_ROI_LOCATION);
    // ROI_TARGET
    auto currentElement_ROI_TARGET = (msg + ctr)->ROI_TARGET;
    outArray[ctr]["ROI_TARGET"] = factory.createScalar(currentElement_ROI_TARGET);
    // ROI_ENUM_END
    auto currentElement_ROI_ENUM_END = (msg + ctr)->ROI_ENUM_END;
    outArray[ctr]["ROI_ENUM_END"] = factory.createScalar(currentElement_ROI_ENUM_END);
    // mode
    auto currentElement_mode = (msg + ctr)->mode;
    outArray[ctr]["mode"] = factory.createScalar(currentElement_mode);
    // lat
    auto currentElement_lat = (msg + ctr)->lat;
    outArray[ctr]["lat"] = factory.createScalar(currentElement_lat);
    // lon
    auto currentElement_lon = (msg + ctr)->lon;
    outArray[ctr]["lon"] = factory.createScalar(currentElement_lon);
    // alt
    auto currentElement_alt = (msg + ctr)->alt;
    outArray[ctr]["alt"] = factory.createScalar(currentElement_alt);
    // roll_offset
    auto currentElement_roll_offset = (msg + ctr)->roll_offset;
    outArray[ctr]["roll_offset"] = factory.createScalar(currentElement_roll_offset);
    // pitch_offset
    auto currentElement_pitch_offset = (msg + ctr)->pitch_offset;
    outArray[ctr]["pitch_offset"] = factory.createScalar(currentElement_pitch_offset);
    // yaw_offset
    auto currentElement_yaw_offset = (msg + ctr)->yaw_offset;
    outArray[ctr]["yaw_offset"] = factory.createScalar(currentElement_yaw_offset);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_VehicleRoi_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_VehicleRoi_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_VehicleRoi_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::VehicleRoi,ros2_px4_msgs_msg_VehicleRoi_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_VehicleRoi_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::VehicleRoi,ros2_px4_msgs_msg_VehicleRoi_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_VehicleRoi_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::VehicleRoi>();
    ros2_px4_msgs_msg_VehicleRoi_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_VehicleRoi_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_VehicleRoi_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::VehicleRoi*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_VehicleRoi_common, MATLABROS2MsgInterface<px4_msgs::msg::VehicleRoi>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_VehicleRoi_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER