// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/CameraCapture
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
#include "px4_msgs/msg/camera_capture.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_CameraCapture_common : public MATLABROS2MsgInterface<px4_msgs::msg::CameraCapture> {
  public:
    virtual ~ros2_px4_msgs_msg_CameraCapture_common(){}
    virtual void copy_from_struct(px4_msgs::msg::CameraCapture* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::CameraCapture* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_CameraCapture_common::copy_from_struct(px4_msgs::msg::CameraCapture* msg, const matlab::data::Struct& arr,
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
        //timestamp_utc
        const matlab::data::TypedArray<uint64_t> timestamp_utc_arr = arr["timestamp_utc"];
        msg->timestamp_utc = timestamp_utc_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'timestamp_utc' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'timestamp_utc' is wrong type; expected a uint64.");
    }
    try {
        //seq
        const matlab::data::TypedArray<uint32_t> seq_arr = arr["seq"];
        msg->seq = seq_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'seq' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'seq' is wrong type; expected a uint32.");
    }
    try {
        //lat
        const matlab::data::TypedArray<double> lat_arr = arr["lat"];
        msg->lat = lat_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'lat' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'lat' is wrong type; expected a double.");
    }
    try {
        //lon
        const matlab::data::TypedArray<double> lon_arr = arr["lon"];
        msg->lon = lon_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'lon' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'lon' is wrong type; expected a double.");
    }
    try {
        //alt
        const matlab::data::TypedArray<float> alt_arr = arr["alt"];
        msg->alt = alt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'alt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'alt' is wrong type; expected a single.");
    }
    try {
        //ground_distance
        const matlab::data::TypedArray<float> ground_distance_arr = arr["ground_distance"];
        msg->ground_distance = ground_distance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ground_distance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ground_distance' is wrong type; expected a single.");
    }
    try {
        //q
        const matlab::data::TypedArray<float> q_arr = arr["q"];
        size_t nelem = 4;
        	std::copy(q_arr.begin(), q_arr.begin()+nelem, msg->q.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'q' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'q' is wrong type; expected a single.");
    }
    try {
        //result
        const matlab::data::TypedArray<int8_t> result_arr = arr["result"];
        msg->result = result_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'result' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'result' is wrong type; expected a int8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_CameraCapture_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::CameraCapture* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","timestamp_utc","seq","lat","lon","alt","ground_distance","q","result"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/CameraCapture");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_utc
    auto currentElement_timestamp_utc = (msg + ctr)->timestamp_utc;
    outArray[ctr]["timestamp_utc"] = factory.createScalar(currentElement_timestamp_utc);
    // seq
    auto currentElement_seq = (msg + ctr)->seq;
    outArray[ctr]["seq"] = factory.createScalar(currentElement_seq);
    // lat
    auto currentElement_lat = (msg + ctr)->lat;
    outArray[ctr]["lat"] = factory.createScalar(currentElement_lat);
    // lon
    auto currentElement_lon = (msg + ctr)->lon;
    outArray[ctr]["lon"] = factory.createScalar(currentElement_lon);
    // alt
    auto currentElement_alt = (msg + ctr)->alt;
    outArray[ctr]["alt"] = factory.createScalar(currentElement_alt);
    // ground_distance
    auto currentElement_ground_distance = (msg + ctr)->ground_distance;
    outArray[ctr]["ground_distance"] = factory.createScalar(currentElement_ground_distance);
    // q
    auto currentElement_q = (msg + ctr)->q;
    outArray[ctr]["q"] = factory.createArray<px4_msgs::msg::CameraCapture::_q_type::const_iterator, float>({currentElement_q.size(), 1}, currentElement_q.begin(), currentElement_q.end());
    // result
    auto currentElement_result = (msg + ctr)->result;
    outArray[ctr]["result"] = factory.createScalar(currentElement_result);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_CameraCapture_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_CameraCapture_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_CameraCapture_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::CameraCapture,ros2_px4_msgs_msg_CameraCapture_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_CameraCapture_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::CameraCapture,ros2_px4_msgs_msg_CameraCapture_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_CameraCapture_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::CameraCapture>();
    ros2_px4_msgs_msg_CameraCapture_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_CameraCapture_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_CameraCapture_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::CameraCapture*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_CameraCapture_common, MATLABROS2MsgInterface<px4_msgs::msg::CameraCapture>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_CameraCapture_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER