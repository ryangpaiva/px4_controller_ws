// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/GimbalManagerSetManualControl
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
#include "px4_msgs/msg/gimbal_manager_set_manual_control.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_GimbalManagerSetManualControl_common : public MATLABROS2MsgInterface<px4_msgs::msg::GimbalManagerSetManualControl> {
  public:
    virtual ~ros2_px4_msgs_msg_GimbalManagerSetManualControl_common(){}
    virtual void copy_from_struct(px4_msgs::msg::GimbalManagerSetManualControl* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::GimbalManagerSetManualControl* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_GimbalManagerSetManualControl_common::copy_from_struct(px4_msgs::msg::GimbalManagerSetManualControl* msg, const matlab::data::Struct& arr,
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
        //origin_sysid
        const matlab::data::TypedArray<uint8_t> origin_sysid_arr = arr["origin_sysid"];
        msg->origin_sysid = origin_sysid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'origin_sysid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'origin_sysid' is wrong type; expected a uint8.");
    }
    try {
        //origin_compid
        const matlab::data::TypedArray<uint8_t> origin_compid_arr = arr["origin_compid"];
        msg->origin_compid = origin_compid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'origin_compid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'origin_compid' is wrong type; expected a uint8.");
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
        const matlab::data::TypedArray<uint8_t> target_component_arr = arr["target_component"];
        msg->target_component = target_component_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'target_component' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'target_component' is wrong type; expected a uint8.");
    }
    try {
        //flags
        const matlab::data::TypedArray<uint32_t> flags_arr = arr["flags"];
        msg->flags = flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flags' is wrong type; expected a uint32.");
    }
    try {
        //gimbal_device_id
        const matlab::data::TypedArray<uint8_t> gimbal_device_id_arr = arr["gimbal_device_id"];
        msg->gimbal_device_id = gimbal_device_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gimbal_device_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gimbal_device_id' is wrong type; expected a uint8.");
    }
    try {
        //pitch
        const matlab::data::TypedArray<float> pitch_arr = arr["pitch"];
        msg->pitch = pitch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pitch' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pitch' is wrong type; expected a single.");
    }
    try {
        //yaw
        const matlab::data::TypedArray<float> yaw_arr = arr["yaw"];
        msg->yaw = yaw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'yaw' is wrong type; expected a single.");
    }
    try {
        //pitch_rate
        const matlab::data::TypedArray<float> pitch_rate_arr = arr["pitch_rate"];
        msg->pitch_rate = pitch_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pitch_rate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pitch_rate' is wrong type; expected a single.");
    }
    try {
        //yaw_rate
        const matlab::data::TypedArray<float> yaw_rate_arr = arr["yaw_rate"];
        msg->yaw_rate = yaw_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw_rate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'yaw_rate' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_GimbalManagerSetManualControl_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::GimbalManagerSetManualControl* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","origin_sysid","origin_compid","target_system","target_component","GIMBAL_MANAGER_FLAGS_RETRACT","GIMBAL_MANAGER_FLAGS_NEUTRAL","GIMBAL_MANAGER_FLAGS_ROLL_LOCK","GIMBAL_MANAGER_FLAGS_PITCH_LOCK","GIMBAL_MANAGER_FLAGS_YAW_LOCK","flags","gimbal_device_id","pitch","yaw","pitch_rate","yaw_rate"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/GimbalManagerSetManualControl");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // origin_sysid
    auto currentElement_origin_sysid = (msg + ctr)->origin_sysid;
    outArray[ctr]["origin_sysid"] = factory.createScalar(currentElement_origin_sysid);
    // origin_compid
    auto currentElement_origin_compid = (msg + ctr)->origin_compid;
    outArray[ctr]["origin_compid"] = factory.createScalar(currentElement_origin_compid);
    // target_system
    auto currentElement_target_system = (msg + ctr)->target_system;
    outArray[ctr]["target_system"] = factory.createScalar(currentElement_target_system);
    // target_component
    auto currentElement_target_component = (msg + ctr)->target_component;
    outArray[ctr]["target_component"] = factory.createScalar(currentElement_target_component);
    // GIMBAL_MANAGER_FLAGS_RETRACT
    auto currentElement_GIMBAL_MANAGER_FLAGS_RETRACT = (msg + ctr)->GIMBAL_MANAGER_FLAGS_RETRACT;
    outArray[ctr]["GIMBAL_MANAGER_FLAGS_RETRACT"] = factory.createScalar(currentElement_GIMBAL_MANAGER_FLAGS_RETRACT);
    // GIMBAL_MANAGER_FLAGS_NEUTRAL
    auto currentElement_GIMBAL_MANAGER_FLAGS_NEUTRAL = (msg + ctr)->GIMBAL_MANAGER_FLAGS_NEUTRAL;
    outArray[ctr]["GIMBAL_MANAGER_FLAGS_NEUTRAL"] = factory.createScalar(currentElement_GIMBAL_MANAGER_FLAGS_NEUTRAL);
    // GIMBAL_MANAGER_FLAGS_ROLL_LOCK
    auto currentElement_GIMBAL_MANAGER_FLAGS_ROLL_LOCK = (msg + ctr)->GIMBAL_MANAGER_FLAGS_ROLL_LOCK;
    outArray[ctr]["GIMBAL_MANAGER_FLAGS_ROLL_LOCK"] = factory.createScalar(currentElement_GIMBAL_MANAGER_FLAGS_ROLL_LOCK);
    // GIMBAL_MANAGER_FLAGS_PITCH_LOCK
    auto currentElement_GIMBAL_MANAGER_FLAGS_PITCH_LOCK = (msg + ctr)->GIMBAL_MANAGER_FLAGS_PITCH_LOCK;
    outArray[ctr]["GIMBAL_MANAGER_FLAGS_PITCH_LOCK"] = factory.createScalar(currentElement_GIMBAL_MANAGER_FLAGS_PITCH_LOCK);
    // GIMBAL_MANAGER_FLAGS_YAW_LOCK
    auto currentElement_GIMBAL_MANAGER_FLAGS_YAW_LOCK = (msg + ctr)->GIMBAL_MANAGER_FLAGS_YAW_LOCK;
    outArray[ctr]["GIMBAL_MANAGER_FLAGS_YAW_LOCK"] = factory.createScalar(currentElement_GIMBAL_MANAGER_FLAGS_YAW_LOCK);
    // flags
    auto currentElement_flags = (msg + ctr)->flags;
    outArray[ctr]["flags"] = factory.createScalar(currentElement_flags);
    // gimbal_device_id
    auto currentElement_gimbal_device_id = (msg + ctr)->gimbal_device_id;
    outArray[ctr]["gimbal_device_id"] = factory.createScalar(currentElement_gimbal_device_id);
    // pitch
    auto currentElement_pitch = (msg + ctr)->pitch;
    outArray[ctr]["pitch"] = factory.createScalar(currentElement_pitch);
    // yaw
    auto currentElement_yaw = (msg + ctr)->yaw;
    outArray[ctr]["yaw"] = factory.createScalar(currentElement_yaw);
    // pitch_rate
    auto currentElement_pitch_rate = (msg + ctr)->pitch_rate;
    outArray[ctr]["pitch_rate"] = factory.createScalar(currentElement_pitch_rate);
    // yaw_rate
    auto currentElement_yaw_rate = (msg + ctr)->yaw_rate;
    outArray[ctr]["yaw_rate"] = factory.createScalar(currentElement_yaw_rate);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_GimbalManagerSetManualControl_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_GimbalManagerSetManualControl_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_GimbalManagerSetManualControl_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::GimbalManagerSetManualControl,ros2_px4_msgs_msg_GimbalManagerSetManualControl_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_GimbalManagerSetManualControl_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::GimbalManagerSetManualControl,ros2_px4_msgs_msg_GimbalManagerSetManualControl_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_GimbalManagerSetManualControl_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::GimbalManagerSetManualControl>();
    ros2_px4_msgs_msg_GimbalManagerSetManualControl_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_GimbalManagerSetManualControl_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_GimbalManagerSetManualControl_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::GimbalManagerSetManualControl*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_GimbalManagerSetManualControl_common, MATLABROS2MsgInterface<px4_msgs::msg::GimbalManagerSetManualControl>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_GimbalManagerSetManualControl_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER