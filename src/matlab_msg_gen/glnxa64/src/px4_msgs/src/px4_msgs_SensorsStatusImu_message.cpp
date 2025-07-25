// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/SensorsStatusImu
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
#include "px4_msgs/msg/sensors_status_imu.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_SensorsStatusImu_common : public MATLABROS2MsgInterface<px4_msgs::msg::SensorsStatusImu> {
  public:
    virtual ~ros2_px4_msgs_msg_SensorsStatusImu_common(){}
    virtual void copy_from_struct(px4_msgs::msg::SensorsStatusImu* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::SensorsStatusImu* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_SensorsStatusImu_common::copy_from_struct(px4_msgs::msg::SensorsStatusImu* msg, const matlab::data::Struct& arr,
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
        //accel_device_id_primary
        const matlab::data::TypedArray<uint32_t> accel_device_id_primary_arr = arr["accel_device_id_primary"];
        msg->accel_device_id_primary = accel_device_id_primary_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_device_id_primary' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_device_id_primary' is wrong type; expected a uint32.");
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
        //accel_inconsistency_m_s_s
        const matlab::data::TypedArray<float> accel_inconsistency_m_s_s_arr = arr["accel_inconsistency_m_s_s"];
        size_t nelem = 4;
        	std::copy(accel_inconsistency_m_s_s_arr.begin(), accel_inconsistency_m_s_s_arr.begin()+nelem, msg->accel_inconsistency_m_s_s.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_inconsistency_m_s_s' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_inconsistency_m_s_s' is wrong type; expected a single.");
    }
    try {
        //accel_healthy
        const matlab::data::TypedArray<bool> accel_healthy_arr = arr["accel_healthy"];
        size_t nelem = 4;
        	std::copy(accel_healthy_arr.begin(), accel_healthy_arr.begin()+nelem, msg->accel_healthy.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_healthy' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_healthy' is wrong type; expected a logical.");
    }
    try {
        //accel_priority
        const matlab::data::TypedArray<uint8_t> accel_priority_arr = arr["accel_priority"];
        size_t nelem = 4;
        	std::copy(accel_priority_arr.begin(), accel_priority_arr.begin()+nelem, msg->accel_priority.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_priority' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_priority' is wrong type; expected a uint8.");
    }
    try {
        //gyro_device_id_primary
        const matlab::data::TypedArray<uint32_t> gyro_device_id_primary_arr = arr["gyro_device_id_primary"];
        msg->gyro_device_id_primary = gyro_device_id_primary_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_device_id_primary' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_device_id_primary' is wrong type; expected a uint32.");
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
        //gyro_inconsistency_rad_s
        const matlab::data::TypedArray<float> gyro_inconsistency_rad_s_arr = arr["gyro_inconsistency_rad_s"];
        size_t nelem = 4;
        	std::copy(gyro_inconsistency_rad_s_arr.begin(), gyro_inconsistency_rad_s_arr.begin()+nelem, msg->gyro_inconsistency_rad_s.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_inconsistency_rad_s' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_inconsistency_rad_s' is wrong type; expected a single.");
    }
    try {
        //gyro_healthy
        const matlab::data::TypedArray<bool> gyro_healthy_arr = arr["gyro_healthy"];
        size_t nelem = 4;
        	std::copy(gyro_healthy_arr.begin(), gyro_healthy_arr.begin()+nelem, msg->gyro_healthy.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_healthy' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_healthy' is wrong type; expected a logical.");
    }
    try {
        //gyro_priority
        const matlab::data::TypedArray<uint8_t> gyro_priority_arr = arr["gyro_priority"];
        size_t nelem = 4;
        	std::copy(gyro_priority_arr.begin(), gyro_priority_arr.begin()+nelem, msg->gyro_priority.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_priority' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_priority' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_SensorsStatusImu_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::SensorsStatusImu* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","accel_device_id_primary","accel_device_ids","accel_inconsistency_m_s_s","accel_healthy","accel_priority","gyro_device_id_primary","gyro_device_ids","gyro_inconsistency_rad_s","gyro_healthy","gyro_priority"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/SensorsStatusImu");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // accel_device_id_primary
    auto currentElement_accel_device_id_primary = (msg + ctr)->accel_device_id_primary;
    outArray[ctr]["accel_device_id_primary"] = factory.createScalar(currentElement_accel_device_id_primary);
    // accel_device_ids
    auto currentElement_accel_device_ids = (msg + ctr)->accel_device_ids;
    outArray[ctr]["accel_device_ids"] = factory.createArray<px4_msgs::msg::SensorsStatusImu::_accel_device_ids_type::const_iterator, uint32_t>({currentElement_accel_device_ids.size(), 1}, currentElement_accel_device_ids.begin(), currentElement_accel_device_ids.end());
    // accel_inconsistency_m_s_s
    auto currentElement_accel_inconsistency_m_s_s = (msg + ctr)->accel_inconsistency_m_s_s;
    outArray[ctr]["accel_inconsistency_m_s_s"] = factory.createArray<px4_msgs::msg::SensorsStatusImu::_accel_inconsistency_m_s_s_type::const_iterator, float>({currentElement_accel_inconsistency_m_s_s.size(), 1}, currentElement_accel_inconsistency_m_s_s.begin(), currentElement_accel_inconsistency_m_s_s.end());
    // accel_healthy
    auto currentElement_accel_healthy = (msg + ctr)->accel_healthy;
    outArray[ctr]["accel_healthy"] = factory.createArray<px4_msgs::msg::SensorsStatusImu::_accel_healthy_type::const_iterator, bool>({currentElement_accel_healthy.size(), 1}, currentElement_accel_healthy.begin(), currentElement_accel_healthy.end());
    // accel_priority
    auto currentElement_accel_priority = (msg + ctr)->accel_priority;
    outArray[ctr]["accel_priority"] = factory.createArray<px4_msgs::msg::SensorsStatusImu::_accel_priority_type::const_iterator, uint8_t>({currentElement_accel_priority.size(), 1}, currentElement_accel_priority.begin(), currentElement_accel_priority.end());
    // gyro_device_id_primary
    auto currentElement_gyro_device_id_primary = (msg + ctr)->gyro_device_id_primary;
    outArray[ctr]["gyro_device_id_primary"] = factory.createScalar(currentElement_gyro_device_id_primary);
    // gyro_device_ids
    auto currentElement_gyro_device_ids = (msg + ctr)->gyro_device_ids;
    outArray[ctr]["gyro_device_ids"] = factory.createArray<px4_msgs::msg::SensorsStatusImu::_gyro_device_ids_type::const_iterator, uint32_t>({currentElement_gyro_device_ids.size(), 1}, currentElement_gyro_device_ids.begin(), currentElement_gyro_device_ids.end());
    // gyro_inconsistency_rad_s
    auto currentElement_gyro_inconsistency_rad_s = (msg + ctr)->gyro_inconsistency_rad_s;
    outArray[ctr]["gyro_inconsistency_rad_s"] = factory.createArray<px4_msgs::msg::SensorsStatusImu::_gyro_inconsistency_rad_s_type::const_iterator, float>({currentElement_gyro_inconsistency_rad_s.size(), 1}, currentElement_gyro_inconsistency_rad_s.begin(), currentElement_gyro_inconsistency_rad_s.end());
    // gyro_healthy
    auto currentElement_gyro_healthy = (msg + ctr)->gyro_healthy;
    outArray[ctr]["gyro_healthy"] = factory.createArray<px4_msgs::msg::SensorsStatusImu::_gyro_healthy_type::const_iterator, bool>({currentElement_gyro_healthy.size(), 1}, currentElement_gyro_healthy.begin(), currentElement_gyro_healthy.end());
    // gyro_priority
    auto currentElement_gyro_priority = (msg + ctr)->gyro_priority;
    outArray[ctr]["gyro_priority"] = factory.createArray<px4_msgs::msg::SensorsStatusImu::_gyro_priority_type::const_iterator, uint8_t>({currentElement_gyro_priority.size(), 1}, currentElement_gyro_priority.begin(), currentElement_gyro_priority.end());
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_SensorsStatusImu_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_SensorsStatusImu_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_SensorsStatusImu_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::SensorsStatusImu,ros2_px4_msgs_msg_SensorsStatusImu_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_SensorsStatusImu_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::SensorsStatusImu,ros2_px4_msgs_msg_SensorsStatusImu_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_SensorsStatusImu_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::SensorsStatusImu>();
    ros2_px4_msgs_msg_SensorsStatusImu_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_SensorsStatusImu_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_SensorsStatusImu_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::SensorsStatusImu*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_SensorsStatusImu_common, MATLABROS2MsgInterface<px4_msgs::msg::SensorsStatusImu>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_SensorsStatusImu_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER