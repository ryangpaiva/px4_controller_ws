function [data, info] = sensorHygrometer
%SensorHygrometer gives an empty data for px4_msgs/SensorHygrometer
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/SensorHygrometer';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.timestamp_sample, info.timestamp_sample] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.device_id, info.device_id] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.temperature, info.temperature] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.humidity, info.humidity] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'px4_msgs/SensorHygrometer';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'timestamp_sample';
info.MatPath{3} = 'device_id';
info.MatPath{4} = 'temperature';
info.MatPath{5} = 'humidity';
