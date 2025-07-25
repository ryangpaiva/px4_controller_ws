function [data, info] = vehicleConstraints
%VehicleConstraints gives an empty data for px4_msgs/VehicleConstraints
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/VehicleConstraints';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.speed_up, info.speed_up] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.speed_down, info.speed_down] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.want_takeoff, info.want_takeoff] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
info.MessageType = 'px4_msgs/VehicleConstraints';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'speed_up';
info.MatPath{3} = 'speed_down';
info.MatPath{4} = 'want_takeoff';
