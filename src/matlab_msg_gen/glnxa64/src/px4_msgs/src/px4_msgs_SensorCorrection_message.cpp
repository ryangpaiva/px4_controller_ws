// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/SensorCorrection
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
#include "px4_msgs/msg/sensor_correction.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_SensorCorrection_common : public MATLABROS2MsgInterface<px4_msgs::msg::SensorCorrection> {
  public:
    virtual ~ros2_px4_msgs_msg_SensorCorrection_common(){}
    virtual void copy_from_struct(px4_msgs::msg::SensorCorrection* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::SensorCorrection* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_SensorCorrection_common::copy_from_struct(px4_msgs::msg::SensorCorrection* msg, const matlab::data::Struct& arr,
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
        //accel_device_ids
        const matlab::data::TypedArray<uint32_t> accel_device_ids_arr = arr["accel_device_ids"];
        size_t nelem = 4;
        	std::copy(accel_device_ids_arr.begin(), accel_device_ids_arr.begin()+nelem, msg->accel_device_ids.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_device_ids' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_device_ids' is wrong type; expected a uint32.");
    }
    try {
        //accel_temperature
        const matlab::data::TypedArray<float> accel_temperature_arr = arr["accel_temperature"];
        size_t nelem = 4;
        	std::copy(accel_temperature_arr.begin(), accel_temperature_arr.begin()+nelem, msg->accel_temperature.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_temperature' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_temperature' is wrong type; expected a single.");
    }
    try {
        //accel_offset_0
        const matlab::data::TypedArray<float> accel_offset_0_arr = arr["accel_offset_0"];
        size_t nelem = 3;
        	std::copy(accel_offset_0_arr.begin(), accel_offset_0_arr.begin()+nelem, msg->accel_offset_0.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_offset_0' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_offset_0' is wrong type; expected a single.");
    }
    try {
        //accel_offset_1
        const matlab::data::TypedArray<float> accel_offset_1_arr = arr["accel_offset_1"];
        size_t nelem = 3;
        	std::copy(accel_offset_1_arr.begin(), accel_offset_1_arr.begin()+nelem, msg->accel_offset_1.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_offset_1' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_offset_1' is wrong type; expected a single.");
    }
    try {
        //accel_offset_2
        const matlab::data::TypedArray<float> accel_offset_2_arr = arr["accel_offset_2"];
        size_t nelem = 3;
        	std::copy(accel_offset_2_arr.begin(), accel_offset_2_arr.begin()+nelem, msg->accel_offset_2.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_offset_2' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_offset_2' is wrong type; expected a single.");
    }
    try {
        //accel_offset_3
        const matlab::data::TypedArray<float> accel_offset_3_arr = arr["accel_offset_3"];
        size_t nelem = 3;
        	std::copy(accel_offset_3_arr.begin(), accel_offset_3_arr.begin()+nelem, msg->accel_offset_3.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_offset_3' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_offset_3' is wrong type; expected a single.");
    }
    try {
        //gyro_device_ids
        const matlab::data::TypedArray<uint32_t> gyro_device_ids_arr = arr["gyro_device_ids"];
        size_t nelem = 4;
        	std::copy(gyro_device_ids_arr.begin(), gyro_device_ids_arr.begin()+nelem, msg->gyro_device_ids.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_device_ids' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_device_ids' is wrong type; expected a uint32.");
    }
    try {
        //gyro_temperature
        const matlab::data::TypedArray<float> gyro_temperature_arr = arr["gyro_temperature"];
        size_t nelem = 4;
        	std::copy(gyro_temperature_arr.begin(), gyro_temperature_arr.begin()+nelem, msg->gyro_temperature.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_temperature' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_temperature' is wrong type; expected a single.");
    }
    try {
        //gyro_offset_0
        const matlab::data::TypedArray<float> gyro_offset_0_arr = arr["gyro_offset_0"];
        size_t nelem = 3;
        	std::copy(gyro_offset_0_arr.begin(), gyro_offset_0_arr.begin()+nelem, msg->gyro_offset_0.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_offset_0' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_offset_0' is wrong type; expected a single.");
    }
    try {
        //gyro_offset_1
        const matlab::data::TypedArray<float> gyro_offset_1_arr = arr["gyro_offset_1"];
        size_t nelem = 3;
        	std::copy(gyro_offset_1_arr.begin(), gyro_offset_1_arr.begin()+nelem, msg->gyro_offset_1.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_offset_1' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_offset_1' is wrong type; expected a single.");
    }
    try {
        //gyro_offset_2
        const matlab::data::TypedArray<float> gyro_offset_2_arr = arr["gyro_offset_2"];
        size_t nelem = 3;
        	std::copy(gyro_offset_2_arr.begin(), gyro_offset_2_arr.begin()+nelem, msg->gyro_offset_2.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_offset_2' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_offset_2' is wrong type; expected a single.");
    }
    try {
        //gyro_offset_3
        const matlab::data::TypedArray<float> gyro_offset_3_arr = arr["gyro_offset_3"];
        size_t nelem = 3;
        	std::copy(gyro_offset_3_arr.begin(), gyro_offset_3_arr.begin()+nelem, msg->gyro_offset_3.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_offset_3' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_offset_3' is wrong type; expected a single.");
    }
    try {
        //mag_device_ids
        const matlab::data::TypedArray<uint32_t> mag_device_ids_arr = arr["mag_device_ids"];
        size_t nelem = 4;
        	std::copy(mag_device_ids_arr.begin(), mag_device_ids_arr.begin()+nelem, msg->mag_device_ids.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mag_device_ids' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mag_device_ids' is wrong type; expected a uint32.");
    }
    try {
        //mag_temperature
        const matlab::data::TypedArray<float> mag_temperature_arr = arr["mag_temperature"];
        size_t nelem = 4;
        	std::copy(mag_temperature_arr.begin(), mag_temperature_arr.begin()+nelem, msg->mag_temperature.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mag_temperature' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mag_temperature' is wrong type; expected a single.");
    }
    try {
        //mag_offset_0
        const matlab::data::TypedArray<float> mag_offset_0_arr = arr["mag_offset_0"];
        size_t nelem = 3;
        	std::copy(mag_offset_0_arr.begin(), mag_offset_0_arr.begin()+nelem, msg->mag_offset_0.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mag_offset_0' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mag_offset_0' is wrong type; expected a single.");
    }
    try {
        //mag_offset_1
        const matlab::data::TypedArray<float> mag_offset_1_arr = arr["mag_offset_1"];
        size_t nelem = 3;
        	std::copy(mag_offset_1_arr.begin(), mag_offset_1_arr.begin()+nelem, msg->mag_offset_1.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mag_offset_1' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mag_offset_1' is wrong type; expected a single.");
    }
    try {
        //mag_offset_2
        const matlab::data::TypedArray<float> mag_offset_2_arr = arr["mag_offset_2"];
        size_t nelem = 3;
        	std::copy(mag_offset_2_arr.begin(), mag_offset_2_arr.begin()+nelem, msg->mag_offset_2.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mag_offset_2' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mag_offset_2' is wrong type; expected a single.");
    }
    try {
        //mag_offset_3
        const matlab::data::TypedArray<float> mag_offset_3_arr = arr["mag_offset_3"];
        size_t nelem = 3;
        	std::copy(mag_offset_3_arr.begin(), mag_offset_3_arr.begin()+nelem, msg->mag_offset_3.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mag_offset_3' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mag_offset_3' is wrong type; expected a single.");
    }
    try {
        //baro_device_ids
        const matlab::data::TypedArray<uint32_t> baro_device_ids_arr = arr["baro_device_ids"];
        size_t nelem = 4;
        	std::copy(baro_device_ids_arr.begin(), baro_device_ids_arr.begin()+nelem, msg->baro_device_ids.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'baro_device_ids' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'baro_device_ids' is wrong type; expected a uint32.");
    }
    try {
        //baro_temperature
        const matlab::data::TypedArray<float> baro_temperature_arr = arr["baro_temperature"];
        size_t nelem = 4;
        	std::copy(baro_temperature_arr.begin(), baro_temperature_arr.begin()+nelem, msg->baro_temperature.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'baro_temperature' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'baro_temperature' is wrong type; expected a single.");
    }
    try {
        //baro_offset_0
        const matlab::data::TypedArray<float> baro_offset_0_arr = arr["baro_offset_0"];
        msg->baro_offset_0 = baro_offset_0_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'baro_offset_0' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'baro_offset_0' is wrong type; expected a single.");
    }
    try {
        //baro_offset_1
        const matlab::data::TypedArray<float> baro_offset_1_arr = arr["baro_offset_1"];
        msg->baro_offset_1 = baro_offset_1_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'baro_offset_1' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'baro_offset_1' is wrong type; expected a single.");
    }
    try {
        //baro_offset_2
        const matlab::data::TypedArray<float> baro_offset_2_arr = arr["baro_offset_2"];
        msg->baro_offset_2 = baro_offset_2_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'baro_offset_2' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'baro_offset_2' is wrong type; expected a single.");
    }
    try {
        //baro_offset_3
        const matlab::data::TypedArray<float> baro_offset_3_arr = arr["baro_offset_3"];
        msg->baro_offset_3 = baro_offset_3_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'baro_offset_3' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'baro_offset_3' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_SensorCorrection_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::SensorCorrection* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","accel_device_ids","accel_temperature","accel_offset_0","accel_offset_1","accel_offset_2","accel_offset_3","gyro_device_ids","gyro_temperature","gyro_offset_0","gyro_offset_1","gyro_offset_2","gyro_offset_3","mag_device_ids","mag_temperature","mag_offset_0","mag_offset_1","mag_offset_2","mag_offset_3","baro_device_ids","baro_temperature","baro_offset_0","baro_offset_1","baro_offset_2","baro_offset_3"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/SensorCorrection");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // accel_device_ids
    auto currentElement_accel_device_ids = (msg + ctr)->accel_device_ids;
    outArray[ctr]["accel_device_ids"] = factory.createArray<px4_msgs::msg::SensorCorrection::_accel_device_ids_type::const_iterator, uint32_t>({currentElement_accel_device_ids.size(), 1}, currentElement_accel_device_ids.begin(), currentElement_accel_device_ids.end());
    // accel_temperature
    auto currentElement_accel_temperature = (msg + ctr)->accel_temperature;
    outArray[ctr]["accel_temperature"] = factory.createArray<px4_msgs::msg::SensorCorrection::_accel_temperature_type::const_iterator, float>({currentElement_accel_temperature.size(), 1}, currentElement_accel_temperature.begin(), currentElement_accel_temperature.end());
    // accel_offset_0
    auto currentElement_accel_offset_0 = (msg + ctr)->accel_offset_0;
    outArray[ctr]["accel_offset_0"] = factory.createArray<px4_msgs::msg::SensorCorrection::_accel_offset_0_type::const_iterator, float>({currentElement_accel_offset_0.size(), 1}, currentElement_accel_offset_0.begin(), currentElement_accel_offset_0.end());
    // accel_offset_1
    auto currentElement_accel_offset_1 = (msg + ctr)->accel_offset_1;
    outArray[ctr]["accel_offset_1"] = factory.createArray<px4_msgs::msg::SensorCorrection::_accel_offset_1_type::const_iterator, float>({currentElement_accel_offset_1.size(), 1}, currentElement_accel_offset_1.begin(), currentElement_accel_offset_1.end());
    // accel_offset_2
    auto currentElement_accel_offset_2 = (msg + ctr)->accel_offset_2;
    outArray[ctr]["accel_offset_2"] = factory.createArray<px4_msgs::msg::SensorCorrection::_accel_offset_2_type::const_iterator, float>({currentElement_accel_offset_2.size(), 1}, currentElement_accel_offset_2.begin(), currentElement_accel_offset_2.end());
    // accel_offset_3
    auto currentElement_accel_offset_3 = (msg + ctr)->accel_offset_3;
    outArray[ctr]["accel_offset_3"] = factory.createArray<px4_msgs::msg::SensorCorrection::_accel_offset_3_type::const_iterator, float>({currentElement_accel_offset_3.size(), 1}, currentElement_accel_offset_3.begin(), currentElement_accel_offset_3.end());
    // gyro_device_ids
    auto currentElement_gyro_device_ids = (msg + ctr)->gyro_device_ids;
    outArray[ctr]["gyro_device_ids"] = factory.createArray<px4_msgs::msg::SensorCorrection::_gyro_device_ids_type::const_iterator, uint32_t>({currentElement_gyro_device_ids.size(), 1}, currentElement_gyro_device_ids.begin(), currentElement_gyro_device_ids.end());
    // gyro_temperature
    auto currentElement_gyro_temperature = (msg + ctr)->gyro_temperature;
    outArray[ctr]["gyro_temperature"] = factory.createArray<px4_msgs::msg::SensorCorrection::_gyro_temperature_type::const_iterator, float>({currentElement_gyro_temperature.size(), 1}, currentElement_gyro_temperature.begin(), currentElement_gyro_temperature.end());
    // gyro_offset_0
    auto currentElement_gyro_offset_0 = (msg + ctr)->gyro_offset_0;
    outArray[ctr]["gyro_offset_0"] = factory.createArray<px4_msgs::msg::SensorCorrection::_gyro_offset_0_type::const_iterator, float>({currentElement_gyro_offset_0.size(), 1}, currentElement_gyro_offset_0.begin(), currentElement_gyro_offset_0.end());
    // gyro_offset_1
    auto currentElement_gyro_offset_1 = (msg + ctr)->gyro_offset_1;
    outArray[ctr]["gyro_offset_1"] = factory.createArray<px4_msgs::msg::SensorCorrection::_gyro_offset_1_type::const_iterator, float>({currentElement_gyro_offset_1.size(), 1}, currentElement_gyro_offset_1.begin(), currentElement_gyro_offset_1.end());
    // gyro_offset_2
    auto currentElement_gyro_offset_2 = (msg + ctr)->gyro_offset_2;
    outArray[ctr]["gyro_offset_2"] = factory.createArray<px4_msgs::msg::SensorCorrection::_gyro_offset_2_type::const_iterator, float>({currentElement_gyro_offset_2.size(), 1}, currentElement_gyro_offset_2.begin(), currentElement_gyro_offset_2.end());
    // gyro_offset_3
    auto currentElement_gyro_offset_3 = (msg + ctr)->gyro_offset_3;
    outArray[ctr]["gyro_offset_3"] = factory.createArray<px4_msgs::msg::SensorCorrection::_gyro_offset_3_type::const_iterator, float>({currentElement_gyro_offset_3.size(), 1}, currentElement_gyro_offset_3.begin(), currentElement_gyro_offset_3.end());
    // mag_device_ids
    auto currentElement_mag_device_ids = (msg + ctr)->mag_device_ids;
    outArray[ctr]["mag_device_ids"] = factory.createArray<px4_msgs::msg::SensorCorrection::_mag_device_ids_type::const_iterator, uint32_t>({currentElement_mag_device_ids.size(), 1}, currentElement_mag_device_ids.begin(), currentElement_mag_device_ids.end());
    // mag_temperature
    auto currentElement_mag_temperature = (msg + ctr)->mag_temperature;
    outArray[ctr]["mag_temperature"] = factory.createArray<px4_msgs::msg::SensorCorrection::_mag_temperature_type::const_iterator, float>({currentElement_mag_temperature.size(), 1}, currentElement_mag_temperature.begin(), currentElement_mag_temperature.end());
    // mag_offset_0
    auto currentElement_mag_offset_0 = (msg + ctr)->mag_offset_0;
    outArray[ctr]["mag_offset_0"] = factory.createArray<px4_msgs::msg::SensorCorrection::_mag_offset_0_type::const_iterator, float>({currentElement_mag_offset_0.size(), 1}, currentElement_mag_offset_0.begin(), currentElement_mag_offset_0.end());
    // mag_offset_1
    auto currentElement_mag_offset_1 = (msg + ctr)->mag_offset_1;
    outArray[ctr]["mag_offset_1"] = factory.createArray<px4_msgs::msg::SensorCorrection::_mag_offset_1_type::const_iterator, float>({currentElement_mag_offset_1.size(), 1}, currentElement_mag_offset_1.begin(), currentElement_mag_offset_1.end());
    // mag_offset_2
    auto currentElement_mag_offset_2 = (msg + ctr)->mag_offset_2;
    outArray[ctr]["mag_offset_2"] = factory.createArray<px4_msgs::msg::SensorCorrection::_mag_offset_2_type::const_iterator, float>({currentElement_mag_offset_2.size(), 1}, currentElement_mag_offset_2.begin(), currentElement_mag_offset_2.end());
    // mag_offset_3
    auto currentElement_mag_offset_3 = (msg + ctr)->mag_offset_3;
    outArray[ctr]["mag_offset_3"] = factory.createArray<px4_msgs::msg::SensorCorrection::_mag_offset_3_type::const_iterator, float>({currentElement_mag_offset_3.size(), 1}, currentElement_mag_offset_3.begin(), currentElement_mag_offset_3.end());
    // baro_device_ids
    auto currentElement_baro_device_ids = (msg + ctr)->baro_device_ids;
    outArray[ctr]["baro_device_ids"] = factory.createArray<px4_msgs::msg::SensorCorrection::_baro_device_ids_type::const_iterator, uint32_t>({currentElement_baro_device_ids.size(), 1}, currentElement_baro_device_ids.begin(), currentElement_baro_device_ids.end());
    // baro_temperature
    auto currentElement_baro_temperature = (msg + ctr)->baro_temperature;
    outArray[ctr]["baro_temperature"] = factory.createArray<px4_msgs::msg::SensorCorrection::_baro_temperature_type::const_iterator, float>({currentElement_baro_temperature.size(), 1}, currentElement_baro_temperature.begin(), currentElement_baro_temperature.end());
    // baro_offset_0
    auto currentElement_baro_offset_0 = (msg + ctr)->baro_offset_0;
    outArray[ctr]["baro_offset_0"] = factory.createScalar(currentElement_baro_offset_0);
    // baro_offset_1
    auto currentElement_baro_offset_1 = (msg + ctr)->baro_offset_1;
    outArray[ctr]["baro_offset_1"] = factory.createScalar(currentElement_baro_offset_1);
    // baro_offset_2
    auto currentElement_baro_offset_2 = (msg + ctr)->baro_offset_2;
    outArray[ctr]["baro_offset_2"] = factory.createScalar(currentElement_baro_offset_2);
    // baro_offset_3
    auto currentElement_baro_offset_3 = (msg + ctr)->baro_offset_3;
    outArray[ctr]["baro_offset_3"] = factory.createScalar(currentElement_baro_offset_3);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_SensorCorrection_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_SensorCorrection_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_SensorCorrection_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::SensorCorrection,ros2_px4_msgs_msg_SensorCorrection_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_SensorCorrection_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::SensorCorrection,ros2_px4_msgs_msg_SensorCorrection_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_SensorCorrection_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::SensorCorrection>();
    ros2_px4_msgs_msg_SensorCorrection_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_SensorCorrection_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_SensorCorrection_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::SensorCorrection*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_SensorCorrection_common, MATLABROS2MsgInterface<px4_msgs::msg::SensorCorrection>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_SensorCorrection_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER