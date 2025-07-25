// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/DistanceSensor
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
#include "px4_msgs/msg/distance_sensor.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_DistanceSensor_common : public MATLABROS2MsgInterface<px4_msgs::msg::DistanceSensor> {
  public:
    virtual ~ros2_px4_msgs_msg_DistanceSensor_common(){}
    virtual void copy_from_struct(px4_msgs::msg::DistanceSensor* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::DistanceSensor* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_DistanceSensor_common::copy_from_struct(px4_msgs::msg::DistanceSensor* msg, const matlab::data::Struct& arr,
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
        //device_id
        const matlab::data::TypedArray<uint32_t> device_id_arr = arr["device_id"];
        msg->device_id = device_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'device_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'device_id' is wrong type; expected a uint32.");
    }
    try {
        //min_distance
        const matlab::data::TypedArray<float> min_distance_arr = arr["min_distance"];
        msg->min_distance = min_distance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'min_distance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'min_distance' is wrong type; expected a single.");
    }
    try {
        //max_distance
        const matlab::data::TypedArray<float> max_distance_arr = arr["max_distance"];
        msg->max_distance = max_distance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'max_distance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'max_distance' is wrong type; expected a single.");
    }
    try {
        //current_distance
        const matlab::data::TypedArray<float> current_distance_arr = arr["current_distance"];
        msg->current_distance = current_distance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'current_distance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'current_distance' is wrong type; expected a single.");
    }
    try {
        //variance
        const matlab::data::TypedArray<float> variance_arr = arr["variance"];
        msg->variance = variance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'variance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'variance' is wrong type; expected a single.");
    }
    try {
        //signal_quality
        const matlab::data::TypedArray<int8_t> signal_quality_arr = arr["signal_quality"];
        msg->signal_quality = signal_quality_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'signal_quality' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'signal_quality' is wrong type; expected a int8.");
    }
    try {
        //type
        const matlab::data::TypedArray<uint8_t> type_arr = arr["type"];
        msg->type = type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'type' is wrong type; expected a uint8.");
    }
    try {
        //h_fov
        const matlab::data::TypedArray<float> h_fov_arr = arr["h_fov"];
        msg->h_fov = h_fov_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'h_fov' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'h_fov' is wrong type; expected a single.");
    }
    try {
        //v_fov
        const matlab::data::TypedArray<float> v_fov_arr = arr["v_fov"];
        msg->v_fov = v_fov_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'v_fov' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'v_fov' is wrong type; expected a single.");
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
        //orientation
        const matlab::data::TypedArray<uint8_t> orientation_arr = arr["orientation"];
        msg->orientation = orientation_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'orientation' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'orientation' is wrong type; expected a uint8.");
    }
    try {
        //mode
        const matlab::data::TypedArray<uint8_t> mode_arr = arr["mode"];
        msg->mode = mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_DistanceSensor_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::DistanceSensor* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","device_id","min_distance","max_distance","current_distance","variance","signal_quality","type","MAV_DISTANCE_SENSOR_LASER","MAV_DISTANCE_SENSOR_ULTRASOUND","MAV_DISTANCE_SENSOR_INFRARED","MAV_DISTANCE_SENSOR_RADAR","h_fov","v_fov","q","orientation","ROTATION_YAW_0","ROTATION_YAW_45","ROTATION_YAW_90","ROTATION_YAW_135","ROTATION_YAW_180","ROTATION_YAW_225","ROTATION_YAW_270","ROTATION_YAW_315","ROTATION_FORWARD_FACING","ROTATION_RIGHT_FACING","ROTATION_BACKWARD_FACING","ROTATION_LEFT_FACING","ROTATION_UPWARD_FACING","ROTATION_DOWNWARD_FACING","ROTATION_CUSTOM","mode","MODE_UNKNOWN","MODE_ENABLED","MODE_DISABLED"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/DistanceSensor");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // device_id
    auto currentElement_device_id = (msg + ctr)->device_id;
    outArray[ctr]["device_id"] = factory.createScalar(currentElement_device_id);
    // min_distance
    auto currentElement_min_distance = (msg + ctr)->min_distance;
    outArray[ctr]["min_distance"] = factory.createScalar(currentElement_min_distance);
    // max_distance
    auto currentElement_max_distance = (msg + ctr)->max_distance;
    outArray[ctr]["max_distance"] = factory.createScalar(currentElement_max_distance);
    // current_distance
    auto currentElement_current_distance = (msg + ctr)->current_distance;
    outArray[ctr]["current_distance"] = factory.createScalar(currentElement_current_distance);
    // variance
    auto currentElement_variance = (msg + ctr)->variance;
    outArray[ctr]["variance"] = factory.createScalar(currentElement_variance);
    // signal_quality
    auto currentElement_signal_quality = (msg + ctr)->signal_quality;
    outArray[ctr]["signal_quality"] = factory.createScalar(currentElement_signal_quality);
    // type
    auto currentElement_type = (msg + ctr)->type;
    outArray[ctr]["type"] = factory.createScalar(currentElement_type);
    // MAV_DISTANCE_SENSOR_LASER
    auto currentElement_MAV_DISTANCE_SENSOR_LASER = (msg + ctr)->MAV_DISTANCE_SENSOR_LASER;
    outArray[ctr]["MAV_DISTANCE_SENSOR_LASER"] = factory.createScalar(currentElement_MAV_DISTANCE_SENSOR_LASER);
    // MAV_DISTANCE_SENSOR_ULTRASOUND
    auto currentElement_MAV_DISTANCE_SENSOR_ULTRASOUND = (msg + ctr)->MAV_DISTANCE_SENSOR_ULTRASOUND;
    outArray[ctr]["MAV_DISTANCE_SENSOR_ULTRASOUND"] = factory.createScalar(currentElement_MAV_DISTANCE_SENSOR_ULTRASOUND);
    // MAV_DISTANCE_SENSOR_INFRARED
    auto currentElement_MAV_DISTANCE_SENSOR_INFRARED = (msg + ctr)->MAV_DISTANCE_SENSOR_INFRARED;
    outArray[ctr]["MAV_DISTANCE_SENSOR_INFRARED"] = factory.createScalar(currentElement_MAV_DISTANCE_SENSOR_INFRARED);
    // MAV_DISTANCE_SENSOR_RADAR
    auto currentElement_MAV_DISTANCE_SENSOR_RADAR = (msg + ctr)->MAV_DISTANCE_SENSOR_RADAR;
    outArray[ctr]["MAV_DISTANCE_SENSOR_RADAR"] = factory.createScalar(currentElement_MAV_DISTANCE_SENSOR_RADAR);
    // h_fov
    auto currentElement_h_fov = (msg + ctr)->h_fov;
    outArray[ctr]["h_fov"] = factory.createScalar(currentElement_h_fov);
    // v_fov
    auto currentElement_v_fov = (msg + ctr)->v_fov;
    outArray[ctr]["v_fov"] = factory.createScalar(currentElement_v_fov);
    // q
    auto currentElement_q = (msg + ctr)->q;
    outArray[ctr]["q"] = factory.createArray<px4_msgs::msg::DistanceSensor::_q_type::const_iterator, float>({currentElement_q.size(), 1}, currentElement_q.begin(), currentElement_q.end());
    // orientation
    auto currentElement_orientation = (msg + ctr)->orientation;
    outArray[ctr]["orientation"] = factory.createScalar(currentElement_orientation);
    // ROTATION_YAW_0
    auto currentElement_ROTATION_YAW_0 = (msg + ctr)->ROTATION_YAW_0;
    outArray[ctr]["ROTATION_YAW_0"] = factory.createScalar(currentElement_ROTATION_YAW_0);
    // ROTATION_YAW_45
    auto currentElement_ROTATION_YAW_45 = (msg + ctr)->ROTATION_YAW_45;
    outArray[ctr]["ROTATION_YAW_45"] = factory.createScalar(currentElement_ROTATION_YAW_45);
    // ROTATION_YAW_90
    auto currentElement_ROTATION_YAW_90 = (msg + ctr)->ROTATION_YAW_90;
    outArray[ctr]["ROTATION_YAW_90"] = factory.createScalar(currentElement_ROTATION_YAW_90);
    // ROTATION_YAW_135
    auto currentElement_ROTATION_YAW_135 = (msg + ctr)->ROTATION_YAW_135;
    outArray[ctr]["ROTATION_YAW_135"] = factory.createScalar(currentElement_ROTATION_YAW_135);
    // ROTATION_YAW_180
    auto currentElement_ROTATION_YAW_180 = (msg + ctr)->ROTATION_YAW_180;
    outArray[ctr]["ROTATION_YAW_180"] = factory.createScalar(currentElement_ROTATION_YAW_180);
    // ROTATION_YAW_225
    auto currentElement_ROTATION_YAW_225 = (msg + ctr)->ROTATION_YAW_225;
    outArray[ctr]["ROTATION_YAW_225"] = factory.createScalar(currentElement_ROTATION_YAW_225);
    // ROTATION_YAW_270
    auto currentElement_ROTATION_YAW_270 = (msg + ctr)->ROTATION_YAW_270;
    outArray[ctr]["ROTATION_YAW_270"] = factory.createScalar(currentElement_ROTATION_YAW_270);
    // ROTATION_YAW_315
    auto currentElement_ROTATION_YAW_315 = (msg + ctr)->ROTATION_YAW_315;
    outArray[ctr]["ROTATION_YAW_315"] = factory.createScalar(currentElement_ROTATION_YAW_315);
    // ROTATION_FORWARD_FACING
    auto currentElement_ROTATION_FORWARD_FACING = (msg + ctr)->ROTATION_FORWARD_FACING;
    outArray[ctr]["ROTATION_FORWARD_FACING"] = factory.createScalar(currentElement_ROTATION_FORWARD_FACING);
    // ROTATION_RIGHT_FACING
    auto currentElement_ROTATION_RIGHT_FACING = (msg + ctr)->ROTATION_RIGHT_FACING;
    outArray[ctr]["ROTATION_RIGHT_FACING"] = factory.createScalar(currentElement_ROTATION_RIGHT_FACING);
    // ROTATION_BACKWARD_FACING
    auto currentElement_ROTATION_BACKWARD_FACING = (msg + ctr)->ROTATION_BACKWARD_FACING;
    outArray[ctr]["ROTATION_BACKWARD_FACING"] = factory.createScalar(currentElement_ROTATION_BACKWARD_FACING);
    // ROTATION_LEFT_FACING
    auto currentElement_ROTATION_LEFT_FACING = (msg + ctr)->ROTATION_LEFT_FACING;
    outArray[ctr]["ROTATION_LEFT_FACING"] = factory.createScalar(currentElement_ROTATION_LEFT_FACING);
    // ROTATION_UPWARD_FACING
    auto currentElement_ROTATION_UPWARD_FACING = (msg + ctr)->ROTATION_UPWARD_FACING;
    outArray[ctr]["ROTATION_UPWARD_FACING"] = factory.createScalar(currentElement_ROTATION_UPWARD_FACING);
    // ROTATION_DOWNWARD_FACING
    auto currentElement_ROTATION_DOWNWARD_FACING = (msg + ctr)->ROTATION_DOWNWARD_FACING;
    outArray[ctr]["ROTATION_DOWNWARD_FACING"] = factory.createScalar(currentElement_ROTATION_DOWNWARD_FACING);
    // ROTATION_CUSTOM
    auto currentElement_ROTATION_CUSTOM = (msg + ctr)->ROTATION_CUSTOM;
    outArray[ctr]["ROTATION_CUSTOM"] = factory.createScalar(currentElement_ROTATION_CUSTOM);
    // mode
    auto currentElement_mode = (msg + ctr)->mode;
    outArray[ctr]["mode"] = factory.createScalar(currentElement_mode);
    // MODE_UNKNOWN
    auto currentElement_MODE_UNKNOWN = (msg + ctr)->MODE_UNKNOWN;
    outArray[ctr]["MODE_UNKNOWN"] = factory.createScalar(currentElement_MODE_UNKNOWN);
    // MODE_ENABLED
    auto currentElement_MODE_ENABLED = (msg + ctr)->MODE_ENABLED;
    outArray[ctr]["MODE_ENABLED"] = factory.createScalar(currentElement_MODE_ENABLED);
    // MODE_DISABLED
    auto currentElement_MODE_DISABLED = (msg + ctr)->MODE_DISABLED;
    outArray[ctr]["MODE_DISABLED"] = factory.createScalar(currentElement_MODE_DISABLED);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_DistanceSensor_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_DistanceSensor_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_DistanceSensor_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::DistanceSensor,ros2_px4_msgs_msg_DistanceSensor_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_DistanceSensor_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::DistanceSensor,ros2_px4_msgs_msg_DistanceSensor_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_DistanceSensor_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::DistanceSensor>();
    ros2_px4_msgs_msg_DistanceSensor_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_DistanceSensor_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_DistanceSensor_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::DistanceSensor*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_DistanceSensor_common, MATLABROS2MsgInterface<px4_msgs::msg::DistanceSensor>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_DistanceSensor_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER