// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/VehicleAirData
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
#include "px4_msgs/msg/vehicle_air_data.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_VehicleAirData_common : public MATLABROS2MsgInterface<px4_msgs::msg::VehicleAirData> {
  public:
    virtual ~ros2_px4_msgs_msg_VehicleAirData_common(){}
    virtual void copy_from_struct(px4_msgs::msg::VehicleAirData* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleAirData* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_VehicleAirData_common::copy_from_struct(px4_msgs::msg::VehicleAirData* msg, const matlab::data::Struct& arr,
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
        //baro_device_id
        const matlab::data::TypedArray<uint32_t> baro_device_id_arr = arr["baro_device_id"];
        msg->baro_device_id = baro_device_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'baro_device_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'baro_device_id' is wrong type; expected a uint32.");
    }
    try {
        //baro_alt_meter
        const matlab::data::TypedArray<float> baro_alt_meter_arr = arr["baro_alt_meter"];
        msg->baro_alt_meter = baro_alt_meter_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'baro_alt_meter' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'baro_alt_meter' is wrong type; expected a single.");
    }
    try {
        //baro_temp_celcius
        const matlab::data::TypedArray<float> baro_temp_celcius_arr = arr["baro_temp_celcius"];
        msg->baro_temp_celcius = baro_temp_celcius_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'baro_temp_celcius' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'baro_temp_celcius' is wrong type; expected a single.");
    }
    try {
        //baro_pressure_pa
        const matlab::data::TypedArray<float> baro_pressure_pa_arr = arr["baro_pressure_pa"];
        msg->baro_pressure_pa = baro_pressure_pa_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'baro_pressure_pa' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'baro_pressure_pa' is wrong type; expected a single.");
    }
    try {
        //rho
        const matlab::data::TypedArray<float> rho_arr = arr["rho"];
        msg->rho = rho_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rho' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rho' is wrong type; expected a single.");
    }
    try {
        //eas2tas
        const matlab::data::TypedArray<float> eas2tas_arr = arr["eas2tas"];
        msg->eas2tas = eas2tas_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'eas2tas' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'eas2tas' is wrong type; expected a single.");
    }
    try {
        //calibration_count
        const matlab::data::TypedArray<uint8_t> calibration_count_arr = arr["calibration_count"];
        msg->calibration_count = calibration_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'calibration_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'calibration_count' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_VehicleAirData_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleAirData* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","timestamp_sample","baro_device_id","baro_alt_meter","baro_temp_celcius","baro_pressure_pa","rho","eas2tas","calibration_count"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/VehicleAirData");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // baro_device_id
    auto currentElement_baro_device_id = (msg + ctr)->baro_device_id;
    outArray[ctr]["baro_device_id"] = factory.createScalar(currentElement_baro_device_id);
    // baro_alt_meter
    auto currentElement_baro_alt_meter = (msg + ctr)->baro_alt_meter;
    outArray[ctr]["baro_alt_meter"] = factory.createScalar(currentElement_baro_alt_meter);
    // baro_temp_celcius
    auto currentElement_baro_temp_celcius = (msg + ctr)->baro_temp_celcius;
    outArray[ctr]["baro_temp_celcius"] = factory.createScalar(currentElement_baro_temp_celcius);
    // baro_pressure_pa
    auto currentElement_baro_pressure_pa = (msg + ctr)->baro_pressure_pa;
    outArray[ctr]["baro_pressure_pa"] = factory.createScalar(currentElement_baro_pressure_pa);
    // rho
    auto currentElement_rho = (msg + ctr)->rho;
    outArray[ctr]["rho"] = factory.createScalar(currentElement_rho);
    // eas2tas
    auto currentElement_eas2tas = (msg + ctr)->eas2tas;
    outArray[ctr]["eas2tas"] = factory.createScalar(currentElement_eas2tas);
    // calibration_count
    auto currentElement_calibration_count = (msg + ctr)->calibration_count;
    outArray[ctr]["calibration_count"] = factory.createScalar(currentElement_calibration_count);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_VehicleAirData_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_VehicleAirData_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_VehicleAirData_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::VehicleAirData,ros2_px4_msgs_msg_VehicleAirData_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_VehicleAirData_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::VehicleAirData,ros2_px4_msgs_msg_VehicleAirData_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_VehicleAirData_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::VehicleAirData>();
    ros2_px4_msgs_msg_VehicleAirData_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_VehicleAirData_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_VehicleAirData_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::VehicleAirData*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_VehicleAirData_common, MATLABROS2MsgInterface<px4_msgs::msg::VehicleAirData>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_VehicleAirData_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER