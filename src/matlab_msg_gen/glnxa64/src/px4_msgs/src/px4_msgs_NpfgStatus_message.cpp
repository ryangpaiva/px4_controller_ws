// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/NpfgStatus
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
#include "px4_msgs/msg/npfg_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_NpfgStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::NpfgStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_NpfgStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::NpfgStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::NpfgStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_NpfgStatus_common::copy_from_struct(px4_msgs::msg::NpfgStatus* msg, const matlab::data::Struct& arr,
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
        //wind_est_valid
        const matlab::data::TypedArray<uint8_t> wind_est_valid_arr = arr["wind_est_valid"];
        msg->wind_est_valid = wind_est_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'wind_est_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'wind_est_valid' is wrong type; expected a uint8.");
    }
    try {
        //lat_accel
        const matlab::data::TypedArray<float> lat_accel_arr = arr["lat_accel"];
        msg->lat_accel = lat_accel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'lat_accel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'lat_accel' is wrong type; expected a single.");
    }
    try {
        //lat_accel_ff
        const matlab::data::TypedArray<float> lat_accel_ff_arr = arr["lat_accel_ff"];
        msg->lat_accel_ff = lat_accel_ff_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'lat_accel_ff' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'lat_accel_ff' is wrong type; expected a single.");
    }
    try {
        //bearing_feas
        const matlab::data::TypedArray<float> bearing_feas_arr = arr["bearing_feas"];
        msg->bearing_feas = bearing_feas_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'bearing_feas' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'bearing_feas' is wrong type; expected a single.");
    }
    try {
        //bearing_feas_on_track
        const matlab::data::TypedArray<float> bearing_feas_on_track_arr = arr["bearing_feas_on_track"];
        msg->bearing_feas_on_track = bearing_feas_on_track_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'bearing_feas_on_track' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'bearing_feas_on_track' is wrong type; expected a single.");
    }
    try {
        //signed_track_error
        const matlab::data::TypedArray<float> signed_track_error_arr = arr["signed_track_error"];
        msg->signed_track_error = signed_track_error_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'signed_track_error' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'signed_track_error' is wrong type; expected a single.");
    }
    try {
        //track_error_bound
        const matlab::data::TypedArray<float> track_error_bound_arr = arr["track_error_bound"];
        msg->track_error_bound = track_error_bound_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'track_error_bound' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'track_error_bound' is wrong type; expected a single.");
    }
    try {
        //airspeed_ref
        const matlab::data::TypedArray<float> airspeed_ref_arr = arr["airspeed_ref"];
        msg->airspeed_ref = airspeed_ref_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'airspeed_ref' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'airspeed_ref' is wrong type; expected a single.");
    }
    try {
        //bearing
        const matlab::data::TypedArray<float> bearing_arr = arr["bearing"];
        msg->bearing = bearing_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'bearing' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'bearing' is wrong type; expected a single.");
    }
    try {
        //heading_ref
        const matlab::data::TypedArray<float> heading_ref_arr = arr["heading_ref"];
        msg->heading_ref = heading_ref_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heading_ref' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heading_ref' is wrong type; expected a single.");
    }
    try {
        //min_ground_speed_ref
        const matlab::data::TypedArray<float> min_ground_speed_ref_arr = arr["min_ground_speed_ref"];
        msg->min_ground_speed_ref = min_ground_speed_ref_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'min_ground_speed_ref' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'min_ground_speed_ref' is wrong type; expected a single.");
    }
    try {
        //adapted_period
        const matlab::data::TypedArray<float> adapted_period_arr = arr["adapted_period"];
        msg->adapted_period = adapted_period_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'adapted_period' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'adapted_period' is wrong type; expected a single.");
    }
    try {
        //p_gain
        const matlab::data::TypedArray<float> p_gain_arr = arr["p_gain"];
        msg->p_gain = p_gain_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'p_gain' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'p_gain' is wrong type; expected a single.");
    }
    try {
        //time_const
        const matlab::data::TypedArray<float> time_const_arr = arr["time_const"];
        msg->time_const = time_const_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'time_const' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'time_const' is wrong type; expected a single.");
    }
    try {
        //can_run_factor
        const matlab::data::TypedArray<float> can_run_factor_arr = arr["can_run_factor"];
        msg->can_run_factor = can_run_factor_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'can_run_factor' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'can_run_factor' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_NpfgStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::NpfgStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","wind_est_valid","lat_accel","lat_accel_ff","bearing_feas","bearing_feas_on_track","signed_track_error","track_error_bound","airspeed_ref","bearing","heading_ref","min_ground_speed_ref","adapted_period","p_gain","time_const","can_run_factor"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/NpfgStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // wind_est_valid
    auto currentElement_wind_est_valid = (msg + ctr)->wind_est_valid;
    outArray[ctr]["wind_est_valid"] = factory.createScalar(currentElement_wind_est_valid);
    // lat_accel
    auto currentElement_lat_accel = (msg + ctr)->lat_accel;
    outArray[ctr]["lat_accel"] = factory.createScalar(currentElement_lat_accel);
    // lat_accel_ff
    auto currentElement_lat_accel_ff = (msg + ctr)->lat_accel_ff;
    outArray[ctr]["lat_accel_ff"] = factory.createScalar(currentElement_lat_accel_ff);
    // bearing_feas
    auto currentElement_bearing_feas = (msg + ctr)->bearing_feas;
    outArray[ctr]["bearing_feas"] = factory.createScalar(currentElement_bearing_feas);
    // bearing_feas_on_track
    auto currentElement_bearing_feas_on_track = (msg + ctr)->bearing_feas_on_track;
    outArray[ctr]["bearing_feas_on_track"] = factory.createScalar(currentElement_bearing_feas_on_track);
    // signed_track_error
    auto currentElement_signed_track_error = (msg + ctr)->signed_track_error;
    outArray[ctr]["signed_track_error"] = factory.createScalar(currentElement_signed_track_error);
    // track_error_bound
    auto currentElement_track_error_bound = (msg + ctr)->track_error_bound;
    outArray[ctr]["track_error_bound"] = factory.createScalar(currentElement_track_error_bound);
    // airspeed_ref
    auto currentElement_airspeed_ref = (msg + ctr)->airspeed_ref;
    outArray[ctr]["airspeed_ref"] = factory.createScalar(currentElement_airspeed_ref);
    // bearing
    auto currentElement_bearing = (msg + ctr)->bearing;
    outArray[ctr]["bearing"] = factory.createScalar(currentElement_bearing);
    // heading_ref
    auto currentElement_heading_ref = (msg + ctr)->heading_ref;
    outArray[ctr]["heading_ref"] = factory.createScalar(currentElement_heading_ref);
    // min_ground_speed_ref
    auto currentElement_min_ground_speed_ref = (msg + ctr)->min_ground_speed_ref;
    outArray[ctr]["min_ground_speed_ref"] = factory.createScalar(currentElement_min_ground_speed_ref);
    // adapted_period
    auto currentElement_adapted_period = (msg + ctr)->adapted_period;
    outArray[ctr]["adapted_period"] = factory.createScalar(currentElement_adapted_period);
    // p_gain
    auto currentElement_p_gain = (msg + ctr)->p_gain;
    outArray[ctr]["p_gain"] = factory.createScalar(currentElement_p_gain);
    // time_const
    auto currentElement_time_const = (msg + ctr)->time_const;
    outArray[ctr]["time_const"] = factory.createScalar(currentElement_time_const);
    // can_run_factor
    auto currentElement_can_run_factor = (msg + ctr)->can_run_factor;
    outArray[ctr]["can_run_factor"] = factory.createScalar(currentElement_can_run_factor);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_NpfgStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_NpfgStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_NpfgStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::NpfgStatus,ros2_px4_msgs_msg_NpfgStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_NpfgStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::NpfgStatus,ros2_px4_msgs_msg_NpfgStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_NpfgStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::NpfgStatus>();
    ros2_px4_msgs_msg_NpfgStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_NpfgStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_NpfgStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::NpfgStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_NpfgStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::NpfgStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_NpfgStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER