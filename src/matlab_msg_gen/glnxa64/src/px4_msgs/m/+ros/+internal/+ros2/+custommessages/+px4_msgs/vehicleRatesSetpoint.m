function [data, info] = vehicleRatesSetpoint
%VehicleRatesSetpoint gives an empty data for px4_msgs/VehicleRatesSetpoint
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/VehicleRatesSetpoint';
[data.MESSAGE_VERSION, info.MESSAGE_VERSION] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0, 0, [NaN]);
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.roll, info.roll] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.pitch, info.pitch] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.yaw, info.yaw] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.thrust_body, info.thrust_body] = ros.internal.ros2.messages.ros2.default_type('single',3,0);
[data.reset_integral, info.reset_integral] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
info.MessageType = 'px4_msgs/VehicleRatesSetpoint';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,7);
info.MatPath{1} = 'MESSAGE_VERSION';
info.MatPath{2} = 'timestamp';
info.MatPath{3} = 'roll';
info.MatPath{4} = 'pitch';
info.MatPath{5} = 'yaw';
info.MatPath{6} = 'thrust_body';
info.MatPath{7} = 'reset_integral';
