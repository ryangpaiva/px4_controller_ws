// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/GpioConfig
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
#include "px4_msgs/msg/gpio_config.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_GpioConfig_common : public MATLABROS2MsgInterface<px4_msgs::msg::GpioConfig> {
  public:
    virtual ~ros2_px4_msgs_msg_GpioConfig_common(){}
    virtual void copy_from_struct(px4_msgs::msg::GpioConfig* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::GpioConfig* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_GpioConfig_common::copy_from_struct(px4_msgs::msg::GpioConfig* msg, const matlab::data::Struct& arr,
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
        //device_id
        const matlab::data::TypedArray<uint32_t> device_id_arr = arr["device_id"];
        msg->device_id = device_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'device_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'device_id' is wrong type; expected a uint32.");
    }
    try {
        //mask
        const matlab::data::TypedArray<uint32_t> mask_arr = arr["mask"];
        msg->mask = mask_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mask' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mask' is wrong type; expected a uint32.");
    }
    try {
        //state
        const matlab::data::TypedArray<uint32_t> state_arr = arr["state"];
        msg->state = state_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'state' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'state' is wrong type; expected a uint32.");
    }
    try {
        //config
        const matlab::data::TypedArray<uint32_t> config_arr = arr["config"];
        msg->config = config_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'config' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'config' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_GpioConfig_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::GpioConfig* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","device_id","mask","state","INPUT","OUTPUT","PULLUP","PULLDOWN","OPENDRAIN","INPUT_FLOATING","INPUT_PULLUP","INPUT_PULLDOWN","OUTPUT_PUSHPULL","OUTPUT_OPENDRAIN","OUTPUT_OPENDRAIN_PULLUP","config"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/GpioConfig");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // device_id
    auto currentElement_device_id = (msg + ctr)->device_id;
    outArray[ctr]["device_id"] = factory.createScalar(currentElement_device_id);
    // mask
    auto currentElement_mask = (msg + ctr)->mask;
    outArray[ctr]["mask"] = factory.createScalar(currentElement_mask);
    // state
    auto currentElement_state = (msg + ctr)->state;
    outArray[ctr]["state"] = factory.createScalar(currentElement_state);
    // INPUT
    auto currentElement_INPUT = (msg + ctr)->INPUT;
    outArray[ctr]["INPUT"] = factory.createScalar(currentElement_INPUT);
    // OUTPUT
    auto currentElement_OUTPUT = (msg + ctr)->OUTPUT;
    outArray[ctr]["OUTPUT"] = factory.createScalar(currentElement_OUTPUT);
    // PULLUP
    auto currentElement_PULLUP = (msg + ctr)->PULLUP;
    outArray[ctr]["PULLUP"] = factory.createScalar(currentElement_PULLUP);
    // PULLDOWN
    auto currentElement_PULLDOWN = (msg + ctr)->PULLDOWN;
    outArray[ctr]["PULLDOWN"] = factory.createScalar(currentElement_PULLDOWN);
    // OPENDRAIN
    auto currentElement_OPENDRAIN = (msg + ctr)->OPENDRAIN;
    outArray[ctr]["OPENDRAIN"] = factory.createScalar(currentElement_OPENDRAIN);
    // INPUT_FLOATING
    auto currentElement_INPUT_FLOATING = (msg + ctr)->INPUT_FLOATING;
    outArray[ctr]["INPUT_FLOATING"] = factory.createScalar(currentElement_INPUT_FLOATING);
    // INPUT_PULLUP
    auto currentElement_INPUT_PULLUP = (msg + ctr)->INPUT_PULLUP;
    outArray[ctr]["INPUT_PULLUP"] = factory.createScalar(currentElement_INPUT_PULLUP);
    // INPUT_PULLDOWN
    auto currentElement_INPUT_PULLDOWN = (msg + ctr)->INPUT_PULLDOWN;
    outArray[ctr]["INPUT_PULLDOWN"] = factory.createScalar(currentElement_INPUT_PULLDOWN);
    // OUTPUT_PUSHPULL
    auto currentElement_OUTPUT_PUSHPULL = (msg + ctr)->OUTPUT_PUSHPULL;
    outArray[ctr]["OUTPUT_PUSHPULL"] = factory.createScalar(currentElement_OUTPUT_PUSHPULL);
    // OUTPUT_OPENDRAIN
    auto currentElement_OUTPUT_OPENDRAIN = (msg + ctr)->OUTPUT_OPENDRAIN;
    outArray[ctr]["OUTPUT_OPENDRAIN"] = factory.createScalar(currentElement_OUTPUT_OPENDRAIN);
    // OUTPUT_OPENDRAIN_PULLUP
    auto currentElement_OUTPUT_OPENDRAIN_PULLUP = (msg + ctr)->OUTPUT_OPENDRAIN_PULLUP;
    outArray[ctr]["OUTPUT_OPENDRAIN_PULLUP"] = factory.createScalar(currentElement_OUTPUT_OPENDRAIN_PULLUP);
    // config
    auto currentElement_config = (msg + ctr)->config;
    outArray[ctr]["config"] = factory.createScalar(currentElement_config);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_GpioConfig_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_GpioConfig_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_GpioConfig_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::GpioConfig,ros2_px4_msgs_msg_GpioConfig_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_GpioConfig_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::GpioConfig,ros2_px4_msgs_msg_GpioConfig_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_GpioConfig_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::GpioConfig>();
    ros2_px4_msgs_msg_GpioConfig_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_GpioConfig_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_GpioConfig_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::GpioConfig*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_GpioConfig_common, MATLABROS2MsgInterface<px4_msgs::msg::GpioConfig>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_GpioConfig_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER