function [data, info] = debugArray
%DebugArray gives an empty data for px4_msgs/DebugArray
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/DebugArray';
[data.ARRAY_SIZE, info.ARRAY_SIZE] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 58, [NaN]);
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.id, info.id] = ros.internal.ros2.messages.ros2.default_type('uint16',1,0);
[data.name, info.name] = ros.internal.ros2.messages.ros2.char('char',10,NaN,0);
[data.data, info.data] = ros.internal.ros2.messages.ros2.default_type('single',58,0);
info.MessageType = 'px4_msgs/DebugArray';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'ARRAY_SIZE';
info.MatPath{2} = 'timestamp';
info.MatPath{3} = 'id';
info.MatPath{4} = 'name';
info.MatPath{5} = 'data';
