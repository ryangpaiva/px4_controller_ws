// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/VehicleImuStatus
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
#include "px4_msgs/msg/vehicle_imu_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_VehicleImuStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::VehicleImuStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_VehicleImuStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::VehicleImuStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleImuStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_VehicleImuStatus_common::copy_from_struct(px4_msgs::msg::VehicleImuStatus* msg, const matlab::data::Struct& arr,
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
        //accel_clipping
        const matlab::data::TypedArray<uint32_t> accel_clipping_arr = arr["accel_clipping"];
        size_t nelem = 3;
        	std::copy(accel_clipping_arr.begin(), accel_clipping_arr.begin()+nelem, msg->accel_clipping.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_clipping' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_clipping' is wrong type; expected a uint32.");
    }
    try {
        //gyro_clipping
        const matlab::data::TypedArray<uint32_t> gyro_clipping_arr = arr["gyro_clipping"];
        size_t nelem = 3;
        	std::copy(gyro_clipping_arr.begin(), gyro_clipping_arr.begin()+nelem, msg->gyro_clipping.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_clipping' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_clipping' is wrong type; expected a uint32.");
    }
    try {
        //accel_error_count
        const matlab::data::TypedArray<uint32_t> accel_error_count_arr = arr["accel_error_count"];
        msg->accel_error_count = accel_error_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_error_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_error_count' is wrong type; expected a uint32.");
    }
    try {
        //gyro_error_count
        const matlab::data::TypedArray<uint32_t> gyro_error_count_arr = arr["gyro_error_count"];
        msg->gyro_error_count = gyro_error_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_error_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_error_count' is wrong type; expected a uint32.");
    }
    try {
        //accel_rate_hz
        const matlab::data::TypedArray<float> accel_rate_hz_arr = arr["accel_rate_hz"];
        msg->accel_rate_hz = accel_rate_hz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_rate_hz' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_rate_hz' is wrong type; expected a single.");
    }
    try {
        //gyro_rate_hz
        const matlab::data::TypedArray<float> gyro_rate_hz_arr = arr["gyro_rate_hz"];
        msg->gyro_rate_hz = gyro_rate_hz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_rate_hz' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_rate_hz' is wrong type; expected a single.");
    }
    try {
        //accel_raw_rate_hz
        const matlab::data::TypedArray<float> accel_raw_rate_hz_arr = arr["accel_raw_rate_hz"];
        msg->accel_raw_rate_hz = accel_raw_rate_hz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_raw_rate_hz' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_raw_rate_hz' is wrong type; expected a single.");
    }
    try {
        //gyro_raw_rate_hz
        const matlab::data::TypedArray<float> gyro_raw_rate_hz_arr = arr["gyro_raw_rate_hz"];
        msg->gyro_raw_rate_hz = gyro_raw_rate_hz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_raw_rate_hz' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_raw_rate_hz' is wrong type; expected a single.");
    }
    try {
        //accel_vibration_metric
        const matlab::data::TypedArray<float> accel_vibration_metric_arr = arr["accel_vibration_metric"];
        msg->accel_vibration_metric = accel_vibration_metric_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_vibration_metric' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_vibration_metric' is wrong type; expected a single.");
    }
    try {
        //gyro_vibration_metric
        const matlab::data::TypedArray<float> gyro_vibration_metric_arr = arr["gyro_vibration_metric"];
        msg->gyro_vibration_metric = gyro_vibration_metric_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_vibration_metric' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_vibration_metric' is wrong type; expected a single.");
    }
    try {
        //delta_angle_coning_metric
        const matlab::data::TypedArray<float> delta_angle_coning_metric_arr = arr["delta_angle_coning_metric"];
        msg->delta_angle_coning_metric = delta_angle_coning_metric_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'delta_angle_coning_metric' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'delta_angle_coning_metric' is wrong type; expected a single.");
    }
    try {
        //mean_accel
        const matlab::data::TypedArray<float> mean_accel_arr = arr["mean_accel"];
        size_t nelem = 3;
        	std::copy(mean_accel_arr.begin(), mean_accel_arr.begin()+nelem, msg->mean_accel.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mean_accel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mean_accel' is wrong type; expected a single.");
    }
    try {
        //mean_gyro
        const matlab::data::TypedArray<float> mean_gyro_arr = arr["mean_gyro"];
        size_t nelem = 3;
        	std::copy(mean_gyro_arr.begin(), mean_gyro_arr.begin()+nelem, msg->mean_gyro.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mean_gyro' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mean_gyro' is wrong type; expected a single.");
    }
    try {
        //var_accel
        const matlab::data::TypedArray<float> var_accel_arr = arr["var_accel"];
        size_t nelem = 3;
        	std::copy(var_accel_arr.begin(), var_accel_arr.begin()+nelem, msg->var_accel.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'var_accel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'var_accel' is wrong type; expected a single.");
    }
    try {
        //var_gyro
        const matlab::data::TypedArray<float> var_gyro_arr = arr["var_gyro"];
        size_t nelem = 3;
        	std::copy(var_gyro_arr.begin(), var_gyro_arr.begin()+nelem, msg->var_gyro.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'var_gyro' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'var_gyro' is wrong type; expected a single.");
    }
    try {
        //temperature_accel
        const matlab::data::TypedArray<float> temperature_accel_arr = arr["temperature_accel"];
        msg->temperature_accel = temperature_accel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'temperature_accel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'temperature_accel' is wrong type; expected a single.");
    }
    try {
        //temperature_gyro
        const matlab::data::TypedArray<float> temperature_gyro_arr = arr["temperature_gyro"];
        msg->temperature_gyro = temperature_gyro_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'temperature_gyro' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'temperature_gyro' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_VehicleImuStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleImuStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","accel_device_id","gyro_device_id","accel_clipping","gyro_clipping","accel_error_count","gyro_error_count","accel_rate_hz","gyro_rate_hz","accel_raw_rate_hz","gyro_raw_rate_hz","accel_vibration_metric","gyro_vibration_metric","delta_angle_coning_metric","mean_accel","mean_gyro","var_accel","var_gyro","temperature_accel","temperature_gyro"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/VehicleImuStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // accel_device_id
    auto currentElement_accel_device_id = (msg + ctr)->accel_device_id;
    outArray[ctr]["accel_device_id"] = factory.createScalar(currentElement_accel_device_id);
    // gyro_device_id
    auto currentElement_gyro_device_id = (msg + ctr)->gyro_device_id;
    outArray[ctr]["gyro_device_id"] = factory.createScalar(currentElement_gyro_device_id);
    // accel_clipping
    auto currentElement_accel_clipping = (msg + ctr)->accel_clipping;
    outArray[ctr]["accel_clipping"] = factory.createArray<px4_msgs::msg::VehicleImuStatus::_accel_clipping_type::const_iterator, uint32_t>({currentElement_accel_clipping.size(), 1}, currentElement_accel_clipping.begin(), currentElement_accel_clipping.end());
    // gyro_clipping
    auto currentElement_gyro_clipping = (msg + ctr)->gyro_clipping;
    outArray[ctr]["gyro_clipping"] = factory.createArray<px4_msgs::msg::VehicleImuStatus::_gyro_clipping_type::const_iterator, uint32_t>({currentElement_gyro_clipping.size(), 1}, currentElement_gyro_clipping.begin(), currentElement_gyro_clipping.end());
    // accel_error_count
    auto currentElement_accel_error_count = (msg + ctr)->accel_error_count;
    outArray[ctr]["accel_error_count"] = factory.createScalar(currentElement_accel_error_count);
    // gyro_error_count
    auto currentElement_gyro_error_count = (msg + ctr)->gyro_error_count;
    outArray[ctr]["gyro_error_count"] = factory.createScalar(currentElement_gyro_error_count);
    // accel_rate_hz
    auto currentElement_accel_rate_hz = (msg + ctr)->accel_rate_hz;
    outArray[ctr]["accel_rate_hz"] = factory.createScalar(currentElement_accel_rate_hz);
    // gyro_rate_hz
    auto currentElement_gyro_rate_hz = (msg + ctr)->gyro_rate_hz;
    outArray[ctr]["gyro_rate_hz"] = factory.createScalar(currentElement_gyro_rate_hz);
    // accel_raw_rate_hz
    auto currentElement_accel_raw_rate_hz = (msg + ctr)->accel_raw_rate_hz;
    outArray[ctr]["accel_raw_rate_hz"] = factory.createScalar(currentElement_accel_raw_rate_hz);
    // gyro_raw_rate_hz
    auto currentElement_gyro_raw_rate_hz = (msg + ctr)->gyro_raw_rate_hz;
    outArray[ctr]["gyro_raw_rate_hz"] = factory.createScalar(currentElement_gyro_raw_rate_hz);
    // accel_vibration_metric
    auto currentElement_accel_vibration_metric = (msg + ctr)->accel_vibration_metric;
    outArray[ctr]["accel_vibration_metric"] = factory.createScalar(currentElement_accel_vibration_metric);
    // gyro_vibration_metric
    auto currentElement_gyro_vibration_metric = (msg + ctr)->gyro_vibration_metric;
    outArray[ctr]["gyro_vibration_metric"] = factory.createScalar(currentElement_gyro_vibration_metric);
    // delta_angle_coning_metric
    auto currentElement_delta_angle_coning_metric = (msg + ctr)->delta_angle_coning_metric;
    outArray[ctr]["delta_angle_coning_metric"] = factory.createScalar(currentElement_delta_angle_coning_metric);
    // mean_accel
    auto currentElement_mean_accel = (msg + ctr)->mean_accel;
    outArray[ctr]["mean_accel"] = factory.createArray<px4_msgs::msg::VehicleImuStatus::_mean_accel_type::const_iterator, float>({currentElement_mean_accel.size(), 1}, currentElement_mean_accel.begin(), currentElement_mean_accel.end());
    // mean_gyro
    auto currentElement_mean_gyro = (msg + ctr)->mean_gyro;
    outArray[ctr]["mean_gyro"] = factory.createArray<px4_msgs::msg::VehicleImuStatus::_mean_gyro_type::const_iterator, float>({currentElement_mean_gyro.size(), 1}, currentElement_mean_gyro.begin(), currentElement_mean_gyro.end());
    // var_accel
    auto currentElement_var_accel = (msg + ctr)->var_accel;
    outArray[ctr]["var_accel"] = factory.createArray<px4_msgs::msg::VehicleImuStatus::_var_accel_type::const_iterator, float>({currentElement_var_accel.size(), 1}, currentElement_var_accel.begin(), currentElement_var_accel.end());
    // var_gyro
    auto currentElement_var_gyro = (msg + ctr)->var_gyro;
    outArray[ctr]["var_gyro"] = factory.createArray<px4_msgs::msg::VehicleImuStatus::_var_gyro_type::const_iterator, float>({currentElement_var_gyro.size(), 1}, currentElement_var_gyro.begin(), currentElement_var_gyro.end());
    // temperature_accel
    auto currentElement_temperature_accel = (msg + ctr)->temperature_accel;
    outArray[ctr]["temperature_accel"] = factory.createScalar(currentElement_temperature_accel);
    // temperature_gyro
    auto currentElement_temperature_gyro = (msg + ctr)->temperature_gyro;
    outArray[ctr]["temperature_gyro"] = factory.createScalar(currentElement_temperature_gyro);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_VehicleImuStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_VehicleImuStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_VehicleImuStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::VehicleImuStatus,ros2_px4_msgs_msg_VehicleImuStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_VehicleImuStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::VehicleImuStatus,ros2_px4_msgs_msg_VehicleImuStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_VehicleImuStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::VehicleImuStatus>();
    ros2_px4_msgs_msg_VehicleImuStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_VehicleImuStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_VehicleImuStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::VehicleImuStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_VehicleImuStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::VehicleImuStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_VehicleImuStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER