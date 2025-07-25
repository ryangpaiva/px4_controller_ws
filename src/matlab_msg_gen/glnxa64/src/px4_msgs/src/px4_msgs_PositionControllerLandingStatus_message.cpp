// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/PositionControllerLandingStatus
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
#include "px4_msgs/msg/position_controller_landing_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_PositionControllerLandingStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::PositionControllerLandingStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_PositionControllerLandingStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::PositionControllerLandingStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::PositionControllerLandingStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_PositionControllerLandingStatus_common::copy_from_struct(px4_msgs::msg::PositionControllerLandingStatus* msg, const matlab::data::Struct& arr,
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
        //lateral_touchdown_offset
        const matlab::data::TypedArray<float> lateral_touchdown_offset_arr = arr["lateral_touchdown_offset"];
        msg->lateral_touchdown_offset = lateral_touchdown_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'lateral_touchdown_offset' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'lateral_touchdown_offset' is wrong type; expected a single.");
    }
    try {
        //flaring
        const matlab::data::TypedArray<bool> flaring_arr = arr["flaring"];
        msg->flaring = flaring_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flaring' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flaring' is wrong type; expected a logical.");
    }
    try {
        //abort_status
        const matlab::data::TypedArray<uint8_t> abort_status_arr = arr["abort_status"];
        msg->abort_status = abort_status_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'abort_status' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'abort_status' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_PositionControllerLandingStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::PositionControllerLandingStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","lateral_touchdown_offset","flaring","abort_status","NOT_ABORTED","ABORTED_BY_OPERATOR","TERRAIN_NOT_FOUND","TERRAIN_TIMEOUT","UNKNOWN_ABORT_CRITERION"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/PositionControllerLandingStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // lateral_touchdown_offset
    auto currentElement_lateral_touchdown_offset = (msg + ctr)->lateral_touchdown_offset;
    outArray[ctr]["lateral_touchdown_offset"] = factory.createScalar(currentElement_lateral_touchdown_offset);
    // flaring
    auto currentElement_flaring = (msg + ctr)->flaring;
    outArray[ctr]["flaring"] = factory.createScalar(currentElement_flaring);
    // abort_status
    auto currentElement_abort_status = (msg + ctr)->abort_status;
    outArray[ctr]["abort_status"] = factory.createScalar(currentElement_abort_status);
    // NOT_ABORTED
    auto currentElement_NOT_ABORTED = (msg + ctr)->NOT_ABORTED;
    outArray[ctr]["NOT_ABORTED"] = factory.createScalar(currentElement_NOT_ABORTED);
    // ABORTED_BY_OPERATOR
    auto currentElement_ABORTED_BY_OPERATOR = (msg + ctr)->ABORTED_BY_OPERATOR;
    outArray[ctr]["ABORTED_BY_OPERATOR"] = factory.createScalar(currentElement_ABORTED_BY_OPERATOR);
    // TERRAIN_NOT_FOUND
    auto currentElement_TERRAIN_NOT_FOUND = (msg + ctr)->TERRAIN_NOT_FOUND;
    outArray[ctr]["TERRAIN_NOT_FOUND"] = factory.createScalar(currentElement_TERRAIN_NOT_FOUND);
    // TERRAIN_TIMEOUT
    auto currentElement_TERRAIN_TIMEOUT = (msg + ctr)->TERRAIN_TIMEOUT;
    outArray[ctr]["TERRAIN_TIMEOUT"] = factory.createScalar(currentElement_TERRAIN_TIMEOUT);
    // UNKNOWN_ABORT_CRITERION
    auto currentElement_UNKNOWN_ABORT_CRITERION = (msg + ctr)->UNKNOWN_ABORT_CRITERION;
    outArray[ctr]["UNKNOWN_ABORT_CRITERION"] = factory.createScalar(currentElement_UNKNOWN_ABORT_CRITERION);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_PositionControllerLandingStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_PositionControllerLandingStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_PositionControllerLandingStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::PositionControllerLandingStatus,ros2_px4_msgs_msg_PositionControllerLandingStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_PositionControllerLandingStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::PositionControllerLandingStatus,ros2_px4_msgs_msg_PositionControllerLandingStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_PositionControllerLandingStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::PositionControllerLandingStatus>();
    ros2_px4_msgs_msg_PositionControllerLandingStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_PositionControllerLandingStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_PositionControllerLandingStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::PositionControllerLandingStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_PositionControllerLandingStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::PositionControllerLandingStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_PositionControllerLandingStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER