// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/ConfigOverrides
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
#include "px4_msgs/msg/config_overrides.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_ConfigOverrides_common : public MATLABROS2MsgInterface<px4_msgs::msg::ConfigOverrides> {
  public:
    virtual ~ros2_px4_msgs_msg_ConfigOverrides_common(){}
    virtual void copy_from_struct(px4_msgs::msg::ConfigOverrides* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::ConfigOverrides* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_ConfigOverrides_common::copy_from_struct(px4_msgs::msg::ConfigOverrides* msg, const matlab::data::Struct& arr,
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
        //disable_auto_disarm
        const matlab::data::TypedArray<bool> disable_auto_disarm_arr = arr["disable_auto_disarm"];
        msg->disable_auto_disarm = disable_auto_disarm_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'disable_auto_disarm' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'disable_auto_disarm' is wrong type; expected a logical.");
    }
    try {
        //defer_failsafes
        const matlab::data::TypedArray<bool> defer_failsafes_arr = arr["defer_failsafes"];
        msg->defer_failsafes = defer_failsafes_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'defer_failsafes' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'defer_failsafes' is wrong type; expected a logical.");
    }
    try {
        //defer_failsafes_timeout_s
        const matlab::data::TypedArray<int16_t> defer_failsafes_timeout_s_arr = arr["defer_failsafes_timeout_s"];
        msg->defer_failsafes_timeout_s = defer_failsafes_timeout_s_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'defer_failsafes_timeout_s' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'defer_failsafes_timeout_s' is wrong type; expected a int16.");
    }
    try {
        //source_type
        const matlab::data::TypedArray<int8_t> source_type_arr = arr["source_type"];
        msg->source_type = source_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'source_type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'source_type' is wrong type; expected a int8.");
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
  MDArray_T ros2_px4_msgs_msg_ConfigOverrides_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::ConfigOverrides* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","MESSAGE_VERSION","timestamp","disable_auto_disarm","defer_failsafes","defer_failsafes_timeout_s","SOURCE_TYPE_MODE","SOURCE_TYPE_MODE_EXECUTOR","source_type","source_id","ORB_QUEUE_LENGTH"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/ConfigOverrides");
    // MESSAGE_VERSION
    auto currentElement_MESSAGE_VERSION = (msg + ctr)->MESSAGE_VERSION;
    outArray[ctr]["MESSAGE_VERSION"] = factory.createScalar(currentElement_MESSAGE_VERSION);
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // disable_auto_disarm
    auto currentElement_disable_auto_disarm = (msg + ctr)->disable_auto_disarm;
    outArray[ctr]["disable_auto_disarm"] = factory.createScalar(currentElement_disable_auto_disarm);
    // defer_failsafes
    auto currentElement_defer_failsafes = (msg + ctr)->defer_failsafes;
    outArray[ctr]["defer_failsafes"] = factory.createScalar(currentElement_defer_failsafes);
    // defer_failsafes_timeout_s
    auto currentElement_defer_failsafes_timeout_s = (msg + ctr)->defer_failsafes_timeout_s;
    outArray[ctr]["defer_failsafes_timeout_s"] = factory.createScalar(currentElement_defer_failsafes_timeout_s);
    // SOURCE_TYPE_MODE
    auto currentElement_SOURCE_TYPE_MODE = (msg + ctr)->SOURCE_TYPE_MODE;
    outArray[ctr]["SOURCE_TYPE_MODE"] = factory.createScalar(currentElement_SOURCE_TYPE_MODE);
    // SOURCE_TYPE_MODE_EXECUTOR
    auto currentElement_SOURCE_TYPE_MODE_EXECUTOR = (msg + ctr)->SOURCE_TYPE_MODE_EXECUTOR;
    outArray[ctr]["SOURCE_TYPE_MODE_EXECUTOR"] = factory.createScalar(currentElement_SOURCE_TYPE_MODE_EXECUTOR);
    // source_type
    auto currentElement_source_type = (msg + ctr)->source_type;
    outArray[ctr]["source_type"] = factory.createScalar(currentElement_source_type);
    // source_id
    auto currentElement_source_id = (msg + ctr)->source_id;
    outArray[ctr]["source_id"] = factory.createScalar(currentElement_source_id);
    // ORB_QUEUE_LENGTH
    auto currentElement_ORB_QUEUE_LENGTH = (msg + ctr)->ORB_QUEUE_LENGTH;
    outArray[ctr]["ORB_QUEUE_LENGTH"] = factory.createScalar(currentElement_ORB_QUEUE_LENGTH);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_ConfigOverrides_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_ConfigOverrides_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_ConfigOverrides_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::ConfigOverrides,ros2_px4_msgs_msg_ConfigOverrides_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_ConfigOverrides_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::ConfigOverrides,ros2_px4_msgs_msg_ConfigOverrides_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_ConfigOverrides_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::ConfigOverrides>();
    ros2_px4_msgs_msg_ConfigOverrides_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_ConfigOverrides_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_ConfigOverrides_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::ConfigOverrides*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_ConfigOverrides_common, MATLABROS2MsgInterface<px4_msgs::msg::ConfigOverrides>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_ConfigOverrides_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER