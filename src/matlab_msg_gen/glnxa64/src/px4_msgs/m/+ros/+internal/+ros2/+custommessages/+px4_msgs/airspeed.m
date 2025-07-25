function [data, info] = airspeed
%Airspeed gives an empty data for px4_msgs/Airspeed
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/Airspeed';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.timestamp_sample, info.timestamp_sample] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.indicated_airspeed_m_s, info.indicated_airspeed_m_s] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.true_airspeed_m_s, info.true_airspeed_m_s] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.air_temperature_celsius, info.air_temperature_celsius] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.confidence, info.confidence] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'px4_msgs/Airspeed';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'timestamp_sample';
info.MatPath{3} = 'indicated_airspeed_m_s';
info.MatPath{4} = 'true_airspeed_m_s';
info.MatPath{5} = 'air_temperature_celsius';
info.MatPath{6} = 'confidence';
