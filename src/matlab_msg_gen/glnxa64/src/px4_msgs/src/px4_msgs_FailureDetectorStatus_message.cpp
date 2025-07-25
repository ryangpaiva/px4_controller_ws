// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/FailureDetectorStatus
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
#include "px4_msgs/msg/failure_detector_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_FailureDetectorStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::FailureDetectorStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_FailureDetectorStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::FailureDetectorStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::FailureDetectorStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_FailureDetectorStatus_common::copy_from_struct(px4_msgs::msg::FailureDetectorStatus* msg, const matlab::data::Struct& arr,
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
        //fd_roll
        const matlab::data::TypedArray<bool> fd_roll_arr = arr["fd_roll"];
        msg->fd_roll = fd_roll_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fd_roll' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fd_roll' is wrong type; expected a logical.");
    }
    try {
        //fd_pitch
        const matlab::data::TypedArray<bool> fd_pitch_arr = arr["fd_pitch"];
        msg->fd_pitch = fd_pitch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fd_pitch' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fd_pitch' is wrong type; expected a logical.");
    }
    try {
        //fd_alt
        const matlab::data::TypedArray<bool> fd_alt_arr = arr["fd_alt"];
        msg->fd_alt = fd_alt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fd_alt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fd_alt' is wrong type; expected a logical.");
    }
    try {
        //fd_ext
        const matlab::data::TypedArray<bool> fd_ext_arr = arr["fd_ext"];
        msg->fd_ext = fd_ext_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fd_ext' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fd_ext' is wrong type; expected a logical.");
    }
    try {
        //fd_arm_escs
        const matlab::data::TypedArray<bool> fd_arm_escs_arr = arr["fd_arm_escs"];
        msg->fd_arm_escs = fd_arm_escs_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fd_arm_escs' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fd_arm_escs' is wrong type; expected a logical.");
    }
    try {
        //fd_battery
        const matlab::data::TypedArray<bool> fd_battery_arr = arr["fd_battery"];
        msg->fd_battery = fd_battery_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fd_battery' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fd_battery' is wrong type; expected a logical.");
    }
    try {
        //fd_imbalanced_prop
        const matlab::data::TypedArray<bool> fd_imbalanced_prop_arr = arr["fd_imbalanced_prop"];
        msg->fd_imbalanced_prop = fd_imbalanced_prop_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fd_imbalanced_prop' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fd_imbalanced_prop' is wrong type; expected a logical.");
    }
    try {
        //fd_motor
        const matlab::data::TypedArray<bool> fd_motor_arr = arr["fd_motor"];
        msg->fd_motor = fd_motor_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fd_motor' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fd_motor' is wrong type; expected a logical.");
    }
    try {
        //imbalanced_prop_metric
        const matlab::data::TypedArray<float> imbalanced_prop_metric_arr = arr["imbalanced_prop_metric"];
        msg->imbalanced_prop_metric = imbalanced_prop_metric_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'imbalanced_prop_metric' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'imbalanced_prop_metric' is wrong type; expected a single.");
    }
    try {
        //motor_failure_mask
        const matlab::data::TypedArray<uint16_t> motor_failure_mask_arr = arr["motor_failure_mask"];
        msg->motor_failure_mask = motor_failure_mask_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'motor_failure_mask' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'motor_failure_mask' is wrong type; expected a uint16.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_FailureDetectorStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::FailureDetectorStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","fd_roll","fd_pitch","fd_alt","fd_ext","fd_arm_escs","fd_battery","fd_imbalanced_prop","fd_motor","imbalanced_prop_metric","motor_failure_mask"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/FailureDetectorStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // fd_roll
    auto currentElement_fd_roll = (msg + ctr)->fd_roll;
    outArray[ctr]["fd_roll"] = factory.createScalar(currentElement_fd_roll);
    // fd_pitch
    auto currentElement_fd_pitch = (msg + ctr)->fd_pitch;
    outArray[ctr]["fd_pitch"] = factory.createScalar(currentElement_fd_pitch);
    // fd_alt
    auto currentElement_fd_alt = (msg + ctr)->fd_alt;
    outArray[ctr]["fd_alt"] = factory.createScalar(currentElement_fd_alt);
    // fd_ext
    auto currentElement_fd_ext = (msg + ctr)->fd_ext;
    outArray[ctr]["fd_ext"] = factory.createScalar(currentElement_fd_ext);
    // fd_arm_escs
    auto currentElement_fd_arm_escs = (msg + ctr)->fd_arm_escs;
    outArray[ctr]["fd_arm_escs"] = factory.createScalar(currentElement_fd_arm_escs);
    // fd_battery
    auto currentElement_fd_battery = (msg + ctr)->fd_battery;
    outArray[ctr]["fd_battery"] = factory.createScalar(currentElement_fd_battery);
    // fd_imbalanced_prop
    auto currentElement_fd_imbalanced_prop = (msg + ctr)->fd_imbalanced_prop;
    outArray[ctr]["fd_imbalanced_prop"] = factory.createScalar(currentElement_fd_imbalanced_prop);
    // fd_motor
    auto currentElement_fd_motor = (msg + ctr)->fd_motor;
    outArray[ctr]["fd_motor"] = factory.createScalar(currentElement_fd_motor);
    // imbalanced_prop_metric
    auto currentElement_imbalanced_prop_metric = (msg + ctr)->imbalanced_prop_metric;
    outArray[ctr]["imbalanced_prop_metric"] = factory.createScalar(currentElement_imbalanced_prop_metric);
    // motor_failure_mask
    auto currentElement_motor_failure_mask = (msg + ctr)->motor_failure_mask;
    outArray[ctr]["motor_failure_mask"] = factory.createScalar(currentElement_motor_failure_mask);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_FailureDetectorStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_FailureDetectorStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_FailureDetectorStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::FailureDetectorStatus,ros2_px4_msgs_msg_FailureDetectorStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_FailureDetectorStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::FailureDetectorStatus,ros2_px4_msgs_msg_FailureDetectorStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_FailureDetectorStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::FailureDetectorStatus>();
    ros2_px4_msgs_msg_FailureDetectorStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_FailureDetectorStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_FailureDetectorStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::FailureDetectorStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_FailureDetectorStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::FailureDetectorStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_FailureDetectorStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER