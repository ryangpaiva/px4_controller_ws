function [data, info] = ping
%Ping gives an empty data for px4_msgs/Ping
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/Ping';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.ping_time, info.ping_time] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.ping_sequence, info.ping_sequence] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.dropped_packets, info.dropped_packets] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.rtt_ms, info.rtt_ms] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.system_id, info.system_id] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.component_id, info.component_id] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
info.MessageType = 'px4_msgs/Ping';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,7);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'ping_time';
info.MatPath{3} = 'ping_sequence';
info.MatPath{4} = 'dropped_packets';
info.MatPath{5} = 'rtt_ms';
info.MatPath{6} = 'system_id';
info.MatPath{7} = 'component_id';
