// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/SensorOpticalFlow
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
#include "px4_msgs/msg/sensor_optical_flow.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_SensorOpticalFlow_common : public MATLABROS2MsgInterface<px4_msgs::msg::SensorOpticalFlow> {
  public:
    virtual ~ros2_px4_msgs_msg_SensorOpticalFlow_common(){}
    virtual void copy_from_struct(px4_msgs::msg::SensorOpticalFlow* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::SensorOpticalFlow* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_SensorOpticalFlow_common::copy_from_struct(px4_msgs::msg::SensorOpticalFlow* msg, const matlab::data::Struct& arr,
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
        //timestamp_sample
        const matlab::data::TypedArray<uint64_t> timestamp_sample_arr = arr["timestamp_sample"];
        msg->timestamp_sample = timestamp_sample_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'timestamp_sample' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'timestamp_sample' is wrong type; expected a uint64.");
    }
    try {
        //device_id
        const matlab::data::TypedArray<uint32_t> device_id_arr = arr["device_id"];
        msg->device_id = device_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'device_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'device_id' is wrong type; expected a uint32.");
    }
    try {
        //pixel_flow
        const matlab::data::TypedArray<float> pixel_flow_arr = arr["pixel_flow"];
        size_t nelem = 2;
        	std::copy(pixel_flow_arr.begin(), pixel_flow_arr.begin()+nelem, msg->pixel_flow.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pixel_flow' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pixel_flow' is wrong type; expected a single.");
    }
    try {
        //delta_angle
        const matlab::data::TypedArray<float> delta_angle_arr = arr["delta_angle"];
        size_t nelem = 3;
        	std::copy(delta_angle_arr.begin(), delta_angle_arr.begin()+nelem, msg->delta_angle.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'delta_angle' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'delta_angle' is wrong type; expected a single.");
    }
    try {
        //delta_angle_available
        const matlab::data::TypedArray<bool> delta_angle_available_arr = arr["delta_angle_available"];
        msg->delta_angle_available = delta_angle_available_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'delta_angle_available' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'delta_angle_available' is wrong type; expected a logical.");
    }
    try {
        //distance_m
        const matlab::data::TypedArray<float> distance_m_arr = arr["distance_m"];
        msg->distance_m = distance_m_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'distance_m' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'distance_m' is wrong type; expected a single.");
    }
    try {
        //distance_available
        const matlab::data::TypedArray<bool> distance_available_arr = arr["distance_available"];
        msg->distance_available = distance_available_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'distance_available' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'distance_available' is wrong type; expected a logical.");
    }
    try {
        //integration_timespan_us
        const matlab::data::TypedArray<uint32_t> integration_timespan_us_arr = arr["integration_timespan_us"];
        msg->integration_timespan_us = integration_timespan_us_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'integration_timespan_us' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'integration_timespan_us' is wrong type; expected a uint32.");
    }
    try {
        //quality
        const matlab::data::TypedArray<uint8_t> quality_arr = arr["quality"];
        msg->quality = quality_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'quality' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'quality' is wrong type; expected a uint8.");
    }
    try {
        //error_count
        const matlab::data::TypedArray<uint32_t> error_count_arr = arr["error_count"];
        msg->error_count = error_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'error_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'error_count' is wrong type; expected a uint32.");
    }
    try {
        //max_flow_rate
        const matlab::data::TypedArray<float> max_flow_rate_arr = arr["max_flow_rate"];
        msg->max_flow_rate = max_flow_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'max_flow_rate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'max_flow_rate' is wrong type; expected a single.");
    }
    try {
        //min_ground_distance
        const matlab::data::TypedArray<float> min_ground_distance_arr = arr["min_ground_distance"];
        msg->min_ground_distance = min_ground_distance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'min_ground_distance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'min_ground_distance' is wrong type; expected a single.");
    }
    try {
        //max_ground_distance
        const matlab::data::TypedArray<float> max_ground_distance_arr = arr["max_ground_distance"];
        msg->max_ground_distance = max_ground_distance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'max_ground_distance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'max_ground_distance' is wrong type; expected a single.");
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
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_SensorOpticalFlow_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::SensorOpticalFlow* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","timestamp_sample","device_id","pixel_flow","delta_angle","delta_angle_available","distance_m","distance_available","integration_timespan_us","quality","error_count","max_flow_rate","min_ground_distance","max_ground_distance","MODE_UNKNOWN","MODE_BRIGHT","MODE_LOWLIGHT","MODE_SUPER_LOWLIGHT","mode"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/SensorOpticalFlow");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // device_id
    auto currentElement_device_id = (msg + ctr)->device_id;
    outArray[ctr]["device_id"] = factory.createScalar(currentElement_device_id);
    // pixel_flow
    auto currentElement_pixel_flow = (msg + ctr)->pixel_flow;
    outArray[ctr]["pixel_flow"] = factory.createArray<px4_msgs::msg::SensorOpticalFlow::_pixel_flow_type::const_iterator, float>({currentElement_pixel_flow.size(), 1}, currentElement_pixel_flow.begin(), currentElement_pixel_flow.end());
    // delta_angle
    auto currentElement_delta_angle = (msg + ctr)->delta_angle;
    outArray[ctr]["delta_angle"] = factory.createArray<px4_msgs::msg::SensorOpticalFlow::_delta_angle_type::const_iterator, float>({currentElement_delta_angle.size(), 1}, currentElement_delta_angle.begin(), currentElement_delta_angle.end());
    // delta_angle_available
    auto currentElement_delta_angle_available = (msg + ctr)->delta_angle_available;
    outArray[ctr]["delta_angle_available"] = factory.createScalar(currentElement_delta_angle_available);
    // distance_m
    auto currentElement_distance_m = (msg + ctr)->distance_m;
    outArray[ctr]["distance_m"] = factory.createScalar(currentElement_distance_m);
    // distance_available
    auto currentElement_distance_available = (msg + ctr)->distance_available;
    outArray[ctr]["distance_available"] = factory.createScalar(currentElement_distance_available);
    // integration_timespan_us
    auto currentElement_integration_timespan_us = (msg + ctr)->integration_timespan_us;
    outArray[ctr]["integration_timespan_us"] = factory.createScalar(currentElement_integration_timespan_us);
    // quality
    auto currentElement_quality = (msg + ctr)->quality;
    outArray[ctr]["quality"] = factory.createScalar(currentElement_quality);
    // error_count
    auto currentElement_error_count = (msg + ctr)->error_count;
    outArray[ctr]["error_count"] = factory.createScalar(currentElement_error_count);
    // max_flow_rate
    auto currentElement_max_flow_rate = (msg + ctr)->max_flow_rate;
    outArray[ctr]["max_flow_rate"] = factory.createScalar(currentElement_max_flow_rate);
    // min_ground_distance
    auto currentElement_min_ground_distance = (msg + ctr)->min_ground_distance;
    outArray[ctr]["min_ground_distance"] = factory.createScalar(currentElement_min_ground_distance);
    // max_ground_distance
    auto currentElement_max_ground_distance = (msg + ctr)->max_ground_distance;
    outArray[ctr]["max_ground_distance"] = factory.createScalar(currentElement_max_ground_distance);
    // MODE_UNKNOWN
    auto currentElement_MODE_UNKNOWN = (msg + ctr)->MODE_UNKNOWN;
    outArray[ctr]["MODE_UNKNOWN"] = factory.createScalar(currentElement_MODE_UNKNOWN);
    // MODE_BRIGHT
    auto currentElement_MODE_BRIGHT = (msg + ctr)->MODE_BRIGHT;
    outArray[ctr]["MODE_BRIGHT"] = factory.createScalar(currentElement_MODE_BRIGHT);
    // MODE_LOWLIGHT
    auto currentElement_MODE_LOWLIGHT = (msg + ctr)->MODE_LOWLIGHT;
    outArray[ctr]["MODE_LOWLIGHT"] = factory.createScalar(currentElement_MODE_LOWLIGHT);
    // MODE_SUPER_LOWLIGHT
    auto currentElement_MODE_SUPER_LOWLIGHT = (msg + ctr)->MODE_SUPER_LOWLIGHT;
    outArray[ctr]["MODE_SUPER_LOWLIGHT"] = factory.createScalar(currentElement_MODE_SUPER_LOWLIGHT);
    // mode
    auto currentElement_mode = (msg + ctr)->mode;
    outArray[ctr]["mode"] = factory.createScalar(currentElement_mode);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_SensorOpticalFlow_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_SensorOpticalFlow_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_SensorOpticalFlow_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::SensorOpticalFlow,ros2_px4_msgs_msg_SensorOpticalFlow_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_SensorOpticalFlow_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::SensorOpticalFlow,ros2_px4_msgs_msg_SensorOpticalFlow_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_SensorOpticalFlow_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::SensorOpticalFlow>();
    ros2_px4_msgs_msg_SensorOpticalFlow_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_SensorOpticalFlow_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_SensorOpticalFlow_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::SensorOpticalFlow*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_SensorOpticalFlow_common, MATLABROS2MsgInterface<px4_msgs::msg::SensorOpticalFlow>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_SensorOpticalFlow_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER