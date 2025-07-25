// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/SensorsStatus
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
#include "px4_msgs/msg/sensors_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_SensorsStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::SensorsStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_SensorsStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::SensorsStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::SensorsStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_SensorsStatus_common::copy_from_struct(px4_msgs::msg::SensorsStatus* msg, const matlab::data::Struct& arr,
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
        //device_id_primary
        const matlab::data::TypedArray<uint32_t> device_id_primary_arr = arr["device_id_primary"];
        msg->device_id_primary = device_id_primary_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'device_id_primary' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'device_id_primary' is wrong type; expected a uint32.");
    }
    try {
        //device_ids
        const matlab::data::TypedArray<uint32_t> device_ids_arr = arr["device_ids"];
        size_t nelem = 4;
        	std::copy(device_ids_arr.begin(), device_ids_arr.begin()+nelem, msg->device_ids.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'device_ids' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'device_ids' is wrong type; expected a uint32.");
    }
    try {
        //inconsistency
        const matlab::data::TypedArray<float> inconsistency_arr = arr["inconsistency"];
        size_t nelem = 4;
        	std::copy(inconsistency_arr.begin(), inconsistency_arr.begin()+nelem, msg->inconsistency.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'inconsistency' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'inconsistency' is wrong type; expected a single.");
    }
    try {
        //healthy
        const matlab::data::TypedArray<bool> healthy_arr = arr["healthy"];
        size_t nelem = 4;
        	std::copy(healthy_arr.begin(), healthy_arr.begin()+nelem, msg->healthy.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'healthy' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'healthy' is wrong type; expected a logical.");
    }
    try {
        //priority
        const matlab::data::TypedArray<uint8_t> priority_arr = arr["priority"];
        size_t nelem = 4;
        	std::copy(priority_arr.begin(), priority_arr.begin()+nelem, msg->priority.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'priority' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'priority' is wrong type; expected a uint8.");
    }
    try {
        //enabled
        const matlab::data::TypedArray<bool> enabled_arr = arr["enabled"];
        size_t nelem = 4;
        	std::copy(enabled_arr.begin(), enabled_arr.begin()+nelem, msg->enabled.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'enabled' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'enabled' is wrong type; expected a logical.");
    }
    try {
        //external
        const matlab::data::TypedArray<bool> external_arr = arr["external"];
        size_t nelem = 4;
        	std::copy(external_arr.begin(), external_arr.begin()+nelem, msg->external.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'external' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'external' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_SensorsStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::SensorsStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","device_id_primary","device_ids","inconsistency","healthy","priority","enabled","external"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/SensorsStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // device_id_primary
    auto currentElement_device_id_primary = (msg + ctr)->device_id_primary;
    outArray[ctr]["device_id_primary"] = factory.createScalar(currentElement_device_id_primary);
    // device_ids
    auto currentElement_device_ids = (msg + ctr)->device_ids;
    outArray[ctr]["device_ids"] = factory.createArray<px4_msgs::msg::SensorsStatus::_device_ids_type::const_iterator, uint32_t>({currentElement_device_ids.size(), 1}, currentElement_device_ids.begin(), currentElement_device_ids.end());
    // inconsistency
    auto currentElement_inconsistency = (msg + ctr)->inconsistency;
    outArray[ctr]["inconsistency"] = factory.createArray<px4_msgs::msg::SensorsStatus::_inconsistency_type::const_iterator, float>({currentElement_inconsistency.size(), 1}, currentElement_inconsistency.begin(), currentElement_inconsistency.end());
    // healthy
    auto currentElement_healthy = (msg + ctr)->healthy;
    outArray[ctr]["healthy"] = factory.createArray<px4_msgs::msg::SensorsStatus::_healthy_type::const_iterator, bool>({currentElement_healthy.size(), 1}, currentElement_healthy.begin(), currentElement_healthy.end());
    // priority
    auto currentElement_priority = (msg + ctr)->priority;
    outArray[ctr]["priority"] = factory.createArray<px4_msgs::msg::SensorsStatus::_priority_type::const_iterator, uint8_t>({currentElement_priority.size(), 1}, currentElement_priority.begin(), currentElement_priority.end());
    // enabled
    auto currentElement_enabled = (msg + ctr)->enabled;
    outArray[ctr]["enabled"] = factory.createArray<px4_msgs::msg::SensorsStatus::_enabled_type::const_iterator, bool>({currentElement_enabled.size(), 1}, currentElement_enabled.begin(), currentElement_enabled.end());
    // external
    auto currentElement_external = (msg + ctr)->external;
    outArray[ctr]["external"] = factory.createArray<px4_msgs::msg::SensorsStatus::_external_type::const_iterator, bool>({currentElement_external.size(), 1}, currentElement_external.begin(), currentElement_external.end());
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_SensorsStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_SensorsStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_SensorsStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::SensorsStatus,ros2_px4_msgs_msg_SensorsStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_SensorsStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::SensorsStatus,ros2_px4_msgs_msg_SensorsStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_SensorsStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::SensorsStatus>();
    ros2_px4_msgs_msg_SensorsStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_SensorsStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_SensorsStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::SensorsStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_SensorsStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::SensorsStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_SensorsStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER