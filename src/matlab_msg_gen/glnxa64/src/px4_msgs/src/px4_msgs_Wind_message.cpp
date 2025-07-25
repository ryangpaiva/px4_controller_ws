// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/Wind
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
#include "px4_msgs/msg/wind.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_Wind_common : public MATLABROS2MsgInterface<px4_msgs::msg::Wind> {
  public:
    virtual ~ros2_px4_msgs_msg_Wind_common(){}
    virtual void copy_from_struct(px4_msgs::msg::Wind* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::Wind* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_Wind_common::copy_from_struct(px4_msgs::msg::Wind* msg, const matlab::data::Struct& arr,
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
        //windspeed_north
        const matlab::data::TypedArray<float> windspeed_north_arr = arr["windspeed_north"];
        msg->windspeed_north = windspeed_north_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'windspeed_north' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'windspeed_north' is wrong type; expected a single.");
    }
    try {
        //windspeed_east
        const matlab::data::TypedArray<float> windspeed_east_arr = arr["windspeed_east"];
        msg->windspeed_east = windspeed_east_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'windspeed_east' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'windspeed_east' is wrong type; expected a single.");
    }
    try {
        //variance_north
        const matlab::data::TypedArray<float> variance_north_arr = arr["variance_north"];
        msg->variance_north = variance_north_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'variance_north' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'variance_north' is wrong type; expected a single.");
    }
    try {
        //variance_east
        const matlab::data::TypedArray<float> variance_east_arr = arr["variance_east"];
        msg->variance_east = variance_east_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'variance_east' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'variance_east' is wrong type; expected a single.");
    }
    try {
        //tas_innov
        const matlab::data::TypedArray<float> tas_innov_arr = arr["tas_innov"];
        msg->tas_innov = tas_innov_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'tas_innov' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'tas_innov' is wrong type; expected a single.");
    }
    try {
        //tas_innov_var
        const matlab::data::TypedArray<float> tas_innov_var_arr = arr["tas_innov_var"];
        msg->tas_innov_var = tas_innov_var_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'tas_innov_var' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'tas_innov_var' is wrong type; expected a single.");
    }
    try {
        //beta_innov
        const matlab::data::TypedArray<float> beta_innov_arr = arr["beta_innov"];
        msg->beta_innov = beta_innov_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'beta_innov' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'beta_innov' is wrong type; expected a single.");
    }
    try {
        //beta_innov_var
        const matlab::data::TypedArray<float> beta_innov_var_arr = arr["beta_innov_var"];
        msg->beta_innov_var = beta_innov_var_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'beta_innov_var' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'beta_innov_var' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_Wind_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::Wind* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","timestamp_sample","windspeed_north","windspeed_east","variance_north","variance_east","tas_innov","tas_innov_var","beta_innov","beta_innov_var"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/Wind");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // windspeed_north
    auto currentElement_windspeed_north = (msg + ctr)->windspeed_north;
    outArray[ctr]["windspeed_north"] = factory.createScalar(currentElement_windspeed_north);
    // windspeed_east
    auto currentElement_windspeed_east = (msg + ctr)->windspeed_east;
    outArray[ctr]["windspeed_east"] = factory.createScalar(currentElement_windspeed_east);
    // variance_north
    auto currentElement_variance_north = (msg + ctr)->variance_north;
    outArray[ctr]["variance_north"] = factory.createScalar(currentElement_variance_north);
    // variance_east
    auto currentElement_variance_east = (msg + ctr)->variance_east;
    outArray[ctr]["variance_east"] = factory.createScalar(currentElement_variance_east);
    // tas_innov
    auto currentElement_tas_innov = (msg + ctr)->tas_innov;
    outArray[ctr]["tas_innov"] = factory.createScalar(currentElement_tas_innov);
    // tas_innov_var
    auto currentElement_tas_innov_var = (msg + ctr)->tas_innov_var;
    outArray[ctr]["tas_innov_var"] = factory.createScalar(currentElement_tas_innov_var);
    // beta_innov
    auto currentElement_beta_innov = (msg + ctr)->beta_innov;
    outArray[ctr]["beta_innov"] = factory.createScalar(currentElement_beta_innov);
    // beta_innov_var
    auto currentElement_beta_innov_var = (msg + ctr)->beta_innov_var;
    outArray[ctr]["beta_innov_var"] = factory.createScalar(currentElement_beta_innov_var);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_Wind_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_Wind_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_Wind_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::Wind,ros2_px4_msgs_msg_Wind_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_Wind_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::Wind,ros2_px4_msgs_msg_Wind_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_Wind_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::Wind>();
    ros2_px4_msgs_msg_Wind_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_Wind_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_Wind_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::Wind*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_Wind_common, MATLABROS2MsgInterface<px4_msgs::msg::Wind>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_Wind_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER