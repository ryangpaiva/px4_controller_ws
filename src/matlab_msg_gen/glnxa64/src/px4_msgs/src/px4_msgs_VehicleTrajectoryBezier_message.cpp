// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/VehicleTrajectoryBezier
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
#include "px4_msgs/msg/vehicle_trajectory_bezier.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_VehicleTrajectoryBezier_common : public MATLABROS2MsgInterface<px4_msgs::msg::VehicleTrajectoryBezier> {
  public:
    virtual ~ros2_px4_msgs_msg_VehicleTrajectoryBezier_common(){}
    virtual void copy_from_struct(px4_msgs::msg::VehicleTrajectoryBezier* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleTrajectoryBezier* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_VehicleTrajectoryBezier_common::copy_from_struct(px4_msgs::msg::VehicleTrajectoryBezier* msg, const matlab::data::Struct& arr,
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
        //control_points
        const matlab::data::StructArray control_points_arr = arr["control_points"];
        if (control_points_arr.getNumberOfElements() < 5)
        	throw(std::invalid_argument("Field 'control_points' must have minimum of 5 elements."));
        size_t idx_control_points = 0;
        for (auto _control_pointsarr : control_points_arr) {
        	px4_msgs::msg::TrajectoryBezier _val;
        auto msgClassPtr_control_points = getCommonObject<px4_msgs::msg::TrajectoryBezier>("ros2_px4_msgs_msg_TrajectoryBezier_common",loader);
        msgClassPtr_control_points->copy_from_struct(&_val,_control_pointsarr,loader);
        	msg->control_points[idx_control_points++] = _val;
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'control_points' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'control_points' is wrong type; expected a struct.");
    }
    try {
        //bezier_order
        const matlab::data::TypedArray<uint8_t> bezier_order_arr = arr["bezier_order"];
        msg->bezier_order = bezier_order_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'bezier_order' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'bezier_order' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_VehicleTrajectoryBezier_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::VehicleTrajectoryBezier* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","POINT_0","POINT_1","POINT_2","POINT_3","POINT_4","NUMBER_POINTS","control_points","bezier_order"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/VehicleTrajectoryBezier");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // POINT_0
    auto currentElement_POINT_0 = (msg + ctr)->POINT_0;
    outArray[ctr]["POINT_0"] = factory.createScalar(currentElement_POINT_0);
    // POINT_1
    auto currentElement_POINT_1 = (msg + ctr)->POINT_1;
    outArray[ctr]["POINT_1"] = factory.createScalar(currentElement_POINT_1);
    // POINT_2
    auto currentElement_POINT_2 = (msg + ctr)->POINT_2;
    outArray[ctr]["POINT_2"] = factory.createScalar(currentElement_POINT_2);
    // POINT_3
    auto currentElement_POINT_3 = (msg + ctr)->POINT_3;
    outArray[ctr]["POINT_3"] = factory.createScalar(currentElement_POINT_3);
    // POINT_4
    auto currentElement_POINT_4 = (msg + ctr)->POINT_4;
    outArray[ctr]["POINT_4"] = factory.createScalar(currentElement_POINT_4);
    // NUMBER_POINTS
    auto currentElement_NUMBER_POINTS = (msg + ctr)->NUMBER_POINTS;
    outArray[ctr]["NUMBER_POINTS"] = factory.createScalar(currentElement_NUMBER_POINTS);
    // control_points
    auto currentElement_control_points = (msg + ctr)->control_points;
    auto msgClassPtr_control_points = getCommonObject<px4_msgs::msg::TrajectoryBezier>("ros2_px4_msgs_msg_TrajectoryBezier_common",loader);
    outArray[ctr]["control_points"] = msgClassPtr_control_points->get_arr(factory,&currentElement_control_points[0],loader,currentElement_control_points.size());
    // bezier_order
    auto currentElement_bezier_order = (msg + ctr)->bezier_order;
    outArray[ctr]["bezier_order"] = factory.createScalar(currentElement_bezier_order);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_VehicleTrajectoryBezier_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_VehicleTrajectoryBezier_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_VehicleTrajectoryBezier_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::VehicleTrajectoryBezier,ros2_px4_msgs_msg_VehicleTrajectoryBezier_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_VehicleTrajectoryBezier_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::VehicleTrajectoryBezier,ros2_px4_msgs_msg_VehicleTrajectoryBezier_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_VehicleTrajectoryBezier_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::VehicleTrajectoryBezier>();
    ros2_px4_msgs_msg_VehicleTrajectoryBezier_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_VehicleTrajectoryBezier_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_VehicleTrajectoryBezier_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::VehicleTrajectoryBezier*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_VehicleTrajectoryBezier_common, MATLABROS2MsgInterface<px4_msgs::msg::VehicleTrajectoryBezier>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_VehicleTrajectoryBezier_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER