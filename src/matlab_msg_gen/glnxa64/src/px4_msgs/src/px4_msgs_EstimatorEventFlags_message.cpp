// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/EstimatorEventFlags
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
#include "px4_msgs/msg/estimator_event_flags.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_EstimatorEventFlags_common : public MATLABROS2MsgInterface<px4_msgs::msg::EstimatorEventFlags> {
  public:
    virtual ~ros2_px4_msgs_msg_EstimatorEventFlags_common(){}
    virtual void copy_from_struct(px4_msgs::msg::EstimatorEventFlags* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::EstimatorEventFlags* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_EstimatorEventFlags_common::copy_from_struct(px4_msgs::msg::EstimatorEventFlags* msg, const matlab::data::Struct& arr,
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
        //timestamp_sample
        const matlab::data::TypedArray<uint64_t> timestamp_sample_arr = arr["timestamp_sample"];
        msg->timestamp_sample = timestamp_sample_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'timestamp_sample' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'timestamp_sample' is wrong type; expected a uint64.");
    }
    try {
        //information_event_changes
        const matlab::data::TypedArray<uint32_t> information_event_changes_arr = arr["information_event_changes"];
        msg->information_event_changes = information_event_changes_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'information_event_changes' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'information_event_changes' is wrong type; expected a uint32.");
    }
    try {
        //gps_checks_passed
        const matlab::data::TypedArray<bool> gps_checks_passed_arr = arr["gps_checks_passed"];
        msg->gps_checks_passed = gps_checks_passed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gps_checks_passed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gps_checks_passed' is wrong type; expected a logical.");
    }
    try {
        //reset_vel_to_gps
        const matlab::data::TypedArray<bool> reset_vel_to_gps_arr = arr["reset_vel_to_gps"];
        msg->reset_vel_to_gps = reset_vel_to_gps_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reset_vel_to_gps' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reset_vel_to_gps' is wrong type; expected a logical.");
    }
    try {
        //reset_vel_to_flow
        const matlab::data::TypedArray<bool> reset_vel_to_flow_arr = arr["reset_vel_to_flow"];
        msg->reset_vel_to_flow = reset_vel_to_flow_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reset_vel_to_flow' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reset_vel_to_flow' is wrong type; expected a logical.");
    }
    try {
        //reset_vel_to_vision
        const matlab::data::TypedArray<bool> reset_vel_to_vision_arr = arr["reset_vel_to_vision"];
        msg->reset_vel_to_vision = reset_vel_to_vision_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reset_vel_to_vision' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reset_vel_to_vision' is wrong type; expected a logical.");
    }
    try {
        //reset_vel_to_zero
        const matlab::data::TypedArray<bool> reset_vel_to_zero_arr = arr["reset_vel_to_zero"];
        msg->reset_vel_to_zero = reset_vel_to_zero_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reset_vel_to_zero' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reset_vel_to_zero' is wrong type; expected a logical.");
    }
    try {
        //reset_pos_to_last_known
        const matlab::data::TypedArray<bool> reset_pos_to_last_known_arr = arr["reset_pos_to_last_known"];
        msg->reset_pos_to_last_known = reset_pos_to_last_known_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reset_pos_to_last_known' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reset_pos_to_last_known' is wrong type; expected a logical.");
    }
    try {
        //reset_pos_to_gps
        const matlab::data::TypedArray<bool> reset_pos_to_gps_arr = arr["reset_pos_to_gps"];
        msg->reset_pos_to_gps = reset_pos_to_gps_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reset_pos_to_gps' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reset_pos_to_gps' is wrong type; expected a logical.");
    }
    try {
        //reset_pos_to_vision
        const matlab::data::TypedArray<bool> reset_pos_to_vision_arr = arr["reset_pos_to_vision"];
        msg->reset_pos_to_vision = reset_pos_to_vision_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reset_pos_to_vision' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reset_pos_to_vision' is wrong type; expected a logical.");
    }
    try {
        //starting_gps_fusion
        const matlab::data::TypedArray<bool> starting_gps_fusion_arr = arr["starting_gps_fusion"];
        msg->starting_gps_fusion = starting_gps_fusion_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'starting_gps_fusion' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'starting_gps_fusion' is wrong type; expected a logical.");
    }
    try {
        //starting_vision_pos_fusion
        const matlab::data::TypedArray<bool> starting_vision_pos_fusion_arr = arr["starting_vision_pos_fusion"];
        msg->starting_vision_pos_fusion = starting_vision_pos_fusion_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'starting_vision_pos_fusion' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'starting_vision_pos_fusion' is wrong type; expected a logical.");
    }
    try {
        //starting_vision_vel_fusion
        const matlab::data::TypedArray<bool> starting_vision_vel_fusion_arr = arr["starting_vision_vel_fusion"];
        msg->starting_vision_vel_fusion = starting_vision_vel_fusion_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'starting_vision_vel_fusion' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'starting_vision_vel_fusion' is wrong type; expected a logical.");
    }
    try {
        //starting_vision_yaw_fusion
        const matlab::data::TypedArray<bool> starting_vision_yaw_fusion_arr = arr["starting_vision_yaw_fusion"];
        msg->starting_vision_yaw_fusion = starting_vision_yaw_fusion_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'starting_vision_yaw_fusion' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'starting_vision_yaw_fusion' is wrong type; expected a logical.");
    }
    try {
        //yaw_aligned_to_imu_gps
        const matlab::data::TypedArray<bool> yaw_aligned_to_imu_gps_arr = arr["yaw_aligned_to_imu_gps"];
        msg->yaw_aligned_to_imu_gps = yaw_aligned_to_imu_gps_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw_aligned_to_imu_gps' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'yaw_aligned_to_imu_gps' is wrong type; expected a logical.");
    }
    try {
        //reset_hgt_to_baro
        const matlab::data::TypedArray<bool> reset_hgt_to_baro_arr = arr["reset_hgt_to_baro"];
        msg->reset_hgt_to_baro = reset_hgt_to_baro_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reset_hgt_to_baro' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reset_hgt_to_baro' is wrong type; expected a logical.");
    }
    try {
        //reset_hgt_to_gps
        const matlab::data::TypedArray<bool> reset_hgt_to_gps_arr = arr["reset_hgt_to_gps"];
        msg->reset_hgt_to_gps = reset_hgt_to_gps_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reset_hgt_to_gps' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reset_hgt_to_gps' is wrong type; expected a logical.");
    }
    try {
        //reset_hgt_to_rng
        const matlab::data::TypedArray<bool> reset_hgt_to_rng_arr = arr["reset_hgt_to_rng"];
        msg->reset_hgt_to_rng = reset_hgt_to_rng_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reset_hgt_to_rng' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reset_hgt_to_rng' is wrong type; expected a logical.");
    }
    try {
        //reset_hgt_to_ev
        const matlab::data::TypedArray<bool> reset_hgt_to_ev_arr = arr["reset_hgt_to_ev"];
        msg->reset_hgt_to_ev = reset_hgt_to_ev_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reset_hgt_to_ev' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reset_hgt_to_ev' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_EstimatorEventFlags_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::EstimatorEventFlags* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","timestamp_sample","information_event_changes","gps_checks_passed","reset_vel_to_gps","reset_vel_to_flow","reset_vel_to_vision","reset_vel_to_zero","reset_pos_to_last_known","reset_pos_to_gps","reset_pos_to_vision","starting_gps_fusion","starting_vision_pos_fusion","starting_vision_vel_fusion","starting_vision_yaw_fusion","yaw_aligned_to_imu_gps","reset_hgt_to_baro","reset_hgt_to_gps","reset_hgt_to_rng","reset_hgt_to_ev"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/EstimatorEventFlags");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // information_event_changes
    auto currentElement_information_event_changes = (msg + ctr)->information_event_changes;
    outArray[ctr]["information_event_changes"] = factory.createScalar(currentElement_information_event_changes);
    // gps_checks_passed
    auto currentElement_gps_checks_passed = (msg + ctr)->gps_checks_passed;
    outArray[ctr]["gps_checks_passed"] = factory.createScalar(currentElement_gps_checks_passed);
    // reset_vel_to_gps
    auto currentElement_reset_vel_to_gps = (msg + ctr)->reset_vel_to_gps;
    outArray[ctr]["reset_vel_to_gps"] = factory.createScalar(currentElement_reset_vel_to_gps);
    // reset_vel_to_flow
    auto currentElement_reset_vel_to_flow = (msg + ctr)->reset_vel_to_flow;
    outArray[ctr]["reset_vel_to_flow"] = factory.createScalar(currentElement_reset_vel_to_flow);
    // reset_vel_to_vision
    auto currentElement_reset_vel_to_vision = (msg + ctr)->reset_vel_to_vision;
    outArray[ctr]["reset_vel_to_vision"] = factory.createScalar(currentElement_reset_vel_to_vision);
    // reset_vel_to_zero
    auto currentElement_reset_vel_to_zero = (msg + ctr)->reset_vel_to_zero;
    outArray[ctr]["reset_vel_to_zero"] = factory.createScalar(currentElement_reset_vel_to_zero);
    // reset_pos_to_last_known
    auto currentElement_reset_pos_to_last_known = (msg + ctr)->reset_pos_to_last_known;
    outArray[ctr]["reset_pos_to_last_known"] = factory.createScalar(currentElement_reset_pos_to_last_known);
    // reset_pos_to_gps
    auto currentElement_reset_pos_to_gps = (msg + ctr)->reset_pos_to_gps;
    outArray[ctr]["reset_pos_to_gps"] = factory.createScalar(currentElement_reset_pos_to_gps);
    // reset_pos_to_vision
    auto currentElement_reset_pos_to_vision = (msg + ctr)->reset_pos_to_vision;
    outArray[ctr]["reset_pos_to_vision"] = factory.createScalar(currentElement_reset_pos_to_vision);
    // starting_gps_fusion
    auto currentElement_starting_gps_fusion = (msg + ctr)->starting_gps_fusion;
    outArray[ctr]["starting_gps_fusion"] = factory.createScalar(currentElement_starting_gps_fusion);
    // starting_vision_pos_fusion
    auto currentElement_starting_vision_pos_fusion = (msg + ctr)->starting_vision_pos_fusion;
    outArray[ctr]["starting_vision_pos_fusion"] = factory.createScalar(currentElement_starting_vision_pos_fusion);
    // starting_vision_vel_fusion
    auto currentElement_starting_vision_vel_fusion = (msg + ctr)->starting_vision_vel_fusion;
    outArray[ctr]["starting_vision_vel_fusion"] = factory.createScalar(currentElement_starting_vision_vel_fusion);
    // starting_vision_yaw_fusion
    auto currentElement_starting_vision_yaw_fusion = (msg + ctr)->starting_vision_yaw_fusion;
    outArray[ctr]["starting_vision_yaw_fusion"] = factory.createScalar(currentElement_starting_vision_yaw_fusion);
    // yaw_aligned_to_imu_gps
    auto currentElement_yaw_aligned_to_imu_gps = (msg + ctr)->yaw_aligned_to_imu_gps;
    outArray[ctr]["yaw_aligned_to_imu_gps"] = factory.createScalar(currentElement_yaw_aligned_to_imu_gps);
    // reset_hgt_to_baro
    auto currentElement_reset_hgt_to_baro = (msg + ctr)->reset_hgt_to_baro;
    outArray[ctr]["reset_hgt_to_baro"] = factory.createScalar(currentElement_reset_hgt_to_baro);
    // reset_hgt_to_gps
    auto currentElement_reset_hgt_to_gps = (msg + ctr)->reset_hgt_to_gps;
    outArray[ctr]["reset_hgt_to_gps"] = factory.createScalar(currentElement_reset_hgt_to_gps);
    // reset_hgt_to_rng
    auto currentElement_reset_hgt_to_rng = (msg + ctr)->reset_hgt_to_rng;
    outArray[ctr]["reset_hgt_to_rng"] = factory.createScalar(currentElement_reset_hgt_to_rng);
    // reset_hgt_to_ev
    auto currentElement_reset_hgt_to_ev = (msg + ctr)->reset_hgt_to_ev;
    outArray[ctr]["reset_hgt_to_ev"] = factory.createScalar(currentElement_reset_hgt_to_ev);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_EstimatorEventFlags_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_EstimatorEventFlags_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_EstimatorEventFlags_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::EstimatorEventFlags,ros2_px4_msgs_msg_EstimatorEventFlags_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_EstimatorEventFlags_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::EstimatorEventFlags,ros2_px4_msgs_msg_EstimatorEventFlags_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_EstimatorEventFlags_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::EstimatorEventFlags>();
    ros2_px4_msgs_msg_EstimatorEventFlags_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_EstimatorEventFlags_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_EstimatorEventFlags_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::EstimatorEventFlags*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_EstimatorEventFlags_common, MATLABROS2MsgInterface<px4_msgs::msg::EstimatorEventFlags>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_EstimatorEventFlags_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER