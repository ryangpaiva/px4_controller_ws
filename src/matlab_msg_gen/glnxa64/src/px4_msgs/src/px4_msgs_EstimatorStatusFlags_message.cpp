// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/EstimatorStatusFlags
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
#include "px4_msgs/msg/estimator_status_flags.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_EstimatorStatusFlags_common : public MATLABROS2MsgInterface<px4_msgs::msg::EstimatorStatusFlags> {
  public:
    virtual ~ros2_px4_msgs_msg_EstimatorStatusFlags_common(){}
    virtual void copy_from_struct(px4_msgs::msg::EstimatorStatusFlags* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::EstimatorStatusFlags* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_EstimatorStatusFlags_common::copy_from_struct(px4_msgs::msg::EstimatorStatusFlags* msg, const matlab::data::Struct& arr,
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
        //control_status_changes
        const matlab::data::TypedArray<uint32_t> control_status_changes_arr = arr["control_status_changes"];
        msg->control_status_changes = control_status_changes_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'control_status_changes' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'control_status_changes' is wrong type; expected a uint32.");
    }
    try {
        //cs_tilt_align
        const matlab::data::TypedArray<bool> cs_tilt_align_arr = arr["cs_tilt_align"];
        msg->cs_tilt_align = cs_tilt_align_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_tilt_align' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_tilt_align' is wrong type; expected a logical.");
    }
    try {
        //cs_yaw_align
        const matlab::data::TypedArray<bool> cs_yaw_align_arr = arr["cs_yaw_align"];
        msg->cs_yaw_align = cs_yaw_align_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_yaw_align' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_yaw_align' is wrong type; expected a logical.");
    }
    try {
        //cs_gps
        const matlab::data::TypedArray<bool> cs_gps_arr = arr["cs_gps"];
        msg->cs_gps = cs_gps_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_gps' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_gps' is wrong type; expected a logical.");
    }
    try {
        //cs_opt_flow
        const matlab::data::TypedArray<bool> cs_opt_flow_arr = arr["cs_opt_flow"];
        msg->cs_opt_flow = cs_opt_flow_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_opt_flow' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_opt_flow' is wrong type; expected a logical.");
    }
    try {
        //cs_mag_hdg
        const matlab::data::TypedArray<bool> cs_mag_hdg_arr = arr["cs_mag_hdg"];
        msg->cs_mag_hdg = cs_mag_hdg_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_mag_hdg' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_mag_hdg' is wrong type; expected a logical.");
    }
    try {
        //cs_mag_3d
        const matlab::data::TypedArray<bool> cs_mag_3d_arr = arr["cs_mag_3d"];
        msg->cs_mag_3d = cs_mag_3d_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_mag_3d' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_mag_3d' is wrong type; expected a logical.");
    }
    try {
        //cs_mag_dec
        const matlab::data::TypedArray<bool> cs_mag_dec_arr = arr["cs_mag_dec"];
        msg->cs_mag_dec = cs_mag_dec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_mag_dec' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_mag_dec' is wrong type; expected a logical.");
    }
    try {
        //cs_in_air
        const matlab::data::TypedArray<bool> cs_in_air_arr = arr["cs_in_air"];
        msg->cs_in_air = cs_in_air_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_in_air' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_in_air' is wrong type; expected a logical.");
    }
    try {
        //cs_wind
        const matlab::data::TypedArray<bool> cs_wind_arr = arr["cs_wind"];
        msg->cs_wind = cs_wind_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_wind' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_wind' is wrong type; expected a logical.");
    }
    try {
        //cs_baro_hgt
        const matlab::data::TypedArray<bool> cs_baro_hgt_arr = arr["cs_baro_hgt"];
        msg->cs_baro_hgt = cs_baro_hgt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_baro_hgt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_baro_hgt' is wrong type; expected a logical.");
    }
    try {
        //cs_rng_hgt
        const matlab::data::TypedArray<bool> cs_rng_hgt_arr = arr["cs_rng_hgt"];
        msg->cs_rng_hgt = cs_rng_hgt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_rng_hgt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_rng_hgt' is wrong type; expected a logical.");
    }
    try {
        //cs_gps_hgt
        const matlab::data::TypedArray<bool> cs_gps_hgt_arr = arr["cs_gps_hgt"];
        msg->cs_gps_hgt = cs_gps_hgt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_gps_hgt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_gps_hgt' is wrong type; expected a logical.");
    }
    try {
        //cs_ev_pos
        const matlab::data::TypedArray<bool> cs_ev_pos_arr = arr["cs_ev_pos"];
        msg->cs_ev_pos = cs_ev_pos_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_ev_pos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_ev_pos' is wrong type; expected a logical.");
    }
    try {
        //cs_ev_yaw
        const matlab::data::TypedArray<bool> cs_ev_yaw_arr = arr["cs_ev_yaw"];
        msg->cs_ev_yaw = cs_ev_yaw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_ev_yaw' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_ev_yaw' is wrong type; expected a logical.");
    }
    try {
        //cs_ev_hgt
        const matlab::data::TypedArray<bool> cs_ev_hgt_arr = arr["cs_ev_hgt"];
        msg->cs_ev_hgt = cs_ev_hgt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_ev_hgt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_ev_hgt' is wrong type; expected a logical.");
    }
    try {
        //cs_fuse_beta
        const matlab::data::TypedArray<bool> cs_fuse_beta_arr = arr["cs_fuse_beta"];
        msg->cs_fuse_beta = cs_fuse_beta_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_fuse_beta' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_fuse_beta' is wrong type; expected a logical.");
    }
    try {
        //cs_mag_field_disturbed
        const matlab::data::TypedArray<bool> cs_mag_field_disturbed_arr = arr["cs_mag_field_disturbed"];
        msg->cs_mag_field_disturbed = cs_mag_field_disturbed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_mag_field_disturbed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_mag_field_disturbed' is wrong type; expected a logical.");
    }
    try {
        //cs_fixed_wing
        const matlab::data::TypedArray<bool> cs_fixed_wing_arr = arr["cs_fixed_wing"];
        msg->cs_fixed_wing = cs_fixed_wing_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_fixed_wing' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_fixed_wing' is wrong type; expected a logical.");
    }
    try {
        //cs_mag_fault
        const matlab::data::TypedArray<bool> cs_mag_fault_arr = arr["cs_mag_fault"];
        msg->cs_mag_fault = cs_mag_fault_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_mag_fault' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_mag_fault' is wrong type; expected a logical.");
    }
    try {
        //cs_fuse_aspd
        const matlab::data::TypedArray<bool> cs_fuse_aspd_arr = arr["cs_fuse_aspd"];
        msg->cs_fuse_aspd = cs_fuse_aspd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_fuse_aspd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_fuse_aspd' is wrong type; expected a logical.");
    }
    try {
        //cs_gnd_effect
        const matlab::data::TypedArray<bool> cs_gnd_effect_arr = arr["cs_gnd_effect"];
        msg->cs_gnd_effect = cs_gnd_effect_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_gnd_effect' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_gnd_effect' is wrong type; expected a logical.");
    }
    try {
        //cs_rng_stuck
        const matlab::data::TypedArray<bool> cs_rng_stuck_arr = arr["cs_rng_stuck"];
        msg->cs_rng_stuck = cs_rng_stuck_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_rng_stuck' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_rng_stuck' is wrong type; expected a logical.");
    }
    try {
        //cs_gnss_yaw
        const matlab::data::TypedArray<bool> cs_gnss_yaw_arr = arr["cs_gnss_yaw"];
        msg->cs_gnss_yaw = cs_gnss_yaw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_gnss_yaw' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_gnss_yaw' is wrong type; expected a logical.");
    }
    try {
        //cs_mag_aligned_in_flight
        const matlab::data::TypedArray<bool> cs_mag_aligned_in_flight_arr = arr["cs_mag_aligned_in_flight"];
        msg->cs_mag_aligned_in_flight = cs_mag_aligned_in_flight_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_mag_aligned_in_flight' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_mag_aligned_in_flight' is wrong type; expected a logical.");
    }
    try {
        //cs_ev_vel
        const matlab::data::TypedArray<bool> cs_ev_vel_arr = arr["cs_ev_vel"];
        msg->cs_ev_vel = cs_ev_vel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_ev_vel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_ev_vel' is wrong type; expected a logical.");
    }
    try {
        //cs_synthetic_mag_z
        const matlab::data::TypedArray<bool> cs_synthetic_mag_z_arr = arr["cs_synthetic_mag_z"];
        msg->cs_synthetic_mag_z = cs_synthetic_mag_z_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_synthetic_mag_z' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_synthetic_mag_z' is wrong type; expected a logical.");
    }
    try {
        //cs_vehicle_at_rest
        const matlab::data::TypedArray<bool> cs_vehicle_at_rest_arr = arr["cs_vehicle_at_rest"];
        msg->cs_vehicle_at_rest = cs_vehicle_at_rest_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_vehicle_at_rest' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_vehicle_at_rest' is wrong type; expected a logical.");
    }
    try {
        //cs_gnss_yaw_fault
        const matlab::data::TypedArray<bool> cs_gnss_yaw_fault_arr = arr["cs_gnss_yaw_fault"];
        msg->cs_gnss_yaw_fault = cs_gnss_yaw_fault_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_gnss_yaw_fault' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_gnss_yaw_fault' is wrong type; expected a logical.");
    }
    try {
        //cs_rng_fault
        const matlab::data::TypedArray<bool> cs_rng_fault_arr = arr["cs_rng_fault"];
        msg->cs_rng_fault = cs_rng_fault_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_rng_fault' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_rng_fault' is wrong type; expected a logical.");
    }
    try {
        //cs_inertial_dead_reckoning
        const matlab::data::TypedArray<bool> cs_inertial_dead_reckoning_arr = arr["cs_inertial_dead_reckoning"];
        msg->cs_inertial_dead_reckoning = cs_inertial_dead_reckoning_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_inertial_dead_reckoning' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_inertial_dead_reckoning' is wrong type; expected a logical.");
    }
    try {
        //cs_wind_dead_reckoning
        const matlab::data::TypedArray<bool> cs_wind_dead_reckoning_arr = arr["cs_wind_dead_reckoning"];
        msg->cs_wind_dead_reckoning = cs_wind_dead_reckoning_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_wind_dead_reckoning' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_wind_dead_reckoning' is wrong type; expected a logical.");
    }
    try {
        //cs_rng_kin_consistent
        const matlab::data::TypedArray<bool> cs_rng_kin_consistent_arr = arr["cs_rng_kin_consistent"];
        msg->cs_rng_kin_consistent = cs_rng_kin_consistent_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_rng_kin_consistent' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_rng_kin_consistent' is wrong type; expected a logical.");
    }
    try {
        //cs_fake_pos
        const matlab::data::TypedArray<bool> cs_fake_pos_arr = arr["cs_fake_pos"];
        msg->cs_fake_pos = cs_fake_pos_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_fake_pos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_fake_pos' is wrong type; expected a logical.");
    }
    try {
        //cs_fake_hgt
        const matlab::data::TypedArray<bool> cs_fake_hgt_arr = arr["cs_fake_hgt"];
        msg->cs_fake_hgt = cs_fake_hgt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_fake_hgt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_fake_hgt' is wrong type; expected a logical.");
    }
    try {
        //cs_gravity_vector
        const matlab::data::TypedArray<bool> cs_gravity_vector_arr = arr["cs_gravity_vector"];
        msg->cs_gravity_vector = cs_gravity_vector_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_gravity_vector' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_gravity_vector' is wrong type; expected a logical.");
    }
    try {
        //cs_mag
        const matlab::data::TypedArray<bool> cs_mag_arr = arr["cs_mag"];
        msg->cs_mag = cs_mag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_mag' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_mag' is wrong type; expected a logical.");
    }
    try {
        //cs_ev_yaw_fault
        const matlab::data::TypedArray<bool> cs_ev_yaw_fault_arr = arr["cs_ev_yaw_fault"];
        msg->cs_ev_yaw_fault = cs_ev_yaw_fault_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_ev_yaw_fault' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_ev_yaw_fault' is wrong type; expected a logical.");
    }
    try {
        //cs_mag_heading_consistent
        const matlab::data::TypedArray<bool> cs_mag_heading_consistent_arr = arr["cs_mag_heading_consistent"];
        msg->cs_mag_heading_consistent = cs_mag_heading_consistent_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_mag_heading_consistent' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_mag_heading_consistent' is wrong type; expected a logical.");
    }
    try {
        //cs_aux_gpos
        const matlab::data::TypedArray<bool> cs_aux_gpos_arr = arr["cs_aux_gpos"];
        msg->cs_aux_gpos = cs_aux_gpos_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_aux_gpos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_aux_gpos' is wrong type; expected a logical.");
    }
    try {
        //cs_rng_terrain
        const matlab::data::TypedArray<bool> cs_rng_terrain_arr = arr["cs_rng_terrain"];
        msg->cs_rng_terrain = cs_rng_terrain_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_rng_terrain' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_rng_terrain' is wrong type; expected a logical.");
    }
    try {
        //cs_opt_flow_terrain
        const matlab::data::TypedArray<bool> cs_opt_flow_terrain_arr = arr["cs_opt_flow_terrain"];
        msg->cs_opt_flow_terrain = cs_opt_flow_terrain_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_opt_flow_terrain' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_opt_flow_terrain' is wrong type; expected a logical.");
    }
    try {
        //cs_valid_fake_pos
        const matlab::data::TypedArray<bool> cs_valid_fake_pos_arr = arr["cs_valid_fake_pos"];
        msg->cs_valid_fake_pos = cs_valid_fake_pos_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_valid_fake_pos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_valid_fake_pos' is wrong type; expected a logical.");
    }
    try {
        //cs_constant_pos
        const matlab::data::TypedArray<bool> cs_constant_pos_arr = arr["cs_constant_pos"];
        msg->cs_constant_pos = cs_constant_pos_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cs_constant_pos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cs_constant_pos' is wrong type; expected a logical.");
    }
    try {
        //fault_status_changes
        const matlab::data::TypedArray<uint32_t> fault_status_changes_arr = arr["fault_status_changes"];
        msg->fault_status_changes = fault_status_changes_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fault_status_changes' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fault_status_changes' is wrong type; expected a uint32.");
    }
    try {
        //fs_bad_mag_x
        const matlab::data::TypedArray<bool> fs_bad_mag_x_arr = arr["fs_bad_mag_x"];
        msg->fs_bad_mag_x = fs_bad_mag_x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fs_bad_mag_x' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fs_bad_mag_x' is wrong type; expected a logical.");
    }
    try {
        //fs_bad_mag_y
        const matlab::data::TypedArray<bool> fs_bad_mag_y_arr = arr["fs_bad_mag_y"];
        msg->fs_bad_mag_y = fs_bad_mag_y_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fs_bad_mag_y' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fs_bad_mag_y' is wrong type; expected a logical.");
    }
    try {
        //fs_bad_mag_z
        const matlab::data::TypedArray<bool> fs_bad_mag_z_arr = arr["fs_bad_mag_z"];
        msg->fs_bad_mag_z = fs_bad_mag_z_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fs_bad_mag_z' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fs_bad_mag_z' is wrong type; expected a logical.");
    }
    try {
        //fs_bad_hdg
        const matlab::data::TypedArray<bool> fs_bad_hdg_arr = arr["fs_bad_hdg"];
        msg->fs_bad_hdg = fs_bad_hdg_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fs_bad_hdg' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fs_bad_hdg' is wrong type; expected a logical.");
    }
    try {
        //fs_bad_mag_decl
        const matlab::data::TypedArray<bool> fs_bad_mag_decl_arr = arr["fs_bad_mag_decl"];
        msg->fs_bad_mag_decl = fs_bad_mag_decl_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fs_bad_mag_decl' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fs_bad_mag_decl' is wrong type; expected a logical.");
    }
    try {
        //fs_bad_airspeed
        const matlab::data::TypedArray<bool> fs_bad_airspeed_arr = arr["fs_bad_airspeed"];
        msg->fs_bad_airspeed = fs_bad_airspeed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fs_bad_airspeed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fs_bad_airspeed' is wrong type; expected a logical.");
    }
    try {
        //fs_bad_sideslip
        const matlab::data::TypedArray<bool> fs_bad_sideslip_arr = arr["fs_bad_sideslip"];
        msg->fs_bad_sideslip = fs_bad_sideslip_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fs_bad_sideslip' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fs_bad_sideslip' is wrong type; expected a logical.");
    }
    try {
        //fs_bad_optflow_x
        const matlab::data::TypedArray<bool> fs_bad_optflow_x_arr = arr["fs_bad_optflow_x"];
        msg->fs_bad_optflow_x = fs_bad_optflow_x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fs_bad_optflow_x' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fs_bad_optflow_x' is wrong type; expected a logical.");
    }
    try {
        //fs_bad_optflow_y
        const matlab::data::TypedArray<bool> fs_bad_optflow_y_arr = arr["fs_bad_optflow_y"];
        msg->fs_bad_optflow_y = fs_bad_optflow_y_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fs_bad_optflow_y' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fs_bad_optflow_y' is wrong type; expected a logical.");
    }
    try {
        //fs_bad_acc_vertical
        const matlab::data::TypedArray<bool> fs_bad_acc_vertical_arr = arr["fs_bad_acc_vertical"];
        msg->fs_bad_acc_vertical = fs_bad_acc_vertical_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fs_bad_acc_vertical' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fs_bad_acc_vertical' is wrong type; expected a logical.");
    }
    try {
        //fs_bad_acc_clipping
        const matlab::data::TypedArray<bool> fs_bad_acc_clipping_arr = arr["fs_bad_acc_clipping"];
        msg->fs_bad_acc_clipping = fs_bad_acc_clipping_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fs_bad_acc_clipping' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fs_bad_acc_clipping' is wrong type; expected a logical.");
    }
    try {
        //innovation_fault_status_changes
        const matlab::data::TypedArray<uint32_t> innovation_fault_status_changes_arr = arr["innovation_fault_status_changes"];
        msg->innovation_fault_status_changes = innovation_fault_status_changes_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'innovation_fault_status_changes' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'innovation_fault_status_changes' is wrong type; expected a uint32.");
    }
    try {
        //reject_hor_vel
        const matlab::data::TypedArray<bool> reject_hor_vel_arr = arr["reject_hor_vel"];
        msg->reject_hor_vel = reject_hor_vel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reject_hor_vel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reject_hor_vel' is wrong type; expected a logical.");
    }
    try {
        //reject_ver_vel
        const matlab::data::TypedArray<bool> reject_ver_vel_arr = arr["reject_ver_vel"];
        msg->reject_ver_vel = reject_ver_vel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reject_ver_vel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reject_ver_vel' is wrong type; expected a logical.");
    }
    try {
        //reject_hor_pos
        const matlab::data::TypedArray<bool> reject_hor_pos_arr = arr["reject_hor_pos"];
        msg->reject_hor_pos = reject_hor_pos_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reject_hor_pos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reject_hor_pos' is wrong type; expected a logical.");
    }
    try {
        //reject_ver_pos
        const matlab::data::TypedArray<bool> reject_ver_pos_arr = arr["reject_ver_pos"];
        msg->reject_ver_pos = reject_ver_pos_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reject_ver_pos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reject_ver_pos' is wrong type; expected a logical.");
    }
    try {
        //reject_yaw
        const matlab::data::TypedArray<bool> reject_yaw_arr = arr["reject_yaw"];
        msg->reject_yaw = reject_yaw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reject_yaw' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reject_yaw' is wrong type; expected a logical.");
    }
    try {
        //reject_airspeed
        const matlab::data::TypedArray<bool> reject_airspeed_arr = arr["reject_airspeed"];
        msg->reject_airspeed = reject_airspeed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reject_airspeed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reject_airspeed' is wrong type; expected a logical.");
    }
    try {
        //reject_sideslip
        const matlab::data::TypedArray<bool> reject_sideslip_arr = arr["reject_sideslip"];
        msg->reject_sideslip = reject_sideslip_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reject_sideslip' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reject_sideslip' is wrong type; expected a logical.");
    }
    try {
        //reject_hagl
        const matlab::data::TypedArray<bool> reject_hagl_arr = arr["reject_hagl"];
        msg->reject_hagl = reject_hagl_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reject_hagl' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reject_hagl' is wrong type; expected a logical.");
    }
    try {
        //reject_optflow_x
        const matlab::data::TypedArray<bool> reject_optflow_x_arr = arr["reject_optflow_x"];
        msg->reject_optflow_x = reject_optflow_x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reject_optflow_x' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reject_optflow_x' is wrong type; expected a logical.");
    }
    try {
        //reject_optflow_y
        const matlab::data::TypedArray<bool> reject_optflow_y_arr = arr["reject_optflow_y"];
        msg->reject_optflow_y = reject_optflow_y_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reject_optflow_y' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reject_optflow_y' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_EstimatorStatusFlags_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::EstimatorStatusFlags* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","timestamp_sample","control_status_changes","cs_tilt_align","cs_yaw_align","cs_gps","cs_opt_flow","cs_mag_hdg","cs_mag_3d","cs_mag_dec","cs_in_air","cs_wind","cs_baro_hgt","cs_rng_hgt","cs_gps_hgt","cs_ev_pos","cs_ev_yaw","cs_ev_hgt","cs_fuse_beta","cs_mag_field_disturbed","cs_fixed_wing","cs_mag_fault","cs_fuse_aspd","cs_gnd_effect","cs_rng_stuck","cs_gnss_yaw","cs_mag_aligned_in_flight","cs_ev_vel","cs_synthetic_mag_z","cs_vehicle_at_rest","cs_gnss_yaw_fault","cs_rng_fault","cs_inertial_dead_reckoning","cs_wind_dead_reckoning","cs_rng_kin_consistent","cs_fake_pos","cs_fake_hgt","cs_gravity_vector","cs_mag","cs_ev_yaw_fault","cs_mag_heading_consistent","cs_aux_gpos","cs_rng_terrain","cs_opt_flow_terrain","cs_valid_fake_pos","cs_constant_pos","fault_status_changes","fs_bad_mag_x","fs_bad_mag_y","fs_bad_mag_z","fs_bad_hdg","fs_bad_mag_decl","fs_bad_airspeed","fs_bad_sideslip","fs_bad_optflow_x","fs_bad_optflow_y","fs_bad_acc_vertical","fs_bad_acc_clipping","innovation_fault_status_changes","reject_hor_vel","reject_ver_vel","reject_hor_pos","reject_ver_pos","reject_yaw","reject_airspeed","reject_sideslip","reject_hagl","reject_optflow_x","reject_optflow_y"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/EstimatorStatusFlags");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // control_status_changes
    auto currentElement_control_status_changes = (msg + ctr)->control_status_changes;
    outArray[ctr]["control_status_changes"] = factory.createScalar(currentElement_control_status_changes);
    // cs_tilt_align
    auto currentElement_cs_tilt_align = (msg + ctr)->cs_tilt_align;
    outArray[ctr]["cs_tilt_align"] = factory.createScalar(currentElement_cs_tilt_align);
    // cs_yaw_align
    auto currentElement_cs_yaw_align = (msg + ctr)->cs_yaw_align;
    outArray[ctr]["cs_yaw_align"] = factory.createScalar(currentElement_cs_yaw_align);
    // cs_gps
    auto currentElement_cs_gps = (msg + ctr)->cs_gps;
    outArray[ctr]["cs_gps"] = factory.createScalar(currentElement_cs_gps);
    // cs_opt_flow
    auto currentElement_cs_opt_flow = (msg + ctr)->cs_opt_flow;
    outArray[ctr]["cs_opt_flow"] = factory.createScalar(currentElement_cs_opt_flow);
    // cs_mag_hdg
    auto currentElement_cs_mag_hdg = (msg + ctr)->cs_mag_hdg;
    outArray[ctr]["cs_mag_hdg"] = factory.createScalar(currentElement_cs_mag_hdg);
    // cs_mag_3d
    auto currentElement_cs_mag_3d = (msg + ctr)->cs_mag_3d;
    outArray[ctr]["cs_mag_3d"] = factory.createScalar(currentElement_cs_mag_3d);
    // cs_mag_dec
    auto currentElement_cs_mag_dec = (msg + ctr)->cs_mag_dec;
    outArray[ctr]["cs_mag_dec"] = factory.createScalar(currentElement_cs_mag_dec);
    // cs_in_air
    auto currentElement_cs_in_air = (msg + ctr)->cs_in_air;
    outArray[ctr]["cs_in_air"] = factory.createScalar(currentElement_cs_in_air);
    // cs_wind
    auto currentElement_cs_wind = (msg + ctr)->cs_wind;
    outArray[ctr]["cs_wind"] = factory.createScalar(currentElement_cs_wind);
    // cs_baro_hgt
    auto currentElement_cs_baro_hgt = (msg + ctr)->cs_baro_hgt;
    outArray[ctr]["cs_baro_hgt"] = factory.createScalar(currentElement_cs_baro_hgt);
    // cs_rng_hgt
    auto currentElement_cs_rng_hgt = (msg + ctr)->cs_rng_hgt;
    outArray[ctr]["cs_rng_hgt"] = factory.createScalar(currentElement_cs_rng_hgt);
    // cs_gps_hgt
    auto currentElement_cs_gps_hgt = (msg + ctr)->cs_gps_hgt;
    outArray[ctr]["cs_gps_hgt"] = factory.createScalar(currentElement_cs_gps_hgt);
    // cs_ev_pos
    auto currentElement_cs_ev_pos = (msg + ctr)->cs_ev_pos;
    outArray[ctr]["cs_ev_pos"] = factory.createScalar(currentElement_cs_ev_pos);
    // cs_ev_yaw
    auto currentElement_cs_ev_yaw = (msg + ctr)->cs_ev_yaw;
    outArray[ctr]["cs_ev_yaw"] = factory.createScalar(currentElement_cs_ev_yaw);
    // cs_ev_hgt
    auto currentElement_cs_ev_hgt = (msg + ctr)->cs_ev_hgt;
    outArray[ctr]["cs_ev_hgt"] = factory.createScalar(currentElement_cs_ev_hgt);
    // cs_fuse_beta
    auto currentElement_cs_fuse_beta = (msg + ctr)->cs_fuse_beta;
    outArray[ctr]["cs_fuse_beta"] = factory.createScalar(currentElement_cs_fuse_beta);
    // cs_mag_field_disturbed
    auto currentElement_cs_mag_field_disturbed = (msg + ctr)->cs_mag_field_disturbed;
    outArray[ctr]["cs_mag_field_disturbed"] = factory.createScalar(currentElement_cs_mag_field_disturbed);
    // cs_fixed_wing
    auto currentElement_cs_fixed_wing = (msg + ctr)->cs_fixed_wing;
    outArray[ctr]["cs_fixed_wing"] = factory.createScalar(currentElement_cs_fixed_wing);
    // cs_mag_fault
    auto currentElement_cs_mag_fault = (msg + ctr)->cs_mag_fault;
    outArray[ctr]["cs_mag_fault"] = factory.createScalar(currentElement_cs_mag_fault);
    // cs_fuse_aspd
    auto currentElement_cs_fuse_aspd = (msg + ctr)->cs_fuse_aspd;
    outArray[ctr]["cs_fuse_aspd"] = factory.createScalar(currentElement_cs_fuse_aspd);
    // cs_gnd_effect
    auto currentElement_cs_gnd_effect = (msg + ctr)->cs_gnd_effect;
    outArray[ctr]["cs_gnd_effect"] = factory.createScalar(currentElement_cs_gnd_effect);
    // cs_rng_stuck
    auto currentElement_cs_rng_stuck = (msg + ctr)->cs_rng_stuck;
    outArray[ctr]["cs_rng_stuck"] = factory.createScalar(currentElement_cs_rng_stuck);
    // cs_gnss_yaw
    auto currentElement_cs_gnss_yaw = (msg + ctr)->cs_gnss_yaw;
    outArray[ctr]["cs_gnss_yaw"] = factory.createScalar(currentElement_cs_gnss_yaw);
    // cs_mag_aligned_in_flight
    auto currentElement_cs_mag_aligned_in_flight = (msg + ctr)->cs_mag_aligned_in_flight;
    outArray[ctr]["cs_mag_aligned_in_flight"] = factory.createScalar(currentElement_cs_mag_aligned_in_flight);
    // cs_ev_vel
    auto currentElement_cs_ev_vel = (msg + ctr)->cs_ev_vel;
    outArray[ctr]["cs_ev_vel"] = factory.createScalar(currentElement_cs_ev_vel);
    // cs_synthetic_mag_z
    auto currentElement_cs_synthetic_mag_z = (msg + ctr)->cs_synthetic_mag_z;
    outArray[ctr]["cs_synthetic_mag_z"] = factory.createScalar(currentElement_cs_synthetic_mag_z);
    // cs_vehicle_at_rest
    auto currentElement_cs_vehicle_at_rest = (msg + ctr)->cs_vehicle_at_rest;
    outArray[ctr]["cs_vehicle_at_rest"] = factory.createScalar(currentElement_cs_vehicle_at_rest);
    // cs_gnss_yaw_fault
    auto currentElement_cs_gnss_yaw_fault = (msg + ctr)->cs_gnss_yaw_fault;
    outArray[ctr]["cs_gnss_yaw_fault"] = factory.createScalar(currentElement_cs_gnss_yaw_fault);
    // cs_rng_fault
    auto currentElement_cs_rng_fault = (msg + ctr)->cs_rng_fault;
    outArray[ctr]["cs_rng_fault"] = factory.createScalar(currentElement_cs_rng_fault);
    // cs_inertial_dead_reckoning
    auto currentElement_cs_inertial_dead_reckoning = (msg + ctr)->cs_inertial_dead_reckoning;
    outArray[ctr]["cs_inertial_dead_reckoning"] = factory.createScalar(currentElement_cs_inertial_dead_reckoning);
    // cs_wind_dead_reckoning
    auto currentElement_cs_wind_dead_reckoning = (msg + ctr)->cs_wind_dead_reckoning;
    outArray[ctr]["cs_wind_dead_reckoning"] = factory.createScalar(currentElement_cs_wind_dead_reckoning);
    // cs_rng_kin_consistent
    auto currentElement_cs_rng_kin_consistent = (msg + ctr)->cs_rng_kin_consistent;
    outArray[ctr]["cs_rng_kin_consistent"] = factory.createScalar(currentElement_cs_rng_kin_consistent);
    // cs_fake_pos
    auto currentElement_cs_fake_pos = (msg + ctr)->cs_fake_pos;
    outArray[ctr]["cs_fake_pos"] = factory.createScalar(currentElement_cs_fake_pos);
    // cs_fake_hgt
    auto currentElement_cs_fake_hgt = (msg + ctr)->cs_fake_hgt;
    outArray[ctr]["cs_fake_hgt"] = factory.createScalar(currentElement_cs_fake_hgt);
    // cs_gravity_vector
    auto currentElement_cs_gravity_vector = (msg + ctr)->cs_gravity_vector;
    outArray[ctr]["cs_gravity_vector"] = factory.createScalar(currentElement_cs_gravity_vector);
    // cs_mag
    auto currentElement_cs_mag = (msg + ctr)->cs_mag;
    outArray[ctr]["cs_mag"] = factory.createScalar(currentElement_cs_mag);
    // cs_ev_yaw_fault
    auto currentElement_cs_ev_yaw_fault = (msg + ctr)->cs_ev_yaw_fault;
    outArray[ctr]["cs_ev_yaw_fault"] = factory.createScalar(currentElement_cs_ev_yaw_fault);
    // cs_mag_heading_consistent
    auto currentElement_cs_mag_heading_consistent = (msg + ctr)->cs_mag_heading_consistent;
    outArray[ctr]["cs_mag_heading_consistent"] = factory.createScalar(currentElement_cs_mag_heading_consistent);
    // cs_aux_gpos
    auto currentElement_cs_aux_gpos = (msg + ctr)->cs_aux_gpos;
    outArray[ctr]["cs_aux_gpos"] = factory.createScalar(currentElement_cs_aux_gpos);
    // cs_rng_terrain
    auto currentElement_cs_rng_terrain = (msg + ctr)->cs_rng_terrain;
    outArray[ctr]["cs_rng_terrain"] = factory.createScalar(currentElement_cs_rng_terrain);
    // cs_opt_flow_terrain
    auto currentElement_cs_opt_flow_terrain = (msg + ctr)->cs_opt_flow_terrain;
    outArray[ctr]["cs_opt_flow_terrain"] = factory.createScalar(currentElement_cs_opt_flow_terrain);
    // cs_valid_fake_pos
    auto currentElement_cs_valid_fake_pos = (msg + ctr)->cs_valid_fake_pos;
    outArray[ctr]["cs_valid_fake_pos"] = factory.createScalar(currentElement_cs_valid_fake_pos);
    // cs_constant_pos
    auto currentElement_cs_constant_pos = (msg + ctr)->cs_constant_pos;
    outArray[ctr]["cs_constant_pos"] = factory.createScalar(currentElement_cs_constant_pos);
    // fault_status_changes
    auto currentElement_fault_status_changes = (msg + ctr)->fault_status_changes;
    outArray[ctr]["fault_status_changes"] = factory.createScalar(currentElement_fault_status_changes);
    // fs_bad_mag_x
    auto currentElement_fs_bad_mag_x = (msg + ctr)->fs_bad_mag_x;
    outArray[ctr]["fs_bad_mag_x"] = factory.createScalar(currentElement_fs_bad_mag_x);
    // fs_bad_mag_y
    auto currentElement_fs_bad_mag_y = (msg + ctr)->fs_bad_mag_y;
    outArray[ctr]["fs_bad_mag_y"] = factory.createScalar(currentElement_fs_bad_mag_y);
    // fs_bad_mag_z
    auto currentElement_fs_bad_mag_z = (msg + ctr)->fs_bad_mag_z;
    outArray[ctr]["fs_bad_mag_z"] = factory.createScalar(currentElement_fs_bad_mag_z);
    // fs_bad_hdg
    auto currentElement_fs_bad_hdg = (msg + ctr)->fs_bad_hdg;
    outArray[ctr]["fs_bad_hdg"] = factory.createScalar(currentElement_fs_bad_hdg);
    // fs_bad_mag_decl
    auto currentElement_fs_bad_mag_decl = (msg + ctr)->fs_bad_mag_decl;
    outArray[ctr]["fs_bad_mag_decl"] = factory.createScalar(currentElement_fs_bad_mag_decl);
    // fs_bad_airspeed
    auto currentElement_fs_bad_airspeed = (msg + ctr)->fs_bad_airspeed;
    outArray[ctr]["fs_bad_airspeed"] = factory.createScalar(currentElement_fs_bad_airspeed);
    // fs_bad_sideslip
    auto currentElement_fs_bad_sideslip = (msg + ctr)->fs_bad_sideslip;
    outArray[ctr]["fs_bad_sideslip"] = factory.createScalar(currentElement_fs_bad_sideslip);
    // fs_bad_optflow_x
    auto currentElement_fs_bad_optflow_x = (msg + ctr)->fs_bad_optflow_x;
    outArray[ctr]["fs_bad_optflow_x"] = factory.createScalar(currentElement_fs_bad_optflow_x);
    // fs_bad_optflow_y
    auto currentElement_fs_bad_optflow_y = (msg + ctr)->fs_bad_optflow_y;
    outArray[ctr]["fs_bad_optflow_y"] = factory.createScalar(currentElement_fs_bad_optflow_y);
    // fs_bad_acc_vertical
    auto currentElement_fs_bad_acc_vertical = (msg + ctr)->fs_bad_acc_vertical;
    outArray[ctr]["fs_bad_acc_vertical"] = factory.createScalar(currentElement_fs_bad_acc_vertical);
    // fs_bad_acc_clipping
    auto currentElement_fs_bad_acc_clipping = (msg + ctr)->fs_bad_acc_clipping;
    outArray[ctr]["fs_bad_acc_clipping"] = factory.createScalar(currentElement_fs_bad_acc_clipping);
    // innovation_fault_status_changes
    auto currentElement_innovation_fault_status_changes = (msg + ctr)->innovation_fault_status_changes;
    outArray[ctr]["innovation_fault_status_changes"] = factory.createScalar(currentElement_innovation_fault_status_changes);
    // reject_hor_vel
    auto currentElement_reject_hor_vel = (msg + ctr)->reject_hor_vel;
    outArray[ctr]["reject_hor_vel"] = factory.createScalar(currentElement_reject_hor_vel);
    // reject_ver_vel
    auto currentElement_reject_ver_vel = (msg + ctr)->reject_ver_vel;
    outArray[ctr]["reject_ver_vel"] = factory.createScalar(currentElement_reject_ver_vel);
    // reject_hor_pos
    auto currentElement_reject_hor_pos = (msg + ctr)->reject_hor_pos;
    outArray[ctr]["reject_hor_pos"] = factory.createScalar(currentElement_reject_hor_pos);
    // reject_ver_pos
    auto currentElement_reject_ver_pos = (msg + ctr)->reject_ver_pos;
    outArray[ctr]["reject_ver_pos"] = factory.createScalar(currentElement_reject_ver_pos);
    // reject_yaw
    auto currentElement_reject_yaw = (msg + ctr)->reject_yaw;
    outArray[ctr]["reject_yaw"] = factory.createScalar(currentElement_reject_yaw);
    // reject_airspeed
    auto currentElement_reject_airspeed = (msg + ctr)->reject_airspeed;
    outArray[ctr]["reject_airspeed"] = factory.createScalar(currentElement_reject_airspeed);
    // reject_sideslip
    auto currentElement_reject_sideslip = (msg + ctr)->reject_sideslip;
    outArray[ctr]["reject_sideslip"] = factory.createScalar(currentElement_reject_sideslip);
    // reject_hagl
    auto currentElement_reject_hagl = (msg + ctr)->reject_hagl;
    outArray[ctr]["reject_hagl"] = factory.createScalar(currentElement_reject_hagl);
    // reject_optflow_x
    auto currentElement_reject_optflow_x = (msg + ctr)->reject_optflow_x;
    outArray[ctr]["reject_optflow_x"] = factory.createScalar(currentElement_reject_optflow_x);
    // reject_optflow_y
    auto currentElement_reject_optflow_y = (msg + ctr)->reject_optflow_y;
    outArray[ctr]["reject_optflow_y"] = factory.createScalar(currentElement_reject_optflow_y);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_EstimatorStatusFlags_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_EstimatorStatusFlags_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_EstimatorStatusFlags_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::EstimatorStatusFlags,ros2_px4_msgs_msg_EstimatorStatusFlags_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_EstimatorStatusFlags_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::EstimatorStatusFlags,ros2_px4_msgs_msg_EstimatorStatusFlags_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_EstimatorStatusFlags_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::EstimatorStatusFlags>();
    ros2_px4_msgs_msg_EstimatorStatusFlags_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_EstimatorStatusFlags_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_EstimatorStatusFlags_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::EstimatorStatusFlags*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_EstimatorStatusFlags_common, MATLABROS2MsgInterface<px4_msgs::msg::EstimatorStatusFlags>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_EstimatorStatusFlags_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER