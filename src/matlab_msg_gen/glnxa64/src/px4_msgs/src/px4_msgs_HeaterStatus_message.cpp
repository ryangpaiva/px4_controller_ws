// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/HeaterStatus
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
#include "px4_msgs/msg/heater_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_HeaterStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::HeaterStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_HeaterStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::HeaterStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::HeaterStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_HeaterStatus_common::copy_from_struct(px4_msgs::msg::HeaterStatus* msg, const matlab::data::Struct& arr,
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
        //heater_on
        const matlab::data::TypedArray<bool> heater_on_arr = arr["heater_on"];
        msg->heater_on = heater_on_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heater_on' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heater_on' is wrong type; expected a logical.");
    }
    try {
        //temperature_target_met
        const matlab::data::TypedArray<bool> temperature_target_met_arr = arr["temperature_target_met"];
        msg->temperature_target_met = temperature_target_met_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'temperature_target_met' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'temperature_target_met' is wrong type; expected a logical.");
    }
    try {
        //temperature_sensor
        const matlab::data::TypedArray<float> temperature_sensor_arr = arr["temperature_sensor"];
        msg->temperature_sensor = temperature_sensor_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'temperature_sensor' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'temperature_sensor' is wrong type; expected a single.");
    }
    try {
        //temperature_target
        const matlab::data::TypedArray<float> temperature_target_arr = arr["temperature_target"];
        msg->temperature_target = temperature_target_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'temperature_target' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'temperature_target' is wrong type; expected a single.");
    }
    try {
        //controller_period_usec
        const matlab::data::TypedArray<uint32_t> controller_period_usec_arr = arr["controller_period_usec"];
        msg->controller_period_usec = controller_period_usec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'controller_period_usec' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'controller_period_usec' is wrong type; expected a uint32.");
    }
    try {
        //controller_time_on_usec
        const matlab::data::TypedArray<uint32_t> controller_time_on_usec_arr = arr["controller_time_on_usec"];
        msg->controller_time_on_usec = controller_time_on_usec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'controller_time_on_usec' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'controller_time_on_usec' is wrong type; expected a uint32.");
    }
    try {
        //proportional_value
        const matlab::data::TypedArray<float> proportional_value_arr = arr["proportional_value"];
        msg->proportional_value = proportional_value_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'proportional_value' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'proportional_value' is wrong type; expected a single.");
    }
    try {
        //integrator_value
        const matlab::data::TypedArray<float> integrator_value_arr = arr["integrator_value"];
        msg->integrator_value = integrator_value_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'integrator_value' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'integrator_value' is wrong type; expected a single.");
    }
    try {
        //feed_forward_value
        const matlab::data::TypedArray<float> feed_forward_value_arr = arr["feed_forward_value"];
        msg->feed_forward_value = feed_forward_value_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'feed_forward_value' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'feed_forward_value' is wrong type; expected a single.");
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
  MDArray_T ros2_px4_msgs_msg_HeaterStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::HeaterStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","device_id","heater_on","temperature_target_met","temperature_sensor","temperature_target","controller_period_usec","controller_time_on_usec","proportional_value","integrator_value","feed_forward_value","MODE_GPIO","MODE_PX4IO","mode"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/HeaterStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // device_id
    auto currentElement_device_id = (msg + ctr)->device_id;
    outArray[ctr]["device_id"] = factory.createScalar(currentElement_device_id);
    // heater_on
    auto currentElement_heater_on = (msg + ctr)->heater_on;
    outArray[ctr]["heater_on"] = factory.createScalar(currentElement_heater_on);
    // temperature_target_met
    auto currentElement_temperature_target_met = (msg + ctr)->temperature_target_met;
    outArray[ctr]["temperature_target_met"] = factory.createScalar(currentElement_temperature_target_met);
    // temperature_sensor
    auto currentElement_temperature_sensor = (msg + ctr)->temperature_sensor;
    outArray[ctr]["temperature_sensor"] = factory.createScalar(currentElement_temperature_sensor);
    // temperature_target
    auto currentElement_temperature_target = (msg + ctr)->temperature_target;
    outArray[ctr]["temperature_target"] = factory.createScalar(currentElement_temperature_target);
    // controller_period_usec
    auto currentElement_controller_period_usec = (msg + ctr)->controller_period_usec;
    outArray[ctr]["controller_period_usec"] = factory.createScalar(currentElement_controller_period_usec);
    // controller_time_on_usec
    auto currentElement_controller_time_on_usec = (msg + ctr)->controller_time_on_usec;
    outArray[ctr]["controller_time_on_usec"] = factory.createScalar(currentElement_controller_time_on_usec);
    // proportional_value
    auto currentElement_proportional_value = (msg + ctr)->proportional_value;
    outArray[ctr]["proportional_value"] = factory.createScalar(currentElement_proportional_value);
    // integrator_value
    auto currentElement_integrator_value = (msg + ctr)->integrator_value;
    outArray[ctr]["integrator_value"] = factory.createScalar(currentElement_integrator_value);
    // feed_forward_value
    auto currentElement_feed_forward_value = (msg + ctr)->feed_forward_value;
    outArray[ctr]["feed_forward_value"] = factory.createScalar(currentElement_feed_forward_value);
    // MODE_GPIO
    auto currentElement_MODE_GPIO = (msg + ctr)->MODE_GPIO;
    outArray[ctr]["MODE_GPIO"] = factory.createScalar(currentElement_MODE_GPIO);
    // MODE_PX4IO
    auto currentElement_MODE_PX4IO = (msg + ctr)->MODE_PX4IO;
    outArray[ctr]["MODE_PX4IO"] = factory.createScalar(currentElement_MODE_PX4IO);
    // mode
    auto currentElement_mode = (msg + ctr)->mode;
    outArray[ctr]["mode"] = factory.createScalar(currentElement_mode);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_HeaterStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_HeaterStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_HeaterStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::HeaterStatus,ros2_px4_msgs_msg_HeaterStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_HeaterStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::HeaterStatus,ros2_px4_msgs_msg_HeaterStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_HeaterStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::HeaterStatus>();
    ros2_px4_msgs_msg_HeaterStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_HeaterStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_HeaterStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::HeaterStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_HeaterStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::HeaterStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_HeaterStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER