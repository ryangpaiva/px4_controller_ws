function [data, info] = openDroneIdArmStatus
%OpenDroneIdArmStatus gives an empty data for px4_msgs/OpenDroneIdArmStatus
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/OpenDroneIdArmStatus';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.status, info.status] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.error, info.error] = ros.internal.ros2.messages.ros2.char('char',50,NaN,0);
info.MessageType = 'px4_msgs/OpenDroneIdArmStatus';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'status';
info.MatPath{3} = 'error';
