// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/GimbalManagerStatus
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
#include "px4_msgs/msg/gimbal_manager_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_GimbalManagerStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::GimbalManagerStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_GimbalManagerStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::GimbalManagerStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::GimbalManagerStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_GimbalManagerStatus_common::copy_from_struct(px4_msgs::msg::GimbalManagerStatus* msg, const matlab::data::Struct& arr,
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
        //primary_control_sysid
        const matlab::data::TypedArray<uint8_t> primary_control_sysid_arr = arr["primary_control_sysid"];
        msg->primary_control_sysid = primary_control_sysid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'primary_control_sysid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'primary_control_sysid' is wrong type; expected a uint8.");
    }
    try {
        //primary_control_compid
        const matlab::data::TypedArray<uint8_t> primary_control_compid_arr = arr["primary_control_compid"];
        msg->primary_control_compid = primary_control_compid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'primary_control_compid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'primary_control_compid' is wrong type; expected a uint8.");
    }
    try {
        //secondary_control_sysid
        const matlab::data::TypedArray<uint8_t> secondary_control_sysid_arr = arr["secondary_control_sysid"];
        msg->secondary_control_sysid = secondary_control_sysid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'secondary_control_sysid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'secondary_control_sysid' is wrong type; expected a uint8.");
    }
    try {
        //secondary_control_compid
        const matlab::data::TypedArray<uint8_t> secondary_control_compid_arr = arr["secondary_control_compid"];
        msg->secondary_control_compid = secondary_control_compid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'secondary_control_compid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'secondary_control_compid' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_GimbalManagerStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::GimbalManagerStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","flags","gimbal_device_id","primary_control_sysid","primary_control_compid","secondary_control_sysid","secondary_control_compid"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/GimbalManagerStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // flags
    auto currentElement_flags = (msg + ctr)->flags;
    outArray[ctr]["flags"] = factory.createScalar(currentElement_flags);
    // gimbal_device_id
    auto currentElement_gimbal_device_id = (msg + ctr)->gimbal_device_id;
    outArray[ctr]["gimbal_device_id"] = factory.createScalar(currentElement_gimbal_device_id);
    // primary_control_sysid
    auto currentElement_primary_control_sysid = (msg + ctr)->primary_control_sysid;
    outArray[ctr]["primary_control_sysid"] = factory.createScalar(currentElement_primary_control_sysid);
    // primary_control_compid
    auto currentElement_primary_control_compid = (msg + ctr)->primary_control_compid;
    outArray[ctr]["primary_control_compid"] = factory.createScalar(currentElement_primary_control_compid);
    // secondary_control_sysid
    auto currentElement_secondary_control_sysid = (msg + ctr)->secondary_control_sysid;
    outArray[ctr]["secondary_control_sysid"] = factory.createScalar(currentElement_secondary_control_sysid);
    // secondary_control_compid
    auto currentElement_secondary_control_compid = (msg + ctr)->secondary_control_compid;
    outArray[ctr]["secondary_control_compid"] = factory.createScalar(currentElement_secondary_control_compid);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_GimbalManagerStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_GimbalManagerStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_GimbalManagerStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::GimbalManagerStatus,ros2_px4_msgs_msg_GimbalManagerStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_GimbalManagerStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::GimbalManagerStatus,ros2_px4_msgs_msg_GimbalManagerStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_GimbalManagerStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::GimbalManagerStatus>();
    ros2_px4_msgs_msg_GimbalManagerStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_GimbalManagerStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_GimbalManagerStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::GimbalManagerStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_GimbalManagerStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::GimbalManagerStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_GimbalManagerStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER