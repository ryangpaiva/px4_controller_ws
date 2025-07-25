// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/GimbalManagerSetAttitude
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
#include "px4_msgs/msg/gimbal_manager_set_attitude.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_GimbalManagerSetAttitude_common : public MATLABROS2MsgInterface<px4_msgs::msg::GimbalManagerSetAttitude> {
  public:
    virtual ~ros2_px4_msgs_msg_GimbalManagerSetAttitude_common(){}
    virtual void copy_from_struct(px4_msgs::msg::GimbalManagerSetAttitude* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::GimbalManagerSetAttitude* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_GimbalManagerSetAttitude_common::copy_from_struct(px4_msgs::msg::GimbalManagerSetAttitude* msg, const matlab::data::Struct& arr,
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
        //q
        const matlab::data::TypedArray<float> q_arr = arr["q"];
        size_t nelem = 4;
        	std::copy(q_arr.begin(), q_arr.begin()+nelem, msg->q.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'q' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'q' is wrong type; expected a single.");
    }
    try {
        //angular_velocity_x
        const matlab::data::TypedArray<float> angular_velocity_x_arr = arr["angular_velocity_x"];
        msg->angular_velocity_x = angular_velocity_x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'angular_velocity_x' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'angular_velocity_x' is wrong type; expected a single.");
    }
    try {
        //angular_velocity_y
        const matlab::data::TypedArray<float> angular_velocity_y_arr = arr["angular_velocity_y"];
        msg->angular_velocity_y = angular_velocity_y_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'angular_velocity_y' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'angular_velocity_y' is wrong type; expected a single.");
    }
    try {
        //angular_velocity_z
        const matlab::data::TypedArray<float> angular_velocity_z_arr = arr["angular_velocity_z"];
        msg->angular_velocity_z = angular_velocity_z_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'angular_velocity_z' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'angular_velocity_z' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_GimbalManagerSetAttitude_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::GimbalManagerSetAttitude* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","origin_sysid","origin_compid","target_system","target_component","GIMBAL_MANAGER_FLAGS_RETRACT","GIMBAL_MANAGER_FLAGS_NEUTRAL","GIMBAL_MANAGER_FLAGS_ROLL_LOCK","GIMBAL_MANAGER_FLAGS_PITCH_LOCK","GIMBAL_MANAGER_FLAGS_YAW_LOCK","flags","gimbal_device_id","q","angular_velocity_x","angular_velocity_y","angular_velocity_z"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/GimbalManagerSetAttitude");
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
    // q
    auto currentElement_q = (msg + ctr)->q;
    outArray[ctr]["q"] = factory.createArray<px4_msgs::msg::GimbalManagerSetAttitude::_q_type::const_iterator, float>({currentElement_q.size(), 1}, currentElement_q.begin(), currentElement_q.end());
    // angular_velocity_x
    auto currentElement_angular_velocity_x = (msg + ctr)->angular_velocity_x;
    outArray[ctr]["angular_velocity_x"] = factory.createScalar(currentElement_angular_velocity_x);
    // angular_velocity_y
    auto currentElement_angular_velocity_y = (msg + ctr)->angular_velocity_y;
    outArray[ctr]["angular_velocity_y"] = factory.createScalar(currentElement_angular_velocity_y);
    // angular_velocity_z
    auto currentElement_angular_velocity_z = (msg + ctr)->angular_velocity_z;
    outArray[ctr]["angular_velocity_z"] = factory.createScalar(currentElement_angular_velocity_z);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_GimbalManagerSetAttitude_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_GimbalManagerSetAttitude_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_GimbalManagerSetAttitude_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::GimbalManagerSetAttitude,ros2_px4_msgs_msg_GimbalManagerSetAttitude_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_GimbalManagerSetAttitude_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::GimbalManagerSetAttitude,ros2_px4_msgs_msg_GimbalManagerSetAttitude_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_GimbalManagerSetAttitude_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::GimbalManagerSetAttitude>();
    ros2_px4_msgs_msg_GimbalManagerSetAttitude_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_GimbalManagerSetAttitude_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_GimbalManagerSetAttitude_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::GimbalManagerSetAttitude*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_GimbalManagerSetAttitude_common, MATLABROS2MsgInterface<px4_msgs::msg::GimbalManagerSetAttitude>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_GimbalManagerSetAttitude_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER