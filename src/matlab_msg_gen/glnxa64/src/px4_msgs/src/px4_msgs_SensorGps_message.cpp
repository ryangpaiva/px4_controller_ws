// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/SensorGps
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
#include "px4_msgs/msg/sensor_gps.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_SensorGps_common : public MATLABROS2MsgInterface<px4_msgs::msg::SensorGps> {
  public:
    virtual ~ros2_px4_msgs_msg_SensorGps_common(){}
    virtual void copy_from_struct(px4_msgs::msg::SensorGps* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::SensorGps* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_SensorGps_common::copy_from_struct(px4_msgs::msg::SensorGps* msg, const matlab::data::Struct& arr,
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
        //device_id
        const matlab::data::TypedArray<uint32_t> device_id_arr = arr["device_id"];
        msg->device_id = device_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'device_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'device_id' is wrong type; expected a uint32.");
    }
    try {
        //latitude_deg
        const matlab::data::TypedArray<double> latitude_deg_arr = arr["latitude_deg"];
        msg->latitude_deg = latitude_deg_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'latitude_deg' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'latitude_deg' is wrong type; expected a double.");
    }
    try {
        //longitude_deg
        const matlab::data::TypedArray<double> longitude_deg_arr = arr["longitude_deg"];
        msg->longitude_deg = longitude_deg_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'longitude_deg' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'longitude_deg' is wrong type; expected a double.");
    }
    try {
        //altitude_msl_m
        const matlab::data::TypedArray<double> altitude_msl_m_arr = arr["altitude_msl_m"];
        msg->altitude_msl_m = altitude_msl_m_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'altitude_msl_m' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'altitude_msl_m' is wrong type; expected a double.");
    }
    try {
        //altitude_ellipsoid_m
        const matlab::data::TypedArray<double> altitude_ellipsoid_m_arr = arr["altitude_ellipsoid_m"];
        msg->altitude_ellipsoid_m = altitude_ellipsoid_m_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'altitude_ellipsoid_m' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'altitude_ellipsoid_m' is wrong type; expected a double.");
    }
    try {
        //s_variance_m_s
        const matlab::data::TypedArray<float> s_variance_m_s_arr = arr["s_variance_m_s"];
        msg->s_variance_m_s = s_variance_m_s_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 's_variance_m_s' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 's_variance_m_s' is wrong type; expected a single.");
    }
    try {
        //c_variance_rad
        const matlab::data::TypedArray<float> c_variance_rad_arr = arr["c_variance_rad"];
        msg->c_variance_rad = c_variance_rad_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'c_variance_rad' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'c_variance_rad' is wrong type; expected a single.");
    }
    try {
        //fix_type
        const matlab::data::TypedArray<uint8_t> fix_type_arr = arr["fix_type"];
        msg->fix_type = fix_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fix_type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fix_type' is wrong type; expected a uint8.");
    }
    try {
        //eph
        const matlab::data::TypedArray<float> eph_arr = arr["eph"];
        msg->eph = eph_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'eph' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'eph' is wrong type; expected a single.");
    }
    try {
        //epv
        const matlab::data::TypedArray<float> epv_arr = arr["epv"];
        msg->epv = epv_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'epv' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'epv' is wrong type; expected a single.");
    }
    try {
        //hdop
        const matlab::data::TypedArray<float> hdop_arr = arr["hdop"];
        msg->hdop = hdop_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'hdop' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'hdop' is wrong type; expected a single.");
    }
    try {
        //vdop
        const matlab::data::TypedArray<float> vdop_arr = arr["vdop"];
        msg->vdop = vdop_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vdop' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vdop' is wrong type; expected a single.");
    }
    try {
        //noise_per_ms
        const matlab::data::TypedArray<int32_t> noise_per_ms_arr = arr["noise_per_ms"];
        msg->noise_per_ms = noise_per_ms_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'noise_per_ms' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'noise_per_ms' is wrong type; expected a int32.");
    }
    try {
        //automatic_gain_control
        const matlab::data::TypedArray<uint16_t> automatic_gain_control_arr = arr["automatic_gain_control"];
        msg->automatic_gain_control = automatic_gain_control_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'automatic_gain_control' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'automatic_gain_control' is wrong type; expected a uint16.");
    }
    try {
        //jamming_state
        const matlab::data::TypedArray<uint8_t> jamming_state_arr = arr["jamming_state"];
        msg->jamming_state = jamming_state_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'jamming_state' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'jamming_state' is wrong type; expected a uint8.");
    }
    try {
        //jamming_indicator
        const matlab::data::TypedArray<int32_t> jamming_indicator_arr = arr["jamming_indicator"];
        msg->jamming_indicator = jamming_indicator_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'jamming_indicator' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'jamming_indicator' is wrong type; expected a int32.");
    }
    try {
        //spoofing_state
        const matlab::data::TypedArray<uint8_t> spoofing_state_arr = arr["spoofing_state"];
        msg->spoofing_state = spoofing_state_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'spoofing_state' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'spoofing_state' is wrong type; expected a uint8.");
    }
    try {
        //vel_m_s
        const matlab::data::TypedArray<float> vel_m_s_arr = arr["vel_m_s"];
        msg->vel_m_s = vel_m_s_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vel_m_s' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vel_m_s' is wrong type; expected a single.");
    }
    try {
        //vel_n_m_s
        const matlab::data::TypedArray<float> vel_n_m_s_arr = arr["vel_n_m_s"];
        msg->vel_n_m_s = vel_n_m_s_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vel_n_m_s' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vel_n_m_s' is wrong type; expected a single.");
    }
    try {
        //vel_e_m_s
        const matlab::data::TypedArray<float> vel_e_m_s_arr = arr["vel_e_m_s"];
        msg->vel_e_m_s = vel_e_m_s_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vel_e_m_s' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vel_e_m_s' is wrong type; expected a single.");
    }
    try {
        //vel_d_m_s
        const matlab::data::TypedArray<float> vel_d_m_s_arr = arr["vel_d_m_s"];
        msg->vel_d_m_s = vel_d_m_s_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vel_d_m_s' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vel_d_m_s' is wrong type; expected a single.");
    }
    try {
        //cog_rad
        const matlab::data::TypedArray<float> cog_rad_arr = arr["cog_rad"];
        msg->cog_rad = cog_rad_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cog_rad' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cog_rad' is wrong type; expected a single.");
    }
    try {
        //vel_ned_valid
        const matlab::data::TypedArray<bool> vel_ned_valid_arr = arr["vel_ned_valid"];
        msg->vel_ned_valid = vel_ned_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vel_ned_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vel_ned_valid' is wrong type; expected a logical.");
    }
    try {
        //timestamp_time_relative
        const matlab::data::TypedArray<int32_t> timestamp_time_relative_arr = arr["timestamp_time_relative"];
        msg->timestamp_time_relative = timestamp_time_relative_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'timestamp_time_relative' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'timestamp_time_relative' is wrong type; expected a int32.");
    }
    try {
        //time_utc_usec
        const matlab::data::TypedArray<uint64_t> time_utc_usec_arr = arr["time_utc_usec"];
        msg->time_utc_usec = time_utc_usec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'time_utc_usec' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'time_utc_usec' is wrong type; expected a uint64.");
    }
    try {
        //satellites_used
        const matlab::data::TypedArray<uint8_t> satellites_used_arr = arr["satellites_used"];
        msg->satellites_used = satellites_used_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'satellites_used' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'satellites_used' is wrong type; expected a uint8.");
    }
    try {
        //heading
        const matlab::data::TypedArray<float> heading_arr = arr["heading"];
        msg->heading = heading_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heading' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heading' is wrong type; expected a single.");
    }
    try {
        //heading_offset
        const matlab::data::TypedArray<float> heading_offset_arr = arr["heading_offset"];
        msg->heading_offset = heading_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heading_offset' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heading_offset' is wrong type; expected a single.");
    }
    try {
        //heading_accuracy
        const matlab::data::TypedArray<float> heading_accuracy_arr = arr["heading_accuracy"];
        msg->heading_accuracy = heading_accuracy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heading_accuracy' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heading_accuracy' is wrong type; expected a single.");
    }
    try {
        //rtcm_injection_rate
        const matlab::data::TypedArray<float> rtcm_injection_rate_arr = arr["rtcm_injection_rate"];
        msg->rtcm_injection_rate = rtcm_injection_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rtcm_injection_rate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rtcm_injection_rate' is wrong type; expected a single.");
    }
    try {
        //selected_rtcm_instance
        const matlab::data::TypedArray<uint8_t> selected_rtcm_instance_arr = arr["selected_rtcm_instance"];
        msg->selected_rtcm_instance = selected_rtcm_instance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'selected_rtcm_instance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'selected_rtcm_instance' is wrong type; expected a uint8.");
    }
    try {
        //rtcm_crc_failed
        const matlab::data::TypedArray<bool> rtcm_crc_failed_arr = arr["rtcm_crc_failed"];
        msg->rtcm_crc_failed = rtcm_crc_failed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rtcm_crc_failed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rtcm_crc_failed' is wrong type; expected a logical.");
    }
    try {
        //rtcm_msg_used
        const matlab::data::TypedArray<uint8_t> rtcm_msg_used_arr = arr["rtcm_msg_used"];
        msg->rtcm_msg_used = rtcm_msg_used_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rtcm_msg_used' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rtcm_msg_used' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_SensorGps_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::SensorGps* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","timestamp_sample","device_id","latitude_deg","longitude_deg","altitude_msl_m","altitude_ellipsoid_m","s_variance_m_s","c_variance_rad","FIX_TYPE_NONE","FIX_TYPE_2D","FIX_TYPE_3D","FIX_TYPE_RTCM_CODE_DIFFERENTIAL","FIX_TYPE_RTK_FLOAT","FIX_TYPE_RTK_FIXED","FIX_TYPE_EXTRAPOLATED","fix_type","eph","epv","hdop","vdop","noise_per_ms","automatic_gain_control","JAMMING_STATE_UNKNOWN","JAMMING_STATE_OK","JAMMING_STATE_WARNING","JAMMING_STATE_CRITICAL","jamming_state","jamming_indicator","SPOOFING_STATE_UNKNOWN","SPOOFING_STATE_NONE","SPOOFING_STATE_INDICATED","SPOOFING_STATE_MULTIPLE","spoofing_state","vel_m_s","vel_n_m_s","vel_e_m_s","vel_d_m_s","cog_rad","vel_ned_valid","timestamp_time_relative","time_utc_usec","satellites_used","heading","heading_offset","heading_accuracy","rtcm_injection_rate","selected_rtcm_instance","rtcm_crc_failed","RTCM_MSG_USED_UNKNOWN","RTCM_MSG_USED_NOT_USED","RTCM_MSG_USED_USED","rtcm_msg_used"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/SensorGps");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // device_id
    auto currentElement_device_id = (msg + ctr)->device_id;
    outArray[ctr]["device_id"] = factory.createScalar(currentElement_device_id);
    // latitude_deg
    auto currentElement_latitude_deg = (msg + ctr)->latitude_deg;
    outArray[ctr]["latitude_deg"] = factory.createScalar(currentElement_latitude_deg);
    // longitude_deg
    auto currentElement_longitude_deg = (msg + ctr)->longitude_deg;
    outArray[ctr]["longitude_deg"] = factory.createScalar(currentElement_longitude_deg);
    // altitude_msl_m
    auto currentElement_altitude_msl_m = (msg + ctr)->altitude_msl_m;
    outArray[ctr]["altitude_msl_m"] = factory.createScalar(currentElement_altitude_msl_m);
    // altitude_ellipsoid_m
    auto currentElement_altitude_ellipsoid_m = (msg + ctr)->altitude_ellipsoid_m;
    outArray[ctr]["altitude_ellipsoid_m"] = factory.createScalar(currentElement_altitude_ellipsoid_m);
    // s_variance_m_s
    auto currentElement_s_variance_m_s = (msg + ctr)->s_variance_m_s;
    outArray[ctr]["s_variance_m_s"] = factory.createScalar(currentElement_s_variance_m_s);
    // c_variance_rad
    auto currentElement_c_variance_rad = (msg + ctr)->c_variance_rad;
    outArray[ctr]["c_variance_rad"] = factory.createScalar(currentElement_c_variance_rad);
    // FIX_TYPE_NONE
    auto currentElement_FIX_TYPE_NONE = (msg + ctr)->FIX_TYPE_NONE;
    outArray[ctr]["FIX_TYPE_NONE"] = factory.createScalar(currentElement_FIX_TYPE_NONE);
    // FIX_TYPE_2D
    auto currentElement_FIX_TYPE_2D = (msg + ctr)->FIX_TYPE_2D;
    outArray[ctr]["FIX_TYPE_2D"] = factory.createScalar(currentElement_FIX_TYPE_2D);
    // FIX_TYPE_3D
    auto currentElement_FIX_TYPE_3D = (msg + ctr)->FIX_TYPE_3D;
    outArray[ctr]["FIX_TYPE_3D"] = factory.createScalar(currentElement_FIX_TYPE_3D);
    // FIX_TYPE_RTCM_CODE_DIFFERENTIAL
    auto currentElement_FIX_TYPE_RTCM_CODE_DIFFERENTIAL = (msg + ctr)->FIX_TYPE_RTCM_CODE_DIFFERENTIAL;
    outArray[ctr]["FIX_TYPE_RTCM_CODE_DIFFERENTIAL"] = factory.createScalar(currentElement_FIX_TYPE_RTCM_CODE_DIFFERENTIAL);
    // FIX_TYPE_RTK_FLOAT
    auto currentElement_FIX_TYPE_RTK_FLOAT = (msg + ctr)->FIX_TYPE_RTK_FLOAT;
    outArray[ctr]["FIX_TYPE_RTK_FLOAT"] = factory.createScalar(currentElement_FIX_TYPE_RTK_FLOAT);
    // FIX_TYPE_RTK_FIXED
    auto currentElement_FIX_TYPE_RTK_FIXED = (msg + ctr)->FIX_TYPE_RTK_FIXED;
    outArray[ctr]["FIX_TYPE_RTK_FIXED"] = factory.createScalar(currentElement_FIX_TYPE_RTK_FIXED);
    // FIX_TYPE_EXTRAPOLATED
    auto currentElement_FIX_TYPE_EXTRAPOLATED = (msg + ctr)->FIX_TYPE_EXTRAPOLATED;
    outArray[ctr]["FIX_TYPE_EXTRAPOLATED"] = factory.createScalar(currentElement_FIX_TYPE_EXTRAPOLATED);
    // fix_type
    auto currentElement_fix_type = (msg + ctr)->fix_type;
    outArray[ctr]["fix_type"] = factory.createScalar(currentElement_fix_type);
    // eph
    auto currentElement_eph = (msg + ctr)->eph;
    outArray[ctr]["eph"] = factory.createScalar(currentElement_eph);
    // epv
    auto currentElement_epv = (msg + ctr)->epv;
    outArray[ctr]["epv"] = factory.createScalar(currentElement_epv);
    // hdop
    auto currentElement_hdop = (msg + ctr)->hdop;
    outArray[ctr]["hdop"] = factory.createScalar(currentElement_hdop);
    // vdop
    auto currentElement_vdop = (msg + ctr)->vdop;
    outArray[ctr]["vdop"] = factory.createScalar(currentElement_vdop);
    // noise_per_ms
    auto currentElement_noise_per_ms = (msg + ctr)->noise_per_ms;
    outArray[ctr]["noise_per_ms"] = factory.createScalar(currentElement_noise_per_ms);
    // automatic_gain_control
    auto currentElement_automatic_gain_control = (msg + ctr)->automatic_gain_control;
    outArray[ctr]["automatic_gain_control"] = factory.createScalar(currentElement_automatic_gain_control);
    // JAMMING_STATE_UNKNOWN
    auto currentElement_JAMMING_STATE_UNKNOWN = (msg + ctr)->JAMMING_STATE_UNKNOWN;
    outArray[ctr]["JAMMING_STATE_UNKNOWN"] = factory.createScalar(currentElement_JAMMING_STATE_UNKNOWN);
    // JAMMING_STATE_OK
    auto currentElement_JAMMING_STATE_OK = (msg + ctr)->JAMMING_STATE_OK;
    outArray[ctr]["JAMMING_STATE_OK"] = factory.createScalar(currentElement_JAMMING_STATE_OK);
    // JAMMING_STATE_WARNING
    auto currentElement_JAMMING_STATE_WARNING = (msg + ctr)->JAMMING_STATE_WARNING;
    outArray[ctr]["JAMMING_STATE_WARNING"] = factory.createScalar(currentElement_JAMMING_STATE_WARNING);
    // JAMMING_STATE_CRITICAL
    auto currentElement_JAMMING_STATE_CRITICAL = (msg + ctr)->JAMMING_STATE_CRITICAL;
    outArray[ctr]["JAMMING_STATE_CRITICAL"] = factory.createScalar(currentElement_JAMMING_STATE_CRITICAL);
    // jamming_state
    auto currentElement_jamming_state = (msg + ctr)->jamming_state;
    outArray[ctr]["jamming_state"] = factory.createScalar(currentElement_jamming_state);
    // jamming_indicator
    auto currentElement_jamming_indicator = (msg + ctr)->jamming_indicator;
    outArray[ctr]["jamming_indicator"] = factory.createScalar(currentElement_jamming_indicator);
    // SPOOFING_STATE_UNKNOWN
    auto currentElement_SPOOFING_STATE_UNKNOWN = (msg + ctr)->SPOOFING_STATE_UNKNOWN;
    outArray[ctr]["SPOOFING_STATE_UNKNOWN"] = factory.createScalar(currentElement_SPOOFING_STATE_UNKNOWN);
    // SPOOFING_STATE_NONE
    auto currentElement_SPOOFING_STATE_NONE = (msg + ctr)->SPOOFING_STATE_NONE;
    outArray[ctr]["SPOOFING_STATE_NONE"] = factory.createScalar(currentElement_SPOOFING_STATE_NONE);
    // SPOOFING_STATE_INDICATED
    auto currentElement_SPOOFING_STATE_INDICATED = (msg + ctr)->SPOOFING_STATE_INDICATED;
    outArray[ctr]["SPOOFING_STATE_INDICATED"] = factory.createScalar(currentElement_SPOOFING_STATE_INDICATED);
    // SPOOFING_STATE_MULTIPLE
    auto currentElement_SPOOFING_STATE_MULTIPLE = (msg + ctr)->SPOOFING_STATE_MULTIPLE;
    outArray[ctr]["SPOOFING_STATE_MULTIPLE"] = factory.createScalar(currentElement_SPOOFING_STATE_MULTIPLE);
    // spoofing_state
    auto currentElement_spoofing_state = (msg + ctr)->spoofing_state;
    outArray[ctr]["spoofing_state"] = factory.createScalar(currentElement_spoofing_state);
    // vel_m_s
    auto currentElement_vel_m_s = (msg + ctr)->vel_m_s;
    outArray[ctr]["vel_m_s"] = factory.createScalar(currentElement_vel_m_s);
    // vel_n_m_s
    auto currentElement_vel_n_m_s = (msg + ctr)->vel_n_m_s;
    outArray[ctr]["vel_n_m_s"] = factory.createScalar(currentElement_vel_n_m_s);
    // vel_e_m_s
    auto currentElement_vel_e_m_s = (msg + ctr)->vel_e_m_s;
    outArray[ctr]["vel_e_m_s"] = factory.createScalar(currentElement_vel_e_m_s);
    // vel_d_m_s
    auto currentElement_vel_d_m_s = (msg + ctr)->vel_d_m_s;
    outArray[ctr]["vel_d_m_s"] = factory.createScalar(currentElement_vel_d_m_s);
    // cog_rad
    auto currentElement_cog_rad = (msg + ctr)->cog_rad;
    outArray[ctr]["cog_rad"] = factory.createScalar(currentElement_cog_rad);
    // vel_ned_valid
    auto currentElement_vel_ned_valid = (msg + ctr)->vel_ned_valid;
    outArray[ctr]["vel_ned_valid"] = factory.createScalar(currentElement_vel_ned_valid);
    // timestamp_time_relative
    auto currentElement_timestamp_time_relative = (msg + ctr)->timestamp_time_relative;
    outArray[ctr]["timestamp_time_relative"] = factory.createScalar(currentElement_timestamp_time_relative);
    // time_utc_usec
    auto currentElement_time_utc_usec = (msg + ctr)->time_utc_usec;
    outArray[ctr]["time_utc_usec"] = factory.createScalar(currentElement_time_utc_usec);
    // satellites_used
    auto currentElement_satellites_used = (msg + ctr)->satellites_used;
    outArray[ctr]["satellites_used"] = factory.createScalar(currentElement_satellites_used);
    // heading
    auto currentElement_heading = (msg + ctr)->heading;
    outArray[ctr]["heading"] = factory.createScalar(currentElement_heading);
    // heading_offset
    auto currentElement_heading_offset = (msg + ctr)->heading_offset;
    outArray[ctr]["heading_offset"] = factory.createScalar(currentElement_heading_offset);
    // heading_accuracy
    auto currentElement_heading_accuracy = (msg + ctr)->heading_accuracy;
    outArray[ctr]["heading_accuracy"] = factory.createScalar(currentElement_heading_accuracy);
    // rtcm_injection_rate
    auto currentElement_rtcm_injection_rate = (msg + ctr)->rtcm_injection_rate;
    outArray[ctr]["rtcm_injection_rate"] = factory.createScalar(currentElement_rtcm_injection_rate);
    // selected_rtcm_instance
    auto currentElement_selected_rtcm_instance = (msg + ctr)->selected_rtcm_instance;
    outArray[ctr]["selected_rtcm_instance"] = factory.createScalar(currentElement_selected_rtcm_instance);
    // rtcm_crc_failed
    auto currentElement_rtcm_crc_failed = (msg + ctr)->rtcm_crc_failed;
    outArray[ctr]["rtcm_crc_failed"] = factory.createScalar(currentElement_rtcm_crc_failed);
    // RTCM_MSG_USED_UNKNOWN
    auto currentElement_RTCM_MSG_USED_UNKNOWN = (msg + ctr)->RTCM_MSG_USED_UNKNOWN;
    outArray[ctr]["RTCM_MSG_USED_UNKNOWN"] = factory.createScalar(currentElement_RTCM_MSG_USED_UNKNOWN);
    // RTCM_MSG_USED_NOT_USED
    auto currentElement_RTCM_MSG_USED_NOT_USED = (msg + ctr)->RTCM_MSG_USED_NOT_USED;
    outArray[ctr]["RTCM_MSG_USED_NOT_USED"] = factory.createScalar(currentElement_RTCM_MSG_USED_NOT_USED);
    // RTCM_MSG_USED_USED
    auto currentElement_RTCM_MSG_USED_USED = (msg + ctr)->RTCM_MSG_USED_USED;
    outArray[ctr]["RTCM_MSG_USED_USED"] = factory.createScalar(currentElement_RTCM_MSG_USED_USED);
    // rtcm_msg_used
    auto currentElement_rtcm_msg_used = (msg + ctr)->rtcm_msg_used;
    outArray[ctr]["rtcm_msg_used"] = factory.createScalar(currentElement_rtcm_msg_used);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_SensorGps_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_SensorGps_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_SensorGps_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::SensorGps,ros2_px4_msgs_msg_SensorGps_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_SensorGps_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::SensorGps,ros2_px4_msgs_msg_SensorGps_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_SensorGps_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::SensorGps>();
    ros2_px4_msgs_msg_SensorGps_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_SensorGps_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_SensorGps_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::SensorGps*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_SensorGps_common, MATLABROS2MsgInterface<px4_msgs::msg::SensorGps>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_SensorGps_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER