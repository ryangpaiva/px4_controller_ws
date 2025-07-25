// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/CameraTrigger
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
#include "px4_msgs/msg/camera_trigger.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_CameraTrigger_common : public MATLABROS2MsgInterface<px4_msgs::msg::CameraTrigger> {
  public:
    virtual ~ros2_px4_msgs_msg_CameraTrigger_common(){}
    virtual void copy_from_struct(px4_msgs::msg::CameraTrigger* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::CameraTrigger* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_CameraTrigger_common::copy_from_struct(px4_msgs::msg::CameraTrigger* msg, const matlab::data::Struct& arr,
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
        //timestamp_utc
        const matlab::data::TypedArray<uint64_t> timestamp_utc_arr = arr["timestamp_utc"];
        msg->timestamp_utc = timestamp_utc_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'timestamp_utc' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'timestamp_utc' is wrong type; expected a uint64.");
    }
    try {
        //seq
        const matlab::data::TypedArray<uint32_t> seq_arr = arr["seq"];
        msg->seq = seq_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'seq' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'seq' is wrong type; expected a uint32.");
    }
    try {
        //feedback
        const matlab::data::TypedArray<bool> feedback_arr = arr["feedback"];
        msg->feedback = feedback_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'feedback' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'feedback' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_CameraTrigger_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::CameraTrigger* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","timestamp_utc","seq","feedback","ORB_QUEUE_LENGTH"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/CameraTrigger");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_utc
    auto currentElement_timestamp_utc = (msg + ctr)->timestamp_utc;
    outArray[ctr]["timestamp_utc"] = factory.createScalar(currentElement_timestamp_utc);
    // seq
    auto currentElement_seq = (msg + ctr)->seq;
    outArray[ctr]["seq"] = factory.createScalar(currentElement_seq);
    // feedback
    auto currentElement_feedback = (msg + ctr)->feedback;
    outArray[ctr]["feedback"] = factory.createScalar(currentElement_feedback);
    // ORB_QUEUE_LENGTH
    auto currentElement_ORB_QUEUE_LENGTH = (msg + ctr)->ORB_QUEUE_LENGTH;
    outArray[ctr]["ORB_QUEUE_LENGTH"] = factory.createScalar(currentElement_ORB_QUEUE_LENGTH);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_CameraTrigger_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_CameraTrigger_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_CameraTrigger_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::CameraTrigger,ros2_px4_msgs_msg_CameraTrigger_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_CameraTrigger_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::CameraTrigger,ros2_px4_msgs_msg_CameraTrigger_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_CameraTrigger_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::CameraTrigger>();
    ros2_px4_msgs_msg_CameraTrigger_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_CameraTrigger_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_CameraTrigger_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::CameraTrigger*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_CameraTrigger_common, MATLABROS2MsgInterface<px4_msgs::msg::CameraTrigger>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_CameraTrigger_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER