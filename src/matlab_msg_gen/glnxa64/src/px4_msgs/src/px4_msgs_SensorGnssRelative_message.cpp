// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/SensorGnssRelative
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
#include "px4_msgs/msg/sensor_gnss_relative.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_SensorGnssRelative_common : public MATLABROS2MsgInterface<px4_msgs::msg::SensorGnssRelative> {
  public:
    virtual ~ros2_px4_msgs_msg_SensorGnssRelative_common(){}
    virtual void copy_from_struct(px4_msgs::msg::SensorGnssRelative* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::SensorGnssRelative* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_SensorGnssRelative_common::copy_from_struct(px4_msgs::msg::SensorGnssRelative* msg, const matlab::data::Struct& arr,
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
        //time_utc_usec
        const matlab::data::TypedArray<uint64_t> time_utc_usec_arr = arr["time_utc_usec"];
        msg->time_utc_usec = time_utc_usec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'time_utc_usec' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'time_utc_usec' is wrong type; expected a uint64.");
    }
    try {
        //reference_station_id
        const matlab::data::TypedArray<uint16_t> reference_station_id_arr = arr["reference_station_id"];
        msg->reference_station_id = reference_station_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reference_station_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reference_station_id' is wrong type; expected a uint16.");
    }
    try {
        //position
        const matlab::data::TypedArray<float> position_arr = arr["position"];
        size_t nelem = 3;
        	std::copy(position_arr.begin(), position_arr.begin()+nelem, msg->position.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'position' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'position' is wrong type; expected a single.");
    }
    try {
        //position_accuracy
        const matlab::data::TypedArray<float> position_accuracy_arr = arr["position_accuracy"];
        size_t nelem = 3;
        	std::copy(position_accuracy_arr.begin(), position_accuracy_arr.begin()+nelem, msg->position_accuracy.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'position_accuracy' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'position_accuracy' is wrong type; expected a single.");
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
        //heading_accuracy
        const matlab::data::TypedArray<float> heading_accuracy_arr = arr["heading_accuracy"];
        msg->heading_accuracy = heading_accuracy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heading_accuracy' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heading_accuracy' is wrong type; expected a single.");
    }
    try {
        //position_length
        const matlab::data::TypedArray<float> position_length_arr = arr["position_length"];
        msg->position_length = position_length_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'position_length' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'position_length' is wrong type; expected a single.");
    }
    try {
        //accuracy_length
        const matlab::data::TypedArray<float> accuracy_length_arr = arr["accuracy_length"];
        msg->accuracy_length = accuracy_length_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accuracy_length' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accuracy_length' is wrong type; expected a single.");
    }
    try {
        //gnss_fix_ok
        const matlab::data::TypedArray<bool> gnss_fix_ok_arr = arr["gnss_fix_ok"];
        msg->gnss_fix_ok = gnss_fix_ok_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gnss_fix_ok' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gnss_fix_ok' is wrong type; expected a logical.");
    }
    try {
        //differential_solution
        const matlab::data::TypedArray<bool> differential_solution_arr = arr["differential_solution"];
        msg->differential_solution = differential_solution_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'differential_solution' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'differential_solution' is wrong type; expected a logical.");
    }
    try {
        //relative_position_valid
        const matlab::data::TypedArray<bool> relative_position_valid_arr = arr["relative_position_valid"];
        msg->relative_position_valid = relative_position_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'relative_position_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'relative_position_valid' is wrong type; expected a logical.");
    }
    try {
        //carrier_solution_floating
        const matlab::data::TypedArray<bool> carrier_solution_floating_arr = arr["carrier_solution_floating"];
        msg->carrier_solution_floating = carrier_solution_floating_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'carrier_solution_floating' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'carrier_solution_floating' is wrong type; expected a logical.");
    }
    try {
        //carrier_solution_fixed
        const matlab::data::TypedArray<bool> carrier_solution_fixed_arr = arr["carrier_solution_fixed"];
        msg->carrier_solution_fixed = carrier_solution_fixed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'carrier_solution_fixed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'carrier_solution_fixed' is wrong type; expected a logical.");
    }
    try {
        //moving_base_mode
        const matlab::data::TypedArray<bool> moving_base_mode_arr = arr["moving_base_mode"];
        msg->moving_base_mode = moving_base_mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'moving_base_mode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'moving_base_mode' is wrong type; expected a logical.");
    }
    try {
        //reference_position_miss
        const matlab::data::TypedArray<bool> reference_position_miss_arr = arr["reference_position_miss"];
        msg->reference_position_miss = reference_position_miss_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reference_position_miss' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reference_position_miss' is wrong type; expected a logical.");
    }
    try {
        //reference_observations_miss
        const matlab::data::TypedArray<bool> reference_observations_miss_arr = arr["reference_observations_miss"];
        msg->reference_observations_miss = reference_observations_miss_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reference_observations_miss' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reference_observations_miss' is wrong type; expected a logical.");
    }
    try {
        //heading_valid
        const matlab::data::TypedArray<bool> heading_valid_arr = arr["heading_valid"];
        msg->heading_valid = heading_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heading_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heading_valid' is wrong type; expected a logical.");
    }
    try {
        //relative_position_normalized
        const matlab::data::TypedArray<bool> relative_position_normalized_arr = arr["relative_position_normalized"];
        msg->relative_position_normalized = relative_position_normalized_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'relative_position_normalized' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'relative_position_normalized' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_SensorGnssRelative_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::SensorGnssRelative* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","timestamp_sample","device_id","time_utc_usec","reference_station_id","position","position_accuracy","heading","heading_accuracy","position_length","accuracy_length","gnss_fix_ok","differential_solution","relative_position_valid","carrier_solution_floating","carrier_solution_fixed","moving_base_mode","reference_position_miss","reference_observations_miss","heading_valid","relative_position_normalized"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/SensorGnssRelative");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // device_id
    auto currentElement_device_id = (msg + ctr)->device_id;
    outArray[ctr]["device_id"] = factory.createScalar(currentElement_device_id);
    // time_utc_usec
    auto currentElement_time_utc_usec = (msg + ctr)->time_utc_usec;
    outArray[ctr]["time_utc_usec"] = factory.createScalar(currentElement_time_utc_usec);
    // reference_station_id
    auto currentElement_reference_station_id = (msg + ctr)->reference_station_id;
    outArray[ctr]["reference_station_id"] = factory.createScalar(currentElement_reference_station_id);
    // position
    auto currentElement_position = (msg + ctr)->position;
    outArray[ctr]["position"] = factory.createArray<px4_msgs::msg::SensorGnssRelative::_position_type::const_iterator, float>({currentElement_position.size(), 1}, currentElement_position.begin(), currentElement_position.end());
    // position_accuracy
    auto currentElement_position_accuracy = (msg + ctr)->position_accuracy;
    outArray[ctr]["position_accuracy"] = factory.createArray<px4_msgs::msg::SensorGnssRelative::_position_accuracy_type::const_iterator, float>({currentElement_position_accuracy.size(), 1}, currentElement_position_accuracy.begin(), currentElement_position_accuracy.end());
    // heading
    auto currentElement_heading = (msg + ctr)->heading;
    outArray[ctr]["heading"] = factory.createScalar(currentElement_heading);
    // heading_accuracy
    auto currentElement_heading_accuracy = (msg + ctr)->heading_accuracy;
    outArray[ctr]["heading_accuracy"] = factory.createScalar(currentElement_heading_accuracy);
    // position_length
    auto currentElement_position_length = (msg + ctr)->position_length;
    outArray[ctr]["position_length"] = factory.createScalar(currentElement_position_length);
    // accuracy_length
    auto currentElement_accuracy_length = (msg + ctr)->accuracy_length;
    outArray[ctr]["accuracy_length"] = factory.createScalar(currentElement_accuracy_length);
    // gnss_fix_ok
    auto currentElement_gnss_fix_ok = (msg + ctr)->gnss_fix_ok;
    outArray[ctr]["gnss_fix_ok"] = factory.createScalar(currentElement_gnss_fix_ok);
    // differential_solution
    auto currentElement_differential_solution = (msg + ctr)->differential_solution;
    outArray[ctr]["differential_solution"] = factory.createScalar(currentElement_differential_solution);
    // relative_position_valid
    auto currentElement_relative_position_valid = (msg + ctr)->relative_position_valid;
    outArray[ctr]["relative_position_valid"] = factory.createScalar(currentElement_relative_position_valid);
    // carrier_solution_floating
    auto currentElement_carrier_solution_floating = (msg + ctr)->carrier_solution_floating;
    outArray[ctr]["carrier_solution_floating"] = factory.createScalar(currentElement_carrier_solution_floating);
    // carrier_solution_fixed
    auto currentElement_carrier_solution_fixed = (msg + ctr)->carrier_solution_fixed;
    outArray[ctr]["carrier_solution_fixed"] = factory.createScalar(currentElement_carrier_solution_fixed);
    // moving_base_mode
    auto currentElement_moving_base_mode = (msg + ctr)->moving_base_mode;
    outArray[ctr]["moving_base_mode"] = factory.createScalar(currentElement_moving_base_mode);
    // reference_position_miss
    auto currentElement_reference_position_miss = (msg + ctr)->reference_position_miss;
    outArray[ctr]["reference_position_miss"] = factory.createScalar(currentElement_reference_position_miss);
    // reference_observations_miss
    auto currentElement_reference_observations_miss = (msg + ctr)->reference_observations_miss;
    outArray[ctr]["reference_observations_miss"] = factory.createScalar(currentElement_reference_observations_miss);
    // heading_valid
    auto currentElement_heading_valid = (msg + ctr)->heading_valid;
    outArray[ctr]["heading_valid"] = factory.createScalar(currentElement_heading_valid);
    // relative_position_normalized
    auto currentElement_relative_position_normalized = (msg + ctr)->relative_position_normalized;
    outArray[ctr]["relative_position_normalized"] = factory.createScalar(currentElement_relative_position_normalized);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_SensorGnssRelative_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_SensorGnssRelative_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_SensorGnssRelative_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::SensorGnssRelative,ros2_px4_msgs_msg_SensorGnssRelative_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_SensorGnssRelative_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::SensorGnssRelative,ros2_px4_msgs_msg_SensorGnssRelative_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_SensorGnssRelative_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::SensorGnssRelative>();
    ros2_px4_msgs_msg_SensorGnssRelative_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_SensorGnssRelative_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_SensorGnssRelative_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::SensorGnssRelative*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_SensorGnssRelative_common, MATLABROS2MsgInterface<px4_msgs::msg::SensorGnssRelative>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_SensorGnssRelative_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER