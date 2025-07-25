// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/SensorGyroFft
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
#include "px4_msgs/msg/sensor_gyro_fft.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_SensorGyroFft_common : public MATLABROS2MsgInterface<px4_msgs::msg::SensorGyroFft> {
  public:
    virtual ~ros2_px4_msgs_msg_SensorGyroFft_common(){}
    virtual void copy_from_struct(px4_msgs::msg::SensorGyroFft* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::SensorGyroFft* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_SensorGyroFft_common::copy_from_struct(px4_msgs::msg::SensorGyroFft* msg, const matlab::data::Struct& arr,
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
        //sensor_sample_rate_hz
        const matlab::data::TypedArray<float> sensor_sample_rate_hz_arr = arr["sensor_sample_rate_hz"];
        msg->sensor_sample_rate_hz = sensor_sample_rate_hz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sensor_sample_rate_hz' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'sensor_sample_rate_hz' is wrong type; expected a single.");
    }
    try {
        //resolution_hz
        const matlab::data::TypedArray<float> resolution_hz_arr = arr["resolution_hz"];
        msg->resolution_hz = resolution_hz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'resolution_hz' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'resolution_hz' is wrong type; expected a single.");
    }
    try {
        //peak_frequencies_x
        const matlab::data::TypedArray<float> peak_frequencies_x_arr = arr["peak_frequencies_x"];
        size_t nelem = 3;
        	std::copy(peak_frequencies_x_arr.begin(), peak_frequencies_x_arr.begin()+nelem, msg->peak_frequencies_x.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'peak_frequencies_x' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'peak_frequencies_x' is wrong type; expected a single.");
    }
    try {
        //peak_frequencies_y
        const matlab::data::TypedArray<float> peak_frequencies_y_arr = arr["peak_frequencies_y"];
        size_t nelem = 3;
        	std::copy(peak_frequencies_y_arr.begin(), peak_frequencies_y_arr.begin()+nelem, msg->peak_frequencies_y.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'peak_frequencies_y' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'peak_frequencies_y' is wrong type; expected a single.");
    }
    try {
        //peak_frequencies_z
        const matlab::data::TypedArray<float> peak_frequencies_z_arr = arr["peak_frequencies_z"];
        size_t nelem = 3;
        	std::copy(peak_frequencies_z_arr.begin(), peak_frequencies_z_arr.begin()+nelem, msg->peak_frequencies_z.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'peak_frequencies_z' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'peak_frequencies_z' is wrong type; expected a single.");
    }
    try {
        //peak_snr_x
        const matlab::data::TypedArray<float> peak_snr_x_arr = arr["peak_snr_x"];
        size_t nelem = 3;
        	std::copy(peak_snr_x_arr.begin(), peak_snr_x_arr.begin()+nelem, msg->peak_snr_x.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'peak_snr_x' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'peak_snr_x' is wrong type; expected a single.");
    }
    try {
        //peak_snr_y
        const matlab::data::TypedArray<float> peak_snr_y_arr = arr["peak_snr_y"];
        size_t nelem = 3;
        	std::copy(peak_snr_y_arr.begin(), peak_snr_y_arr.begin()+nelem, msg->peak_snr_y.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'peak_snr_y' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'peak_snr_y' is wrong type; expected a single.");
    }
    try {
        //peak_snr_z
        const matlab::data::TypedArray<float> peak_snr_z_arr = arr["peak_snr_z"];
        size_t nelem = 3;
        	std::copy(peak_snr_z_arr.begin(), peak_snr_z_arr.begin()+nelem, msg->peak_snr_z.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'peak_snr_z' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'peak_snr_z' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_SensorGyroFft_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::SensorGyroFft* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","timestamp_sample","device_id","sensor_sample_rate_hz","resolution_hz","peak_frequencies_x","peak_frequencies_y","peak_frequencies_z","peak_snr_x","peak_snr_y","peak_snr_z"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/SensorGyroFft");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // device_id
    auto currentElement_device_id = (msg + ctr)->device_id;
    outArray[ctr]["device_id"] = factory.createScalar(currentElement_device_id);
    // sensor_sample_rate_hz
    auto currentElement_sensor_sample_rate_hz = (msg + ctr)->sensor_sample_rate_hz;
    outArray[ctr]["sensor_sample_rate_hz"] = factory.createScalar(currentElement_sensor_sample_rate_hz);
    // resolution_hz
    auto currentElement_resolution_hz = (msg + ctr)->resolution_hz;
    outArray[ctr]["resolution_hz"] = factory.createScalar(currentElement_resolution_hz);
    // peak_frequencies_x
    auto currentElement_peak_frequencies_x = (msg + ctr)->peak_frequencies_x;
    outArray[ctr]["peak_frequencies_x"] = factory.createArray<px4_msgs::msg::SensorGyroFft::_peak_frequencies_x_type::const_iterator, float>({currentElement_peak_frequencies_x.size(), 1}, currentElement_peak_frequencies_x.begin(), currentElement_peak_frequencies_x.end());
    // peak_frequencies_y
    auto currentElement_peak_frequencies_y = (msg + ctr)->peak_frequencies_y;
    outArray[ctr]["peak_frequencies_y"] = factory.createArray<px4_msgs::msg::SensorGyroFft::_peak_frequencies_y_type::const_iterator, float>({currentElement_peak_frequencies_y.size(), 1}, currentElement_peak_frequencies_y.begin(), currentElement_peak_frequencies_y.end());
    // peak_frequencies_z
    auto currentElement_peak_frequencies_z = (msg + ctr)->peak_frequencies_z;
    outArray[ctr]["peak_frequencies_z"] = factory.createArray<px4_msgs::msg::SensorGyroFft::_peak_frequencies_z_type::const_iterator, float>({currentElement_peak_frequencies_z.size(), 1}, currentElement_peak_frequencies_z.begin(), currentElement_peak_frequencies_z.end());
    // peak_snr_x
    auto currentElement_peak_snr_x = (msg + ctr)->peak_snr_x;
    outArray[ctr]["peak_snr_x"] = factory.createArray<px4_msgs::msg::SensorGyroFft::_peak_snr_x_type::const_iterator, float>({currentElement_peak_snr_x.size(), 1}, currentElement_peak_snr_x.begin(), currentElement_peak_snr_x.end());
    // peak_snr_y
    auto currentElement_peak_snr_y = (msg + ctr)->peak_snr_y;
    outArray[ctr]["peak_snr_y"] = factory.createArray<px4_msgs::msg::SensorGyroFft::_peak_snr_y_type::const_iterator, float>({currentElement_peak_snr_y.size(), 1}, currentElement_peak_snr_y.begin(), currentElement_peak_snr_y.end());
    // peak_snr_z
    auto currentElement_peak_snr_z = (msg + ctr)->peak_snr_z;
    outArray[ctr]["peak_snr_z"] = factory.createArray<px4_msgs::msg::SensorGyroFft::_peak_snr_z_type::const_iterator, float>({currentElement_peak_snr_z.size(), 1}, currentElement_peak_snr_z.begin(), currentElement_peak_snr_z.end());
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_SensorGyroFft_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_SensorGyroFft_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_SensorGyroFft_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::SensorGyroFft,ros2_px4_msgs_msg_SensorGyroFft_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_SensorGyroFft_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::SensorGyroFft,ros2_px4_msgs_msg_SensorGyroFft_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_SensorGyroFft_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::SensorGyroFft>();
    ros2_px4_msgs_msg_SensorGyroFft_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_SensorGyroFft_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_SensorGyroFft_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::SensorGyroFft*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_SensorGyroFft_common, MATLABROS2MsgInterface<px4_msgs::msg::SensorGyroFft>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_SensorGyroFft_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER