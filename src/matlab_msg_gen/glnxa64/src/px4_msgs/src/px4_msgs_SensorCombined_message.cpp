// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/SensorCombined
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
#include "px4_msgs/msg/sensor_combined.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_SensorCombined_common : public MATLABROS2MsgInterface<px4_msgs::msg::SensorCombined> {
  public:
    virtual ~ros2_px4_msgs_msg_SensorCombined_common(){}
    virtual void copy_from_struct(px4_msgs::msg::SensorCombined* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::SensorCombined* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_SensorCombined_common::copy_from_struct(px4_msgs::msg::SensorCombined* msg, const matlab::data::Struct& arr,
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
        //gyro_rad
        const matlab::data::TypedArray<float> gyro_rad_arr = arr["gyro_rad"];
        size_t nelem = 3;
        	std::copy(gyro_rad_arr.begin(), gyro_rad_arr.begin()+nelem, msg->gyro_rad.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_rad' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_rad' is wrong type; expected a single.");
    }
    try {
        //gyro_integral_dt
        const matlab::data::TypedArray<uint32_t> gyro_integral_dt_arr = arr["gyro_integral_dt"];
        msg->gyro_integral_dt = gyro_integral_dt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_integral_dt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_integral_dt' is wrong type; expected a uint32.");
    }
    try {
        //accelerometer_timestamp_relative
        const matlab::data::TypedArray<int32_t> accelerometer_timestamp_relative_arr = arr["accelerometer_timestamp_relative"];
        msg->accelerometer_timestamp_relative = accelerometer_timestamp_relative_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accelerometer_timestamp_relative' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accelerometer_timestamp_relative' is wrong type; expected a int32.");
    }
    try {
        //accelerometer_m_s2
        const matlab::data::TypedArray<float> accelerometer_m_s2_arr = arr["accelerometer_m_s2"];
        size_t nelem = 3;
        	std::copy(accelerometer_m_s2_arr.begin(), accelerometer_m_s2_arr.begin()+nelem, msg->accelerometer_m_s2.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accelerometer_m_s2' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accelerometer_m_s2' is wrong type; expected a single.");
    }
    try {
        //accelerometer_integral_dt
        const matlab::data::TypedArray<uint32_t> accelerometer_integral_dt_arr = arr["accelerometer_integral_dt"];
        msg->accelerometer_integral_dt = accelerometer_integral_dt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accelerometer_integral_dt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accelerometer_integral_dt' is wrong type; expected a uint32.");
    }
    try {
        //accelerometer_clipping
        const matlab::data::TypedArray<uint8_t> accelerometer_clipping_arr = arr["accelerometer_clipping"];
        msg->accelerometer_clipping = accelerometer_clipping_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accelerometer_clipping' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accelerometer_clipping' is wrong type; expected a uint8.");
    }
    try {
        //gyro_clipping
        const matlab::data::TypedArray<uint8_t> gyro_clipping_arr = arr["gyro_clipping"];
        msg->gyro_clipping = gyro_clipping_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_clipping' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_clipping' is wrong type; expected a uint8.");
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
  MDArray_T ros2_px4_msgs_msg_SensorCombined_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::SensorCombined* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","RELATIVE_TIMESTAMP_INVALID","gyro_rad","gyro_integral_dt","accelerometer_timestamp_relative","accelerometer_m_s2","accelerometer_integral_dt","CLIPPING_X","CLIPPING_Y","CLIPPING_Z","accelerometer_clipping","gyro_clipping","accel_calibration_count","gyro_calibration_count"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/SensorCombined");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // RELATIVE_TIMESTAMP_INVALID
    auto currentElement_RELATIVE_TIMESTAMP_INVALID = (msg + ctr)->RELATIVE_TIMESTAMP_INVALID;
    outArray[ctr]["RELATIVE_TIMESTAMP_INVALID"] = factory.createScalar(currentElement_RELATIVE_TIMESTAMP_INVALID);
    // gyro_rad
    auto currentElement_gyro_rad = (msg + ctr)->gyro_rad;
    outArray[ctr]["gyro_rad"] = factory.createArray<px4_msgs::msg::SensorCombined::_gyro_rad_type::const_iterator, float>({currentElement_gyro_rad.size(), 1}, currentElement_gyro_rad.begin(), currentElement_gyro_rad.end());
    // gyro_integral_dt
    auto currentElement_gyro_integral_dt = (msg + ctr)->gyro_integral_dt;
    outArray[ctr]["gyro_integral_dt"] = factory.createScalar(currentElement_gyro_integral_dt);
    // accelerometer_timestamp_relative
    auto currentElement_accelerometer_timestamp_relative = (msg + ctr)->accelerometer_timestamp_relative;
    outArray[ctr]["accelerometer_timestamp_relative"] = factory.createScalar(currentElement_accelerometer_timestamp_relative);
    // accelerometer_m_s2
    auto currentElement_accelerometer_m_s2 = (msg + ctr)->accelerometer_m_s2;
    outArray[ctr]["accelerometer_m_s2"] = factory.createArray<px4_msgs::msg::SensorCombined::_accelerometer_m_s2_type::const_iterator, float>({currentElement_accelerometer_m_s2.size(), 1}, currentElement_accelerometer_m_s2.begin(), currentElement_accelerometer_m_s2.end());
    // accelerometer_integral_dt
    auto currentElement_accelerometer_integral_dt = (msg + ctr)->accelerometer_integral_dt;
    outArray[ctr]["accelerometer_integral_dt"] = factory.createScalar(currentElement_accelerometer_integral_dt);
    // CLIPPING_X
    auto currentElement_CLIPPING_X = (msg + ctr)->CLIPPING_X;
    outArray[ctr]["CLIPPING_X"] = factory.createScalar(currentElement_CLIPPING_X);
    // CLIPPING_Y
    auto currentElement_CLIPPING_Y = (msg + ctr)->CLIPPING_Y;
    outArray[ctr]["CLIPPING_Y"] = factory.createScalar(currentElement_CLIPPING_Y);
    // CLIPPING_Z
    auto currentElement_CLIPPING_Z = (msg + ctr)->CLIPPING_Z;
    outArray[ctr]["CLIPPING_Z"] = factory.createScalar(currentElement_CLIPPING_Z);
    // accelerometer_clipping
    auto currentElement_accelerometer_clipping = (msg + ctr)->accelerometer_clipping;
    outArray[ctr]["accelerometer_clipping"] = factory.createScalar(currentElement_accelerometer_clipping);
    // gyro_clipping
    auto currentElement_gyro_clipping = (msg + ctr)->gyro_clipping;
    outArray[ctr]["gyro_clipping"] = factory.createScalar(currentElement_gyro_clipping);
    // accel_calibration_count
    auto currentElement_accel_calibration_count = (msg + ctr)->accel_calibration_count;
    outArray[ctr]["accel_calibration_count"] = factory.createScalar(currentElement_accel_calibration_count);
    // gyro_calibration_count
    auto currentElement_gyro_calibration_count = (msg + ctr)->gyro_calibration_count;
    outArray[ctr]["gyro_calibration_count"] = factory.createScalar(currentElement_gyro_calibration_count);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_SensorCombined_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_SensorCombined_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_SensorCombined_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::SensorCombined,ros2_px4_msgs_msg_SensorCombined_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_SensorCombined_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::SensorCombined,ros2_px4_msgs_msg_SensorCombined_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_SensorCombined_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::SensorCombined>();
    ros2_px4_msgs_msg_SensorCombined_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_SensorCombined_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_SensorCombined_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::SensorCombined*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_SensorCombined_common, MATLABROS2MsgInterface<px4_msgs::msg::SensorCombined>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_SensorCombined_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER