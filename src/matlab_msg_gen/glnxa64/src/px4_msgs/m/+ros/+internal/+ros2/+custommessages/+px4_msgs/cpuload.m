function [data, info] = cpuload
%Cpuload gives an empty data for px4_msgs/Cpuload
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/Cpuload';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.load, info.load] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.ram_usage, info.ram_usage] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'px4_msgs/Cpuload';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'load';
info.MatPath{3} = 'ram_usage';
