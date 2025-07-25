// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/VelocityLimits
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
#include "px4_msgs/msg/velocity_limits.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_VelocityLimits_common : public MATLABROS2MsgInterface<px4_msgs::msg::VelocityLimits> {
  public:
    virtual ~ros2_px4_msgs_msg_VelocityLimits_common(){}
    virtual void copy_from_struct(px4_msgs::msg::VelocityLimits* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::VelocityLimits* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_VelocityLimits_common::copy_from_struct(px4_msgs::msg::VelocityLimits* msg, const matlab::data::Struct& arr,
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
        //horizontal_velocity
        const matlab::data::TypedArray<float> horizontal_velocity_arr = arr["horizontal_velocity"];
        msg->horizontal_velocity = horizontal_velocity_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'horizontal_velocity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'horizontal_velocity' is wrong type; expected a single.");
    }
    try {
        //vertical_velocity
        const matlab::data::TypedArray<float> vertical_velocity_arr = arr["vertical_velocity"];
        msg->vertical_velocity = vertical_velocity_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vertical_velocity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vertical_velocity' is wrong type; expected a single.");
    }
    try {
        //yaw_rate
        const matlab::data::TypedArray<float> yaw_rate_arr = arr["yaw_rate"];
        msg->yaw_rate = yaw_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw_rate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'yaw_rate' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_VelocityLimits_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::VelocityLimits* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","horizontal_velocity","vertical_velocity","yaw_rate"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/VelocityLimits");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // horizontal_velocity
    auto currentElement_horizontal_velocity = (msg + ctr)->horizontal_velocity;
    outArray[ctr]["horizontal_velocity"] = factory.createScalar(currentElement_horizontal_velocity);
    // vertical_velocity
    auto currentElement_vertical_velocity = (msg + ctr)->vertical_velocity;
    outArray[ctr]["vertical_velocity"] = factory.createScalar(currentElement_vertical_velocity);
    // yaw_rate
    auto currentElement_yaw_rate = (msg + ctr)->yaw_rate;
    outArray[ctr]["yaw_rate"] = factory.createScalar(currentElement_yaw_rate);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_VelocityLimits_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_VelocityLimits_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_VelocityLimits_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::VelocityLimits,ros2_px4_msgs_msg_VelocityLimits_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_VelocityLimits_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::VelocityLimits,ros2_px4_msgs_msg_VelocityLimits_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_VelocityLimits_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::VelocityLimits>();
    ros2_px4_msgs_msg_VelocityLimits_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_VelocityLimits_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_VelocityLimits_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::VelocityLimits*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_VelocityLimits_common, MATLABROS2MsgInterface<px4_msgs::msg::VelocityLimits>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_VelocityLimits_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER