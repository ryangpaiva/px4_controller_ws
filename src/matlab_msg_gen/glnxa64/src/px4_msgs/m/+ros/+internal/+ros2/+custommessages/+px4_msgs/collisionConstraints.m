function [data, info] = collisionConstraints
%CollisionConstraints gives an empty data for px4_msgs/CollisionConstraints
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/CollisionConstraints';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.original_setpoint, info.original_setpoint] = ros.internal.ros2.messages.ros2.default_type('single',2,0);
[data.adapted_setpoint, info.adapted_setpoint] = ros.internal.ros2.messages.ros2.default_type('single',2,0);
info.MessageType = 'px4_msgs/CollisionConstraints';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'original_setpoint';
info.MatPath{3} = 'adapted_setpoint';
