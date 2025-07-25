function [data, info] = vehicleMagnetometer
%VehicleMagnetometer gives an empty data for px4_msgs/VehicleMagnetometer
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/VehicleMagnetometer';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.timestamp_sample, info.timestamp_sample] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.device_id, info.device_id] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.magnetometer_ga, info.magnetometer_ga] = ros.internal.ros2.messages.ros2.default_type('single',3,0);
[data.calibration_count, info.calibration_count] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
info.MessageType = 'px4_msgs/VehicleMagnetometer';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'timestamp_sample';
info.MatPath{3} = 'device_id';
info.MatPath{4} = 'magnetometer_ga';
info.MatPath{5} = 'calibration_count';
