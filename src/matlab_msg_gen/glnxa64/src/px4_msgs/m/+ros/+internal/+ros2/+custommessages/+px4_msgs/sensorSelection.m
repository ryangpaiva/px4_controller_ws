function [data, info] = sensorSelection
%SensorSelection gives an empty data for px4_msgs/SensorSelection
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/SensorSelection';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.accel_device_id, info.accel_device_id] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.gyro_device_id, info.gyro_device_id] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
info.MessageType = 'px4_msgs/SensorSelection';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'accel_device_id';
info.MatPath{3} = 'gyro_device_id';
