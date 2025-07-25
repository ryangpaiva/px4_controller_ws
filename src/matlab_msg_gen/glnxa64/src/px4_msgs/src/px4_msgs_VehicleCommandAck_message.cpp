// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/VehicleCommandAck
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
#include "px4_msgs/msg/vehicle_command_ack.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_VehicleCommandAck_common : public MATLABROS2MsgInterface<px4_msgs::msg::VehicleCommandAck> {
  public:
    virtual ~ros2_px4_msgs_msg_VehicleCommandAck_common(){}
    virtual void copy_from_struct(px4_msgs::msg::VehicleCommandAck* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleCommandAck* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_VehicleCommandAck_common::copy_from_struct(px4_msgs::msg::VehicleCommandAck* msg, const matlab::data::Struct& arr,
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
        //command
        const matlab::data::TypedArray<uint32_t> command_arr = arr["command"];
        msg->command = command_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'command' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'command' is wrong type; expected a uint32.");
    }
    try {
        //result
        const matlab::data::TypedArray<uint8_t> result_arr = arr["result"];
        msg->result = result_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'result' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'result' is wrong type; expected a uint8.");
    }
    try {
        //result_param1
        const matlab::data::TypedArray<uint8_t> result_param1_arr = arr["result_param1"];
        msg->result_param1 = result_param1_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'result_param1' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'result_param1' is wrong type; expected a uint8.");
    }
    try {
        //result_param2
        const matlab::data::TypedArray<int32_t> result_param2_arr = arr["result_param2"];
        msg->result_param2 = result_param2_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'result_param2' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'result_param2' is wrong type; expected a int32.");
    }
    try {
        //target_system
        const matlab::data::TypedArray<uint8_t> target_system_arr = arr["target_system"];
        msg->target_system = target_system_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'target_system' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'target_system' is wrong type; expected a uint8.");
    }
    try {
        //target_component
        const matlab::data::TypedArray<uint16_t> target_component_arr = arr["target_component"];
        msg->target_component = target_component_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'target_component' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'target_component' is wrong type; expected a uint16.");
    }
    try {
        //from_external
        const matlab::data::TypedArray<bool> from_external_arr = arr["from_external"];
        msg->from_external = from_external_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'from_external' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'from_external' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_VehicleCommandAck_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleCommandAck* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","MESSAGE_VERSION","timestamp","VEHICLE_CMD_RESULT_ACCEPTED","VEHICLE_CMD_RESULT_TEMPORARILY_REJECTED","VEHICLE_CMD_RESULT_DENIED","VEHICLE_CMD_RESULT_UNSUPPORTED","VEHICLE_CMD_RESULT_FAILED","VEHICLE_CMD_RESULT_IN_PROGRESS","VEHICLE_CMD_RESULT_CANCELLED","ARM_AUTH_DENIED_REASON_GENERIC","ARM_AUTH_DENIED_REASON_NONE","ARM_AUTH_DENIED_REASON_INVALID_WAYPOINT","ARM_AUTH_DENIED_REASON_TIMEOUT","ARM_AUTH_DENIED_REASON_AIRSPACE_IN_USE","ARM_AUTH_DENIED_REASON_BAD_WEATHER","ORB_QUEUE_LENGTH","command","result","result_param1","result_param2","target_system","target_component","from_external"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/VehicleCommandAck");
    // MESSAGE_VERSION
    auto currentElement_MESSAGE_VERSION = (msg + ctr)->MESSAGE_VERSION;
    outArray[ctr]["MESSAGE_VERSION"] = factory.createScalar(currentElement_MESSAGE_VERSION);
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // VEHICLE_CMD_RESULT_ACCEPTED
    auto currentElement_VEHICLE_CMD_RESULT_ACCEPTED = (msg + ctr)->VEHICLE_CMD_RESULT_ACCEPTED;
    outArray[ctr]["VEHICLE_CMD_RESULT_ACCEPTED"] = factory.createScalar(currentElement_VEHICLE_CMD_RESULT_ACCEPTED);
    // VEHICLE_CMD_RESULT_TEMPORARILY_REJECTED
    auto currentElement_VEHICLE_CMD_RESULT_TEMPORARILY_REJECTED = (msg + ctr)->VEHICLE_CMD_RESULT_TEMPORARILY_REJECTED;
    outArray[ctr]["VEHICLE_CMD_RESULT_TEMPORARILY_REJECTED"] = factory.createScalar(currentElement_VEHICLE_CMD_RESULT_TEMPORARILY_REJECTED);
    // VEHICLE_CMD_RESULT_DENIED
    auto currentElement_VEHICLE_CMD_RESULT_DENIED = (msg + ctr)->VEHICLE_CMD_RESULT_DENIED;
    outArray[ctr]["VEHICLE_CMD_RESULT_DENIED"] = factory.createScalar(currentElement_VEHICLE_CMD_RESULT_DENIED);
    // VEHICLE_CMD_RESULT_UNSUPPORTED
    auto currentElement_VEHICLE_CMD_RESULT_UNSUPPORTED = (msg + ctr)->VEHICLE_CMD_RESULT_UNSUPPORTED;
    outArray[ctr]["VEHICLE_CMD_RESULT_UNSUPPORTED"] = factory.createScalar(currentElement_VEHICLE_CMD_RESULT_UNSUPPORTED);
    // VEHICLE_CMD_RESULT_FAILED
    auto currentElement_VEHICLE_CMD_RESULT_FAILED = (msg + ctr)->VEHICLE_CMD_RESULT_FAILED;
    outArray[ctr]["VEHICLE_CMD_RESULT_FAILED"] = factory.createScalar(currentElement_VEHICLE_CMD_RESULT_FAILED);
    // VEHICLE_CMD_RESULT_IN_PROGRESS
    auto currentElement_VEHICLE_CMD_RESULT_IN_PROGRESS = (msg + ctr)->VEHICLE_CMD_RESULT_IN_PROGRESS;
    outArray[ctr]["VEHICLE_CMD_RESULT_IN_PROGRESS"] = factory.createScalar(currentElement_VEHICLE_CMD_RESULT_IN_PROGRESS);
    // VEHICLE_CMD_RESULT_CANCELLED
    auto currentElement_VEHICLE_CMD_RESULT_CANCELLED = (msg + ctr)->VEHICLE_CMD_RESULT_CANCELLED;
    outArray[ctr]["VEHICLE_CMD_RESULT_CANCELLED"] = factory.createScalar(currentElement_VEHICLE_CMD_RESULT_CANCELLED);
    // ARM_AUTH_DENIED_REASON_GENERIC
    auto currentElement_ARM_AUTH_DENIED_REASON_GENERIC = (msg + ctr)->ARM_AUTH_DENIED_REASON_GENERIC;
    outArray[ctr]["ARM_AUTH_DENIED_REASON_GENERIC"] = factory.createScalar(currentElement_ARM_AUTH_DENIED_REASON_GENERIC);
    // ARM_AUTH_DENIED_REASON_NONE
    auto currentElement_ARM_AUTH_DENIED_REASON_NONE = (msg + ctr)->ARM_AUTH_DENIED_REASON_NONE;
    outArray[ctr]["ARM_AUTH_DENIED_REASON_NONE"] = factory.createScalar(currentElement_ARM_AUTH_DENIED_REASON_NONE);
    // ARM_AUTH_DENIED_REASON_INVALID_WAYPOINT
    auto currentElement_ARM_AUTH_DENIED_REASON_INVALID_WAYPOINT = (msg + ctr)->ARM_AUTH_DENIED_REASON_INVALID_WAYPOINT;
    outArray[ctr]["ARM_AUTH_DENIED_REASON_INVALID_WAYPOINT"] = factory.createScalar(currentElement_ARM_AUTH_DENIED_REASON_INVALID_WAYPOINT);
    // ARM_AUTH_DENIED_REASON_TIMEOUT
    auto currentElement_ARM_AUTH_DENIED_REASON_TIMEOUT = (msg + ctr)->ARM_AUTH_DENIED_REASON_TIMEOUT;
    outArray[ctr]["ARM_AUTH_DENIED_REASON_TIMEOUT"] = factory.createScalar(currentElement_ARM_AUTH_DENIED_REASON_TIMEOUT);
    // ARM_AUTH_DENIED_REASON_AIRSPACE_IN_USE
    auto currentElement_ARM_AUTH_DENIED_REASON_AIRSPACE_IN_USE = (msg + ctr)->ARM_AUTH_DENIED_REASON_AIRSPACE_IN_USE;
    outArray[ctr]["ARM_AUTH_DENIED_REASON_AIRSPACE_IN_USE"] = factory.createScalar(currentElement_ARM_AUTH_DENIED_REASON_AIRSPACE_IN_USE);
    // ARM_AUTH_DENIED_REASON_BAD_WEATHER
    auto currentElement_ARM_AUTH_DENIED_REASON_BAD_WEATHER = (msg + ctr)->ARM_AUTH_DENIED_REASON_BAD_WEATHER;
    outArray[ctr]["ARM_AUTH_DENIED_REASON_BAD_WEATHER"] = factory.createScalar(currentElement_ARM_AUTH_DENIED_REASON_BAD_WEATHER);
    // ORB_QUEUE_LENGTH
    auto currentElement_ORB_QUEUE_LENGTH = (msg + ctr)->ORB_QUEUE_LENGTH;
    outArray[ctr]["ORB_QUEUE_LENGTH"] = factory.createScalar(currentElement_ORB_QUEUE_LENGTH);
    // command
    auto currentElement_command = (msg + ctr)->command;
    outArray[ctr]["command"] = factory.createScalar(currentElement_command);
    // result
    auto currentElement_result = (msg + ctr)->result;
    outArray[ctr]["result"] = factory.createScalar(currentElement_result);
    // result_param1
    auto currentElement_result_param1 = (msg + ctr)->result_param1;
    outArray[ctr]["result_param1"] = factory.createScalar(currentElement_result_param1);
    // result_param2
    auto currentElement_result_param2 = (msg + ctr)->result_param2;
    outArray[ctr]["result_param2"] = factory.createScalar(currentElement_result_param2);
    // target_system
    auto currentElement_target_system = (msg + ctr)->target_system;
    outArray[ctr]["target_system"] = factory.createScalar(currentElement_target_system);
    // target_component
    auto currentElement_target_component = (msg + ctr)->target_component;
    outArray[ctr]["target_component"] = factory.createScalar(currentElement_target_component);
    // from_external
    auto currentElement_from_external = (msg + ctr)->from_external;
    outArray[ctr]["from_external"] = factory.createScalar(currentElement_from_external);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_VehicleCommandAck_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_VehicleCommandAck_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_VehicleCommandAck_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::VehicleCommandAck,ros2_px4_msgs_msg_VehicleCommandAck_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_VehicleCommandAck_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::VehicleCommandAck,ros2_px4_msgs_msg_VehicleCommandAck_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_VehicleCommandAck_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::VehicleCommandAck>();
    ros2_px4_msgs_msg_VehicleCommandAck_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_VehicleCommandAck_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_VehicleCommandAck_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::VehicleCommandAck*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_VehicleCommandAck_common, MATLABROS2MsgInterface<px4_msgs::msg::VehicleCommandAck>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_VehicleCommandAck_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER