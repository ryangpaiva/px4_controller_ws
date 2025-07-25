// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/AirspeedValidated
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
#include "px4_msgs/msg/airspeed_validated.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_AirspeedValidated_common : public MATLABROS2MsgInterface<px4_msgs::msg::AirspeedValidated> {
  public:
    virtual ~ros2_px4_msgs_msg_AirspeedValidated_common(){}
    virtual void copy_from_struct(px4_msgs::msg::AirspeedValidated* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::AirspeedValidated* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_AirspeedValidated_common::copy_from_struct(px4_msgs::msg::AirspeedValidated* msg, const matlab::data::Struct& arr,
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
        //indicated_airspeed_m_s
        const matlab::data::TypedArray<float> indicated_airspeed_m_s_arr = arr["indicated_airspeed_m_s"];
        msg->indicated_airspeed_m_s = indicated_airspeed_m_s_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'indicated_airspeed_m_s' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'indicated_airspeed_m_s' is wrong type; expected a single.");
    }
    try {
        //calibrated_airspeed_m_s
        const matlab::data::TypedArray<float> calibrated_airspeed_m_s_arr = arr["calibrated_airspeed_m_s"];
        msg->calibrated_airspeed_m_s = calibrated_airspeed_m_s_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'calibrated_airspeed_m_s' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'calibrated_airspeed_m_s' is wrong type; expected a single.");
    }
    try {
        //true_airspeed_m_s
        const matlab::data::TypedArray<float> true_airspeed_m_s_arr = arr["true_airspeed_m_s"];
        msg->true_airspeed_m_s = true_airspeed_m_s_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'true_airspeed_m_s' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'true_airspeed_m_s' is wrong type; expected a single.");
    }
    try {
        //calibrated_ground_minus_wind_m_s
        const matlab::data::TypedArray<float> calibrated_ground_minus_wind_m_s_arr = arr["calibrated_ground_minus_wind_m_s"];
        msg->calibrated_ground_minus_wind_m_s = calibrated_ground_minus_wind_m_s_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'calibrated_ground_minus_wind_m_s' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'calibrated_ground_minus_wind_m_s' is wrong type; expected a single.");
    }
    try {
        //true_ground_minus_wind_m_s
        const matlab::data::TypedArray<float> true_ground_minus_wind_m_s_arr = arr["true_ground_minus_wind_m_s"];
        msg->true_ground_minus_wind_m_s = true_ground_minus_wind_m_s_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'true_ground_minus_wind_m_s' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'true_ground_minus_wind_m_s' is wrong type; expected a single.");
    }
    try {
        //airspeed_sensor_measurement_valid
        const matlab::data::TypedArray<bool> airspeed_sensor_measurement_valid_arr = arr["airspeed_sensor_measurement_valid"];
        msg->airspeed_sensor_measurement_valid = airspeed_sensor_measurement_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'airspeed_sensor_measurement_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'airspeed_sensor_measurement_valid' is wrong type; expected a logical.");
    }
    try {
        //selected_airspeed_index
        const matlab::data::TypedArray<int8_t> selected_airspeed_index_arr = arr["selected_airspeed_index"];
        msg->selected_airspeed_index = selected_airspeed_index_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'selected_airspeed_index' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'selected_airspeed_index' is wrong type; expected a int8.");
    }
    try {
        //airspeed_derivative_filtered
        const matlab::data::TypedArray<float> airspeed_derivative_filtered_arr = arr["airspeed_derivative_filtered"];
        msg->airspeed_derivative_filtered = airspeed_derivative_filtered_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'airspeed_derivative_filtered' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'airspeed_derivative_filtered' is wrong type; expected a single.");
    }
    try {
        //throttle_filtered
        const matlab::data::TypedArray<float> throttle_filtered_arr = arr["throttle_filtered"];
        msg->throttle_filtered = throttle_filtered_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'throttle_filtered' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'throttle_filtered' is wrong type; expected a single.");
    }
    try {
        //pitch_filtered
        const matlab::data::TypedArray<float> pitch_filtered_arr = arr["pitch_filtered"];
        msg->pitch_filtered = pitch_filtered_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pitch_filtered' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pitch_filtered' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_AirspeedValidated_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::AirspeedValidated* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","indicated_airspeed_m_s","calibrated_airspeed_m_s","true_airspeed_m_s","calibrated_ground_minus_wind_m_s","true_ground_minus_wind_m_s","airspeed_sensor_measurement_valid","selected_airspeed_index","airspeed_derivative_filtered","throttle_filtered","pitch_filtered"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/AirspeedValidated");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // indicated_airspeed_m_s
    auto currentElement_indicated_airspeed_m_s = (msg + ctr)->indicated_airspeed_m_s;
    outArray[ctr]["indicated_airspeed_m_s"] = factory.createScalar(currentElement_indicated_airspeed_m_s);
    // calibrated_airspeed_m_s
    auto currentElement_calibrated_airspeed_m_s = (msg + ctr)->calibrated_airspeed_m_s;
    outArray[ctr]["calibrated_airspeed_m_s"] = factory.createScalar(currentElement_calibrated_airspeed_m_s);
    // true_airspeed_m_s
    auto currentElement_true_airspeed_m_s = (msg + ctr)->true_airspeed_m_s;
    outArray[ctr]["true_airspeed_m_s"] = factory.createScalar(currentElement_true_airspeed_m_s);
    // calibrated_ground_minus_wind_m_s
    auto currentElement_calibrated_ground_minus_wind_m_s = (msg + ctr)->calibrated_ground_minus_wind_m_s;
    outArray[ctr]["calibrated_ground_minus_wind_m_s"] = factory.createScalar(currentElement_calibrated_ground_minus_wind_m_s);
    // true_ground_minus_wind_m_s
    auto currentElement_true_ground_minus_wind_m_s = (msg + ctr)->true_ground_minus_wind_m_s;
    outArray[ctr]["true_ground_minus_wind_m_s"] = factory.createScalar(currentElement_true_ground_minus_wind_m_s);
    // airspeed_sensor_measurement_valid
    auto currentElement_airspeed_sensor_measurement_valid = (msg + ctr)->airspeed_sensor_measurement_valid;
    outArray[ctr]["airspeed_sensor_measurement_valid"] = factory.createScalar(currentElement_airspeed_sensor_measurement_valid);
    // selected_airspeed_index
    auto currentElement_selected_airspeed_index = (msg + ctr)->selected_airspeed_index;
    outArray[ctr]["selected_airspeed_index"] = factory.createScalar(currentElement_selected_airspeed_index);
    // airspeed_derivative_filtered
    auto currentElement_airspeed_derivative_filtered = (msg + ctr)->airspeed_derivative_filtered;
    outArray[ctr]["airspeed_derivative_filtered"] = factory.createScalar(currentElement_airspeed_derivative_filtered);
    // throttle_filtered
    auto currentElement_throttle_filtered = (msg + ctr)->throttle_filtered;
    outArray[ctr]["throttle_filtered"] = factory.createScalar(currentElement_throttle_filtered);
    // pitch_filtered
    auto currentElement_pitch_filtered = (msg + ctr)->pitch_filtered;
    outArray[ctr]["pitch_filtered"] = factory.createScalar(currentElement_pitch_filtered);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_AirspeedValidated_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_AirspeedValidated_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_AirspeedValidated_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::AirspeedValidated,ros2_px4_msgs_msg_AirspeedValidated_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_AirspeedValidated_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::AirspeedValidated,ros2_px4_msgs_msg_AirspeedValidated_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_AirspeedValidated_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::AirspeedValidated>();
    ros2_px4_msgs_msg_AirspeedValidated_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_AirspeedValidated_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_AirspeedValidated_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::AirspeedValidated*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_AirspeedValidated_common, MATLABROS2MsgInterface<px4_msgs::msg::AirspeedValidated>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_AirspeedValidated_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER