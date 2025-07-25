// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/VehicleControlMode
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
#include "px4_msgs/msg/vehicle_control_mode.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_VehicleControlMode_common : public MATLABROS2MsgInterface<px4_msgs::msg::VehicleControlMode> {
  public:
    virtual ~ros2_px4_msgs_msg_VehicleControlMode_common(){}
    virtual void copy_from_struct(px4_msgs::msg::VehicleControlMode* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleControlMode* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_VehicleControlMode_common::copy_from_struct(px4_msgs::msg::VehicleControlMode* msg, const matlab::data::Struct& arr,
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
        //flag_armed
        const matlab::data::TypedArray<bool> flag_armed_arr = arr["flag_armed"];
        msg->flag_armed = flag_armed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flag_armed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flag_armed' is wrong type; expected a logical.");
    }
    try {
        //flag_multicopter_position_control_enabled
        const matlab::data::TypedArray<bool> flag_multicopter_position_control_enabled_arr = arr["flag_multicopter_position_control_enabled"];
        msg->flag_multicopter_position_control_enabled = flag_multicopter_position_control_enabled_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flag_multicopter_position_control_enabled' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flag_multicopter_position_control_enabled' is wrong type; expected a logical.");
    }
    try {
        //flag_control_manual_enabled
        const matlab::data::TypedArray<bool> flag_control_manual_enabled_arr = arr["flag_control_manual_enabled"];
        msg->flag_control_manual_enabled = flag_control_manual_enabled_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flag_control_manual_enabled' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flag_control_manual_enabled' is wrong type; expected a logical.");
    }
    try {
        //flag_control_auto_enabled
        const matlab::data::TypedArray<bool> flag_control_auto_enabled_arr = arr["flag_control_auto_enabled"];
        msg->flag_control_auto_enabled = flag_control_auto_enabled_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flag_control_auto_enabled' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flag_control_auto_enabled' is wrong type; expected a logical.");
    }
    try {
        //flag_control_offboard_enabled
        const matlab::data::TypedArray<bool> flag_control_offboard_enabled_arr = arr["flag_control_offboard_enabled"];
        msg->flag_control_offboard_enabled = flag_control_offboard_enabled_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flag_control_offboard_enabled' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flag_control_offboard_enabled' is wrong type; expected a logical.");
    }
    try {
        //flag_control_position_enabled
        const matlab::data::TypedArray<bool> flag_control_position_enabled_arr = arr["flag_control_position_enabled"];
        msg->flag_control_position_enabled = flag_control_position_enabled_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flag_control_position_enabled' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flag_control_position_enabled' is wrong type; expected a logical.");
    }
    try {
        //flag_control_velocity_enabled
        const matlab::data::TypedArray<bool> flag_control_velocity_enabled_arr = arr["flag_control_velocity_enabled"];
        msg->flag_control_velocity_enabled = flag_control_velocity_enabled_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flag_control_velocity_enabled' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flag_control_velocity_enabled' is wrong type; expected a logical.");
    }
    try {
        //flag_control_altitude_enabled
        const matlab::data::TypedArray<bool> flag_control_altitude_enabled_arr = arr["flag_control_altitude_enabled"];
        msg->flag_control_altitude_enabled = flag_control_altitude_enabled_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flag_control_altitude_enabled' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flag_control_altitude_enabled' is wrong type; expected a logical.");
    }
    try {
        //flag_control_climb_rate_enabled
        const matlab::data::TypedArray<bool> flag_control_climb_rate_enabled_arr = arr["flag_control_climb_rate_enabled"];
        msg->flag_control_climb_rate_enabled = flag_control_climb_rate_enabled_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flag_control_climb_rate_enabled' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flag_control_climb_rate_enabled' is wrong type; expected a logical.");
    }
    try {
        //flag_control_acceleration_enabled
        const matlab::data::TypedArray<bool> flag_control_acceleration_enabled_arr = arr["flag_control_acceleration_enabled"];
        msg->flag_control_acceleration_enabled = flag_control_acceleration_enabled_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flag_control_acceleration_enabled' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flag_control_acceleration_enabled' is wrong type; expected a logical.");
    }
    try {
        //flag_control_attitude_enabled
        const matlab::data::TypedArray<bool> flag_control_attitude_enabled_arr = arr["flag_control_attitude_enabled"];
        msg->flag_control_attitude_enabled = flag_control_attitude_enabled_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flag_control_attitude_enabled' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flag_control_attitude_enabled' is wrong type; expected a logical.");
    }
    try {
        //flag_control_rates_enabled
        const matlab::data::TypedArray<bool> flag_control_rates_enabled_arr = arr["flag_control_rates_enabled"];
        msg->flag_control_rates_enabled = flag_control_rates_enabled_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flag_control_rates_enabled' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flag_control_rates_enabled' is wrong type; expected a logical.");
    }
    try {
        //flag_control_allocation_enabled
        const matlab::data::TypedArray<bool> flag_control_allocation_enabled_arr = arr["flag_control_allocation_enabled"];
        msg->flag_control_allocation_enabled = flag_control_allocation_enabled_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flag_control_allocation_enabled' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flag_control_allocation_enabled' is wrong type; expected a logical.");
    }
    try {
        //flag_control_termination_enabled
        const matlab::data::TypedArray<bool> flag_control_termination_enabled_arr = arr["flag_control_termination_enabled"];
        msg->flag_control_termination_enabled = flag_control_termination_enabled_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flag_control_termination_enabled' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flag_control_termination_enabled' is wrong type; expected a logical.");
    }
    try {
        //source_id
        const matlab::data::TypedArray<uint8_t> source_id_arr = arr["source_id"];
        msg->source_id = source_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'source_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'source_id' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_VehicleControlMode_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleControlMode* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","MESSAGE_VERSION","timestamp","flag_armed","flag_multicopter_position_control_enabled","flag_control_manual_enabled","flag_control_auto_enabled","flag_control_offboard_enabled","flag_control_position_enabled","flag_control_velocity_enabled","flag_control_altitude_enabled","flag_control_climb_rate_enabled","flag_control_acceleration_enabled","flag_control_attitude_enabled","flag_control_rates_enabled","flag_control_allocation_enabled","flag_control_termination_enabled","source_id"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/VehicleControlMode");
    // MESSAGE_VERSION
    auto currentElement_MESSAGE_VERSION = (msg + ctr)->MESSAGE_VERSION;
    outArray[ctr]["MESSAGE_VERSION"] = factory.createScalar(currentElement_MESSAGE_VERSION);
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // flag_armed
    auto currentElement_flag_armed = (msg + ctr)->flag_armed;
    outArray[ctr]["flag_armed"] = factory.createScalar(currentElement_flag_armed);
    // flag_multicopter_position_control_enabled
    auto currentElement_flag_multicopter_position_control_enabled = (msg + ctr)->flag_multicopter_position_control_enabled;
    outArray[ctr]["flag_multicopter_position_control_enabled"] = factory.createScalar(currentElement_flag_multicopter_position_control_enabled);
    // flag_control_manual_enabled
    auto currentElement_flag_control_manual_enabled = (msg + ctr)->flag_control_manual_enabled;
    outArray[ctr]["flag_control_manual_enabled"] = factory.createScalar(currentElement_flag_control_manual_enabled);
    // flag_control_auto_enabled
    auto currentElement_flag_control_auto_enabled = (msg + ctr)->flag_control_auto_enabled;
    outArray[ctr]["flag_control_auto_enabled"] = factory.createScalar(currentElement_flag_control_auto_enabled);
    // flag_control_offboard_enabled
    auto currentElement_flag_control_offboard_enabled = (msg + ctr)->flag_control_offboard_enabled;
    outArray[ctr]["flag_control_offboard_enabled"] = factory.createScalar(currentElement_flag_control_offboard_enabled);
    // flag_control_position_enabled
    auto currentElement_flag_control_position_enabled = (msg + ctr)->flag_control_position_enabled;
    outArray[ctr]["flag_control_position_enabled"] = factory.createScalar(currentElement_flag_control_position_enabled);
    // flag_control_velocity_enabled
    auto currentElement_flag_control_velocity_enabled = (msg + ctr)->flag_control_velocity_enabled;
    outArray[ctr]["flag_control_velocity_enabled"] = factory.createScalar(currentElement_flag_control_velocity_enabled);
    // flag_control_altitude_enabled
    auto currentElement_flag_control_altitude_enabled = (msg + ctr)->flag_control_altitude_enabled;
    outArray[ctr]["flag_control_altitude_enabled"] = factory.createScalar(currentElement_flag_control_altitude_enabled);
    // flag_control_climb_rate_enabled
    auto currentElement_flag_control_climb_rate_enabled = (msg + ctr)->flag_control_climb_rate_enabled;
    outArray[ctr]["flag_control_climb_rate_enabled"] = factory.createScalar(currentElement_flag_control_climb_rate_enabled);
    // flag_control_acceleration_enabled
    auto currentElement_flag_control_acceleration_enabled = (msg + ctr)->flag_control_acceleration_enabled;
    outArray[ctr]["flag_control_acceleration_enabled"] = factory.createScalar(currentElement_flag_control_acceleration_enabled);
    // flag_control_attitude_enabled
    auto currentElement_flag_control_attitude_enabled = (msg + ctr)->flag_control_attitude_enabled;
    outArray[ctr]["flag_control_attitude_enabled"] = factory.createScalar(currentElement_flag_control_attitude_enabled);
    // flag_control_rates_enabled
    auto currentElement_flag_control_rates_enabled = (msg + ctr)->flag_control_rates_enabled;
    outArray[ctr]["flag_control_rates_enabled"] = factory.createScalar(currentElement_flag_control_rates_enabled);
    // flag_control_allocation_enabled
    auto currentElement_flag_control_allocation_enabled = (msg + ctr)->flag_control_allocation_enabled;
    outArray[ctr]["flag_control_allocation_enabled"] = factory.createScalar(currentElement_flag_control_allocation_enabled);
    // flag_control_termination_enabled
    auto currentElement_flag_control_termination_enabled = (msg + ctr)->flag_control_termination_enabled;
    outArray[ctr]["flag_control_termination_enabled"] = factory.createScalar(currentElement_flag_control_termination_enabled);
    // source_id
    auto currentElement_source_id = (msg + ctr)->source_id;
    outArray[ctr]["source_id"] = factory.createScalar(currentElement_source_id);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_VehicleControlMode_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_VehicleControlMode_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_VehicleControlMode_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::VehicleControlMode,ros2_px4_msgs_msg_VehicleControlMode_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_VehicleControlMode_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::VehicleControlMode,ros2_px4_msgs_msg_VehicleControlMode_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_VehicleControlMode_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::VehicleControlMode>();
    ros2_px4_msgs_msg_VehicleControlMode_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_VehicleControlMode_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_VehicleControlMode_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::VehicleControlMode*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_VehicleControlMode_common, MATLABROS2MsgInterface<px4_msgs::msg::VehicleControlMode>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_VehicleControlMode_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER