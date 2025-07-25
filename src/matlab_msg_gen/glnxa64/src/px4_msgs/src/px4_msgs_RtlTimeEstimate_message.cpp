// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/RtlTimeEstimate
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
#include "px4_msgs/msg/rtl_time_estimate.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_RtlTimeEstimate_common : public MATLABROS2MsgInterface<px4_msgs::msg::RtlTimeEstimate> {
  public:
    virtual ~ros2_px4_msgs_msg_RtlTimeEstimate_common(){}
    virtual void copy_from_struct(px4_msgs::msg::RtlTimeEstimate* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::RtlTimeEstimate* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_RtlTimeEstimate_common::copy_from_struct(px4_msgs::msg::RtlTimeEstimate* msg, const matlab::data::Struct& arr,
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
        //valid
        const matlab::data::TypedArray<bool> valid_arr = arr["valid"];
        msg->valid = valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'valid' is wrong type; expected a logical.");
    }
    try {
        //time_estimate
        const matlab::data::TypedArray<float> time_estimate_arr = arr["time_estimate"];
        msg->time_estimate = time_estimate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'time_estimate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'time_estimate' is wrong type; expected a single.");
    }
    try {
        //safe_time_estimate
        const matlab::data::TypedArray<float> safe_time_estimate_arr = arr["safe_time_estimate"];
        msg->safe_time_estimate = safe_time_estimate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'safe_time_estimate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'safe_time_estimate' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_RtlTimeEstimate_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::RtlTimeEstimate* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","valid","time_estimate","safe_time_estimate"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/RtlTimeEstimate");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // valid
    auto currentElement_valid = (msg + ctr)->valid;
    outArray[ctr]["valid"] = factory.createScalar(currentElement_valid);
    // time_estimate
    auto currentElement_time_estimate = (msg + ctr)->time_estimate;
    outArray[ctr]["time_estimate"] = factory.createScalar(currentElement_time_estimate);
    // safe_time_estimate
    auto currentElement_safe_time_estimate = (msg + ctr)->safe_time_estimate;
    outArray[ctr]["safe_time_estimate"] = factory.createScalar(currentElement_safe_time_estimate);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_RtlTimeEstimate_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_RtlTimeEstimate_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_RtlTimeEstimate_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::RtlTimeEstimate,ros2_px4_msgs_msg_RtlTimeEstimate_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_RtlTimeEstimate_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::RtlTimeEstimate,ros2_px4_msgs_msg_RtlTimeEstimate_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_RtlTimeEstimate_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::RtlTimeEstimate>();
    ros2_px4_msgs_msg_RtlTimeEstimate_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_RtlTimeEstimate_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_RtlTimeEstimate_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::RtlTimeEstimate*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_RtlTimeEstimate_common, MATLABROS2MsgInterface<px4_msgs::msg::RtlTimeEstimate>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_RtlTimeEstimate_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER