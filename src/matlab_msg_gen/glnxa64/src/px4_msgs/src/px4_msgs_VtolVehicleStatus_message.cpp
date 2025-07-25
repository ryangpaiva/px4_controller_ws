// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/VtolVehicleStatus
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
#include "px4_msgs/msg/vtol_vehicle_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_VtolVehicleStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::VtolVehicleStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_VtolVehicleStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::VtolVehicleStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::VtolVehicleStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_VtolVehicleStatus_common::copy_from_struct(px4_msgs::msg::VtolVehicleStatus* msg, const matlab::data::Struct& arr,
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
        //vehicle_vtol_state
        const matlab::data::TypedArray<uint8_t> vehicle_vtol_state_arr = arr["vehicle_vtol_state"];
        msg->vehicle_vtol_state = vehicle_vtol_state_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vehicle_vtol_state' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vehicle_vtol_state' is wrong type; expected a uint8.");
    }
    try {
        //fixed_wing_system_failure
        const matlab::data::TypedArray<bool> fixed_wing_system_failure_arr = arr["fixed_wing_system_failure"];
        msg->fixed_wing_system_failure = fixed_wing_system_failure_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fixed_wing_system_failure' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fixed_wing_system_failure' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_VtolVehicleStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::VtolVehicleStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","MESSAGE_VERSION","VEHICLE_VTOL_STATE_UNDEFINED","VEHICLE_VTOL_STATE_TRANSITION_TO_FW","VEHICLE_VTOL_STATE_TRANSITION_TO_MC","VEHICLE_VTOL_STATE_MC","VEHICLE_VTOL_STATE_FW","timestamp","vehicle_vtol_state","fixed_wing_system_failure"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/VtolVehicleStatus");
    // MESSAGE_VERSION
    auto currentElement_MESSAGE_VERSION = (msg + ctr)->MESSAGE_VERSION;
    outArray[ctr]["MESSAGE_VERSION"] = factory.createScalar(currentElement_MESSAGE_VERSION);
    // VEHICLE_VTOL_STATE_UNDEFINED
    auto currentElement_VEHICLE_VTOL_STATE_UNDEFINED = (msg + ctr)->VEHICLE_VTOL_STATE_UNDEFINED;
    outArray[ctr]["VEHICLE_VTOL_STATE_UNDEFINED"] = factory.createScalar(currentElement_VEHICLE_VTOL_STATE_UNDEFINED);
    // VEHICLE_VTOL_STATE_TRANSITION_TO_FW
    auto currentElement_VEHICLE_VTOL_STATE_TRANSITION_TO_FW = (msg + ctr)->VEHICLE_VTOL_STATE_TRANSITION_TO_FW;
    outArray[ctr]["VEHICLE_VTOL_STATE_TRANSITION_TO_FW"] = factory.createScalar(currentElement_VEHICLE_VTOL_STATE_TRANSITION_TO_FW);
    // VEHICLE_VTOL_STATE_TRANSITION_TO_MC
    auto currentElement_VEHICLE_VTOL_STATE_TRANSITION_TO_MC = (msg + ctr)->VEHICLE_VTOL_STATE_TRANSITION_TO_MC;
    outArray[ctr]["VEHICLE_VTOL_STATE_TRANSITION_TO_MC"] = factory.createScalar(currentElement_VEHICLE_VTOL_STATE_TRANSITION_TO_MC);
    // VEHICLE_VTOL_STATE_MC
    auto currentElement_VEHICLE_VTOL_STATE_MC = (msg + ctr)->VEHICLE_VTOL_STATE_MC;
    outArray[ctr]["VEHICLE_VTOL_STATE_MC"] = factory.createScalar(currentElement_VEHICLE_VTOL_STATE_MC);
    // VEHICLE_VTOL_STATE_FW
    auto currentElement_VEHICLE_VTOL_STATE_FW = (msg + ctr)->VEHICLE_VTOL_STATE_FW;
    outArray[ctr]["VEHICLE_VTOL_STATE_FW"] = factory.createScalar(currentElement_VEHICLE_VTOL_STATE_FW);
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // vehicle_vtol_state
    auto currentElement_vehicle_vtol_state = (msg + ctr)->vehicle_vtol_state;
    outArray[ctr]["vehicle_vtol_state"] = factory.createScalar(currentElement_vehicle_vtol_state);
    // fixed_wing_system_failure
    auto currentElement_fixed_wing_system_failure = (msg + ctr)->fixed_wing_system_failure;
    outArray[ctr]["fixed_wing_system_failure"] = factory.createScalar(currentElement_fixed_wing_system_failure);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_VtolVehicleStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_VtolVehicleStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_VtolVehicleStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::VtolVehicleStatus,ros2_px4_msgs_msg_VtolVehicleStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_VtolVehicleStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::VtolVehicleStatus,ros2_px4_msgs_msg_VtolVehicleStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_VtolVehicleStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::VtolVehicleStatus>();
    ros2_px4_msgs_msg_VtolVehicleStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_VtolVehicleStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_VtolVehicleStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::VtolVehicleStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_VtolVehicleStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::VtolVehicleStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_VtolVehicleStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER