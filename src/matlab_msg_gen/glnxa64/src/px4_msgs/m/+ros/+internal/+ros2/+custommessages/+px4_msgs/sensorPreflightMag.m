function [data, info] = sensorPreflightMag
%SensorPreflightMag gives an empty data for px4_msgs/SensorPreflightMag
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/SensorPreflightMag';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.mag_inconsistency_angle, info.mag_inconsistency_angle] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'px4_msgs/SensorPreflightMag';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'mag_inconsistency_angle';
