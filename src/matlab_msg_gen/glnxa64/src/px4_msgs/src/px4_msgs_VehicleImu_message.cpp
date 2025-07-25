// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/VehicleImu
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
#include "px4_msgs/msg/vehicle_imu.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_VehicleImu_common : public MATLABROS2MsgInterface<px4_msgs::msg::VehicleImu> {
  public:
    virtual ~ros2_px4_msgs_msg_VehicleImu_common(){}
    virtual void copy_from_struct(px4_msgs::msg::VehicleImu* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleImu* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_VehicleImu_common::copy_from_struct(px4_msgs::msg::VehicleImu* msg, const matlab::data::Struct& arr,
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
        //delta_angle
        const matlab::data::TypedArray<float> delta_angle_arr = arr["delta_angle"];
        size_t nelem = 3;
        	std::copy(delta_angle_arr.begin(), delta_angle_arr.begin()+nelem, msg->delta_angle.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'delta_angle' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'delta_angle' is wrong type; expected a single.");
    }
    try {
        //delta_velocity
        const matlab::data::TypedArray<float> delta_velocity_arr = arr["delta_velocity"];
        size_t nelem = 3;
        	std::copy(delta_velocity_arr.begin(), delta_velocity_arr.begin()+nelem, msg->delta_velocity.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'delta_velocity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'delta_velocity' is wrong type; expected a single.");
    }
    try {
        //delta_angle_dt
        const matlab::data::TypedArray<uint32_t> delta_angle_dt_arr = arr["delta_angle_dt"];
        msg->delta_angle_dt = delta_angle_dt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'delta_angle_dt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'delta_angle_dt' is wrong type; expected a uint32.");
    }
    try {
        //delta_velocity_dt
        const matlab::data::TypedArray<uint32_t> delta_velocity_dt_arr = arr["delta_velocity_dt"];
        msg->delta_velocity_dt = delta_velocity_dt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'delta_velocity_dt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'delta_velocity_dt' is wrong type; expected a uint32.");
    }
    try {
        //delta_angle_clipping
        const matlab::data::TypedArray<uint8_t> delta_angle_clipping_arr = arr["delta_angle_clipping"];
        msg->delta_angle_clipping = delta_angle_clipping_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'delta_angle_clipping' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'delta_angle_clipping' is wrong type; expected a uint8.");
    }
    try {
        //delta_velocity_clipping
        const matlab::data::TypedArray<uint8_t> delta_velocity_clipping_arr = arr["delta_velocity_clipping"];
        msg->delta_velocity_clipping = delta_velocity_clipping_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'delta_velocity_clipping' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'delta_velocity_clipping' is wrong type; expected a uint8.");
    }
    try {
        //accel_calibration_count
        const matlab::data::TypedArray<uint8_t> accel_calibration_count_arr = arr["accel_calibration_count"];
        msg->accel_calibration_count = accel_calibration_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_calibration_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_calibration_count' is wrong type; expected a uint8.");
    }
    try {
        //gyro_calibration_count
        const matlab::data::TypedArray<uint8_t> gyro_calibration_count_arr = arr["gyro_calibration_count"];
        msg->gyro_calibration_count = gyro_calibration_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_calibration_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_calibration_count' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_VehicleImu_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleImu* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","timestamp_sample","accel_device_id","gyro_device_id","delta_angle","delta_velocity","delta_angle_dt","delta_velocity_dt","CLIPPING_X","CLIPPING_Y","CLIPPING_Z","delta_angle_clipping","delta_velocity_clipping","accel_calibration_count","gyro_calibration_count"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/VehicleImu");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // accel_device_id
    auto currentElement_accel_device_id = (msg + ctr)->accel_device_id;
    outArray[ctr]["accel_device_id"] = factory.createScalar(currentElement_accel_device_id);
    // gyro_device_id
    auto currentElement_gyro_device_id = (msg + ctr)->gyro_device_id;
    outArray[ctr]["gyro_device_id"] = factory.createScalar(currentElement_gyro_device_id);
    // delta_angle
    auto currentElement_delta_angle = (msg + ctr)->delta_angle;
    outArray[ctr]["delta_angle"] = factory.createArray<px4_msgs::msg::VehicleImu::_delta_angle_type::const_iterator, float>({currentElement_delta_angle.size(), 1}, currentElement_delta_angle.begin(), currentElement_delta_angle.end());
    // delta_velocity
    auto currentElement_delta_velocity = (msg + ctr)->delta_velocity;
    outArray[ctr]["delta_velocity"] = factory.createArray<px4_msgs::msg::VehicleImu::_delta_velocity_type::const_iterator, float>({currentElement_delta_velocity.size(), 1}, currentElement_delta_velocity.begin(), currentElement_delta_velocity.end());
    // delta_angle_dt
    auto currentElement_delta_angle_dt = (msg + ctr)->delta_angle_dt;
    outArray[ctr]["delta_angle_dt"] = factory.createScalar(currentElement_delta_angle_dt);
    // delta_velocity_dt
    auto currentElement_delta_velocity_dt = (msg + ctr)->delta_velocity_dt;
    outArray[ctr]["delta_velocity_dt"] = factory.createScalar(currentElement_delta_velocity_dt);
    // CLIPPING_X
    auto currentElement_CLIPPING_X = (msg + ctr)->CLIPPING_X;
    outArray[ctr]["CLIPPING_X"] = factory.createScalar(currentElement_CLIPPING_X);
    // CLIPPING_Y
    auto currentElement_CLIPPING_Y = (msg + ctr)->CLIPPING_Y;
    outArray[ctr]["CLIPPING_Y"] = factory.createScalar(currentElement_CLIPPING_Y);
    // CLIPPING_Z
    auto currentElement_CLIPPING_Z = (msg + ctr)->CLIPPING_Z;
    outArray[ctr]["CLIPPING_Z"] = factory.createScalar(currentElement_CLIPPING_Z);
    // delta_angle_clipping
    auto currentElement_delta_angle_clipping = (msg + ctr)->delta_angle_clipping;
    outArray[ctr]["delta_angle_clipping"] = factory.createScalar(currentElement_delta_angle_clipping);
    // delta_velocity_clipping
    auto currentElement_delta_velocity_clipping = (msg + ctr)->delta_velocity_clipping;
    outArray[ctr]["delta_velocity_clipping"] = factory.createScalar(currentElement_delta_velocity_clipping);
    // accel_calibration_count
    auto currentElement_accel_calibration_count = (msg + ctr)->accel_calibration_count;
    outArray[ctr]["accel_calibration_count"] = factory.createScalar(currentElement_accel_calibration_count);
    // gyro_calibration_count
    auto currentElement_gyro_calibration_count = (msg + ctr)->gyro_calibration_count;
    outArray[ctr]["gyro_calibration_count"] = factory.createScalar(currentElement_gyro_calibration_count);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_VehicleImu_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_VehicleImu_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_VehicleImu_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::VehicleImu,ros2_px4_msgs_msg_VehicleImu_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_VehicleImu_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::VehicleImu,ros2_px4_msgs_msg_VehicleImu_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_VehicleImu_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::VehicleImu>();
    ros2_px4_msgs_msg_VehicleImu_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_VehicleImu_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_VehicleImu_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::VehicleImu*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_VehicleImu_common, MATLABROS2MsgInterface<px4_msgs::msg::VehicleImu>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_VehicleImu_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER