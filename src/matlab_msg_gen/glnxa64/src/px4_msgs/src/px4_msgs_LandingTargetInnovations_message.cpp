// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/LandingTargetInnovations
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
#include "px4_msgs/msg/landing_target_innovations.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_LandingTargetInnovations_common : public MATLABROS2MsgInterface<px4_msgs::msg::LandingTargetInnovations> {
  public:
    virtual ~ros2_px4_msgs_msg_LandingTargetInnovations_common(){}
    virtual void copy_from_struct(px4_msgs::msg::LandingTargetInnovations* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::LandingTargetInnovations* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_LandingTargetInnovations_common::copy_from_struct(px4_msgs::msg::LandingTargetInnovations* msg, const matlab::data::Struct& arr,
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
        //innov_x
        const matlab::data::TypedArray<float> innov_x_arr = arr["innov_x"];
        msg->innov_x = innov_x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'innov_x' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'innov_x' is wrong type; expected a single.");
    }
    try {
        //innov_y
        const matlab::data::TypedArray<float> innov_y_arr = arr["innov_y"];
        msg->innov_y = innov_y_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'innov_y' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'innov_y' is wrong type; expected a single.");
    }
    try {
        //innov_cov_x
        const matlab::data::TypedArray<float> innov_cov_x_arr = arr["innov_cov_x"];
        msg->innov_cov_x = innov_cov_x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'innov_cov_x' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'innov_cov_x' is wrong type; expected a single.");
    }
    try {
        //innov_cov_y
        const matlab::data::TypedArray<float> innov_cov_y_arr = arr["innov_cov_y"];
        msg->innov_cov_y = innov_cov_y_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'innov_cov_y' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'innov_cov_y' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_LandingTargetInnovations_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::LandingTargetInnovations* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","innov_x","innov_y","innov_cov_x","innov_cov_y"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/LandingTargetInnovations");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // innov_x
    auto currentElement_innov_x = (msg + ctr)->innov_x;
    outArray[ctr]["innov_x"] = factory.createScalar(currentElement_innov_x);
    // innov_y
    auto currentElement_innov_y = (msg + ctr)->innov_y;
    outArray[ctr]["innov_y"] = factory.createScalar(currentElement_innov_y);
    // innov_cov_x
    auto currentElement_innov_cov_x = (msg + ctr)->innov_cov_x;
    outArray[ctr]["innov_cov_x"] = factory.createScalar(currentElement_innov_cov_x);
    // innov_cov_y
    auto currentElement_innov_cov_y = (msg + ctr)->innov_cov_y;
    outArray[ctr]["innov_cov_y"] = factory.createScalar(currentElement_innov_cov_y);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_LandingTargetInnovations_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_LandingTargetInnovations_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_LandingTargetInnovations_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::LandingTargetInnovations,ros2_px4_msgs_msg_LandingTargetInnovations_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_LandingTargetInnovations_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::LandingTargetInnovations,ros2_px4_msgs_msg_LandingTargetInnovations_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_LandingTargetInnovations_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::LandingTargetInnovations>();
    ros2_px4_msgs_msg_LandingTargetInnovations_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_LandingTargetInnovations_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_LandingTargetInnovations_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::LandingTargetInnovations*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_LandingTargetInnovations_common, MATLABROS2MsgInterface<px4_msgs::msg::LandingTargetInnovations>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_LandingTargetInnovations_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER