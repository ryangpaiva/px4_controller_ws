// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/PwmInput
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
#include "px4_msgs/msg/pwm_input.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_PwmInput_common : public MATLABROS2MsgInterface<px4_msgs::msg::PwmInput> {
  public:
    virtual ~ros2_px4_msgs_msg_PwmInput_common(){}
    virtual void copy_from_struct(px4_msgs::msg::PwmInput* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::PwmInput* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_PwmInput_common::copy_from_struct(px4_msgs::msg::PwmInput* msg, const matlab::data::Struct& arr,
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
        //error_count
        const matlab::data::TypedArray<uint64_t> error_count_arr = arr["error_count"];
        msg->error_count = error_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'error_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'error_count' is wrong type; expected a uint64.");
    }
    try {
        //pulse_width
        const matlab::data::TypedArray<uint32_t> pulse_width_arr = arr["pulse_width"];
        msg->pulse_width = pulse_width_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pulse_width' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pulse_width' is wrong type; expected a uint32.");
    }
    try {
        //period
        const matlab::data::TypedArray<uint32_t> period_arr = arr["period"];
        msg->period = period_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'period' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'period' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_PwmInput_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::PwmInput* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","error_count","pulse_width","period"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/PwmInput");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // error_count
    auto currentElement_error_count = (msg + ctr)->error_count;
    outArray[ctr]["error_count"] = factory.createScalar(currentElement_error_count);
    // pulse_width
    auto currentElement_pulse_width = (msg + ctr)->pulse_width;
    outArray[ctr]["pulse_width"] = factory.createScalar(currentElement_pulse_width);
    // period
    auto currentElement_period = (msg + ctr)->period;
    outArray[ctr]["period"] = factory.createScalar(currentElement_period);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_PwmInput_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_PwmInput_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_PwmInput_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::PwmInput,ros2_px4_msgs_msg_PwmInput_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_PwmInput_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::PwmInput,ros2_px4_msgs_msg_PwmInput_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_PwmInput_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::PwmInput>();
    ros2_px4_msgs_msg_PwmInput_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_PwmInput_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_PwmInput_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::PwmInput*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_PwmInput_common, MATLABROS2MsgInterface<px4_msgs::msg::PwmInput>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_PwmInput_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER