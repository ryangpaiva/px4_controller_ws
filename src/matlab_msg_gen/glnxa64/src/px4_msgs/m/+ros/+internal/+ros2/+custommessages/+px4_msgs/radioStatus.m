function [data, info] = radioStatus
%RadioStatus gives an empty data for px4_msgs/RadioStatus
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/RadioStatus';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.rssi, info.rssi] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.remote_rssi, info.remote_rssi] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.txbuf, info.txbuf] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.noise, info.noise] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.remote_noise, info.remote_noise] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.rxerrors, info.rxerrors] = ros.internal.ros2.messages.ros2.default_type('uint16',1,0);
[data.fix, info.fix] = ros.internal.ros2.messages.ros2.default_type('uint16',1,0);
info.MessageType = 'px4_msgs/RadioStatus';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'rssi';
info.MatPath{3} = 'remote_rssi';
info.MatPath{4} = 'txbuf';
info.MatPath{5} = 'noise';
info.MatPath{6} = 'remote_noise';
info.MatPath{7} = 'rxerrors';
info.MatPath{8} = 'fix';
