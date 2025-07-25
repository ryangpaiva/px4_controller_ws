// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/HealthReport
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
#include "px4_msgs/msg/health_report.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_HealthReport_common : public MATLABROS2MsgInterface<px4_msgs::msg::HealthReport> {
  public:
    virtual ~ros2_px4_msgs_msg_HealthReport_common(){}
    virtual void copy_from_struct(px4_msgs::msg::HealthReport* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::HealthReport* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_HealthReport_common::copy_from_struct(px4_msgs::msg::HealthReport* msg, const matlab::data::Struct& arr,
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
        //can_arm_mode_flags
        const matlab::data::TypedArray<uint64_t> can_arm_mode_flags_arr = arr["can_arm_mode_flags"];
        msg->can_arm_mode_flags = can_arm_mode_flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'can_arm_mode_flags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'can_arm_mode_flags' is wrong type; expected a uint64.");
    }
    try {
        //can_run_mode_flags
        const matlab::data::TypedArray<uint64_t> can_run_mode_flags_arr = arr["can_run_mode_flags"];
        msg->can_run_mode_flags = can_run_mode_flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'can_run_mode_flags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'can_run_mode_flags' is wrong type; expected a uint64.");
    }
    try {
        //health_is_present_flags
        const matlab::data::TypedArray<uint64_t> health_is_present_flags_arr = arr["health_is_present_flags"];
        msg->health_is_present_flags = health_is_present_flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'health_is_present_flags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'health_is_present_flags' is wrong type; expected a uint64.");
    }
    try {
        //health_warning_flags
        const matlab::data::TypedArray<uint64_t> health_warning_flags_arr = arr["health_warning_flags"];
        msg->health_warning_flags = health_warning_flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'health_warning_flags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'health_warning_flags' is wrong type; expected a uint64.");
    }
    try {
        //health_error_flags
        const matlab::data::TypedArray<uint64_t> health_error_flags_arr = arr["health_error_flags"];
        msg->health_error_flags = health_error_flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'health_error_flags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'health_error_flags' is wrong type; expected a uint64.");
    }
    try {
        //arming_check_warning_flags
        const matlab::data::TypedArray<uint64_t> arming_check_warning_flags_arr = arr["arming_check_warning_flags"];
        msg->arming_check_warning_flags = arming_check_warning_flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'arming_check_warning_flags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'arming_check_warning_flags' is wrong type; expected a uint64.");
    }
    try {
        //arming_check_error_flags
        const matlab::data::TypedArray<uint64_t> arming_check_error_flags_arr = arr["arming_check_error_flags"];
        msg->arming_check_error_flags = arming_check_error_flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'arming_check_error_flags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'arming_check_error_flags' is wrong type; expected a uint64.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_HealthReport_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::HealthReport* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","can_arm_mode_flags","can_run_mode_flags","health_is_present_flags","health_warning_flags","health_error_flags","arming_check_warning_flags","arming_check_error_flags"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/HealthReport");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // can_arm_mode_flags
    auto currentElement_can_arm_mode_flags = (msg + ctr)->can_arm_mode_flags;
    outArray[ctr]["can_arm_mode_flags"] = factory.createScalar(currentElement_can_arm_mode_flags);
    // can_run_mode_flags
    auto currentElement_can_run_mode_flags = (msg + ctr)->can_run_mode_flags;
    outArray[ctr]["can_run_mode_flags"] = factory.createScalar(currentElement_can_run_mode_flags);
    // health_is_present_flags
    auto currentElement_health_is_present_flags = (msg + ctr)->health_is_present_flags;
    outArray[ctr]["health_is_present_flags"] = factory.createScalar(currentElement_health_is_present_flags);
    // health_warning_flags
    auto currentElement_health_warning_flags = (msg + ctr)->health_warning_flags;
    outArray[ctr]["health_warning_flags"] = factory.createScalar(currentElement_health_warning_flags);
    // health_error_flags
    auto currentElement_health_error_flags = (msg + ctr)->health_error_flags;
    outArray[ctr]["health_error_flags"] = factory.createScalar(currentElement_health_error_flags);
    // arming_check_warning_flags
    auto currentElement_arming_check_warning_flags = (msg + ctr)->arming_check_warning_flags;
    outArray[ctr]["arming_check_warning_flags"] = factory.createScalar(currentElement_arming_check_warning_flags);
    // arming_check_error_flags
    auto currentElement_arming_check_error_flags = (msg + ctr)->arming_check_error_flags;
    outArray[ctr]["arming_check_error_flags"] = factory.createScalar(currentElement_arming_check_error_flags);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_HealthReport_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_HealthReport_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_HealthReport_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::HealthReport,ros2_px4_msgs_msg_HealthReport_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_HealthReport_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::HealthReport,ros2_px4_msgs_msg_HealthReport_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_HealthReport_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::HealthReport>();
    ros2_px4_msgs_msg_HealthReport_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_HealthReport_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_HealthReport_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::HealthReport*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_HealthReport_common, MATLABROS2MsgInterface<px4_msgs::msg::HealthReport>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_HealthReport_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER