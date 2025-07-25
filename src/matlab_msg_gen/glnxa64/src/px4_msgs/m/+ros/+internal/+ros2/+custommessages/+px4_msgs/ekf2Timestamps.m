function [data, info] = ekf2Timestamps
%Ekf2Timestamps gives an empty data for px4_msgs/Ekf2Timestamps
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/Ekf2Timestamps';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.RELATIVE_TIMESTAMP_INVALID, info.RELATIVE_TIMESTAMP_INVALID] = ros.internal.ros2.messages.ros2.default_type('int16',1,0, 32767, [NaN]);
[data.airspeed_timestamp_rel, info.airspeed_timestamp_rel] = ros.internal.ros2.messages.ros2.default_type('int16',1,0);
[data.distance_sensor_timestamp_rel, info.distance_sensor_timestamp_rel] = ros.internal.ros2.messages.ros2.default_type('int16',1,0);
[data.optical_flow_timestamp_rel, info.optical_flow_timestamp_rel] = ros.internal.ros2.messages.ros2.default_type('int16',1,0);
[data.vehicle_air_data_timestamp_rel, info.vehicle_air_data_timestamp_rel] = ros.internal.ros2.messages.ros2.default_type('int16',1,0);
[data.vehicle_magnetometer_timestamp_rel, info.vehicle_magnetometer_timestamp_rel] = ros.internal.ros2.messages.ros2.default_type('int16',1,0);
[data.visual_odometry_timestamp_rel, info.visual_odometry_timestamp_rel] = ros.internal.ros2.messages.ros2.default_type('int16',1,0);
info.MessageType = 'px4_msgs/Ekf2Timestamps';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'RELATIVE_TIMESTAMP_INVALID';
info.MatPath{3} = 'airspeed_timestamp_rel';
info.MatPath{4} = 'distance_sensor_timestamp_rel';
info.MatPath{5} = 'optical_flow_timestamp_rel';
info.MatPath{6} = 'vehicle_air_data_timestamp_rel';
info.MatPath{7} = 'vehicle_magnetometer_timestamp_rel';
info.MatPath{8} = 'visual_odometry_timestamp_rel';
