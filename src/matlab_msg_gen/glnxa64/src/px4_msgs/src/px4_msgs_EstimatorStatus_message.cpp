// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/EstimatorStatus
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
#include "px4_msgs/msg/estimator_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_EstimatorStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::EstimatorStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_EstimatorStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::EstimatorStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::EstimatorStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_EstimatorStatus_common::copy_from_struct(px4_msgs::msg::EstimatorStatus* msg, const matlab::data::Struct& arr,
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
        //output_tracking_error
        const matlab::data::TypedArray<float> output_tracking_error_arr = arr["output_tracking_error"];
        size_t nelem = 3;
        	std::copy(output_tracking_error_arr.begin(), output_tracking_error_arr.begin()+nelem, msg->output_tracking_error.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'output_tracking_error' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'output_tracking_error' is wrong type; expected a single.");
    }
    try {
        //gps_check_fail_flags
        const matlab::data::TypedArray<uint16_t> gps_check_fail_flags_arr = arr["gps_check_fail_flags"];
        msg->gps_check_fail_flags = gps_check_fail_flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gps_check_fail_flags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gps_check_fail_flags' is wrong type; expected a uint16.");
    }
    try {
        //control_mode_flags
        const matlab::data::TypedArray<uint64_t> control_mode_flags_arr = arr["control_mode_flags"];
        msg->control_mode_flags = control_mode_flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'control_mode_flags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'control_mode_flags' is wrong type; expected a uint64.");
    }
    try {
        //filter_fault_flags
        const matlab::data::TypedArray<uint32_t> filter_fault_flags_arr = arr["filter_fault_flags"];
        msg->filter_fault_flags = filter_fault_flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'filter_fault_flags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'filter_fault_flags' is wrong type; expected a uint32.");
    }
    try {
        //pos_horiz_accuracy
        const matlab::data::TypedArray<float> pos_horiz_accuracy_arr = arr["pos_horiz_accuracy"];
        msg->pos_horiz_accuracy = pos_horiz_accuracy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pos_horiz_accuracy' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pos_horiz_accuracy' is wrong type; expected a single.");
    }
    try {
        //pos_vert_accuracy
        const matlab::data::TypedArray<float> pos_vert_accuracy_arr = arr["pos_vert_accuracy"];
        msg->pos_vert_accuracy = pos_vert_accuracy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pos_vert_accuracy' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pos_vert_accuracy' is wrong type; expected a single.");
    }
    try {
        //hdg_test_ratio
        const matlab::data::TypedArray<float> hdg_test_ratio_arr = arr["hdg_test_ratio"];
        msg->hdg_test_ratio = hdg_test_ratio_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'hdg_test_ratio' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'hdg_test_ratio' is wrong type; expected a single.");
    }
    try {
        //vel_test_ratio
        const matlab::data::TypedArray<float> vel_test_ratio_arr = arr["vel_test_ratio"];
        msg->vel_test_ratio = vel_test_ratio_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vel_test_ratio' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vel_test_ratio' is wrong type; expected a single.");
    }
    try {
        //pos_test_ratio
        const matlab::data::TypedArray<float> pos_test_ratio_arr = arr["pos_test_ratio"];
        msg->pos_test_ratio = pos_test_ratio_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pos_test_ratio' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pos_test_ratio' is wrong type; expected a single.");
    }
    try {
        //hgt_test_ratio
        const matlab::data::TypedArray<float> hgt_test_ratio_arr = arr["hgt_test_ratio"];
        msg->hgt_test_ratio = hgt_test_ratio_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'hgt_test_ratio' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'hgt_test_ratio' is wrong type; expected a single.");
    }
    try {
        //tas_test_ratio
        const matlab::data::TypedArray<float> tas_test_ratio_arr = arr["tas_test_ratio"];
        msg->tas_test_ratio = tas_test_ratio_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'tas_test_ratio' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'tas_test_ratio' is wrong type; expected a single.");
    }
    try {
        //hagl_test_ratio
        const matlab::data::TypedArray<float> hagl_test_ratio_arr = arr["hagl_test_ratio"];
        msg->hagl_test_ratio = hagl_test_ratio_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'hagl_test_ratio' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'hagl_test_ratio' is wrong type; expected a single.");
    }
    try {
        //beta_test_ratio
        const matlab::data::TypedArray<float> beta_test_ratio_arr = arr["beta_test_ratio"];
        msg->beta_test_ratio = beta_test_ratio_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'beta_test_ratio' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'beta_test_ratio' is wrong type; expected a single.");
    }
    try {
        //solution_status_flags
        const matlab::data::TypedArray<uint16_t> solution_status_flags_arr = arr["solution_status_flags"];
        msg->solution_status_flags = solution_status_flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'solution_status_flags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'solution_status_flags' is wrong type; expected a uint16.");
    }
    try {
        //reset_count_vel_ne
        const matlab::data::TypedArray<uint8_t> reset_count_vel_ne_arr = arr["reset_count_vel_ne"];
        msg->reset_count_vel_ne = reset_count_vel_ne_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reset_count_vel_ne' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reset_count_vel_ne' is wrong type; expected a uint8.");
    }
    try {
        //reset_count_vel_d
        const matlab::data::TypedArray<uint8_t> reset_count_vel_d_arr = arr["reset_count_vel_d"];
        msg->reset_count_vel_d = reset_count_vel_d_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reset_count_vel_d' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reset_count_vel_d' is wrong type; expected a uint8.");
    }
    try {
        //reset_count_pos_ne
        const matlab::data::TypedArray<uint8_t> reset_count_pos_ne_arr = arr["reset_count_pos_ne"];
        msg->reset_count_pos_ne = reset_count_pos_ne_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reset_count_pos_ne' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reset_count_pos_ne' is wrong type; expected a uint8.");
    }
    try {
        //reset_count_pod_d
        const matlab::data::TypedArray<uint8_t> reset_count_pod_d_arr = arr["reset_count_pod_d"];
        msg->reset_count_pod_d = reset_count_pod_d_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reset_count_pod_d' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reset_count_pod_d' is wrong type; expected a uint8.");
    }
    try {
        //reset_count_quat
        const matlab::data::TypedArray<uint8_t> reset_count_quat_arr = arr["reset_count_quat"];
        msg->reset_count_quat = reset_count_quat_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reset_count_quat' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reset_count_quat' is wrong type; expected a uint8.");
    }
    try {
        //time_slip
        const matlab::data::TypedArray<float> time_slip_arr = arr["time_slip"];
        msg->time_slip = time_slip_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'time_slip' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'time_slip' is wrong type; expected a single.");
    }
    try {
        //pre_flt_fail_innov_heading
        const matlab::data::TypedArray<bool> pre_flt_fail_innov_heading_arr = arr["pre_flt_fail_innov_heading"];
        msg->pre_flt_fail_innov_heading = pre_flt_fail_innov_heading_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pre_flt_fail_innov_heading' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pre_flt_fail_innov_heading' is wrong type; expected a logical.");
    }
    try {
        //pre_flt_fail_innov_height
        const matlab::data::TypedArray<bool> pre_flt_fail_innov_height_arr = arr["pre_flt_fail_innov_height"];
        msg->pre_flt_fail_innov_height = pre_flt_fail_innov_height_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pre_flt_fail_innov_height' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pre_flt_fail_innov_height' is wrong type; expected a logical.");
    }
    try {
        //pre_flt_fail_innov_pos_horiz
        const matlab::data::TypedArray<bool> pre_flt_fail_innov_pos_horiz_arr = arr["pre_flt_fail_innov_pos_horiz"];
        msg->pre_flt_fail_innov_pos_horiz = pre_flt_fail_innov_pos_horiz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pre_flt_fail_innov_pos_horiz' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pre_flt_fail_innov_pos_horiz' is wrong type; expected a logical.");
    }
    try {
        //pre_flt_fail_innov_vel_horiz
        const matlab::data::TypedArray<bool> pre_flt_fail_innov_vel_horiz_arr = arr["pre_flt_fail_innov_vel_horiz"];
        msg->pre_flt_fail_innov_vel_horiz = pre_flt_fail_innov_vel_horiz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pre_flt_fail_innov_vel_horiz' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pre_flt_fail_innov_vel_horiz' is wrong type; expected a logical.");
    }
    try {
        //pre_flt_fail_innov_vel_vert
        const matlab::data::TypedArray<bool> pre_flt_fail_innov_vel_vert_arr = arr["pre_flt_fail_innov_vel_vert"];
        msg->pre_flt_fail_innov_vel_vert = pre_flt_fail_innov_vel_vert_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pre_flt_fail_innov_vel_vert' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pre_flt_fail_innov_vel_vert' is wrong type; expected a logical.");
    }
    try {
        //pre_flt_fail_mag_field_disturbed
        const matlab::data::TypedArray<bool> pre_flt_fail_mag_field_disturbed_arr = arr["pre_flt_fail_mag_field_disturbed"];
        msg->pre_flt_fail_mag_field_disturbed = pre_flt_fail_mag_field_disturbed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pre_flt_fail_mag_field_disturbed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pre_flt_fail_mag_field_disturbed' is wrong type; expected a logical.");
    }
    try {
        //accel_device_id
        const matlab::data::TypedArray<uint32_t> accel_device_id_arr = arr["accel_device_id"];
        msg->accel_device_id = accel_device_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_device_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_device_id' is wrong type; expected a uint32.");
    }
    try {
        //gyro_device_id
        const matlab::data::TypedArray<uint32_t> gyro_device_id_arr = arr["gyro_device_id"];
        msg->gyro_device_id = gyro_device_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_device_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_device_id' is wrong type; expected a uint32.");
    }
    try {
        //baro_device_id
        const matlab::data::TypedArray<uint32_t> baro_device_id_arr = arr["baro_device_id"];
        msg->baro_device_id = baro_device_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'baro_device_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'baro_device_id' is wrong type; expected a uint32.");
    }
    try {
        //mag_device_id
        const matlab::data::TypedArray<uint32_t> mag_device_id_arr = arr["mag_device_id"];
        msg->mag_device_id = mag_device_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mag_device_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mag_device_id' is wrong type; expected a uint32.");
    }
    try {
        //health_flags
        const matlab::data::TypedArray<uint8_t> health_flags_arr = arr["health_flags"];
        msg->health_flags = health_flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'health_flags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'health_flags' is wrong type; expected a uint8.");
    }
    try {
        //timeout_flags
        const matlab::data::TypedArray<uint8_t> timeout_flags_arr = arr["timeout_flags"];
        msg->timeout_flags = timeout_flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'timeout_flags' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'timeout_flags' is wrong type; expected a uint8.");
    }
    try {
        //mag_inclination_deg
        const matlab::data::TypedArray<float> mag_inclination_deg_arr = arr["mag_inclination_deg"];
        msg->mag_inclination_deg = mag_inclination_deg_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mag_inclination_deg' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mag_inclination_deg' is wrong type; expected a single.");
    }
    try {
        //mag_inclination_ref_deg
        const matlab::data::TypedArray<float> mag_inclination_ref_deg_arr = arr["mag_inclination_ref_deg"];
        msg->mag_inclination_ref_deg = mag_inclination_ref_deg_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mag_inclination_ref_deg' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mag_inclination_ref_deg' is wrong type; expected a single.");
    }
    try {
        //mag_strength_gs
        const matlab::data::TypedArray<float> mag_strength_gs_arr = arr["mag_strength_gs"];
        msg->mag_strength_gs = mag_strength_gs_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mag_strength_gs' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mag_strength_gs' is wrong type; expected a single.");
    }
    try {
        //mag_strength_ref_gs
        const matlab::data::TypedArray<float> mag_strength_ref_gs_arr = arr["mag_strength_ref_gs"];
        msg->mag_strength_ref_gs = mag_strength_ref_gs_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mag_strength_ref_gs' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mag_strength_ref_gs' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_EstimatorStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::EstimatorStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","timestamp_sample","output_tracking_error","gps_check_fail_flags","GPS_CHECK_FAIL_GPS_FIX","GPS_CHECK_FAIL_MIN_SAT_COUNT","GPS_CHECK_FAIL_MAX_PDOP","GPS_CHECK_FAIL_MAX_HORZ_ERR","GPS_CHECK_FAIL_MAX_VERT_ERR","GPS_CHECK_FAIL_MAX_SPD_ERR","GPS_CHECK_FAIL_MAX_HORZ_DRIFT","GPS_CHECK_FAIL_MAX_VERT_DRIFT","GPS_CHECK_FAIL_MAX_HORZ_SPD_ERR","GPS_CHECK_FAIL_MAX_VERT_SPD_ERR","GPS_CHECK_FAIL_SPOOFED","control_mode_flags","CS_TILT_ALIGN","CS_YAW_ALIGN","CS_GPS","CS_OPT_FLOW","CS_MAG_HDG","CS_MAG_3D","CS_MAG_DEC","CS_IN_AIR","CS_WIND","CS_BARO_HGT","CS_RNG_HGT","CS_GPS_HGT","CS_EV_POS","CS_EV_YAW","CS_EV_HGT","CS_BETA","CS_MAG_FIELD","CS_FIXED_WING","CS_MAG_FAULT","CS_ASPD","CS_GND_EFFECT","CS_RNG_STUCK","CS_GPS_YAW","CS_MAG_ALIGNED","CS_EV_VEL","CS_SYNTHETIC_MAG_Z","CS_VEHICLE_AT_REST","CS_GPS_YAW_FAULT","CS_RNG_FAULT","filter_fault_flags","pos_horiz_accuracy","pos_vert_accuracy","hdg_test_ratio","vel_test_ratio","pos_test_ratio","hgt_test_ratio","tas_test_ratio","hagl_test_ratio","beta_test_ratio","solution_status_flags","reset_count_vel_ne","reset_count_vel_d","reset_count_pos_ne","reset_count_pod_d","reset_count_quat","time_slip","pre_flt_fail_innov_heading","pre_flt_fail_innov_height","pre_flt_fail_innov_pos_horiz","pre_flt_fail_innov_vel_horiz","pre_flt_fail_innov_vel_vert","pre_flt_fail_mag_field_disturbed","accel_device_id","gyro_device_id","baro_device_id","mag_device_id","health_flags","timeout_flags","mag_inclination_deg","mag_inclination_ref_deg","mag_strength_gs","mag_strength_ref_gs"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/EstimatorStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // output_tracking_error
    auto currentElement_output_tracking_error = (msg + ctr)->output_tracking_error;
    outArray[ctr]["output_tracking_error"] = factory.createArray<px4_msgs::msg::EstimatorStatus::_output_tracking_error_type::const_iterator, float>({currentElement_output_tracking_error.size(), 1}, currentElement_output_tracking_error.begin(), currentElement_output_tracking_error.end());
    // gps_check_fail_flags
    auto currentElement_gps_check_fail_flags = (msg + ctr)->gps_check_fail_flags;
    outArray[ctr]["gps_check_fail_flags"] = factory.createScalar(currentElement_gps_check_fail_flags);
    // GPS_CHECK_FAIL_GPS_FIX
    auto currentElement_GPS_CHECK_FAIL_GPS_FIX = (msg + ctr)->GPS_CHECK_FAIL_GPS_FIX;
    outArray[ctr]["GPS_CHECK_FAIL_GPS_FIX"] = factory.createScalar(currentElement_GPS_CHECK_FAIL_GPS_FIX);
    // GPS_CHECK_FAIL_MIN_SAT_COUNT
    auto currentElement_GPS_CHECK_FAIL_MIN_SAT_COUNT = (msg + ctr)->GPS_CHECK_FAIL_MIN_SAT_COUNT;
    outArray[ctr]["GPS_CHECK_FAIL_MIN_SAT_COUNT"] = factory.createScalar(currentElement_GPS_CHECK_FAIL_MIN_SAT_COUNT);
    // GPS_CHECK_FAIL_MAX_PDOP
    auto currentElement_GPS_CHECK_FAIL_MAX_PDOP = (msg + ctr)->GPS_CHECK_FAIL_MAX_PDOP;
    outArray[ctr]["GPS_CHECK_FAIL_MAX_PDOP"] = factory.createScalar(currentElement_GPS_CHECK_FAIL_MAX_PDOP);
    // GPS_CHECK_FAIL_MAX_HORZ_ERR
    auto currentElement_GPS_CHECK_FAIL_MAX_HORZ_ERR = (msg + ctr)->GPS_CHECK_FAIL_MAX_HORZ_ERR;
    outArray[ctr]["GPS_CHECK_FAIL_MAX_HORZ_ERR"] = factory.createScalar(currentElement_GPS_CHECK_FAIL_MAX_HORZ_ERR);
    // GPS_CHECK_FAIL_MAX_VERT_ERR
    auto currentElement_GPS_CHECK_FAIL_MAX_VERT_ERR = (msg + ctr)->GPS_CHECK_FAIL_MAX_VERT_ERR;
    outArray[ctr]["GPS_CHECK_FAIL_MAX_VERT_ERR"] = factory.createScalar(currentElement_GPS_CHECK_FAIL_MAX_VERT_ERR);
    // GPS_CHECK_FAIL_MAX_SPD_ERR
    auto currentElement_GPS_CHECK_FAIL_MAX_SPD_ERR = (msg + ctr)->GPS_CHECK_FAIL_MAX_SPD_ERR;
    outArray[ctr]["GPS_CHECK_FAIL_MAX_SPD_ERR"] = factory.createScalar(currentElement_GPS_CHECK_FAIL_MAX_SPD_ERR);
    // GPS_CHECK_FAIL_MAX_HORZ_DRIFT
    auto currentElement_GPS_CHECK_FAIL_MAX_HORZ_DRIFT = (msg + ctr)->GPS_CHECK_FAIL_MAX_HORZ_DRIFT;
    outArray[ctr]["GPS_CHECK_FAIL_MAX_HORZ_DRIFT"] = factory.createScalar(currentElement_GPS_CHECK_FAIL_MAX_HORZ_DRIFT);
    // GPS_CHECK_FAIL_MAX_VERT_DRIFT
    auto currentElement_GPS_CHECK_FAIL_MAX_VERT_DRIFT = (msg + ctr)->GPS_CHECK_FAIL_MAX_VERT_DRIFT;
    outArray[ctr]["GPS_CHECK_FAIL_MAX_VERT_DRIFT"] = factory.createScalar(currentElement_GPS_CHECK_FAIL_MAX_VERT_DRIFT);
    // GPS_CHECK_FAIL_MAX_HORZ_SPD_ERR
    auto currentElement_GPS_CHECK_FAIL_MAX_HORZ_SPD_ERR = (msg + ctr)->GPS_CHECK_FAIL_MAX_HORZ_SPD_ERR;
    outArray[ctr]["GPS_CHECK_FAIL_MAX_HORZ_SPD_ERR"] = factory.createScalar(currentElement_GPS_CHECK_FAIL_MAX_HORZ_SPD_ERR);
    // GPS_CHECK_FAIL_MAX_VERT_SPD_ERR
    auto currentElement_GPS_CHECK_FAIL_MAX_VERT_SPD_ERR = (msg + ctr)->GPS_CHECK_FAIL_MAX_VERT_SPD_ERR;
    outArray[ctr]["GPS_CHECK_FAIL_MAX_VERT_SPD_ERR"] = factory.createScalar(currentElement_GPS_CHECK_FAIL_MAX_VERT_SPD_ERR);
    // GPS_CHECK_FAIL_SPOOFED
    auto currentElement_GPS_CHECK_FAIL_SPOOFED = (msg + ctr)->GPS_CHECK_FAIL_SPOOFED;
    outArray[ctr]["GPS_CHECK_FAIL_SPOOFED"] = factory.createScalar(currentElement_GPS_CHECK_FAIL_SPOOFED);
    // control_mode_flags
    auto currentElement_control_mode_flags = (msg + ctr)->control_mode_flags;
    outArray[ctr]["control_mode_flags"] = factory.createScalar(currentElement_control_mode_flags);
    // CS_TILT_ALIGN
    auto currentElement_CS_TILT_ALIGN = (msg + ctr)->CS_TILT_ALIGN;
    outArray[ctr]["CS_TILT_ALIGN"] = factory.createScalar(currentElement_CS_TILT_ALIGN);
    // CS_YAW_ALIGN
    auto currentElement_CS_YAW_ALIGN = (msg + ctr)->CS_YAW_ALIGN;
    outArray[ctr]["CS_YAW_ALIGN"] = factory.createScalar(currentElement_CS_YAW_ALIGN);
    // CS_GPS
    auto currentElement_CS_GPS = (msg + ctr)->CS_GPS;
    outArray[ctr]["CS_GPS"] = factory.createScalar(currentElement_CS_GPS);
    // CS_OPT_FLOW
    auto currentElement_CS_OPT_FLOW = (msg + ctr)->CS_OPT_FLOW;
    outArray[ctr]["CS_OPT_FLOW"] = factory.createScalar(currentElement_CS_OPT_FLOW);
    // CS_MAG_HDG
    auto currentElement_CS_MAG_HDG = (msg + ctr)->CS_MAG_HDG;
    outArray[ctr]["CS_MAG_HDG"] = factory.createScalar(currentElement_CS_MAG_HDG);
    // CS_MAG_3D
    auto currentElement_CS_MAG_3D = (msg + ctr)->CS_MAG_3D;
    outArray[ctr]["CS_MAG_3D"] = factory.createScalar(currentElement_CS_MAG_3D);
    // CS_MAG_DEC
    auto currentElement_CS_MAG_DEC = (msg + ctr)->CS_MAG_DEC;
    outArray[ctr]["CS_MAG_DEC"] = factory.createScalar(currentElement_CS_MAG_DEC);
    // CS_IN_AIR
    auto currentElement_CS_IN_AIR = (msg + ctr)->CS_IN_AIR;
    outArray[ctr]["CS_IN_AIR"] = factory.createScalar(currentElement_CS_IN_AIR);
    // CS_WIND
    auto currentElement_CS_WIND = (msg + ctr)->CS_WIND;
    outArray[ctr]["CS_WIND"] = factory.createScalar(currentElement_CS_WIND);
    // CS_BARO_HGT
    auto currentElement_CS_BARO_HGT = (msg + ctr)->CS_BARO_HGT;
    outArray[ctr]["CS_BARO_HGT"] = factory.createScalar(currentElement_CS_BARO_HGT);
    // CS_RNG_HGT
    auto currentElement_CS_RNG_HGT = (msg + ctr)->CS_RNG_HGT;
    outArray[ctr]["CS_RNG_HGT"] = factory.createScalar(currentElement_CS_RNG_HGT);
    // CS_GPS_HGT
    auto currentElement_CS_GPS_HGT = (msg + ctr)->CS_GPS_HGT;
    outArray[ctr]["CS_GPS_HGT"] = factory.createScalar(currentElement_CS_GPS_HGT);
    // CS_EV_POS
    auto currentElement_CS_EV_POS = (msg + ctr)->CS_EV_POS;
    outArray[ctr]["CS_EV_POS"] = factory.createScalar(currentElement_CS_EV_POS);
    // CS_EV_YAW
    auto currentElement_CS_EV_YAW = (msg + ctr)->CS_EV_YAW;
    outArray[ctr]["CS_EV_YAW"] = factory.createScalar(currentElement_CS_EV_YAW);
    // CS_EV_HGT
    auto currentElement_CS_EV_HGT = (msg + ctr)->CS_EV_HGT;
    outArray[ctr]["CS_EV_HGT"] = factory.createScalar(currentElement_CS_EV_HGT);
    // CS_BETA
    auto currentElement_CS_BETA = (msg + ctr)->CS_BETA;
    outArray[ctr]["CS_BETA"] = factory.createScalar(currentElement_CS_BETA);
    // CS_MAG_FIELD
    auto currentElement_CS_MAG_FIELD = (msg + ctr)->CS_MAG_FIELD;
    outArray[ctr]["CS_MAG_FIELD"] = factory.createScalar(currentElement_CS_MAG_FIELD);
    // CS_FIXED_WING
    auto currentElement_CS_FIXED_WING = (msg + ctr)->CS_FIXED_WING;
    outArray[ctr]["CS_FIXED_WING"] = factory.createScalar(currentElement_CS_FIXED_WING);
    // CS_MAG_FAULT
    auto currentElement_CS_MAG_FAULT = (msg + ctr)->CS_MAG_FAULT;
    outArray[ctr]["CS_MAG_FAULT"] = factory.createScalar(currentElement_CS_MAG_FAULT);
    // CS_ASPD
    auto currentElement_CS_ASPD = (msg + ctr)->CS_ASPD;
    outArray[ctr]["CS_ASPD"] = factory.createScalar(currentElement_CS_ASPD);
    // CS_GND_EFFECT
    auto currentElement_CS_GND_EFFECT = (msg + ctr)->CS_GND_EFFECT;
    outArray[ctr]["CS_GND_EFFECT"] = factory.createScalar(currentElement_CS_GND_EFFECT);
    // CS_RNG_STUCK
    auto currentElement_CS_RNG_STUCK = (msg + ctr)->CS_RNG_STUCK;
    outArray[ctr]["CS_RNG_STUCK"] = factory.createScalar(currentElement_CS_RNG_STUCK);
    // CS_GPS_YAW
    auto currentElement_CS_GPS_YAW = (msg + ctr)->CS_GPS_YAW;
    outArray[ctr]["CS_GPS_YAW"] = factory.createScalar(currentElement_CS_GPS_YAW);
    // CS_MAG_ALIGNED
    auto currentElement_CS_MAG_ALIGNED = (msg + ctr)->CS_MAG_ALIGNED;
    outArray[ctr]["CS_MAG_ALIGNED"] = factory.createScalar(currentElement_CS_MAG_ALIGNED);
    // CS_EV_VEL
    auto currentElement_CS_EV_VEL = (msg + ctr)->CS_EV_VEL;
    outArray[ctr]["CS_EV_VEL"] = factory.createScalar(currentElement_CS_EV_VEL);
    // CS_SYNTHETIC_MAG_Z
    auto currentElement_CS_SYNTHETIC_MAG_Z = (msg + ctr)->CS_SYNTHETIC_MAG_Z;
    outArray[ctr]["CS_SYNTHETIC_MAG_Z"] = factory.createScalar(currentElement_CS_SYNTHETIC_MAG_Z);
    // CS_VEHICLE_AT_REST
    auto currentElement_CS_VEHICLE_AT_REST = (msg + ctr)->CS_VEHICLE_AT_REST;
    outArray[ctr]["CS_VEHICLE_AT_REST"] = factory.createScalar(currentElement_CS_VEHICLE_AT_REST);
    // CS_GPS_YAW_FAULT
    auto currentElement_CS_GPS_YAW_FAULT = (msg + ctr)->CS_GPS_YAW_FAULT;
    outArray[ctr]["CS_GPS_YAW_FAULT"] = factory.createScalar(currentElement_CS_GPS_YAW_FAULT);
    // CS_RNG_FAULT
    auto currentElement_CS_RNG_FAULT = (msg + ctr)->CS_RNG_FAULT;
    outArray[ctr]["CS_RNG_FAULT"] = factory.createScalar(currentElement_CS_RNG_FAULT);
    // filter_fault_flags
    auto currentElement_filter_fault_flags = (msg + ctr)->filter_fault_flags;
    outArray[ctr]["filter_fault_flags"] = factory.createScalar(currentElement_filter_fault_flags);
    // pos_horiz_accuracy
    auto currentElement_pos_horiz_accuracy = (msg + ctr)->pos_horiz_accuracy;
    outArray[ctr]["pos_horiz_accuracy"] = factory.createScalar(currentElement_pos_horiz_accuracy);
    // pos_vert_accuracy
    auto currentElement_pos_vert_accuracy = (msg + ctr)->pos_vert_accuracy;
    outArray[ctr]["pos_vert_accuracy"] = factory.createScalar(currentElement_pos_vert_accuracy);
    // hdg_test_ratio
    auto currentElement_hdg_test_ratio = (msg + ctr)->hdg_test_ratio;
    outArray[ctr]["hdg_test_ratio"] = factory.createScalar(currentElement_hdg_test_ratio);
    // vel_test_ratio
    auto currentElement_vel_test_ratio = (msg + ctr)->vel_test_ratio;
    outArray[ctr]["vel_test_ratio"] = factory.createScalar(currentElement_vel_test_ratio);
    // pos_test_ratio
    auto currentElement_pos_test_ratio = (msg + ctr)->pos_test_ratio;
    outArray[ctr]["pos_test_ratio"] = factory.createScalar(currentElement_pos_test_ratio);
    // hgt_test_ratio
    auto currentElement_hgt_test_ratio = (msg + ctr)->hgt_test_ratio;
    outArray[ctr]["hgt_test_ratio"] = factory.createScalar(currentElement_hgt_test_ratio);
    // tas_test_ratio
    auto currentElement_tas_test_ratio = (msg + ctr)->tas_test_ratio;
    outArray[ctr]["tas_test_ratio"] = factory.createScalar(currentElement_tas_test_ratio);
    // hagl_test_ratio
    auto currentElement_hagl_test_ratio = (msg + ctr)->hagl_test_ratio;
    outArray[ctr]["hagl_test_ratio"] = factory.createScalar(currentElement_hagl_test_ratio);
    // beta_test_ratio
    auto currentElement_beta_test_ratio = (msg + ctr)->beta_test_ratio;
    outArray[ctr]["beta_test_ratio"] = factory.createScalar(currentElement_beta_test_ratio);
    // solution_status_flags
    auto currentElement_solution_status_flags = (msg + ctr)->solution_status_flags;
    outArray[ctr]["solution_status_flags"] = factory.createScalar(currentElement_solution_status_flags);
    // reset_count_vel_ne
    auto currentElement_reset_count_vel_ne = (msg + ctr)->reset_count_vel_ne;
    outArray[ctr]["reset_count_vel_ne"] = factory.createScalar(currentElement_reset_count_vel_ne);
    // reset_count_vel_d
    auto currentElement_reset_count_vel_d = (msg + ctr)->reset_count_vel_d;
    outArray[ctr]["reset_count_vel_d"] = factory.createScalar(currentElement_reset_count_vel_d);
    // reset_count_pos_ne
    auto currentElement_reset_count_pos_ne = (msg + ctr)->reset_count_pos_ne;
    outArray[ctr]["reset_count_pos_ne"] = factory.createScalar(currentElement_reset_count_pos_ne);
    // reset_count_pod_d
    auto currentElement_reset_count_pod_d = (msg + ctr)->reset_count_pod_d;
    outArray[ctr]["reset_count_pod_d"] = factory.createScalar(currentElement_reset_count_pod_d);
    // reset_count_quat
    auto currentElement_reset_count_quat = (msg + ctr)->reset_count_quat;
    outArray[ctr]["reset_count_quat"] = factory.createScalar(currentElement_reset_count_quat);
    // time_slip
    auto currentElement_time_slip = (msg + ctr)->time_slip;
    outArray[ctr]["time_slip"] = factory.createScalar(currentElement_time_slip);
    // pre_flt_fail_innov_heading
    auto currentElement_pre_flt_fail_innov_heading = (msg + ctr)->pre_flt_fail_innov_heading;
    outArray[ctr]["pre_flt_fail_innov_heading"] = factory.createScalar(currentElement_pre_flt_fail_innov_heading);
    // pre_flt_fail_innov_height
    auto currentElement_pre_flt_fail_innov_height = (msg + ctr)->pre_flt_fail_innov_height;
    outArray[ctr]["pre_flt_fail_innov_height"] = factory.createScalar(currentElement_pre_flt_fail_innov_height);
    // pre_flt_fail_innov_pos_horiz
    auto currentElement_pre_flt_fail_innov_pos_horiz = (msg + ctr)->pre_flt_fail_innov_pos_horiz;
    outArray[ctr]["pre_flt_fail_innov_pos_horiz"] = factory.createScalar(currentElement_pre_flt_fail_innov_pos_horiz);
    // pre_flt_fail_innov_vel_horiz
    auto currentElement_pre_flt_fail_innov_vel_horiz = (msg + ctr)->pre_flt_fail_innov_vel_horiz;
    outArray[ctr]["pre_flt_fail_innov_vel_horiz"] = factory.createScalar(currentElement_pre_flt_fail_innov_vel_horiz);
    // pre_flt_fail_innov_vel_vert
    auto currentElement_pre_flt_fail_innov_vel_vert = (msg + ctr)->pre_flt_fail_innov_vel_vert;
    outArray[ctr]["pre_flt_fail_innov_vel_vert"] = factory.createScalar(currentElement_pre_flt_fail_innov_vel_vert);
    // pre_flt_fail_mag_field_disturbed
    auto currentElement_pre_flt_fail_mag_field_disturbed = (msg + ctr)->pre_flt_fail_mag_field_disturbed;
    outArray[ctr]["pre_flt_fail_mag_field_disturbed"] = factory.createScalar(currentElement_pre_flt_fail_mag_field_disturbed);
    // accel_device_id
    auto currentElement_accel_device_id = (msg + ctr)->accel_device_id;
    outArray[ctr]["accel_device_id"] = factory.createScalar(currentElement_accel_device_id);
    // gyro_device_id
    auto currentElement_gyro_device_id = (msg + ctr)->gyro_device_id;
    outArray[ctr]["gyro_device_id"] = factory.createScalar(currentElement_gyro_device_id);
    // baro_device_id
    auto currentElement_baro_device_id = (msg + ctr)->baro_device_id;
    outArray[ctr]["baro_device_id"] = factory.createScalar(currentElement_baro_device_id);
    // mag_device_id
    auto currentElement_mag_device_id = (msg + ctr)->mag_device_id;
    outArray[ctr]["mag_device_id"] = factory.createScalar(currentElement_mag_device_id);
    // health_flags
    auto currentElement_health_flags = (msg + ctr)->health_flags;
    outArray[ctr]["health_flags"] = factory.createScalar(currentElement_health_flags);
    // timeout_flags
    auto currentElement_timeout_flags = (msg + ctr)->timeout_flags;
    outArray[ctr]["timeout_flags"] = factory.createScalar(currentElement_timeout_flags);
    // mag_inclination_deg
    auto currentElement_mag_inclination_deg = (msg + ctr)->mag_inclination_deg;
    outArray[ctr]["mag_inclination_deg"] = factory.createScalar(currentElement_mag_inclination_deg);
    // mag_inclination_ref_deg
    auto currentElement_mag_inclination_ref_deg = (msg + ctr)->mag_inclination_ref_deg;
    outArray[ctr]["mag_inclination_ref_deg"] = factory.createScalar(currentElement_mag_inclination_ref_deg);
    // mag_strength_gs
    auto currentElement_mag_strength_gs = (msg + ctr)->mag_strength_gs;
    outArray[ctr]["mag_strength_gs"] = factory.createScalar(currentElement_mag_strength_gs);
    // mag_strength_ref_gs
    auto currentElement_mag_strength_ref_gs = (msg + ctr)->mag_strength_ref_gs;
    outArray[ctr]["mag_strength_ref_gs"] = factory.createScalar(currentElement_mag_strength_ref_gs);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_EstimatorStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_EstimatorStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_EstimatorStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::EstimatorStatus,ros2_px4_msgs_msg_EstimatorStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_EstimatorStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::EstimatorStatus,ros2_px4_msgs_msg_EstimatorStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_EstimatorStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::EstimatorStatus>();
    ros2_px4_msgs_msg_EstimatorStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_EstimatorStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_EstimatorStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::EstimatorStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_EstimatorStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::EstimatorStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_EstimatorStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER