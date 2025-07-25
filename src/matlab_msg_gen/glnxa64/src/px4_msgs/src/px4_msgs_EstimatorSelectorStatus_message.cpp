// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/EstimatorSelectorStatus
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
#include "px4_msgs/msg/estimator_selector_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_EstimatorSelectorStatus_common : public MATLABROS2MsgInterface<px4_msgs::msg::EstimatorSelectorStatus> {
  public:
    virtual ~ros2_px4_msgs_msg_EstimatorSelectorStatus_common(){}
    virtual void copy_from_struct(px4_msgs::msg::EstimatorSelectorStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::EstimatorSelectorStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_EstimatorSelectorStatus_common::copy_from_struct(px4_msgs::msg::EstimatorSelectorStatus* msg, const matlab::data::Struct& arr,
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
        //primary_instance
        const matlab::data::TypedArray<uint8_t> primary_instance_arr = arr["primary_instance"];
        msg->primary_instance = primary_instance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'primary_instance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'primary_instance' is wrong type; expected a uint8.");
    }
    try {
        //instances_available
        const matlab::data::TypedArray<uint8_t> instances_available_arr = arr["instances_available"];
        msg->instances_available = instances_available_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'instances_available' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'instances_available' is wrong type; expected a uint8.");
    }
    try {
        //instance_changed_count
        const matlab::data::TypedArray<uint32_t> instance_changed_count_arr = arr["instance_changed_count"];
        msg->instance_changed_count = instance_changed_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'instance_changed_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'instance_changed_count' is wrong type; expected a uint32.");
    }
    try {
        //last_instance_change
        const matlab::data::TypedArray<uint64_t> last_instance_change_arr = arr["last_instance_change"];
        msg->last_instance_change = last_instance_change_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'last_instance_change' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'last_instance_change' is wrong type; expected a uint64.");
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
        //baro_device_id
        const matlab::data::TypedArray<uint32_t> baro_device_id_arr = arr["baro_device_id"];
        msg->baro_device_id = baro_device_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'baro_device_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'baro_device_id' is wrong type; expected a uint32.");
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
        //mag_device_id
        const matlab::data::TypedArray<uint32_t> mag_device_id_arr = arr["mag_device_id"];
        msg->mag_device_id = mag_device_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mag_device_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mag_device_id' is wrong type; expected a uint32.");
    }
    try {
        //combined_test_ratio
        const matlab::data::TypedArray<float> combined_test_ratio_arr = arr["combined_test_ratio"];
        size_t nelem = 9;
        	std::copy(combined_test_ratio_arr.begin(), combined_test_ratio_arr.begin()+nelem, msg->combined_test_ratio.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'combined_test_ratio' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'combined_test_ratio' is wrong type; expected a single.");
    }
    try {
        //relative_test_ratio
        const matlab::data::TypedArray<float> relative_test_ratio_arr = arr["relative_test_ratio"];
        size_t nelem = 9;
        	std::copy(relative_test_ratio_arr.begin(), relative_test_ratio_arr.begin()+nelem, msg->relative_test_ratio.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'relative_test_ratio' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'relative_test_ratio' is wrong type; expected a single.");
    }
    try {
        //healthy
        const matlab::data::TypedArray<bool> healthy_arr = arr["healthy"];
        size_t nelem = 9;
        	std::copy(healthy_arr.begin(), healthy_arr.begin()+nelem, msg->healthy.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'healthy' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'healthy' is wrong type; expected a logical.");
    }
    try {
        //accumulated_gyro_error
        const matlab::data::TypedArray<float> accumulated_gyro_error_arr = arr["accumulated_gyro_error"];
        size_t nelem = 4;
        	std::copy(accumulated_gyro_error_arr.begin(), accumulated_gyro_error_arr.begin()+nelem, msg->accumulated_gyro_error.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accumulated_gyro_error' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accumulated_gyro_error' is wrong type; expected a single.");
    }
    try {
        //accumulated_accel_error
        const matlab::data::TypedArray<float> accumulated_accel_error_arr = arr["accumulated_accel_error"];
        size_t nelem = 4;
        	std::copy(accumulated_accel_error_arr.begin(), accumulated_accel_error_arr.begin()+nelem, msg->accumulated_accel_error.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accumulated_accel_error' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accumulated_accel_error' is wrong type; expected a single.");
    }
    try {
        //gyro_fault_detected
        const matlab::data::TypedArray<bool> gyro_fault_detected_arr = arr["gyro_fault_detected"];
        msg->gyro_fault_detected = gyro_fault_detected_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro_fault_detected' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gyro_fault_detected' is wrong type; expected a logical.");
    }
    try {
        //accel_fault_detected
        const matlab::data::TypedArray<bool> accel_fault_detected_arr = arr["accel_fault_detected"];
        msg->accel_fault_detected = accel_fault_detected_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_fault_detected' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accel_fault_detected' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_EstimatorSelectorStatus_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::EstimatorSelectorStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","primary_instance","instances_available","instance_changed_count","last_instance_change","accel_device_id","baro_device_id","gyro_device_id","mag_device_id","combined_test_ratio","relative_test_ratio","healthy","accumulated_gyro_error","accumulated_accel_error","gyro_fault_detected","accel_fault_detected"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/EstimatorSelectorStatus");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // primary_instance
    auto currentElement_primary_instance = (msg + ctr)->primary_instance;
    outArray[ctr]["primary_instance"] = factory.createScalar(currentElement_primary_instance);
    // instances_available
    auto currentElement_instances_available = (msg + ctr)->instances_available;
    outArray[ctr]["instances_available"] = factory.createScalar(currentElement_instances_available);
    // instance_changed_count
    auto currentElement_instance_changed_count = (msg + ctr)->instance_changed_count;
    outArray[ctr]["instance_changed_count"] = factory.createScalar(currentElement_instance_changed_count);
    // last_instance_change
    auto currentElement_last_instance_change = (msg + ctr)->last_instance_change;
    outArray[ctr]["last_instance_change"] = factory.createScalar(currentElement_last_instance_change);
    // accel_device_id
    auto currentElement_accel_device_id = (msg + ctr)->accel_device_id;
    outArray[ctr]["accel_device_id"] = factory.createScalar(currentElement_accel_device_id);
    // baro_device_id
    auto currentElement_baro_device_id = (msg + ctr)->baro_device_id;
    outArray[ctr]["baro_device_id"] = factory.createScalar(currentElement_baro_device_id);
    // gyro_device_id
    auto currentElement_gyro_device_id = (msg + ctr)->gyro_device_id;
    outArray[ctr]["gyro_device_id"] = factory.createScalar(currentElement_gyro_device_id);
    // mag_device_id
    auto currentElement_mag_device_id = (msg + ctr)->mag_device_id;
    outArray[ctr]["mag_device_id"] = factory.createScalar(currentElement_mag_device_id);
    // combined_test_ratio
    auto currentElement_combined_test_ratio = (msg + ctr)->combined_test_ratio;
    outArray[ctr]["combined_test_ratio"] = factory.createArray<px4_msgs::msg::EstimatorSelectorStatus::_combined_test_ratio_type::const_iterator, float>({currentElement_combined_test_ratio.size(), 1}, currentElement_combined_test_ratio.begin(), currentElement_combined_test_ratio.end());
    // relative_test_ratio
    auto currentElement_relative_test_ratio = (msg + ctr)->relative_test_ratio;
    outArray[ctr]["relative_test_ratio"] = factory.createArray<px4_msgs::msg::EstimatorSelectorStatus::_relative_test_ratio_type::const_iterator, float>({currentElement_relative_test_ratio.size(), 1}, currentElement_relative_test_ratio.begin(), currentElement_relative_test_ratio.end());
    // healthy
    auto currentElement_healthy = (msg + ctr)->healthy;
    outArray[ctr]["healthy"] = factory.createArray<px4_msgs::msg::EstimatorSelectorStatus::_healthy_type::const_iterator, bool>({currentElement_healthy.size(), 1}, currentElement_healthy.begin(), currentElement_healthy.end());
    // accumulated_gyro_error
    auto currentElement_accumulated_gyro_error = (msg + ctr)->accumulated_gyro_error;
    outArray[ctr]["accumulated_gyro_error"] = factory.createArray<px4_msgs::msg::EstimatorSelectorStatus::_accumulated_gyro_error_type::const_iterator, float>({currentElement_accumulated_gyro_error.size(), 1}, currentElement_accumulated_gyro_error.begin(), currentElement_accumulated_gyro_error.end());
    // accumulated_accel_error
    auto currentElement_accumulated_accel_error = (msg + ctr)->accumulated_accel_error;
    outArray[ctr]["accumulated_accel_error"] = factory.createArray<px4_msgs::msg::EstimatorSelectorStatus::_accumulated_accel_error_type::const_iterator, float>({currentElement_accumulated_accel_error.size(), 1}, currentElement_accumulated_accel_error.begin(), currentElement_accumulated_accel_error.end());
    // gyro_fault_detected
    auto currentElement_gyro_fault_detected = (msg + ctr)->gyro_fault_detected;
    outArray[ctr]["gyro_fault_detected"] = factory.createScalar(currentElement_gyro_fault_detected);
    // accel_fault_detected
    auto currentElement_accel_fault_detected = (msg + ctr)->accel_fault_detected;
    outArray[ctr]["accel_fault_detected"] = factory.createScalar(currentElement_accel_fault_detected);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_EstimatorSelectorStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_EstimatorSelectorStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_EstimatorSelectorStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::EstimatorSelectorStatus,ros2_px4_msgs_msg_EstimatorSelectorStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_EstimatorSelectorStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::EstimatorSelectorStatus,ros2_px4_msgs_msg_EstimatorSelectorStatus_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_EstimatorSelectorStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::EstimatorSelectorStatus>();
    ros2_px4_msgs_msg_EstimatorSelectorStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_EstimatorSelectorStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_EstimatorSelectorStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::EstimatorSelectorStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_EstimatorSelectorStatus_common, MATLABROS2MsgInterface<px4_msgs::msg::EstimatorSelectorStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_EstimatorSelectorStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER