// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/VehicleLocalPosition
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
#include "px4_msgs/msg/vehicle_local_position.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_VehicleLocalPosition_common : public MATLABROS2MsgInterface<px4_msgs::msg::VehicleLocalPosition> {
  public:
    virtual ~ros2_px4_msgs_msg_VehicleLocalPosition_common(){}
    virtual void copy_from_struct(px4_msgs::msg::VehicleLocalPosition* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleLocalPosition* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_VehicleLocalPosition_common::copy_from_struct(px4_msgs::msg::VehicleLocalPosition* msg, const matlab::data::Struct& arr,
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
        //xy_valid
        const matlab::data::TypedArray<bool> xy_valid_arr = arr["xy_valid"];
        msg->xy_valid = xy_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'xy_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'xy_valid' is wrong type; expected a logical.");
    }
    try {
        //z_valid
        const matlab::data::TypedArray<bool> z_valid_arr = arr["z_valid"];
        msg->z_valid = z_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'z_valid' is wrong type; expected a logical.");
    }
    try {
        //v_xy_valid
        const matlab::data::TypedArray<bool> v_xy_valid_arr = arr["v_xy_valid"];
        msg->v_xy_valid = v_xy_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'v_xy_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'v_xy_valid' is wrong type; expected a logical.");
    }
    try {
        //v_z_valid
        const matlab::data::TypedArray<bool> v_z_valid_arr = arr["v_z_valid"];
        msg->v_z_valid = v_z_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'v_z_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'v_z_valid' is wrong type; expected a logical.");
    }
    try {
        //x
        const matlab::data::TypedArray<float> x_arr = arr["x"];
        msg->x = x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a single.");
    }
    try {
        //y
        const matlab::data::TypedArray<float> y_arr = arr["y"];
        msg->y = y_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a single.");
    }
    try {
        //z
        const matlab::data::TypedArray<float> z_arr = arr["z"];
        msg->z = z_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a single.");
    }
    try {
        //delta_xy
        const matlab::data::TypedArray<float> delta_xy_arr = arr["delta_xy"];
        size_t nelem = 2;
        	std::copy(delta_xy_arr.begin(), delta_xy_arr.begin()+nelem, msg->delta_xy.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'delta_xy' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'delta_xy' is wrong type; expected a single.");
    }
    try {
        //xy_reset_counter
        const matlab::data::TypedArray<uint8_t> xy_reset_counter_arr = arr["xy_reset_counter"];
        msg->xy_reset_counter = xy_reset_counter_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'xy_reset_counter' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'xy_reset_counter' is wrong type; expected a uint8.");
    }
    try {
        //delta_z
        const matlab::data::TypedArray<float> delta_z_arr = arr["delta_z"];
        msg->delta_z = delta_z_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'delta_z' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'delta_z' is wrong type; expected a single.");
    }
    try {
        //z_reset_counter
        const matlab::data::TypedArray<uint8_t> z_reset_counter_arr = arr["z_reset_counter"];
        msg->z_reset_counter = z_reset_counter_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z_reset_counter' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'z_reset_counter' is wrong type; expected a uint8.");
    }
    try {
        //vx
        const matlab::data::TypedArray<float> vx_arr = arr["vx"];
        msg->vx = vx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vx' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vx' is wrong type; expected a single.");
    }
    try {
        //vy
        const matlab::data::TypedArray<float> vy_arr = arr["vy"];
        msg->vy = vy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vy' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vy' is wrong type; expected a single.");
    }
    try {
        //vz
        const matlab::data::TypedArray<float> vz_arr = arr["vz"];
        msg->vz = vz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vz' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vz' is wrong type; expected a single.");
    }
    try {
        //z_deriv
        const matlab::data::TypedArray<float> z_deriv_arr = arr["z_deriv"];
        msg->z_deriv = z_deriv_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z_deriv' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'z_deriv' is wrong type; expected a single.");
    }
    try {
        //delta_vxy
        const matlab::data::TypedArray<float> delta_vxy_arr = arr["delta_vxy"];
        size_t nelem = 2;
        	std::copy(delta_vxy_arr.begin(), delta_vxy_arr.begin()+nelem, msg->delta_vxy.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'delta_vxy' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'delta_vxy' is wrong type; expected a single.");
    }
    try {
        //vxy_reset_counter
        const matlab::data::TypedArray<uint8_t> vxy_reset_counter_arr = arr["vxy_reset_counter"];
        msg->vxy_reset_counter = vxy_reset_counter_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vxy_reset_counter' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vxy_reset_counter' is wrong type; expected a uint8.");
    }
    try {
        //delta_vz
        const matlab::data::TypedArray<float> delta_vz_arr = arr["delta_vz"];
        msg->delta_vz = delta_vz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'delta_vz' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'delta_vz' is wrong type; expected a single.");
    }
    try {
        //vz_reset_counter
        const matlab::data::TypedArray<uint8_t> vz_reset_counter_arr = arr["vz_reset_counter"];
        msg->vz_reset_counter = vz_reset_counter_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vz_reset_counter' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vz_reset_counter' is wrong type; expected a uint8.");
    }
    try {
        //ax
        const matlab::data::TypedArray<float> ax_arr = arr["ax"];
        msg->ax = ax_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ax' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ax' is wrong type; expected a single.");
    }
    try {
        //ay
        const matlab::data::TypedArray<float> ay_arr = arr["ay"];
        msg->ay = ay_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ay' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ay' is wrong type; expected a single.");
    }
    try {
        //az
        const matlab::data::TypedArray<float> az_arr = arr["az"];
        msg->az = az_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'az' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'az' is wrong type; expected a single.");
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
        //heading_var
        const matlab::data::TypedArray<float> heading_var_arr = arr["heading_var"];
        msg->heading_var = heading_var_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heading_var' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heading_var' is wrong type; expected a single.");
    }
    try {
        //unaided_heading
        const matlab::data::TypedArray<float> unaided_heading_arr = arr["unaided_heading"];
        msg->unaided_heading = unaided_heading_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'unaided_heading' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'unaided_heading' is wrong type; expected a single.");
    }
    try {
        //delta_heading
        const matlab::data::TypedArray<float> delta_heading_arr = arr["delta_heading"];
        msg->delta_heading = delta_heading_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'delta_heading' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'delta_heading' is wrong type; expected a single.");
    }
    try {
        //heading_reset_counter
        const matlab::data::TypedArray<uint8_t> heading_reset_counter_arr = arr["heading_reset_counter"];
        msg->heading_reset_counter = heading_reset_counter_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heading_reset_counter' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heading_reset_counter' is wrong type; expected a uint8.");
    }
    try {
        //heading_good_for_control
        const matlab::data::TypedArray<bool> heading_good_for_control_arr = arr["heading_good_for_control"];
        msg->heading_good_for_control = heading_good_for_control_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heading_good_for_control' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heading_good_for_control' is wrong type; expected a logical.");
    }
    try {
        //tilt_var
        const matlab::data::TypedArray<float> tilt_var_arr = arr["tilt_var"];
        msg->tilt_var = tilt_var_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'tilt_var' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'tilt_var' is wrong type; expected a single.");
    }
    try {
        //xy_global
        const matlab::data::TypedArray<bool> xy_global_arr = arr["xy_global"];
        msg->xy_global = xy_global_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'xy_global' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'xy_global' is wrong type; expected a logical.");
    }
    try {
        //z_global
        const matlab::data::TypedArray<bool> z_global_arr = arr["z_global"];
        msg->z_global = z_global_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z_global' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'z_global' is wrong type; expected a logical.");
    }
    try {
        //ref_timestamp
        const matlab::data::TypedArray<uint64_t> ref_timestamp_arr = arr["ref_timestamp"];
        msg->ref_timestamp = ref_timestamp_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ref_timestamp' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ref_timestamp' is wrong type; expected a uint64.");
    }
    try {
        //ref_lat
        const matlab::data::TypedArray<double> ref_lat_arr = arr["ref_lat"];
        msg->ref_lat = ref_lat_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ref_lat' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ref_lat' is wrong type; expected a double.");
    }
    try {
        //ref_lon
        const matlab::data::TypedArray<double> ref_lon_arr = arr["ref_lon"];
        msg->ref_lon = ref_lon_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ref_lon' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ref_lon' is wrong type; expected a double.");
    }
    try {
        //ref_alt
        const matlab::data::TypedArray<float> ref_alt_arr = arr["ref_alt"];
        msg->ref_alt = ref_alt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ref_alt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ref_alt' is wrong type; expected a single.");
    }
    try {
        //dist_bottom_valid
        const matlab::data::TypedArray<bool> dist_bottom_valid_arr = arr["dist_bottom_valid"];
        msg->dist_bottom_valid = dist_bottom_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'dist_bottom_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'dist_bottom_valid' is wrong type; expected a logical.");
    }
    try {
        //dist_bottom
        const matlab::data::TypedArray<float> dist_bottom_arr = arr["dist_bottom"];
        msg->dist_bottom = dist_bottom_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'dist_bottom' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'dist_bottom' is wrong type; expected a single.");
    }
    try {
        //dist_bottom_var
        const matlab::data::TypedArray<float> dist_bottom_var_arr = arr["dist_bottom_var"];
        msg->dist_bottom_var = dist_bottom_var_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'dist_bottom_var' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'dist_bottom_var' is wrong type; expected a single.");
    }
    try {
        //delta_dist_bottom
        const matlab::data::TypedArray<float> delta_dist_bottom_arr = arr["delta_dist_bottom"];
        msg->delta_dist_bottom = delta_dist_bottom_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'delta_dist_bottom' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'delta_dist_bottom' is wrong type; expected a single.");
    }
    try {
        //dist_bottom_reset_counter
        const matlab::data::TypedArray<uint8_t> dist_bottom_reset_counter_arr = arr["dist_bottom_reset_counter"];
        msg->dist_bottom_reset_counter = dist_bottom_reset_counter_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'dist_bottom_reset_counter' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'dist_bottom_reset_counter' is wrong type; expected a uint8.");
    }
    try {
        //dist_bottom_sensor_bitfield
        const matlab::data::TypedArray<uint8_t> dist_bottom_sensor_bitfield_arr = arr["dist_bottom_sensor_bitfield"];
        msg->dist_bottom_sensor_bitfield = dist_bottom_sensor_bitfield_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'dist_bottom_sensor_bitfield' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'dist_bottom_sensor_bitfield' is wrong type; expected a uint8.");
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
        //evh
        const matlab::data::TypedArray<float> evh_arr = arr["evh"];
        msg->evh = evh_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'evh' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'evh' is wrong type; expected a single.");
    }
    try {
        //evv
        const matlab::data::TypedArray<float> evv_arr = arr["evv"];
        msg->evv = evv_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'evv' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'evv' is wrong type; expected a single.");
    }
    try {
        //dead_reckoning
        const matlab::data::TypedArray<bool> dead_reckoning_arr = arr["dead_reckoning"];
        msg->dead_reckoning = dead_reckoning_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'dead_reckoning' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'dead_reckoning' is wrong type; expected a logical.");
    }
    try {
        //vxy_max
        const matlab::data::TypedArray<float> vxy_max_arr = arr["vxy_max"];
        msg->vxy_max = vxy_max_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vxy_max' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vxy_max' is wrong type; expected a single.");
    }
    try {
        //vz_max
        const matlab::data::TypedArray<float> vz_max_arr = arr["vz_max"];
        msg->vz_max = vz_max_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vz_max' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vz_max' is wrong type; expected a single.");
    }
    try {
        //hagl_min
        const matlab::data::TypedArray<float> hagl_min_arr = arr["hagl_min"];
        msg->hagl_min = hagl_min_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'hagl_min' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'hagl_min' is wrong type; expected a single.");
    }
    try {
        //hagl_max_z
        const matlab::data::TypedArray<float> hagl_max_z_arr = arr["hagl_max_z"];
        msg->hagl_max_z = hagl_max_z_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'hagl_max_z' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'hagl_max_z' is wrong type; expected a single.");
    }
    try {
        //hagl_max_xy
        const matlab::data::TypedArray<float> hagl_max_xy_arr = arr["hagl_max_xy"];
        msg->hagl_max_xy = hagl_max_xy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'hagl_max_xy' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'hagl_max_xy' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_VehicleLocalPosition_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleLocalPosition* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","MESSAGE_VERSION","timestamp","timestamp_sample","xy_valid","z_valid","v_xy_valid","v_z_valid","x","y","z","delta_xy","xy_reset_counter","delta_z","z_reset_counter","vx","vy","vz","z_deriv","delta_vxy","vxy_reset_counter","delta_vz","vz_reset_counter","ax","ay","az","heading","heading_var","unaided_heading","delta_heading","heading_reset_counter","heading_good_for_control","tilt_var","xy_global","z_global","ref_timestamp","ref_lat","ref_lon","ref_alt","dist_bottom_valid","dist_bottom","dist_bottom_var","delta_dist_bottom","dist_bottom_reset_counter","dist_bottom_sensor_bitfield","DIST_BOTTOM_SENSOR_NONE","DIST_BOTTOM_SENSOR_RANGE","DIST_BOTTOM_SENSOR_FLOW","eph","epv","evh","evv","dead_reckoning","vxy_max","vz_max","hagl_min","hagl_max_z","hagl_max_xy"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/VehicleLocalPosition");
    // MESSAGE_VERSION
    auto currentElement_MESSAGE_VERSION = (msg + ctr)->MESSAGE_VERSION;
    outArray[ctr]["MESSAGE_VERSION"] = factory.createScalar(currentElement_MESSAGE_VERSION);
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // xy_valid
    auto currentElement_xy_valid = (msg + ctr)->xy_valid;
    outArray[ctr]["xy_valid"] = factory.createScalar(currentElement_xy_valid);
    // z_valid
    auto currentElement_z_valid = (msg + ctr)->z_valid;
    outArray[ctr]["z_valid"] = factory.createScalar(currentElement_z_valid);
    // v_xy_valid
    auto currentElement_v_xy_valid = (msg + ctr)->v_xy_valid;
    outArray[ctr]["v_xy_valid"] = factory.createScalar(currentElement_v_xy_valid);
    // v_z_valid
    auto currentElement_v_z_valid = (msg + ctr)->v_z_valid;
    outArray[ctr]["v_z_valid"] = factory.createScalar(currentElement_v_z_valid);
    // x
    auto currentElement_x = (msg + ctr)->x;
    outArray[ctr]["x"] = factory.createScalar(currentElement_x);
    // y
    auto currentElement_y = (msg + ctr)->y;
    outArray[ctr]["y"] = factory.createScalar(currentElement_y);
    // z
    auto currentElement_z = (msg + ctr)->z;
    outArray[ctr]["z"] = factory.createScalar(currentElement_z);
    // delta_xy
    auto currentElement_delta_xy = (msg + ctr)->delta_xy;
    outArray[ctr]["delta_xy"] = factory.createArray<px4_msgs::msg::VehicleLocalPosition::_delta_xy_type::const_iterator, float>({currentElement_delta_xy.size(), 1}, currentElement_delta_xy.begin(), currentElement_delta_xy.end());
    // xy_reset_counter
    auto currentElement_xy_reset_counter = (msg + ctr)->xy_reset_counter;
    outArray[ctr]["xy_reset_counter"] = factory.createScalar(currentElement_xy_reset_counter);
    // delta_z
    auto currentElement_delta_z = (msg + ctr)->delta_z;
    outArray[ctr]["delta_z"] = factory.createScalar(currentElement_delta_z);
    // z_reset_counter
    auto currentElement_z_reset_counter = (msg + ctr)->z_reset_counter;
    outArray[ctr]["z_reset_counter"] = factory.createScalar(currentElement_z_reset_counter);
    // vx
    auto currentElement_vx = (msg + ctr)->vx;
    outArray[ctr]["vx"] = factory.createScalar(currentElement_vx);
    // vy
    auto currentElement_vy = (msg + ctr)->vy;
    outArray[ctr]["vy"] = factory.createScalar(currentElement_vy);
    // vz
    auto currentElement_vz = (msg + ctr)->vz;
    outArray[ctr]["vz"] = factory.createScalar(currentElement_vz);
    // z_deriv
    auto currentElement_z_deriv = (msg + ctr)->z_deriv;
    outArray[ctr]["z_deriv"] = factory.createScalar(currentElement_z_deriv);
    // delta_vxy
    auto currentElement_delta_vxy = (msg + ctr)->delta_vxy;
    outArray[ctr]["delta_vxy"] = factory.createArray<px4_msgs::msg::VehicleLocalPosition::_delta_vxy_type::const_iterator, float>({currentElement_delta_vxy.size(), 1}, currentElement_delta_vxy.begin(), currentElement_delta_vxy.end());
    // vxy_reset_counter
    auto currentElement_vxy_reset_counter = (msg + ctr)->vxy_reset_counter;
    outArray[ctr]["vxy_reset_counter"] = factory.createScalar(currentElement_vxy_reset_counter);
    // delta_vz
    auto currentElement_delta_vz = (msg + ctr)->delta_vz;
    outArray[ctr]["delta_vz"] = factory.createScalar(currentElement_delta_vz);
    // vz_reset_counter
    auto currentElement_vz_reset_counter = (msg + ctr)->vz_reset_counter;
    outArray[ctr]["vz_reset_counter"] = factory.createScalar(currentElement_vz_reset_counter);
    // ax
    auto currentElement_ax = (msg + ctr)->ax;
    outArray[ctr]["ax"] = factory.createScalar(currentElement_ax);
    // ay
    auto currentElement_ay = (msg + ctr)->ay;
    outArray[ctr]["ay"] = factory.createScalar(currentElement_ay);
    // az
    auto currentElement_az = (msg + ctr)->az;
    outArray[ctr]["az"] = factory.createScalar(currentElement_az);
    // heading
    auto currentElement_heading = (msg + ctr)->heading;
    outArray[ctr]["heading"] = factory.createScalar(currentElement_heading);
    // heading_var
    auto currentElement_heading_var = (msg + ctr)->heading_var;
    outArray[ctr]["heading_var"] = factory.createScalar(currentElement_heading_var);
    // unaided_heading
    auto currentElement_unaided_heading = (msg + ctr)->unaided_heading;
    outArray[ctr]["unaided_heading"] = factory.createScalar(currentElement_unaided_heading);
    // delta_heading
    auto currentElement_delta_heading = (msg + ctr)->delta_heading;
    outArray[ctr]["delta_heading"] = factory.createScalar(currentElement_delta_heading);
    // heading_reset_counter
    auto currentElement_heading_reset_counter = (msg + ctr)->heading_reset_counter;
    outArray[ctr]["heading_reset_counter"] = factory.createScalar(currentElement_heading_reset_counter);
    // heading_good_for_control
    auto currentElement_heading_good_for_control = (msg + ctr)->heading_good_for_control;
    outArray[ctr]["heading_good_for_control"] = factory.createScalar(currentElement_heading_good_for_control);
    // tilt_var
    auto currentElement_tilt_var = (msg + ctr)->tilt_var;
    outArray[ctr]["tilt_var"] = factory.createScalar(currentElement_tilt_var);
    // xy_global
    auto currentElement_xy_global = (msg + ctr)->xy_global;
    outArray[ctr]["xy_global"] = factory.createScalar(currentElement_xy_global);
    // z_global
    auto currentElement_z_global = (msg + ctr)->z_global;
    outArray[ctr]["z_global"] = factory.createScalar(currentElement_z_global);
    // ref_timestamp
    auto currentElement_ref_timestamp = (msg + ctr)->ref_timestamp;
    outArray[ctr]["ref_timestamp"] = factory.createScalar(currentElement_ref_timestamp);
    // ref_lat
    auto currentElement_ref_lat = (msg + ctr)->ref_lat;
    outArray[ctr]["ref_lat"] = factory.createScalar(currentElement_ref_lat);
    // ref_lon
    auto currentElement_ref_lon = (msg + ctr)->ref_lon;
    outArray[ctr]["ref_lon"] = factory.createScalar(currentElement_ref_lon);
    // ref_alt
    auto currentElement_ref_alt = (msg + ctr)->ref_alt;
    outArray[ctr]["ref_alt"] = factory.createScalar(currentElement_ref_alt);
    // dist_bottom_valid
    auto currentElement_dist_bottom_valid = (msg + ctr)->dist_bottom_valid;
    outArray[ctr]["dist_bottom_valid"] = factory.createScalar(currentElement_dist_bottom_valid);
    // dist_bottom
    auto currentElement_dist_bottom = (msg + ctr)->dist_bottom;
    outArray[ctr]["dist_bottom"] = factory.createScalar(currentElement_dist_bottom);
    // dist_bottom_var
    auto currentElement_dist_bottom_var = (msg + ctr)->dist_bottom_var;
    outArray[ctr]["dist_bottom_var"] = factory.createScalar(currentElement_dist_bottom_var);
    // delta_dist_bottom
    auto currentElement_delta_dist_bottom = (msg + ctr)->delta_dist_bottom;
    outArray[ctr]["delta_dist_bottom"] = factory.createScalar(currentElement_delta_dist_bottom);
    // dist_bottom_reset_counter
    auto currentElement_dist_bottom_reset_counter = (msg + ctr)->dist_bottom_reset_counter;
    outArray[ctr]["dist_bottom_reset_counter"] = factory.createScalar(currentElement_dist_bottom_reset_counter);
    // dist_bottom_sensor_bitfield
    auto currentElement_dist_bottom_sensor_bitfield = (msg + ctr)->dist_bottom_sensor_bitfield;
    outArray[ctr]["dist_bottom_sensor_bitfield"] = factory.createScalar(currentElement_dist_bottom_sensor_bitfield);
    // DIST_BOTTOM_SENSOR_NONE
    auto currentElement_DIST_BOTTOM_SENSOR_NONE = (msg + ctr)->DIST_BOTTOM_SENSOR_NONE;
    outArray[ctr]["DIST_BOTTOM_SENSOR_NONE"] = factory.createScalar(currentElement_DIST_BOTTOM_SENSOR_NONE);
    // DIST_BOTTOM_SENSOR_RANGE
    auto currentElement_DIST_BOTTOM_SENSOR_RANGE = (msg + ctr)->DIST_BOTTOM_SENSOR_RANGE;
    outArray[ctr]["DIST_BOTTOM_SENSOR_RANGE"] = factory.createScalar(currentElement_DIST_BOTTOM_SENSOR_RANGE);
    // DIST_BOTTOM_SENSOR_FLOW
    auto currentElement_DIST_BOTTOM_SENSOR_FLOW = (msg + ctr)->DIST_BOTTOM_SENSOR_FLOW;
    outArray[ctr]["DIST_BOTTOM_SENSOR_FLOW"] = factory.createScalar(currentElement_DIST_BOTTOM_SENSOR_FLOW);
    // eph
    auto currentElement_eph = (msg + ctr)->eph;
    outArray[ctr]["eph"] = factory.createScalar(currentElement_eph);
    // epv
    auto currentElement_epv = (msg + ctr)->epv;
    outArray[ctr]["epv"] = factory.createScalar(currentElement_epv);
    // evh
    auto currentElement_evh = (msg + ctr)->evh;
    outArray[ctr]["evh"] = factory.createScalar(currentElement_evh);
    // evv
    auto currentElement_evv = (msg + ctr)->evv;
    outArray[ctr]["evv"] = factory.createScalar(currentElement_evv);
    // dead_reckoning
    auto currentElement_dead_reckoning = (msg + ctr)->dead_reckoning;
    outArray[ctr]["dead_reckoning"] = factory.createScalar(currentElement_dead_reckoning);
    // vxy_max
    auto currentElement_vxy_max = (msg + ctr)->vxy_max;
    outArray[ctr]["vxy_max"] = factory.createScalar(currentElement_vxy_max);
    // vz_max
    auto currentElement_vz_max = (msg + ctr)->vz_max;
    outArray[ctr]["vz_max"] = factory.createScalar(currentElement_vz_max);
    // hagl_min
    auto currentElement_hagl_min = (msg + ctr)->hagl_min;
    outArray[ctr]["hagl_min"] = factory.createScalar(currentElement_hagl_min);
    // hagl_max_z
    auto currentElement_hagl_max_z = (msg + ctr)->hagl_max_z;
    outArray[ctr]["hagl_max_z"] = factory.createScalar(currentElement_hagl_max_z);
    // hagl_max_xy
    auto currentElement_hagl_max_xy = (msg + ctr)->hagl_max_xy;
    outArray[ctr]["hagl_max_xy"] = factory.createScalar(currentElement_hagl_max_xy);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_VehicleLocalPosition_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_VehicleLocalPosition_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_VehicleLocalPosition_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::VehicleLocalPosition,ros2_px4_msgs_msg_VehicleLocalPosition_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_VehicleLocalPosition_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::VehicleLocalPosition,ros2_px4_msgs_msg_VehicleLocalPosition_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_VehicleLocalPosition_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::VehicleLocalPosition>();
    ros2_px4_msgs_msg_VehicleLocalPosition_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_VehicleLocalPosition_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_VehicleLocalPosition_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::VehicleLocalPosition*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_VehicleLocalPosition_common, MATLABROS2MsgInterface<px4_msgs::msg::VehicleLocalPosition>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_VehicleLocalPosition_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER