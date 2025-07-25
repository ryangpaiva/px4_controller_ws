// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/HoverThrustEstimate
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
#include "px4_msgs/msg/hover_thrust_estimate.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_HoverThrustEstimate_common : public MATLABROS2MsgInterface<px4_msgs::msg::HoverThrustEstimate> {
  public:
    virtual ~ros2_px4_msgs_msg_HoverThrustEstimate_common(){}
    virtual void copy_from_struct(px4_msgs::msg::HoverThrustEstimate* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::HoverThrustEstimate* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_HoverThrustEstimate_common::copy_from_struct(px4_msgs::msg::HoverThrustEstimate* msg, const matlab::data::Struct& arr,
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
        //hover_thrust
        const matlab::data::TypedArray<float> hover_thrust_arr = arr["hover_thrust"];
        msg->hover_thrust = hover_thrust_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'hover_thrust' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'hover_thrust' is wrong type; expected a single.");
    }
    try {
        //hover_thrust_var
        const matlab::data::TypedArray<float> hover_thrust_var_arr = arr["hover_thrust_var"];
        msg->hover_thrust_var = hover_thrust_var_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'hover_thrust_var' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'hover_thrust_var' is wrong type; expected a single.");
    }
    try {
        //accel_innov
        const matlab::data::TypedArray<float> accel_innov_arr = arr["accel_innov"];
        msg->accel_innov = accel_innov_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_innov' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_innov' is wrong type; expected a single.");
    }
    try {
        //accel_innov_var
        const matlab::data::TypedArray<float> accel_innov_var_arr = arr["accel_innov_var"];
        msg->accel_innov_var = accel_innov_var_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_innov_var' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_innov_var' is wrong type; expected a single.");
    }
    try {
        //accel_innov_test_ratio
        const matlab::data::TypedArray<float> accel_innov_test_ratio_arr = arr["accel_innov_test_ratio"];
        msg->accel_innov_test_ratio = accel_innov_test_ratio_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_innov_test_ratio' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_innov_test_ratio' is wrong type; expected a single.");
    }
    try {
        //accel_noise_var
        const matlab::data::TypedArray<float> accel_noise_var_arr = arr["accel_noise_var"];
        msg->accel_noise_var = accel_noise_var_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_noise_var' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_noise_var' is wrong type; expected a single.");
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
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_HoverThrustEstimate_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::HoverThrustEstimate* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","timestamp_sample","hover_thrust","hover_thrust_var","accel_innov","accel_innov_var","accel_innov_test_ratio","accel_noise_var","valid"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/HoverThrustEstimate");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // hover_thrust
    auto currentElement_hover_thrust = (msg + ctr)->hover_thrust;
    outArray[ctr]["hover_thrust"] = factory.createScalar(currentElement_hover_thrust);
    // hover_thrust_var
    auto currentElement_hover_thrust_var = (msg + ctr)->hover_thrust_var;
    outArray[ctr]["hover_thrust_var"] = factory.createScalar(currentElement_hover_thrust_var);
    // accel_innov
    auto currentElement_accel_innov = (msg + ctr)->accel_innov;
    outArray[ctr]["accel_innov"] = factory.createScalar(currentElement_accel_innov);
    // accel_innov_var
    auto currentElement_accel_innov_var = (msg + ctr)->accel_innov_var;
    outArray[ctr]["accel_innov_var"] = factory.createScalar(currentElement_accel_innov_var);
    // accel_innov_test_ratio
    auto currentElement_accel_innov_test_ratio = (msg + ctr)->accel_innov_test_ratio;
    outArray[ctr]["accel_innov_test_ratio"] = factory.createScalar(currentElement_accel_innov_test_ratio);
    // accel_noise_var
    auto currentElement_accel_noise_var = (msg + ctr)->accel_noise_var;
    outArray[ctr]["accel_noise_var"] = factory.createScalar(currentElement_accel_noise_var);
    // valid
    auto currentElement_valid = (msg + ctr)->valid;
    outArray[ctr]["valid"] = factory.createScalar(currentElement_valid);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_HoverThrustEstimate_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_HoverThrustEstimate_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_HoverThrustEstimate_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::HoverThrustEstimate,ros2_px4_msgs_msg_HoverThrustEstimate_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_HoverThrustEstimate_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::HoverThrustEstimate,ros2_px4_msgs_msg_HoverThrustEstimate_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_HoverThrustEstimate_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::HoverThrustEstimate>();
    ros2_px4_msgs_msg_HoverThrustEstimate_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_HoverThrustEstimate_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_HoverThrustEstimate_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::HoverThrustEstimate*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_HoverThrustEstimate_common, MATLABROS2MsgInterface<px4_msgs::msg::HoverThrustEstimate>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_HoverThrustEstimate_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER