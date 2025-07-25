// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/EstimatorGpsStatus
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
#include "px4_msgs/msg/estimator_gps_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_EstimatorGpsStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::EstimatorGpsStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_EstimatorGpsStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::EstimatorGpsStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::EstimatorGpsStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_EstimatorGpsStatus_common::copy_from_struct(px4_msgs::msg::EstimatorGpsStatus* msg, const matlab::data::Struct& arr,
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
        //checks_passed
        const matlab::data::TypedArray<bool> checks_passed_arr = arr["checks_passed"];
        msg->checks_passed = checks_passed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'checks_passed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'checks_passed' is wrong type; expected a logical.");
    }
    try {
        //check_fail_gps_fix
        const matlab::data::TypedArray<bool> check_fail_gps_fix_arr = arr["check_fail_gps_fix"];
        msg->check_fail_gps_fix = check_fail_gps_fix_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'check_fail_gps_fix' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'check_fail_gps_fix' is wrong type; expected a logical.");
    }
    try {
        //check_fail_min_sat_count
        const matlab::data::TypedArray<bool> check_fail_min_sat_count_arr = arr["check_fail_min_sat_count"];
        msg->check_fail_min_sat_count = check_fail_min_sat_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'check_fail_min_sat_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'check_fail_min_sat_count' is wrong type; expected a logical.");
    }
    try {
        //check_fail_max_pdop
        const matlab::data::TypedArray<bool> check_fail_max_pdop_arr = arr["check_fail_max_pdop"];
        msg->check_fail_max_pdop = check_fail_max_pdop_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'check_fail_max_pdop' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'check_fail_max_pdop' is wrong type; expected a logical.");
    }
    try {
        //check_fail_max_horz_err
        const matlab::data::TypedArray<bool> check_fail_max_horz_err_arr = arr["check_fail_max_horz_err"];
        msg->check_fail_max_horz_err = check_fail_max_horz_err_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'check_fail_max_horz_err' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'check_fail_max_horz_err' is wrong type; expected a logical.");
    }
    try {
        //check_fail_max_vert_err
        const matlab::data::TypedArray<bool> check_fail_max_vert_err_arr = arr["check_fail_max_vert_err"];
        msg->check_fail_max_vert_err = check_fail_max_vert_err_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'check_fail_max_vert_err' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'check_fail_max_vert_err' is wrong type; expected a logical.");
    }
    try {
        //check_fail_max_spd_err
        const matlab::data::TypedArray<bool> check_fail_max_spd_err_arr = arr["check_fail_max_spd_err"];
        msg->check_fail_max_spd_err = check_fail_max_spd_err_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'check_fail_max_spd_err' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'check_fail_max_spd_err' is wrong type; expected a logical.");
    }
    try {
        //check_fail_max_horz_drift
        const matlab::data::TypedArray<bool> check_fail_max_horz_drift_arr = arr["check_fail_max_horz_drift"];
        msg->check_fail_max_horz_drift = check_fail_max_horz_drift_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'check_fail_max_horz_drift' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'check_fail_max_horz_drift' is wrong type; expected a logical.");
    }
    try {
        //check_fail_max_vert_drift
        const matlab::data::TypedArray<bool> check_fail_max_vert_drift_arr = arr["check_fail_max_vert_drift"];
        msg->check_fail_max_vert_drift = check_fail_max_vert_drift_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'check_fail_max_vert_drift' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'check_fail_max_vert_drift' is wrong type; expected a logical.");
    }
    try {
        //check_fail_max_horz_spd_err
        const matlab::data::TypedArray<bool> check_fail_max_horz_spd_err_arr = arr["check_fail_max_horz_spd_err"];
        msg->check_fail_max_horz_spd_err = check_fail_max_horz_spd_err_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'check_fail_max_horz_spd_err' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'check_fail_max_horz_spd_err' is wrong type; expected a logical.");
    }
    try {
        //check_fail_max_vert_spd_err
        const matlab::data::TypedArray<bool> check_fail_max_vert_spd_err_arr = arr["check_fail_max_vert_spd_err"];
        msg->check_fail_max_vert_spd_err = check_fail_max_vert_spd_err_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'check_fail_max_vert_spd_err' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'check_fail_max_vert_spd_err' is wrong type; expected a logical.");
    }
    try {
        //check_fail_spoofed_gps
        const matlab::data::TypedArray<bool> check_fail_spoofed_gps_arr = arr["check_fail_spoofed_gps"];
        msg->check_fail_spoofed_gps = check_fail_spoofed_gps_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'check_fail_spoofed_gps' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'check_fail_spoofed_gps' is wrong type; expected a logical.");
    }
    try {
        //position_drift_rate_horizontal_m_s
        const matlab::data::TypedArray<float> position_drift_rate_horizontal_m_s_arr = arr["position_drift_rate_horizontal_m_s"];
        msg->position_drift_rate_horizontal_m_s = position_drift_rate_horizontal_m_s_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'position_drift_rate_horizontal_m_s' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'position_drift_rate_horizontal_m_s' is wrong type; expected a single.");
    }
    try {
        //position_drift_rate_vertical_m_s
        const matlab::data::TypedArray<float> position_drift_rate_vertical_m_s_arr = arr["position_drift_rate_vertical_m_s"];
        msg->position_drift_rate_vertical_m_s = position_drift_rate_vertical_m_s_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'position_drift_rate_vertical_m_s' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'position_drift_rate_vertical_m_s' is wrong type; expected a single.");
    }
    try {
        //filtered_horizontal_speed_m_s
        const matlab::data::TypedArray<float> filtered_horizontal_speed_m_s_arr = arr["filtered_horizontal_speed_m_s"];
        msg->filtered_horizontal_speed_m_s = filtered_horizontal_speed_m_s_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'filtered_horizontal_speed_m_s' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'filtered_horizontal_speed_m_s' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_EstimatorGpsStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::EstimatorGpsStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","timestamp_sample","checks_passed","check_fail_gps_fix","check_fail_min_sat_count","check_fail_max_pdop","check_fail_max_horz_err","check_fail_max_vert_err","check_fail_max_spd_err","check_fail_max_horz_drift","check_fail_max_vert_drift","check_fail_max_horz_spd_err","check_fail_max_vert_spd_err","check_fail_spoofed_gps","position_drift_rate_horizontal_m_s","position_drift_rate_vertical_m_s","filtered_horizontal_speed_m_s"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/EstimatorGpsStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // checks_passed
    auto currentElement_checks_passed = (msg + ctr)->checks_passed;
    outArray[ctr]["checks_passed"] = factory.createScalar(currentElement_checks_passed);
    // check_fail_gps_fix
    auto currentElement_check_fail_gps_fix = (msg + ctr)->check_fail_gps_fix;
    outArray[ctr]["check_fail_gps_fix"] = factory.createScalar(currentElement_check_fail_gps_fix);
    // check_fail_min_sat_count
    auto currentElement_check_fail_min_sat_count = (msg + ctr)->check_fail_min_sat_count;
    outArray[ctr]["check_fail_min_sat_count"] = factory.createScalar(currentElement_check_fail_min_sat_count);
    // check_fail_max_pdop
    auto currentElement_check_fail_max_pdop = (msg + ctr)->check_fail_max_pdop;
    outArray[ctr]["check_fail_max_pdop"] = factory.createScalar(currentElement_check_fail_max_pdop);
    // check_fail_max_horz_err
    auto currentElement_check_fail_max_horz_err = (msg + ctr)->check_fail_max_horz_err;
    outArray[ctr]["check_fail_max_horz_err"] = factory.createScalar(currentElement_check_fail_max_horz_err);
    // check_fail_max_vert_err
    auto currentElement_check_fail_max_vert_err = (msg + ctr)->check_fail_max_vert_err;
    outArray[ctr]["check_fail_max_vert_err"] = factory.createScalar(currentElement_check_fail_max_vert_err);
    // check_fail_max_spd_err
    auto currentElement_check_fail_max_spd_err = (msg + ctr)->check_fail_max_spd_err;
    outArray[ctr]["check_fail_max_spd_err"] = factory.createScalar(currentElement_check_fail_max_spd_err);
    // check_fail_max_horz_drift
    auto currentElement_check_fail_max_horz_drift = (msg + ctr)->check_fail_max_horz_drift;
    outArray[ctr]["check_fail_max_horz_drift"] = factory.createScalar(currentElement_check_fail_max_horz_drift);
    // check_fail_max_vert_drift
    auto currentElement_check_fail_max_vert_drift = (msg + ctr)->check_fail_max_vert_drift;
    outArray[ctr]["check_fail_max_vert_drift"] = factory.createScalar(currentElement_check_fail_max_vert_drift);
    // check_fail_max_horz_spd_err
    auto currentElement_check_fail_max_horz_spd_err = (msg + ctr)->check_fail_max_horz_spd_err;
    outArray[ctr]["check_fail_max_horz_spd_err"] = factory.createScalar(currentElement_check_fail_max_horz_spd_err);
    // check_fail_max_vert_spd_err
    auto currentElement_check_fail_max_vert_spd_err = (msg + ctr)->check_fail_max_vert_spd_err;
    outArray[ctr]["check_fail_max_vert_spd_err"] = factory.createScalar(currentElement_check_fail_max_vert_spd_err);
    // check_fail_spoofed_gps
    auto currentElement_check_fail_spoofed_gps = (msg + ctr)->check_fail_spoofed_gps;
    outArray[ctr]["check_fail_spoofed_gps"] = factory.createScalar(currentElement_check_fail_spoofed_gps);
    // position_drift_rate_horizontal_m_s
    auto currentElement_position_drift_rate_horizontal_m_s = (msg + ctr)->position_drift_rate_horizontal_m_s;
    outArray[ctr]["position_drift_rate_horizontal_m_s"] = factory.createScalar(currentElement_position_drift_rate_horizontal_m_s);
    // position_drift_rate_vertical_m_s
    auto currentElement_position_drift_rate_vertical_m_s = (msg + ctr)->position_drift_rate_vertical_m_s;
    outArray[ctr]["position_drift_rate_vertical_m_s"] = factory.createScalar(currentElement_position_drift_rate_vertical_m_s);
    // filtered_horizontal_speed_m_s
    auto currentElement_filtered_horizontal_speed_m_s = (msg + ctr)->filtered_horizontal_speed_m_s;
    outArray[ctr]["filtered_horizontal_speed_m_s"] = factory.createScalar(currentElement_filtered_horizontal_speed_m_s);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_EstimatorGpsStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_EstimatorGpsStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_EstimatorGpsStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::EstimatorGpsStatus,ros2_px4_msgs_msg_EstimatorGpsStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_EstimatorGpsStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::EstimatorGpsStatus,ros2_px4_msgs_msg_EstimatorGpsStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_EstimatorGpsStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::EstimatorGpsStatus>();
    ros2_px4_msgs_msg_EstimatorGpsStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_EstimatorGpsStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_EstimatorGpsStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::EstimatorGpsStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_EstimatorGpsStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::EstimatorGpsStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_EstimatorGpsStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER