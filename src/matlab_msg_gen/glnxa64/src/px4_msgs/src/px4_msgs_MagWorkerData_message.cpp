// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/MagWorkerData
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
#include "px4_msgs/msg/mag_worker_data.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_MagWorkerData_common : public MATLABROS2MsgInterface<px4_msgs::msg::MagWorkerData> {
  public:
    virtual ~ros2_px4_msgs_msg_MagWorkerData_common(){}
    virtual void copy_from_struct(px4_msgs::msg::MagWorkerData* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::MagWorkerData* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_MagWorkerData_common::copy_from_struct(px4_msgs::msg::MagWorkerData* msg, const matlab::data::Struct& arr,
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
        //done_count
        const matlab::data::TypedArray<uint32_t> done_count_arr = arr["done_count"];
        msg->done_count = done_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'done_count' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'done_count' is wrong type; expected a uint32.");
    }
    try {
        //calibration_points_perside
        const matlab::data::TypedArray<uint32_t> calibration_points_perside_arr = arr["calibration_points_perside"];
        msg->calibration_points_perside = calibration_points_perside_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'calibration_points_perside' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'calibration_points_perside' is wrong type; expected a uint32.");
    }
    try {
        //calibration_interval_perside_us
        const matlab::data::TypedArray<uint64_t> calibration_interval_perside_us_arr = arr["calibration_interval_perside_us"];
        msg->calibration_interval_perside_us = calibration_interval_perside_us_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'calibration_interval_perside_us' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'calibration_interval_perside_us' is wrong type; expected a uint64.");
    }
    try {
        //calibration_counter_total
        const matlab::data::TypedArray<uint32_t> calibration_counter_total_arr = arr["calibration_counter_total"];
        size_t nelem = 4;
        	std::copy(calibration_counter_total_arr.begin(), calibration_counter_total_arr.begin()+nelem, msg->calibration_counter_total.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'calibration_counter_total' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'calibration_counter_total' is wrong type; expected a uint32.");
    }
    try {
        //side_data_collected
        const matlab::data::TypedArray<bool> side_data_collected_arr = arr["side_data_collected"];
        size_t nelem = 4;
        	std::copy(side_data_collected_arr.begin(), side_data_collected_arr.begin()+nelem, msg->side_data_collected.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'side_data_collected' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'side_data_collected' is wrong type; expected a logical.");
    }
    try {
        //x
        const matlab::data::TypedArray<float> x_arr = arr["x"];
        size_t nelem = 4;
        	std::copy(x_arr.begin(), x_arr.begin()+nelem, msg->x.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a single.");
    }
    try {
        //y
        const matlab::data::TypedArray<float> y_arr = arr["y"];
        size_t nelem = 4;
        	std::copy(y_arr.begin(), y_arr.begin()+nelem, msg->y.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a single.");
    }
    try {
        //z
        const matlab::data::TypedArray<float> z_arr = arr["z"];
        size_t nelem = 4;
        	std::copy(z_arr.begin(), z_arr.begin()+nelem, msg->z.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_MagWorkerData_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::MagWorkerData* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","timestamp_sample","MAX_MAGS","done_count","calibration_points_perside","calibration_interval_perside_us","calibration_counter_total","side_data_collected","x","y","z"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/MagWorkerData");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // MAX_MAGS
    auto currentElement_MAX_MAGS = (msg + ctr)->MAX_MAGS;
    outArray[ctr]["MAX_MAGS"] = factory.createScalar(currentElement_MAX_MAGS);
    // done_count
    auto currentElement_done_count = (msg + ctr)->done_count;
    outArray[ctr]["done_count"] = factory.createScalar(currentElement_done_count);
    // calibration_points_perside
    auto currentElement_calibration_points_perside = (msg + ctr)->calibration_points_perside;
    outArray[ctr]["calibration_points_perside"] = factory.createScalar(currentElement_calibration_points_perside);
    // calibration_interval_perside_us
    auto currentElement_calibration_interval_perside_us = (msg + ctr)->calibration_interval_perside_us;
    outArray[ctr]["calibration_interval_perside_us"] = factory.createScalar(currentElement_calibration_interval_perside_us);
    // calibration_counter_total
    auto currentElement_calibration_counter_total = (msg + ctr)->calibration_counter_total;
    outArray[ctr]["calibration_counter_total"] = factory.createArray<px4_msgs::msg::MagWorkerData::_calibration_counter_total_type::const_iterator, uint32_t>({currentElement_calibration_counter_total.size(), 1}, currentElement_calibration_counter_total.begin(), currentElement_calibration_counter_total.end());
    // side_data_collected
    auto currentElement_side_data_collected = (msg + ctr)->side_data_collected;
    outArray[ctr]["side_data_collected"] = factory.createArray<px4_msgs::msg::MagWorkerData::_side_data_collected_type::const_iterator, bool>({currentElement_side_data_collected.size(), 1}, currentElement_side_data_collected.begin(), currentElement_side_data_collected.end());
    // x
    auto currentElement_x = (msg + ctr)->x;
    outArray[ctr]["x"] = factory.createArray<px4_msgs::msg::MagWorkerData::_x_type::const_iterator, float>({currentElement_x.size(), 1}, currentElement_x.begin(), currentElement_x.end());
    // y
    auto currentElement_y = (msg + ctr)->y;
    outArray[ctr]["y"] = factory.createArray<px4_msgs::msg::MagWorkerData::_y_type::const_iterator, float>({currentElement_y.size(), 1}, currentElement_y.begin(), currentElement_y.end());
    // z
    auto currentElement_z = (msg + ctr)->z;
    outArray[ctr]["z"] = factory.createArray<px4_msgs::msg::MagWorkerData::_z_type::const_iterator, float>({currentElement_z.size(), 1}, currentElement_z.begin(), currentElement_z.end());
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_MagWorkerData_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_MagWorkerData_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_MagWorkerData_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::MagWorkerData,ros2_px4_msgs_msg_MagWorkerData_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_MagWorkerData_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::MagWorkerData,ros2_px4_msgs_msg_MagWorkerData_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_MagWorkerData_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::MagWorkerData>();
    ros2_px4_msgs_msg_MagWorkerData_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_MagWorkerData_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_MagWorkerData_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::MagWorkerData*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_MagWorkerData_common, MATLABROS2MsgInterface<px4_msgs::msg::MagWorkerData>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_MagWorkerData_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER