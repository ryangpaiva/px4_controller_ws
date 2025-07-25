// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/ControlAllocatorStatus
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
#include "px4_msgs/msg/control_allocator_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_ControlAllocatorStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::ControlAllocatorStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_ControlAllocatorStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::ControlAllocatorStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::ControlAllocatorStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_ControlAllocatorStatus_common::copy_from_struct(px4_msgs::msg::ControlAllocatorStatus* msg, const matlab::data::Struct& arr,
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
        //torque_setpoint_achieved
        const matlab::data::TypedArray<bool> torque_setpoint_achieved_arr = arr["torque_setpoint_achieved"];
        msg->torque_setpoint_achieved = torque_setpoint_achieved_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'torque_setpoint_achieved' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'torque_setpoint_achieved' is wrong type; expected a logical.");
    }
    try {
        //unallocated_torque
        const matlab::data::TypedArray<float> unallocated_torque_arr = arr["unallocated_torque"];
        size_t nelem = 3;
        	std::copy(unallocated_torque_arr.begin(), unallocated_torque_arr.begin()+nelem, msg->unallocated_torque.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'unallocated_torque' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'unallocated_torque' is wrong type; expected a single.");
    }
    try {
        //thrust_setpoint_achieved
        const matlab::data::TypedArray<bool> thrust_setpoint_achieved_arr = arr["thrust_setpoint_achieved"];
        msg->thrust_setpoint_achieved = thrust_setpoint_achieved_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'thrust_setpoint_achieved' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'thrust_setpoint_achieved' is wrong type; expected a logical.");
    }
    try {
        //unallocated_thrust
        const matlab::data::TypedArray<float> unallocated_thrust_arr = arr["unallocated_thrust"];
        size_t nelem = 3;
        	std::copy(unallocated_thrust_arr.begin(), unallocated_thrust_arr.begin()+nelem, msg->unallocated_thrust.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'unallocated_thrust' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'unallocated_thrust' is wrong type; expected a single.");
    }
    try {
        //actuator_saturation
        const matlab::data::TypedArray<int8_t> actuator_saturation_arr = arr["actuator_saturation"];
        size_t nelem = 16;
        	std::copy(actuator_saturation_arr.begin(), actuator_saturation_arr.begin()+nelem, msg->actuator_saturation.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'actuator_saturation' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'actuator_saturation' is wrong type; expected a int8.");
    }
    try {
        //handled_motor_failure_mask
        const matlab::data::TypedArray<uint16_t> handled_motor_failure_mask_arr = arr["handled_motor_failure_mask"];
        msg->handled_motor_failure_mask = handled_motor_failure_mask_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'handled_motor_failure_mask' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'handled_motor_failure_mask' is wrong type; expected a uint16.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_ControlAllocatorStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::ControlAllocatorStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","torque_setpoint_achieved","unallocated_torque","thrust_setpoint_achieved","unallocated_thrust","ACTUATOR_SATURATION_OK","ACTUATOR_SATURATION_UPPER_DYN","ACTUATOR_SATURATION_UPPER","ACTUATOR_SATURATION_LOWER_DYN","ACTUATOR_SATURATION_LOWER","actuator_saturation","handled_motor_failure_mask"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/ControlAllocatorStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // torque_setpoint_achieved
    auto currentElement_torque_setpoint_achieved = (msg + ctr)->torque_setpoint_achieved;
    outArray[ctr]["torque_setpoint_achieved"] = factory.createScalar(currentElement_torque_setpoint_achieved);
    // unallocated_torque
    auto currentElement_unallocated_torque = (msg + ctr)->unallocated_torque;
    outArray[ctr]["unallocated_torque"] = factory.createArray<px4_msgs::msg::ControlAllocatorStatus::_unallocated_torque_type::const_iterator, float>({currentElement_unallocated_torque.size(), 1}, currentElement_unallocated_torque.begin(), currentElement_unallocated_torque.end());
    // thrust_setpoint_achieved
    auto currentElement_thrust_setpoint_achieved = (msg + ctr)->thrust_setpoint_achieved;
    outArray[ctr]["thrust_setpoint_achieved"] = factory.createScalar(currentElement_thrust_setpoint_achieved);
    // unallocated_thrust
    auto currentElement_unallocated_thrust = (msg + ctr)->unallocated_thrust;
    outArray[ctr]["unallocated_thrust"] = factory.createArray<px4_msgs::msg::ControlAllocatorStatus::_unallocated_thrust_type::const_iterator, float>({currentElement_unallocated_thrust.size(), 1}, currentElement_unallocated_thrust.begin(), currentElement_unallocated_thrust.end());
    // ACTUATOR_SATURATION_OK
    auto currentElement_ACTUATOR_SATURATION_OK = (msg + ctr)->ACTUATOR_SATURATION_OK;
    outArray[ctr]["ACTUATOR_SATURATION_OK"] = factory.createScalar(currentElement_ACTUATOR_SATURATION_OK);
    // ACTUATOR_SATURATION_UPPER_DYN
    auto currentElement_ACTUATOR_SATURATION_UPPER_DYN = (msg + ctr)->ACTUATOR_SATURATION_UPPER_DYN;
    outArray[ctr]["ACTUATOR_SATURATION_UPPER_DYN"] = factory.createScalar(currentElement_ACTUATOR_SATURATION_UPPER_DYN);
    // ACTUATOR_SATURATION_UPPER
    auto currentElement_ACTUATOR_SATURATION_UPPER = (msg + ctr)->ACTUATOR_SATURATION_UPPER;
    outArray[ctr]["ACTUATOR_SATURATION_UPPER"] = factory.createScalar(currentElement_ACTUATOR_SATURATION_UPPER);
    // ACTUATOR_SATURATION_LOWER_DYN
    auto currentElement_ACTUATOR_SATURATION_LOWER_DYN = (msg + ctr)->ACTUATOR_SATURATION_LOWER_DYN;
    outArray[ctr]["ACTUATOR_SATURATION_LOWER_DYN"] = factory.createScalar(currentElement_ACTUATOR_SATURATION_LOWER_DYN);
    // ACTUATOR_SATURATION_LOWER
    auto currentElement_ACTUATOR_SATURATION_LOWER = (msg + ctr)->ACTUATOR_SATURATION_LOWER;
    outArray[ctr]["ACTUATOR_SATURATION_LOWER"] = factory.createScalar(currentElement_ACTUATOR_SATURATION_LOWER);
    // actuator_saturation
    auto currentElement_actuator_saturation = (msg + ctr)->actuator_saturation;
    outArray[ctr]["actuator_saturation"] = factory.createArray<px4_msgs::msg::ControlAllocatorStatus::_actuator_saturation_type::const_iterator, int8_t>({currentElement_actuator_saturation.size(), 1}, currentElement_actuator_saturation.begin(), currentElement_actuator_saturation.end());
    // handled_motor_failure_mask
    auto currentElement_handled_motor_failure_mask = (msg + ctr)->handled_motor_failure_mask;
    outArray[ctr]["handled_motor_failure_mask"] = factory.createScalar(currentElement_handled_motor_failure_mask);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_ControlAllocatorStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_ControlAllocatorStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_ControlAllocatorStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::ControlAllocatorStatus,ros2_px4_msgs_msg_ControlAllocatorStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_ControlAllocatorStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::ControlAllocatorStatus,ros2_px4_msgs_msg_ControlAllocatorStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_ControlAllocatorStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::ControlAllocatorStatus>();
    ros2_px4_msgs_msg_ControlAllocatorStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_ControlAllocatorStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_ControlAllocatorStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::ControlAllocatorStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_ControlAllocatorStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::ControlAllocatorStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_ControlAllocatorStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER