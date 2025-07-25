function [data, info] = debugVect
%DebugVect gives an empty data for px4_msgs/DebugVect
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/DebugVect';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.name, info.name] = ros.internal.ros2.messages.ros2.char('char',10,NaN,0);
[data.x, info.x] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.y, info.y] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.z, info.z] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'px4_msgs/DebugVect';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'name';
info.MatPath{3} = 'x';
info.MatPath{4} = 'y';
info.MatPath{5} = 'z';
