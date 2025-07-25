// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/UnregisterExtComponent
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
#include "px4_msgs/msg/unregister_ext_component.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_UnregisterExtComponent_common : public MATLABROS2MsgInterface<px4_msgs::msg::UnregisterExtComponent> {
  public:
    virtual ~ros2_px4_msgs_msg_UnregisterExtComponent_common(){}
    virtual void copy_from_struct(px4_msgs::msg::UnregisterExtComponent* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::UnregisterExtComponent* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_UnregisterExtComponent_common::copy_from_struct(px4_msgs::msg::UnregisterExtComponent* msg, const matlab::data::Struct& arr,
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
        //name
        const matlab::data::CharArray name_arr = arr["name"];
        const std::string name_str = name_arr.toAscii();
        size_t nelem = 25;
        	std::copy(name_arr.begin(), name_arr.begin()+nelem, msg->name.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'name' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'name' is wrong type; expected a char.");
    }
    try {
        //arming_check_id
        const matlab::data::TypedArray<int8_t> arming_check_id_arr = arr["arming_check_id"];
        msg->arming_check_id = arming_check_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'arming_check_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'arming_check_id' is wrong type; expected a int8.");
    }
    try {
        //mode_id
        const matlab::data::TypedArray<int8_t> mode_id_arr = arr["mode_id"];
        msg->mode_id = mode_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_id' is wrong type; expected a int8.");
    }
    try {
        //mode_executor_id
        const matlab::data::TypedArray<int8_t> mode_executor_id_arr = arr["mode_executor_id"];
        msg->mode_executor_id = mode_executor_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_executor_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_executor_id' is wrong type; expected a int8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_UnregisterExtComponent_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::UnregisterExtComponent* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","MESSAGE_VERSION","timestamp","name","arming_check_id","mode_id","mode_executor_id"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/UnregisterExtComponent");
    // MESSAGE_VERSION
    auto currentElement_MESSAGE_VERSION = (msg + ctr)->MESSAGE_VERSION;
    outArray[ctr]["MESSAGE_VERSION"] = factory.createScalar(currentElement_MESSAGE_VERSION);
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // name
    auto currentElement_name = (msg + ctr)->name;
    outArray[ctr]["name"] = factory.createCharArray(std::string(currentElement_name.begin(),currentElement_name.end()));
    // arming_check_id
    auto currentElement_arming_check_id = (msg + ctr)->arming_check_id;
    outArray[ctr]["arming_check_id"] = factory.createScalar(currentElement_arming_check_id);
    // mode_id
    auto currentElement_mode_id = (msg + ctr)->mode_id;
    outArray[ctr]["mode_id"] = factory.createScalar(currentElement_mode_id);
    // mode_executor_id
    auto currentElement_mode_executor_id = (msg + ctr)->mode_executor_id;
    outArray[ctr]["mode_executor_id"] = factory.createScalar(currentElement_mode_executor_id);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_UnregisterExtComponent_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_UnregisterExtComponent_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_UnregisterExtComponent_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::UnregisterExtComponent,ros2_px4_msgs_msg_UnregisterExtComponent_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_UnregisterExtComponent_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::UnregisterExtComponent,ros2_px4_msgs_msg_UnregisterExtComponent_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_UnregisterExtComponent_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::UnregisterExtComponent>();
    ros2_px4_msgs_msg_UnregisterExtComponent_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_UnregisterExtComponent_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_UnregisterExtComponent_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::UnregisterExtComponent*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_UnregisterExtComponent_common, MATLABROS2MsgInterface<px4_msgs::msg::UnregisterExtComponent>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_UnregisterExtComponent_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER