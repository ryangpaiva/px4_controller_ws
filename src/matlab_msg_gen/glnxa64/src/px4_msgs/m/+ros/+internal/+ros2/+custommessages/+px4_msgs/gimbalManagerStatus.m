function [data, info] = gimbalManagerStatus
%GimbalManagerStatus gives an empty data for px4_msgs/GimbalManagerStatus
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/GimbalManagerStatus';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.flags, info.flags] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.gimbal_device_id, info.gimbal_device_id] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.primary_control_sysid, info.primary_control_sysid] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.primary_control_compid, info.primary_control_compid] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.secondary_control_sysid, info.secondary_control_sysid] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.secondary_control_compid, info.secondary_control_compid] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
info.MessageType = 'px4_msgs/GimbalManagerStatus';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,7);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'flags';
info.MatPath{3} = 'gimbal_device_id';
info.MatPath{4} = 'primary_control_sysid';
info.MatPath{5} = 'primary_control_compid';
info.MatPath{6} = 'secondary_control_sysid';
info.MatPath{7} = 'secondary_control_compid';
