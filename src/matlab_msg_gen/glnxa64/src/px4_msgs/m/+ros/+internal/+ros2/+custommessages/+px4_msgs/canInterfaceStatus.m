function [data, info] = canInterfaceStatus
%CanInterfaceStatus gives an empty data for px4_msgs/CanInterfaceStatus
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/CanInterfaceStatus';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.interface, info.interface] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.io_errors, info.io_errors] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.frames_tx, info.frames_tx] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.frames_rx, info.frames_rx] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
info.MessageType = 'px4_msgs/CanInterfaceStatus';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'interface';
info.MatPath{3} = 'io_errors';
info.MatPath{4} = 'frames_tx';
info.MatPath{5} = 'frames_rx';
