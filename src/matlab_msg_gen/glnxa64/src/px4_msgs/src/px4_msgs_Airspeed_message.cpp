// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/Airspeed
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
#include "px4_msgs/msg/airspeed.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_Airspeed_common : public MATLABROS2MsgInterface<px4_msgs::msg::Airspeed> {
  public:
    virtual ~ros2_px4_msgs_msg_Airspeed_common(){}
    virtual void copy_from_struct(px4_msgs::msg::Airspeed* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::Airspeed* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_Airspeed_common::copy_from_struct(px4_msgs::msg::Airspeed* msg, const matlab::data::Struct& arr,
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
        //indicated_airspeed_m_s
        const matlab::data::TypedArray<float> indicated_airspeed_m_s_arr = arr["indicated_airspeed_m_s"];
        msg->indicated_airspeed_m_s = indicated_airspeed_m_s_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'indicated_airspeed_m_s' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'indicated_airspeed_m_s' is wrong type; expected a single.");
    }
    try {
        //true_airspeed_m_s
        const matlab::data::TypedArray<float> true_airspeed_m_s_arr = arr["true_airspeed_m_s"];
        msg->true_airspeed_m_s = true_airspeed_m_s_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'true_airspeed_m_s' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'true_airspeed_m_s' is wrong type; expected a single.");
    }
    try {
        //air_temperature_celsius
        const matlab::data::TypedArray<float> air_temperature_celsius_arr = arr["air_temperature_celsius"];
        msg->air_temperature_celsius = air_temperature_celsius_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'air_temperature_celsius' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'air_temperature_celsius' is wrong type; expected a single.");
    }
    try {
        //confidence
        const matlab::data::TypedArray<float> confidence_arr = arr["confidence"];
        msg->confidence = confidence_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'confidence' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'confidence' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_Airspeed_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::Airspeed* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","timestamp_sample","indicated_airspeed_m_s","true_airspeed_m_s","air_temperature_celsius","confidence"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/Airspeed");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // indicated_airspeed_m_s
    auto currentElement_indicated_airspeed_m_s = (msg + ctr)->indicated_airspeed_m_s;
    outArray[ctr]["indicated_airspeed_m_s"] = factory.createScalar(currentElement_indicated_airspeed_m_s);
    // true_airspeed_m_s
    auto currentElement_true_airspeed_m_s = (msg + ctr)->true_airspeed_m_s;
    outArray[ctr]["true_airspeed_m_s"] = factory.createScalar(currentElement_true_airspeed_m_s);
    // air_temperature_celsius
    auto currentElement_air_temperature_celsius = (msg + ctr)->air_temperature_celsius;
    outArray[ctr]["air_temperature_celsius"] = factory.createScalar(currentElement_air_temperature_celsius);
    // confidence
    auto currentElement_confidence = (msg + ctr)->confidence;
    outArray[ctr]["confidence"] = factory.createScalar(currentElement_confidence);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_Airspeed_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_Airspeed_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_Airspeed_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::Airspeed,ros2_px4_msgs_msg_Airspeed_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_Airspeed_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::Airspeed,ros2_px4_msgs_msg_Airspeed_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_Airspeed_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::Airspeed>();
    ros2_px4_msgs_msg_Airspeed_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_Airspeed_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_Airspeed_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::Airspeed*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_Airspeed_common, MATLABROS2MsgInterface<px4_msgs::msg::Airspeed>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_Airspeed_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER