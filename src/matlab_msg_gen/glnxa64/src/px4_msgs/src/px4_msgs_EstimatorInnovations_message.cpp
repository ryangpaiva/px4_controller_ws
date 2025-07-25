// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for px4_msgs/EstimatorInnovations
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
#include "px4_msgs/msg/estimator_innovations.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PX4_MSGS_EXPORT ros2_px4_msgs_msg_EstimatorInnovations_common : public MATLABROS2MsgInterface<px4_msgs::msg::EstimatorInnovations> {
  public:
    virtual ~ros2_px4_msgs_msg_EstimatorInnovations_common(){}
    virtual void copy_from_struct(px4_msgs::msg::EstimatorInnovations* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const px4_msgs::msg::EstimatorInnovations* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_px4_msgs_msg_EstimatorInnovations_common::copy_from_struct(px4_msgs::msg::EstimatorInnovations* msg, const matlab::data::Struct& arr,
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
        //gps_hvel
        const matlab::data::TypedArray<float> gps_hvel_arr = arr["gps_hvel"];
        size_t nelem = 2;
        	std::copy(gps_hvel_arr.begin(), gps_hvel_arr.begin()+nelem, msg->gps_hvel.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gps_hvel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gps_hvel' is wrong type; expected a single.");
    }
    try {
        //gps_vvel
        const matlab::data::TypedArray<float> gps_vvel_arr = arr["gps_vvel"];
        msg->gps_vvel = gps_vvel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gps_vvel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gps_vvel' is wrong type; expected a single.");
    }
    try {
        //gps_hpos
        const matlab::data::TypedArray<float> gps_hpos_arr = arr["gps_hpos"];
        size_t nelem = 2;
        	std::copy(gps_hpos_arr.begin(), gps_hpos_arr.begin()+nelem, msg->gps_hpos.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gps_hpos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gps_hpos' is wrong type; expected a single.");
    }
    try {
        //gps_vpos
        const matlab::data::TypedArray<float> gps_vpos_arr = arr["gps_vpos"];
        msg->gps_vpos = gps_vpos_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gps_vpos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gps_vpos' is wrong type; expected a single.");
    }
    try {
        //ev_hvel
        const matlab::data::TypedArray<float> ev_hvel_arr = arr["ev_hvel"];
        size_t nelem = 2;
        	std::copy(ev_hvel_arr.begin(), ev_hvel_arr.begin()+nelem, msg->ev_hvel.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ev_hvel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ev_hvel' is wrong type; expected a single.");
    }
    try {
        //ev_vvel
        const matlab::data::TypedArray<float> ev_vvel_arr = arr["ev_vvel"];
        msg->ev_vvel = ev_vvel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ev_vvel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ev_vvel' is wrong type; expected a single.");
    }
    try {
        //ev_hpos
        const matlab::data::TypedArray<float> ev_hpos_arr = arr["ev_hpos"];
        size_t nelem = 2;
        	std::copy(ev_hpos_arr.begin(), ev_hpos_arr.begin()+nelem, msg->ev_hpos.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ev_hpos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ev_hpos' is wrong type; expected a single.");
    }
    try {
        //ev_vpos
        const matlab::data::TypedArray<float> ev_vpos_arr = arr["ev_vpos"];
        msg->ev_vpos = ev_vpos_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ev_vpos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ev_vpos' is wrong type; expected a single.");
    }
    try {
        //rng_vpos
        const matlab::data::TypedArray<float> rng_vpos_arr = arr["rng_vpos"];
        msg->rng_vpos = rng_vpos_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rng_vpos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'rng_vpos' is wrong type; expected a single.");
    }
    try {
        //baro_vpos
        const matlab::data::TypedArray<float> baro_vpos_arr = arr["baro_vpos"];
        msg->baro_vpos = baro_vpos_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'baro_vpos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'baro_vpos' is wrong type; expected a single.");
    }
    try {
        //aux_hvel
        const matlab::data::TypedArray<float> aux_hvel_arr = arr["aux_hvel"];
        size_t nelem = 2;
        	std::copy(aux_hvel_arr.begin(), aux_hvel_arr.begin()+nelem, msg->aux_hvel.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'aux_hvel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'aux_hvel' is wrong type; expected a single.");
    }
    try {
        //flow
        const matlab::data::TypedArray<float> flow_arr = arr["flow"];
        size_t nelem = 2;
        	std::copy(flow_arr.begin(), flow_arr.begin()+nelem, msg->flow.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flow' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flow' is wrong type; expected a single.");
    }
    try {
        //heading
        const matlab::data::TypedArray<float> heading_arr = arr["heading"];
        msg->heading = heading_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heading' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heading' is wrong type; expected a single.");
    }
    try {
        //mag_field
        const matlab::data::TypedArray<float> mag_field_arr = arr["mag_field"];
        size_t nelem = 3;
        	std::copy(mag_field_arr.begin(), mag_field_arr.begin()+nelem, msg->mag_field.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mag_field' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mag_field' is wrong type; expected a single.");
    }
    try {
        //gravity
        const matlab::data::TypedArray<float> gravity_arr = arr["gravity"];
        size_t nelem = 3;
        	std::copy(gravity_arr.begin(), gravity_arr.begin()+nelem, msg->gravity.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gravity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gravity' is wrong type; expected a single.");
    }
    try {
        //drag
        const matlab::data::TypedArray<float> drag_arr = arr["drag"];
        size_t nelem = 2;
        	std::copy(drag_arr.begin(), drag_arr.begin()+nelem, msg->drag.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'drag' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'drag' is wrong type; expected a single.");
    }
    try {
        //airspeed
        const matlab::data::TypedArray<float> airspeed_arr = arr["airspeed"];
        msg->airspeed = airspeed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'airspeed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'airspeed' is wrong type; expected a single.");
    }
    try {
        //beta
        const matlab::data::TypedArray<float> beta_arr = arr["beta"];
        msg->beta = beta_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'beta' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'beta' is wrong type; expected a single.");
    }
    try {
        //hagl
        const matlab::data::TypedArray<float> hagl_arr = arr["hagl"];
        msg->hagl = hagl_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'hagl' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'hagl' is wrong type; expected a single.");
    }
    try {
        //hagl_rate
        const matlab::data::TypedArray<float> hagl_rate_arr = arr["hagl_rate"];
        msg->hagl_rate = hagl_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'hagl_rate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'hagl_rate' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_px4_msgs_msg_EstimatorInnovations_common::get_arr(MDFactory_T& factory, const px4_msgs::msg::EstimatorInnovations* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timestamp","timestamp_sample","gps_hvel","gps_vvel","gps_hpos","gps_vpos","ev_hvel","ev_vvel","ev_hpos","ev_vpos","rng_vpos","baro_vpos","aux_hvel","flow","heading","mag_field","gravity","drag","airspeed","beta","hagl","hagl_rate"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("px4_msgs/EstimatorInnovations");
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // timestamp_sample
    auto currentElement_timestamp_sample = (msg + ctr)->timestamp_sample;
    outArray[ctr]["timestamp_sample"] = factory.createScalar(currentElement_timestamp_sample);
    // gps_hvel
    auto currentElement_gps_hvel = (msg + ctr)->gps_hvel;
    outArray[ctr]["gps_hvel"] = factory.createArray<px4_msgs::msg::EstimatorInnovations::_gps_hvel_type::const_iterator, float>({currentElement_gps_hvel.size(), 1}, currentElement_gps_hvel.begin(), currentElement_gps_hvel.end());
    // gps_vvel
    auto currentElement_gps_vvel = (msg + ctr)->gps_vvel;
    outArray[ctr]["gps_vvel"] = factory.createScalar(currentElement_gps_vvel);
    // gps_hpos
    auto currentElement_gps_hpos = (msg + ctr)->gps_hpos;
    outArray[ctr]["gps_hpos"] = factory.createArray<px4_msgs::msg::EstimatorInnovations::_gps_hpos_type::const_iterator, float>({currentElement_gps_hpos.size(), 1}, currentElement_gps_hpos.begin(), currentElement_gps_hpos.end());
    // gps_vpos
    auto currentElement_gps_vpos = (msg + ctr)->gps_vpos;
    outArray[ctr]["gps_vpos"] = factory.createScalar(currentElement_gps_vpos);
    // ev_hvel
    auto currentElement_ev_hvel = (msg + ctr)->ev_hvel;
    outArray[ctr]["ev_hvel"] = factory.createArray<px4_msgs::msg::EstimatorInnovations::_ev_hvel_type::const_iterator, float>({currentElement_ev_hvel.size(), 1}, currentElement_ev_hvel.begin(), currentElement_ev_hvel.end());
    // ev_vvel
    auto currentElement_ev_vvel = (msg + ctr)->ev_vvel;
    outArray[ctr]["ev_vvel"] = factory.createScalar(currentElement_ev_vvel);
    // ev_hpos
    auto currentElement_ev_hpos = (msg + ctr)->ev_hpos;
    outArray[ctr]["ev_hpos"] = factory.createArray<px4_msgs::msg::EstimatorInnovations::_ev_hpos_type::const_iterator, float>({currentElement_ev_hpos.size(), 1}, currentElement_ev_hpos.begin(), currentElement_ev_hpos.end());
    // ev_vpos
    auto currentElement_ev_vpos = (msg + ctr)->ev_vpos;
    outArray[ctr]["ev_vpos"] = factory.createScalar(currentElement_ev_vpos);
    // rng_vpos
    auto currentElement_rng_vpos = (msg + ctr)->rng_vpos;
    outArray[ctr]["rng_vpos"] = factory.createScalar(currentElement_rng_vpos);
    // baro_vpos
    auto currentElement_baro_vpos = (msg + ctr)->baro_vpos;
    outArray[ctr]["baro_vpos"] = factory.createScalar(currentElement_baro_vpos);
    // aux_hvel
    auto currentElement_aux_hvel = (msg + ctr)->aux_hvel;
    outArray[ctr]["aux_hvel"] = factory.createArray<px4_msgs::msg::EstimatorInnovations::_aux_hvel_type::const_iterator, float>({currentElement_aux_hvel.size(), 1}, currentElement_aux_hvel.begin(), currentElement_aux_hvel.end());
    // flow
    auto currentElement_flow = (msg + ctr)->flow;
    outArray[ctr]["flow"] = factory.createArray<px4_msgs::msg::EstimatorInnovations::_flow_type::const_iterator, float>({currentElement_flow.size(), 1}, currentElement_flow.begin(), currentElement_flow.end());
    // heading
    auto currentElement_heading = (msg + ctr)->heading;
    outArray[ctr]["heading"] = factory.createScalar(currentElement_heading);
    // mag_field
    auto currentElement_mag_field = (msg + ctr)->mag_field;
    outArray[ctr]["mag_field"] = factory.createArray<px4_msgs::msg::EstimatorInnovations::_mag_field_type::const_iterator, float>({currentElement_mag_field.size(), 1}, currentElement_mag_field.begin(), currentElement_mag_field.end());
    // gravity
    auto currentElement_gravity = (msg + ctr)->gravity;
    outArray[ctr]["gravity"] = factory.createArray<px4_msgs::msg::EstimatorInnovations::_gravity_type::const_iterator, float>({currentElement_gravity.size(), 1}, currentElement_gravity.begin(), currentElement_gravity.end());
    // drag
    auto currentElement_drag = (msg + ctr)->drag;
    outArray[ctr]["drag"] = factory.createArray<px4_msgs::msg::EstimatorInnovations::_drag_type::const_iterator, float>({currentElement_drag.size(), 1}, currentElement_drag.begin(), currentElement_drag.end());
    // airspeed
    auto currentElement_airspeed = (msg + ctr)->airspeed;
    outArray[ctr]["airspeed"] = factory.createScalar(currentElement_airspeed);
    // beta
    auto currentElement_beta = (msg + ctr)->beta;
    outArray[ctr]["beta"] = factory.createScalar(currentElement_beta);
    // hagl
    auto currentElement_hagl = (msg + ctr)->hagl;
    outArray[ctr]["hagl"] = factory.createScalar(currentElement_hagl);
    // hagl_rate
    auto currentElement_hagl_rate = (msg + ctr)->hagl_rate;
    outArray[ctr]["hagl_rate"] = factory.createScalar(currentElement_hagl_rate);
    }
    return std::move(outArray);
  } 
class PX4_MSGS_EXPORT ros2_px4_msgs_EstimatorInnovations_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_px4_msgs_EstimatorInnovations_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_px4_msgs_EstimatorInnovations_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<px4_msgs::msg::EstimatorInnovations,ros2_px4_msgs_msg_EstimatorInnovations_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_px4_msgs_EstimatorInnovations_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<px4_msgs::msg::EstimatorInnovations,ros2_px4_msgs_msg_EstimatorInnovations_common>>();
  }
  std::shared_ptr<void> ros2_px4_msgs_EstimatorInnovations_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<px4_msgs::msg::EstimatorInnovations>();
    ros2_px4_msgs_msg_EstimatorInnovations_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_px4_msgs_EstimatorInnovations_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_px4_msgs_msg_EstimatorInnovations_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (px4_msgs::msg::EstimatorInnovations*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_msg_EstimatorInnovations_common, MATLABROS2MsgInterface<px4_msgs::msg::EstimatorInnovations>)
CLASS_LOADER_REGISTER_CLASS(ros2_px4_msgs_EstimatorInnovations_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER