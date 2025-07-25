// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/LandingTargetPose
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
#include "px4_msgs/msg/landing_target_pose.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_LandingTargetPose_common : public MATLABROS2MsgInterface<px4_msgs::msg::LandingTargetPose> {
  public:
    virtual ~ros2_px4_msgs_msg_LandingTargetPose_common(){}
    virtual void copy_from_struct(px4_msgs::msg::LandingTargetPose* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::LandingTargetPose* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_LandingTargetPose_common::copy_from_struct(px4_msgs::msg::LandingTargetPose* msg, const matlab::data::Struct& arr,
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
        //is_static
        const matlab::data::TypedArray<bool> is_static_arr = arr["is_static"];
        msg->is_static = is_static_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'is_static' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'is_static' is wrong type; expected a logical.");
    }
    try {
        //rel_pos_valid
        const matlab::data::TypedArray<bool> rel_pos_valid_arr = arr["rel_pos_valid"];
        msg->rel_pos_valid = rel_pos_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rel_pos_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rel_pos_valid' is wrong type; expected a logical.");
    }
    try {
        //rel_vel_valid
        const matlab::data::TypedArray<bool> rel_vel_valid_arr = arr["rel_vel_valid"];
        msg->rel_vel_valid = rel_vel_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rel_vel_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rel_vel_valid' is wrong type; expected a logical.");
    }
    try {
        //x_rel
        const matlab::data::TypedArray<float> x_rel_arr = arr["x_rel"];
        msg->x_rel = x_rel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x_rel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'x_rel' is wrong type; expected a single.");
    }
    try {
        //y_rel
        const matlab::data::TypedArray<float> y_rel_arr = arr["y_rel"];
        msg->y_rel = y_rel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y_rel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'y_rel' is wrong type; expected a single.");
    }
    try {
        //z_rel
        const matlab::data::TypedArray<float> z_rel_arr = arr["z_rel"];
        msg->z_rel = z_rel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z_rel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'z_rel' is wrong type; expected a single.");
    }
    try {
        //vx_rel
        const matlab::data::TypedArray<float> vx_rel_arr = arr["vx_rel"];
        msg->vx_rel = vx_rel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vx_rel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vx_rel' is wrong type; expected a single.");
    }
    try {
        //vy_rel
        const matlab::data::TypedArray<float> vy_rel_arr = arr["vy_rel"];
        msg->vy_rel = vy_rel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vy_rel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vy_rel' is wrong type; expected a single.");
    }
    try {
        //cov_x_rel
        const matlab::data::TypedArray<float> cov_x_rel_arr = arr["cov_x_rel"];
        msg->cov_x_rel = cov_x_rel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cov_x_rel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cov_x_rel' is wrong type; expected a single.");
    }
    try {
        //cov_y_rel
        const matlab::data::TypedArray<float> cov_y_rel_arr = arr["cov_y_rel"];
        msg->cov_y_rel = cov_y_rel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cov_y_rel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cov_y_rel' is wrong type; expected a single.");
    }
    try {
        //cov_vx_rel
        const matlab::data::TypedArray<float> cov_vx_rel_arr = arr["cov_vx_rel"];
        msg->cov_vx_rel = cov_vx_rel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cov_vx_rel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cov_vx_rel' is wrong type; expected a single.");
    }
    try {
        //cov_vy_rel
        const matlab::data::TypedArray<float> cov_vy_rel_arr = arr["cov_vy_rel"];
        msg->cov_vy_rel = cov_vy_rel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cov_vy_rel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cov_vy_rel' is wrong type; expected a single.");
    }
    try {
        //abs_pos_valid
        const matlab::data::TypedArray<bool> abs_pos_valid_arr = arr["abs_pos_valid"];
        msg->abs_pos_valid = abs_pos_valid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'abs_pos_valid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'abs_pos_valid' is wrong type; expected a logical.");
    }
    try {
        //x_abs
        const matlab::data::TypedArray<float> x_abs_arr = arr["x_abs"];
        msg->x_abs = x_abs_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x_abs' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'x_abs' is wrong type; expected a single.");
    }
    try {
        //y_abs
        const matlab::data::TypedArray<float> y_abs_arr = arr["y_abs"];
        msg->y_abs = y_abs_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y_abs' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'y_abs' is wrong type; expected a single.");
    }
    try {
        //z_abs
        const matlab::data::TypedArray<float> z_abs_arr = arr["z_abs"];
        msg->z_abs = z_abs_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z_abs' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'z_abs' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_LandingTargetPose_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::LandingTargetPose* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","is_static","rel_pos_valid","rel_vel_valid","x_rel","y_rel","z_rel","vx_rel","vy_rel","cov_x_rel","cov_y_rel","cov_vx_rel","cov_vy_rel","abs_pos_valid","x_abs","y_abs","z_abs"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/LandingTargetPose");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // is_static
    auto currentElement_is_static = (msg + ctr)->is_static;
    outArray[ctr]["is_static"] = factory.createScalar(currentElement_is_static);
    // rel_pos_valid
    auto currentElement_rel_pos_valid = (msg + ctr)->rel_pos_valid;
    outArray[ctr]["rel_pos_valid"] = factory.createScalar(currentElement_rel_pos_valid);
    // rel_vel_valid
    auto currentElement_rel_vel_valid = (msg + ctr)->rel_vel_valid;
    outArray[ctr]["rel_vel_valid"] = factory.createScalar(currentElement_rel_vel_valid);
    // x_rel
    auto currentElement_x_rel = (msg + ctr)->x_rel;
    outArray[ctr]["x_rel"] = factory.createScalar(currentElement_x_rel);
    // y_rel
    auto currentElement_y_rel = (msg + ctr)->y_rel;
    outArray[ctr]["y_rel"] = factory.createScalar(currentElement_y_rel);
    // z_rel
    auto currentElement_z_rel = (msg + ctr)->z_rel;
    outArray[ctr]["z_rel"] = factory.createScalar(currentElement_z_rel);
    // vx_rel
    auto currentElement_vx_rel = (msg + ctr)->vx_rel;
    outArray[ctr]["vx_rel"] = factory.createScalar(currentElement_vx_rel);
    // vy_rel
    auto currentElement_vy_rel = (msg + ctr)->vy_rel;
    outArray[ctr]["vy_rel"] = factory.createScalar(currentElement_vy_rel);
    // cov_x_rel
    auto currentElement_cov_x_rel = (msg + ctr)->cov_x_rel;
    outArray[ctr]["cov_x_rel"] = factory.createScalar(currentElement_cov_x_rel);
    // cov_y_rel
    auto currentElement_cov_y_rel = (msg + ctr)->cov_y_rel;
    outArray[ctr]["cov_y_rel"] = factory.createScalar(currentElement_cov_y_rel);
    // cov_vx_rel
    auto currentElement_cov_vx_rel = (msg + ctr)->cov_vx_rel;
    outArray[ctr]["cov_vx_rel"] = factory.createScalar(currentElement_cov_vx_rel);
    // cov_vy_rel
    auto currentElement_cov_vy_rel = (msg + ctr)->cov_vy_rel;
    outArray[ctr]["cov_vy_rel"] = factory.createScalar(currentElement_cov_vy_rel);
    // abs_pos_valid
    auto currentElement_abs_pos_valid = (msg + ctr)->abs_pos_valid;
    outArray[ctr]["abs_pos_valid"] = factory.createScalar(currentElement_abs_pos_valid);
    // x_abs
    auto currentElement_x_abs = (msg + ctr)->x_abs;
    outArray[ctr]["x_abs"] = factory.createScalar(currentElement_x_abs);
    // y_abs
    auto currentElement_y_abs = (msg + ctr)->y_abs;
    outArray[ctr]["y_abs"] = factory.createScalar(currentElement_y_abs);
    // z_abs
    auto currentElement_z_abs = (msg + ctr)->z_abs;
    outArray[ctr]["z_abs"] = factory.createScalar(currentElement_z_abs);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_LandingTargetPose_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_LandingTargetPose_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_LandingTargetPose_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::LandingTargetPose,ros2_px4_msgs_msg_LandingTargetPose_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_LandingTargetPose_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::LandingTargetPose,ros2_px4_msgs_msg_LandingTargetPose_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_LandingTargetPose_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::LandingTargetPose>();
    ros2_px4_msgs_msg_LandingTargetPose_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_LandingTargetPose_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_LandingTargetPose_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::LandingTargetPose*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_LandingTargetPose_common, MATLABROS2MsgInterface<px4_msgs::msg::LandingTargetPose>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_LandingTargetPose_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER