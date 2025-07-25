// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/ParameterUpdate
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
#include "px4_msgs/msg/parameter_update.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_ParameterUpdate_common : public MATLABROS2MsgInterface<px4_msgs::msg::ParameterUpdate> {
  public:
    virtual ~ros2_px4_msgs_msg_ParameterUpdate_common(){}
    virtual void copy_from_struct(px4_msgs::msg::ParameterUpdate* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::ParameterUpdate* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_ParameterUpdate_common::copy_from_struct(px4_msgs::msg::ParameterUpdate* msg, const matlab::data::Struct& arr,
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
        //instance
        const matlab::data::TypedArray<uint32_t> instance_arr = arr["instance"];
        msg->instance = instance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'instance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'instance' is wrong type; expected a uint32.");
    }
    try {
        //get_count
        const matlab::data::TypedArray<uint32_t> get_count_arr = arr["get_count"];
        msg->get_count = get_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'get_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'get_count' is wrong type; expected a uint32.");
    }
    try {
        //set_count
        const matlab::data::TypedArray<uint32_t> set_count_arr = arr["set_count"];
        msg->set_count = set_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'set_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'set_count' is wrong type; expected a uint32.");
    }
    try {
        //find_count
        const matlab::data::TypedArray<uint32_t> find_count_arr = arr["find_count"];
        msg->find_count = find_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'find_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'find_count' is wrong type; expected a uint32.");
    }
    try {
        //export_count
        const matlab::data::TypedArray<uint32_t> export_count_arr = arr["export_count"];
        msg->export_count = export_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'export_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'export_count' is wrong type; expected a uint32.");
    }
    try {
        //active
        const matlab::data::TypedArray<uint16_t> active_arr = arr["active"];
        msg->active = active_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'active' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'active' is wrong type; expected a uint16.");
    }
    try {
        //changed
        const matlab::data::TypedArray<uint16_t> changed_arr = arr["changed"];
        msg->changed = changed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'changed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'changed' is wrong type; expected a uint16.");
    }
    try {
        //custom_default
        const matlab::data::TypedArray<uint16_t> custom_default_arr = arr["custom_default"];
        msg->custom_default = custom_default_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'custom_default' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'custom_default' is wrong type; expected a uint16.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_ParameterUpdate_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::ParameterUpdate* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","instance","get_count","set_count","find_count","export_count","active","changed","custom_default"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/ParameterUpdate");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // instance
    auto currentElement_instance = (msg + ctr)->instance;
    outArray[ctr]["instance"] = factory.createScalar(currentElement_instance);
    // get_count
    auto currentElement_get_count = (msg + ctr)->get_count;
    outArray[ctr]["get_count"] = factory.createScalar(currentElement_get_count);
    // set_count
    auto currentElement_set_count = (msg + ctr)->set_count;
    outArray[ctr]["set_count"] = factory.createScalar(currentElement_set_count);
    // find_count
    auto currentElement_find_count = (msg + ctr)->find_count;
    outArray[ctr]["find_count"] = factory.createScalar(currentElement_find_count);
    // export_count
    auto currentElement_export_count = (msg + ctr)->export_count;
    outArray[ctr]["export_count"] = factory.createScalar(currentElement_export_count);
    // active
    auto currentElement_active = (msg + ctr)->active;
    outArray[ctr]["active"] = factory.createScalar(currentElement_active);
    // changed
    auto currentElement_changed = (msg + ctr)->changed;
    outArray[ctr]["changed"] = factory.createScalar(currentElement_changed);
    // custom_default
    auto currentElement_custom_default = (msg + ctr)->custom_default;
    outArray[ctr]["custom_default"] = factory.createScalar(currentElement_custom_default);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_ParameterUpdate_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_ParameterUpdate_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_ParameterUpdate_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::ParameterUpdate,ros2_px4_msgs_msg_ParameterUpdate_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_ParameterUpdate_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::ParameterUpdate,ros2_px4_msgs_msg_ParameterUpdate_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_ParameterUpdate_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::ParameterUpdate>();
    ros2_px4_msgs_msg_ParameterUpdate_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_ParameterUpdate_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_ParameterUpdate_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::ParameterUpdate*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_ParameterUpdate_common, MATLABROS2MsgInterface<px4_msgs::msg::ParameterUpdate>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_ParameterUpdate_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER