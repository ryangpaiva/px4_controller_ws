// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/GimbalManagerInformation
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
#include "px4_msgs/msg/gimbal_manager_information.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_GimbalManagerInformation_common : public MATLABROS2MsgInterface<px4_msgs::msg::GimbalManagerInformation> {
  public:
    virtual ~ros2_px4_msgs_msg_GimbalManagerInformation_common(){}
    virtual void copy_from_struct(px4_msgs::msg::GimbalManagerInformation* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::GimbalManagerInformation* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_GimbalManagerInformation_common::copy_from_struct(px4_msgs::msg::GimbalManagerInformation* msg, const matlab::data::Struct& arr,
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
        //cap_flags
        const matlab::data::TypedArray<uint32_t> cap_flags_arr = arr["cap_flags"];
        msg->cap_flags = cap_flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cap_flags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cap_flags' is wrong type; expected a uint32.");
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
        //roll_min
        const matlab::data::TypedArray<float> roll_min_arr = arr["roll_min"];
        msg->roll_min = roll_min_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'roll_min' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'roll_min' is wrong type; expected a single.");
    }
    try {
        //roll_max
        const matlab::data::TypedArray<float> roll_max_arr = arr["roll_max"];
        msg->roll_max = roll_max_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'roll_max' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'roll_max' is wrong type; expected a single.");
    }
    try {
        //pitch_min
        const matlab::data::TypedArray<float> pitch_min_arr = arr["pitch_min"];
        msg->pitch_min = pitch_min_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pitch_min' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pitch_min' is wrong type; expected a single.");
    }
    try {
        //pitch_max
        const matlab::data::TypedArray<float> pitch_max_arr = arr["pitch_max"];
        msg->pitch_max = pitch_max_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pitch_max' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pitch_max' is wrong type; expected a single.");
    }
    try {
        //yaw_min
        const matlab::data::TypedArray<float> yaw_min_arr = arr["yaw_min"];
        msg->yaw_min = yaw_min_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw_min' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'yaw_min' is wrong type; expected a single.");
    }
    try {
        //yaw_max
        const matlab::data::TypedArray<float> yaw_max_arr = arr["yaw_max"];
        msg->yaw_max = yaw_max_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw_max' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'yaw_max' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_GimbalManagerInformation_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::GimbalManagerInformation* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","cap_flags","GIMBAL_MANAGER_CAP_FLAGS_HAS_RETRACT","GIMBAL_MANAGER_CAP_FLAGS_HAS_NEUTRAL","GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_AXIS","GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_FOLLOW","GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_LOCK","GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_AXIS","GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_FOLLOW","GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_LOCK","GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_AXIS","GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_FOLLOW","GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_LOCK","GIMBAL_MANAGER_CAP_FLAGS_SUPPORTS_INFINITE_YAW","GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_LOCAL","GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_GLOBAL","gimbal_device_id","roll_min","roll_max","pitch_min","pitch_max","yaw_min","yaw_max"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/GimbalManagerInformation");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // cap_flags
    auto currentElement_cap_flags = (msg + ctr)->cap_flags;
    outArray[ctr]["cap_flags"] = factory.createScalar(currentElement_cap_flags);
    // GIMBAL_MANAGER_CAP_FLAGS_HAS_RETRACT
    auto currentElement_GIMBAL_MANAGER_CAP_FLAGS_HAS_RETRACT = (msg + ctr)->GIMBAL_MANAGER_CAP_FLAGS_HAS_RETRACT;
    outArray[ctr]["GIMBAL_MANAGER_CAP_FLAGS_HAS_RETRACT"] = factory.createScalar(currentElement_GIMBAL_MANAGER_CAP_FLAGS_HAS_RETRACT);
    // GIMBAL_MANAGER_CAP_FLAGS_HAS_NEUTRAL
    auto currentElement_GIMBAL_MANAGER_CAP_FLAGS_HAS_NEUTRAL = (msg + ctr)->GIMBAL_MANAGER_CAP_FLAGS_HAS_NEUTRAL;
    outArray[ctr]["GIMBAL_MANAGER_CAP_FLAGS_HAS_NEUTRAL"] = factory.createScalar(currentElement_GIMBAL_MANAGER_CAP_FLAGS_HAS_NEUTRAL);
    // GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_AXIS
    auto currentElement_GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_AXIS = (msg + ctr)->GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_AXIS;
    outArray[ctr]["GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_AXIS"] = factory.createScalar(currentElement_GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_AXIS);
    // GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_FOLLOW
    auto currentElement_GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_FOLLOW = (msg + ctr)->GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_FOLLOW;
    outArray[ctr]["GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_FOLLOW"] = factory.createScalar(currentElement_GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_FOLLOW);
    // GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_LOCK
    auto currentElement_GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_LOCK = (msg + ctr)->GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_LOCK;
    outArray[ctr]["GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_LOCK"] = factory.createScalar(currentElement_GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_LOCK);
    // GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_AXIS
    auto currentElement_GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_AXIS = (msg + ctr)->GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_AXIS;
    outArray[ctr]["GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_AXIS"] = factory.createScalar(currentElement_GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_AXIS);
    // GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_FOLLOW
    auto currentElement_GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_FOLLOW = (msg + ctr)->GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_FOLLOW;
    outArray[ctr]["GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_FOLLOW"] = factory.createScalar(currentElement_GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_FOLLOW);
    // GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_LOCK
    auto currentElement_GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_LOCK = (msg + ctr)->GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_LOCK;
    outArray[ctr]["GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_LOCK"] = factory.createScalar(currentElement_GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_LOCK);
    // GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_AXIS
    auto currentElement_GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_AXIS = (msg + ctr)->GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_AXIS;
    outArray[ctr]["GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_AXIS"] = factory.createScalar(currentElement_GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_AXIS);
    // GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_FOLLOW
    auto currentElement_GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_FOLLOW = (msg + ctr)->GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_FOLLOW;
    outArray[ctr]["GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_FOLLOW"] = factory.createScalar(currentElement_GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_FOLLOW);
    // GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_LOCK
    auto currentElement_GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_LOCK = (msg + ctr)->GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_LOCK;
    outArray[ctr]["GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_LOCK"] = factory.createScalar(currentElement_GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_LOCK);
    // GIMBAL_MANAGER_CAP_FLAGS_SUPPORTS_INFINITE_YAW
    auto currentElement_GIMBAL_MANAGER_CAP_FLAGS_SUPPORTS_INFINITE_YAW = (msg + ctr)->GIMBAL_MANAGER_CAP_FLAGS_SUPPORTS_INFINITE_YAW;
    outArray[ctr]["GIMBAL_MANAGER_CAP_FLAGS_SUPPORTS_INFINITE_YAW"] = factory.createScalar(currentElement_GIMBAL_MANAGER_CAP_FLAGS_SUPPORTS_INFINITE_YAW);
    // GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_LOCAL
    auto currentElement_GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_LOCAL = (msg + ctr)->GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_LOCAL;
    outArray[ctr]["GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_LOCAL"] = factory.createScalar(currentElement_GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_LOCAL);
    // GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_GLOBAL
    auto currentElement_GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_GLOBAL = (msg + ctr)->GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_GLOBAL;
    outArray[ctr]["GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_GLOBAL"] = factory.createScalar(currentElement_GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_GLOBAL);
    // gimbal_device_id
    auto currentElement_gimbal_device_id = (msg + ctr)->gimbal_device_id;
    outArray[ctr]["gimbal_device_id"] = factory.createScalar(currentElement_gimbal_device_id);
    // roll_min
    auto currentElement_roll_min = (msg + ctr)->roll_min;
    outArray[ctr]["roll_min"] = factory.createScalar(currentElement_roll_min);
    // roll_max
    auto currentElement_roll_max = (msg + ctr)->roll_max;
    outArray[ctr]["roll_max"] = factory.createScalar(currentElement_roll_max);
    // pitch_min
    auto currentElement_pitch_min = (msg + ctr)->pitch_min;
    outArray[ctr]["pitch_min"] = factory.createScalar(currentElement_pitch_min);
    // pitch_max
    auto currentElement_pitch_max = (msg + ctr)->pitch_max;
    outArray[ctr]["pitch_max"] = factory.createScalar(currentElement_pitch_max);
    // yaw_min
    auto currentElement_yaw_min = (msg + ctr)->yaw_min;
    outArray[ctr]["yaw_min"] = factory.createScalar(currentElement_yaw_min);
    // yaw_max
    auto currentElement_yaw_max = (msg + ctr)->yaw_max;
    outArray[ctr]["yaw_max"] = factory.createScalar(currentElement_yaw_max);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_GimbalManagerInformation_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_GimbalManagerInformation_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_GimbalManagerInformation_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::GimbalManagerInformation,ros2_px4_msgs_msg_GimbalManagerInformation_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_GimbalManagerInformation_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::GimbalManagerInformation,ros2_px4_msgs_msg_GimbalManagerInformation_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_GimbalManagerInformation_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::GimbalManagerInformation>();
    ros2_px4_msgs_msg_GimbalManagerInformation_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_GimbalManagerInformation_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_GimbalManagerInformation_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::GimbalManagerInformation*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_GimbalManagerInformation_common, MATLABROS2MsgInterface<px4_msgs::msg::GimbalManagerInformation>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_GimbalManagerInformation_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER