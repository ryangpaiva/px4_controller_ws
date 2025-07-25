// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/ObstacleDistance
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
#include "px4_msgs/msg/obstacle_distance.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_ObstacleDistance_common : public MATLABROS2MsgInterface<px4_msgs::msg::ObstacleDistance> {
  public:
    virtual ~ros2_px4_msgs_msg_ObstacleDistance_common(){}
    virtual void copy_from_struct(px4_msgs::msg::ObstacleDistance* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::ObstacleDistance* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_ObstacleDistance_common::copy_from_struct(px4_msgs::msg::ObstacleDistance* msg, const matlab::data::Struct& arr,
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
        //frame
        const matlab::data::TypedArray<uint8_t> frame_arr = arr["frame"];
        msg->frame = frame_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'frame' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'frame' is wrong type; expected a uint8.");
    }
    try {
        //sensor_type
        const matlab::data::TypedArray<uint8_t> sensor_type_arr = arr["sensor_type"];
        msg->sensor_type = sensor_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sensor_type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'sensor_type' is wrong type; expected a uint8.");
    }
    try {
        //distances
        const matlab::data::TypedArray<uint16_t> distances_arr = arr["distances"];
        size_t nelem = 72;
        	std::copy(distances_arr.begin(), distances_arr.begin()+nelem, msg->distances.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'distances' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'distances' is wrong type; expected a uint16.");
    }
    try {
        //increment
        const matlab::data::TypedArray<float> increment_arr = arr["increment"];
        msg->increment = increment_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'increment' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'increment' is wrong type; expected a single.");
    }
    try {
        //min_distance
        const matlab::data::TypedArray<uint16_t> min_distance_arr = arr["min_distance"];
        msg->min_distance = min_distance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'min_distance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'min_distance' is wrong type; expected a uint16.");
    }
    try {
        //max_distance
        const matlab::data::TypedArray<uint16_t> max_distance_arr = arr["max_distance"];
        msg->max_distance = max_distance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'max_distance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'max_distance' is wrong type; expected a uint16.");
    }
    try {
        //angle_offset
        const matlab::data::TypedArray<float> angle_offset_arr = arr["angle_offset"];
        msg->angle_offset = angle_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'angle_offset' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'angle_offset' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_ObstacleDistance_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::ObstacleDistance* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","frame","MAV_FRAME_GLOBAL","MAV_FRAME_LOCAL_NED","MAV_FRAME_BODY_FRD","sensor_type","MAV_DISTANCE_SENSOR_LASER","MAV_DISTANCE_SENSOR_ULTRASOUND","MAV_DISTANCE_SENSOR_INFRARED","MAV_DISTANCE_SENSOR_RADAR","distances","increment","min_distance","max_distance","angle_offset"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/ObstacleDistance");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // frame
    auto currentElement_frame = (msg + ctr)->frame;
    outArray[ctr]["frame"] = factory.createScalar(currentElement_frame);
    // MAV_FRAME_GLOBAL
    auto currentElement_MAV_FRAME_GLOBAL = (msg + ctr)->MAV_FRAME_GLOBAL;
    outArray[ctr]["MAV_FRAME_GLOBAL"] = factory.createScalar(currentElement_MAV_FRAME_GLOBAL);
    // MAV_FRAME_LOCAL_NED
    auto currentElement_MAV_FRAME_LOCAL_NED = (msg + ctr)->MAV_FRAME_LOCAL_NED;
    outArray[ctr]["MAV_FRAME_LOCAL_NED"] = factory.createScalar(currentElement_MAV_FRAME_LOCAL_NED);
    // MAV_FRAME_BODY_FRD
    auto currentElement_MAV_FRAME_BODY_FRD = (msg + ctr)->MAV_FRAME_BODY_FRD;
    outArray[ctr]["MAV_FRAME_BODY_FRD"] = factory.createScalar(currentElement_MAV_FRAME_BODY_FRD);
    // sensor_type
    auto currentElement_sensor_type = (msg + ctr)->sensor_type;
    outArray[ctr]["sensor_type"] = factory.createScalar(currentElement_sensor_type);
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
    // distances
    auto currentElement_distances = (msg + ctr)->distances;
    outArray[ctr]["distances"] = factory.createArray<px4_msgs::msg::ObstacleDistance::_distances_type::const_iterator, uint16_t>({currentElement_distances.size(), 1}, currentElement_distances.begin(), currentElement_distances.end());
    // increment
    auto currentElement_increment = (msg + ctr)->increment;
    outArray[ctr]["increment"] = factory.createScalar(currentElement_increment);
    // min_distance
    auto currentElement_min_distance = (msg + ctr)->min_distance;
    outArray[ctr]["min_distance"] = factory.createScalar(currentElement_min_distance);
    // max_distance
    auto currentElement_max_distance = (msg + ctr)->max_distance;
    outArray[ctr]["max_distance"] = factory.createScalar(currentElement_max_distance);
    // angle_offset
    auto currentElement_angle_offset = (msg + ctr)->angle_offset;
    outArray[ctr]["angle_offset"] = factory.createScalar(currentElement_angle_offset);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_ObstacleDistance_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_ObstacleDistance_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_ObstacleDistance_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::ObstacleDistance,ros2_px4_msgs_msg_ObstacleDistance_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_ObstacleDistance_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::ObstacleDistance,ros2_px4_msgs_msg_ObstacleDistance_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_ObstacleDistance_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::ObstacleDistance>();
    ros2_px4_msgs_msg_ObstacleDistance_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_ObstacleDistance_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_ObstacleDistance_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::ObstacleDistance*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_ObstacleDistance_common, MATLABROS2MsgInterface<px4_msgs::msg::ObstacleDistance>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_ObstacleDistance_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER