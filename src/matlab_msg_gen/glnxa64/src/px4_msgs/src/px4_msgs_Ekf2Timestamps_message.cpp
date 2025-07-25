// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/Ekf2Timestamps
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
#include "px4_msgs/msg/ekf2_timestamps.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_Ekf2Timestamps_common : public MATLABROS2MsgInterface<px4_msgs::msg::Ekf2Timestamps> {
  public:
    virtual ~ros2_px4_msgs_msg_Ekf2Timestamps_common(){}
    virtual void copy_from_struct(px4_msgs::msg::Ekf2Timestamps* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::Ekf2Timestamps* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_Ekf2Timestamps_common::copy_from_struct(px4_msgs::msg::Ekf2Timestamps* msg, const matlab::data::Struct& arr,
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
        //airspeed_timestamp_rel
        const matlab::data::TypedArray<int16_t> airspeed_timestamp_rel_arr = arr["airspeed_timestamp_rel"];
        msg->airspeed_timestamp_rel = airspeed_timestamp_rel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'airspeed_timestamp_rel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'airspeed_timestamp_rel' is wrong type; expected a int16.");
    }
    try {
        //distance_sensor_timestamp_rel
        const matlab::data::TypedArray<int16_t> distance_sensor_timestamp_rel_arr = arr["distance_sensor_timestamp_rel"];
        msg->distance_sensor_timestamp_rel = distance_sensor_timestamp_rel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'distance_sensor_timestamp_rel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'distance_sensor_timestamp_rel' is wrong type; expected a int16.");
    }
    try {
        //optical_flow_timestamp_rel
        const matlab::data::TypedArray<int16_t> optical_flow_timestamp_rel_arr = arr["optical_flow_timestamp_rel"];
        msg->optical_flow_timestamp_rel = optical_flow_timestamp_rel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'optical_flow_timestamp_rel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'optical_flow_timestamp_rel' is wrong type; expected a int16.");
    }
    try {
        //vehicle_air_data_timestamp_rel
        const matlab::data::TypedArray<int16_t> vehicle_air_data_timestamp_rel_arr = arr["vehicle_air_data_timestamp_rel"];
        msg->vehicle_air_data_timestamp_rel = vehicle_air_data_timestamp_rel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vehicle_air_data_timestamp_rel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vehicle_air_data_timestamp_rel' is wrong type; expected a int16.");
    }
    try {
        //vehicle_magnetometer_timestamp_rel
        const matlab::data::TypedArray<int16_t> vehicle_magnetometer_timestamp_rel_arr = arr["vehicle_magnetometer_timestamp_rel"];
        msg->vehicle_magnetometer_timestamp_rel = vehicle_magnetometer_timestamp_rel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vehicle_magnetometer_timestamp_rel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vehicle_magnetometer_timestamp_rel' is wrong type; expected a int16.");
    }
    try {
        //visual_odometry_timestamp_rel
        const matlab::data::TypedArray<int16_t> visual_odometry_timestamp_rel_arr = arr["visual_odometry_timestamp_rel"];
        msg->visual_odometry_timestamp_rel = visual_odometry_timestamp_rel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'visual_odometry_timestamp_rel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'visual_odometry_timestamp_rel' is wrong type; expected a int16.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_Ekf2Timestamps_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::Ekf2Timestamps* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","RELATIVE_TIMESTAMP_INVALID","airspeed_timestamp_rel","distance_sensor_timestamp_rel","optical_flow_timestamp_rel","vehicle_air_data_timestamp_rel","vehicle_magnetometer_timestamp_rel","visual_odometry_timestamp_rel"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/Ekf2Timestamps");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // RELATIVE_TIMESTAMP_INVALID
    auto currentElement_RELATIVE_TIMESTAMP_INVALID = (msg + ctr)->RELATIVE_TIMESTAMP_INVALID;
    outArray[ctr]["RELATIVE_TIMESTAMP_INVALID"] = factory.createScalar(currentElement_RELATIVE_TIMESTAMP_INVALID);
    // airspeed_timestamp_rel
    auto currentElement_airspeed_timestamp_rel = (msg + ctr)->airspeed_timestamp_rel;
    outArray[ctr]["airspeed_timestamp_rel"] = factory.createScalar(currentElement_airspeed_timestamp_rel);
    // distance_sensor_timestamp_rel
    auto currentElement_distance_sensor_timestamp_rel = (msg + ctr)->distance_sensor_timestamp_rel;
    outArray[ctr]["distance_sensor_timestamp_rel"] = factory.createScalar(currentElement_distance_sensor_timestamp_rel);
    // optical_flow_timestamp_rel
    auto currentElement_optical_flow_timestamp_rel = (msg + ctr)->optical_flow_timestamp_rel;
    outArray[ctr]["optical_flow_timestamp_rel"] = factory.createScalar(currentElement_optical_flow_timestamp_rel);
    // vehicle_air_data_timestamp_rel
    auto currentElement_vehicle_air_data_timestamp_rel = (msg + ctr)->vehicle_air_data_timestamp_rel;
    outArray[ctr]["vehicle_air_data_timestamp_rel"] = factory.createScalar(currentElement_vehicle_air_data_timestamp_rel);
    // vehicle_magnetometer_timestamp_rel
    auto currentElement_vehicle_magnetometer_timestamp_rel = (msg + ctr)->vehicle_magnetometer_timestamp_rel;
    outArray[ctr]["vehicle_magnetometer_timestamp_rel"] = factory.createScalar(currentElement_vehicle_magnetometer_timestamp_rel);
    // visual_odometry_timestamp_rel
    auto currentElement_visual_odometry_timestamp_rel = (msg + ctr)->visual_odometry_timestamp_rel;
    outArray[ctr]["visual_odometry_timestamp_rel"] = factory.createScalar(currentElement_visual_odometry_timestamp_rel);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_Ekf2Timestamps_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_Ekf2Timestamps_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_Ekf2Timestamps_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::Ekf2Timestamps,ros2_px4_msgs_msg_Ekf2Timestamps_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_Ekf2Timestamps_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::Ekf2Timestamps,ros2_px4_msgs_msg_Ekf2Timestamps_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_Ekf2Timestamps_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::Ekf2Timestamps>();
    ros2_px4_msgs_msg_Ekf2Timestamps_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_Ekf2Timestamps_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_Ekf2Timestamps_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::Ekf2Timestamps*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_Ekf2Timestamps_common, MATLABROS2MsgInterface<px4_msgs::msg::Ekf2Timestamps>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_Ekf2Timestamps_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER