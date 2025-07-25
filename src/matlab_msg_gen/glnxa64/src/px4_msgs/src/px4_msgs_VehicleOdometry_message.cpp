// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/VehicleOdometry
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
#include "px4_msgs/msg/vehicle_odometry.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_VehicleOdometry_common : public MATLABROS2MsgInterface<px4_msgs::msg::VehicleOdometry> {
  public:
    virtual ~ros2_px4_msgs_msg_VehicleOdometry_common(){}
    virtual void copy_from_struct(px4_msgs::msg::VehicleOdometry* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleOdometry* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_VehicleOdometry_common::copy_from_struct(px4_msgs::msg::VehicleOdometry* msg, const matlab::data::Struct& arr,
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
        //pose_frame
        const matlab::data::TypedArray<uint8_t> pose_frame_arr = arr["pose_frame"];
        msg->pose_frame = pose_frame_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pose_frame' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pose_frame' is wrong type; expected a uint8.");
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
        //velocity_frame
        const matlab::data::TypedArray<uint8_t> velocity_frame_arr = arr["velocity_frame"];
        msg->velocity_frame = velocity_frame_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'velocity_frame' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'velocity_frame' is wrong type; expected a uint8.");
    }
    try {
        //velocity
        const matlab::data::TypedArray<float> velocity_arr = arr["velocity"];
        size_t nelem = 3;
        	std::copy(velocity_arr.begin(), velocity_arr.begin()+nelem, msg->velocity.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'velocity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'velocity' is wrong type; expected a single.");
    }
    try {
        //angular_velocity
        const matlab::data::TypedArray<float> angular_velocity_arr = arr["angular_velocity"];
        size_t nelem = 3;
        	std::copy(angular_velocity_arr.begin(), angular_velocity_arr.begin()+nelem, msg->angular_velocity.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'angular_velocity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'angular_velocity' is wrong type; expected a single.");
    }
    try {
        //position_variance
        const matlab::data::TypedArray<float> position_variance_arr = arr["position_variance"];
        size_t nelem = 3;
        	std::copy(position_variance_arr.begin(), position_variance_arr.begin()+nelem, msg->position_variance.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'position_variance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'position_variance' is wrong type; expected a single.");
    }
    try {
        //orientation_variance
        const matlab::data::TypedArray<float> orientation_variance_arr = arr["orientation_variance"];
        size_t nelem = 3;
        	std::copy(orientation_variance_arr.begin(), orientation_variance_arr.begin()+nelem, msg->orientation_variance.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'orientation_variance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'orientation_variance' is wrong type; expected a single.");
    }
    try {
        //velocity_variance
        const matlab::data::TypedArray<float> velocity_variance_arr = arr["velocity_variance"];
        size_t nelem = 3;
        	std::copy(velocity_variance_arr.begin(), velocity_variance_arr.begin()+nelem, msg->velocity_variance.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'velocity_variance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'velocity_variance' is wrong type; expected a single.");
    }
    try {
        //reset_counter
        const matlab::data::TypedArray<uint8_t> reset_counter_arr = arr["reset_counter"];
        msg->reset_counter = reset_counter_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reset_counter' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reset_counter' is wrong type; expected a uint8.");
    }
    try {
        //quality
        const matlab::data::TypedArray<int8_t> quality_arr = arr["quality"];
        msg->quality = quality_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'quality' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'quality' is wrong type; expected a int8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_VehicleOdometry_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleOdometry* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","MESSAGE_VERSION","timestamp","timestamp_sample","POSE_FRAME_UNKNOWN","POSE_FRAME_NED","POSE_FRAME_FRD","pose_frame","position","q","VELOCITY_FRAME_UNKNOWN","VELOCITY_FRAME_NED","VELOCITY_FRAME_FRD","VELOCITY_FRAME_BODY_FRD","velocity_frame","velocity","angular_velocity","position_variance","orientation_variance","velocity_variance","reset_counter","quality"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/VehicleOdometry");
    // MESSAGE_VERSION
    auto currentElement_MESSAGE_VERSION = (msg + ctr)->MESSAGE_VERSION;
    outArray[ctr]["MESSAGE_VERSION"] = factory.createScalar(currentElement_MESSAGE_VERSION);
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // POSE_FRAME_UNKNOWN
    auto currentElement_POSE_FRAME_UNKNOWN = (msg + ctr)->POSE_FRAME_UNKNOWN;
    outArray[ctr]["POSE_FRAME_UNKNOWN"] = factory.createScalar(currentElement_POSE_FRAME_UNKNOWN);
    // POSE_FRAME_NED
    auto currentElement_POSE_FRAME_NED = (msg + ctr)->POSE_FRAME_NED;
    outArray[ctr]["POSE_FRAME_NED"] = factory.createScalar(currentElement_POSE_FRAME_NED);
    // POSE_FRAME_FRD
    auto currentElement_POSE_FRAME_FRD = (msg + ctr)->POSE_FRAME_FRD;
    outArray[ctr]["POSE_FRAME_FRD"] = factory.createScalar(currentElement_POSE_FRAME_FRD);
    // pose_frame
    auto currentElement_pose_frame = (msg + ctr)->pose_frame;
    outArray[ctr]["pose_frame"] = factory.createScalar(currentElement_pose_frame);
    // position
    auto currentElement_position = (msg + ctr)->position;
    outArray[ctr]["position"] = factory.createArray<px4_msgs::msg::VehicleOdometry::_position_type::const_iterator, float>({currentElement_position.size(), 1}, currentElement_position.begin(), currentElement_position.end());
    // q
    auto currentElement_q = (msg + ctr)->q;
    outArray[ctr]["q"] = factory.createArray<px4_msgs::msg::VehicleOdometry::_q_type::const_iterator, float>({currentElement_q.size(), 1}, currentElement_q.begin(), currentElement_q.end());
    // VELOCITY_FRAME_UNKNOWN
    auto currentElement_VELOCITY_FRAME_UNKNOWN = (msg + ctr)->VELOCITY_FRAME_UNKNOWN;
    outArray[ctr]["VELOCITY_FRAME_UNKNOWN"] = factory.createScalar(currentElement_VELOCITY_FRAME_UNKNOWN);
    // VELOCITY_FRAME_NED
    auto currentElement_VELOCITY_FRAME_NED = (msg + ctr)->VELOCITY_FRAME_NED;
    outArray[ctr]["VELOCITY_FRAME_NED"] = factory.createScalar(currentElement_VELOCITY_FRAME_NED);
    // VELOCITY_FRAME_FRD
    auto currentElement_VELOCITY_FRAME_FRD = (msg + ctr)->VELOCITY_FRAME_FRD;
    outArray[ctr]["VELOCITY_FRAME_FRD"] = factory.createScalar(currentElement_VELOCITY_FRAME_FRD);
    // VELOCITY_FRAME_BODY_FRD
    auto currentElement_VELOCITY_FRAME_BODY_FRD = (msg + ctr)->VELOCITY_FRAME_BODY_FRD;
    outArray[ctr]["VELOCITY_FRAME_BODY_FRD"] = factory.createScalar(currentElement_VELOCITY_FRAME_BODY_FRD);
    // velocity_frame
    auto currentElement_velocity_frame = (msg + ctr)->velocity_frame;
    outArray[ctr]["velocity_frame"] = factory.createScalar(currentElement_velocity_frame);
    // velocity
    auto currentElement_velocity = (msg + ctr)->velocity;
    outArray[ctr]["velocity"] = factory.createArray<px4_msgs::msg::VehicleOdometry::_velocity_type::const_iterator, float>({currentElement_velocity.size(), 1}, currentElement_velocity.begin(), currentElement_velocity.end());
    // angular_velocity
    auto currentElement_angular_velocity = (msg + ctr)->angular_velocity;
    outArray[ctr]["angular_velocity"] = factory.createArray<px4_msgs::msg::VehicleOdometry::_angular_velocity_type::const_iterator, float>({currentElement_angular_velocity.size(), 1}, currentElement_angular_velocity.begin(), currentElement_angular_velocity.end());
    // position_variance
    auto currentElement_position_variance = (msg + ctr)->position_variance;
    outArray[ctr]["position_variance"] = factory.createArray<px4_msgs::msg::VehicleOdometry::_position_variance_type::const_iterator, float>({currentElement_position_variance.size(), 1}, currentElement_position_variance.begin(), currentElement_position_variance.end());
    // orientation_variance
    auto currentElement_orientation_variance = (msg + ctr)->orientation_variance;
    outArray[ctr]["orientation_variance"] = factory.createArray<px4_msgs::msg::VehicleOdometry::_orientation_variance_type::const_iterator, float>({currentElement_orientation_variance.size(), 1}, currentElement_orientation_variance.begin(), currentElement_orientation_variance.end());
    // velocity_variance
    auto currentElement_velocity_variance = (msg + ctr)->velocity_variance;
    outArray[ctr]["velocity_variance"] = factory.createArray<px4_msgs::msg::VehicleOdometry::_velocity_variance_type::const_iterator, float>({currentElement_velocity_variance.size(), 1}, currentElement_velocity_variance.begin(), currentElement_velocity_variance.end());
    // reset_counter
    auto currentElement_reset_counter = (msg + ctr)->reset_counter;
    outArray[ctr]["reset_counter"] = factory.createScalar(currentElement_reset_counter);
    // quality
    auto currentElement_quality = (msg + ctr)->quality;
    outArray[ctr]["quality"] = factory.createScalar(currentElement_quality);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_VehicleOdometry_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_VehicleOdometry_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_VehicleOdometry_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::VehicleOdometry,ros2_px4_msgs_msg_VehicleOdometry_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_VehicleOdometry_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::VehicleOdometry,ros2_px4_msgs_msg_VehicleOdometry_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_VehicleOdometry_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::VehicleOdometry>();
    ros2_px4_msgs_msg_VehicleOdometry_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_VehicleOdometry_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_VehicleOdometry_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::VehicleOdometry*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_VehicleOdometry_common, MATLABROS2MsgInterface<px4_msgs::msg::VehicleOdometry>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_VehicleOdometry_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER