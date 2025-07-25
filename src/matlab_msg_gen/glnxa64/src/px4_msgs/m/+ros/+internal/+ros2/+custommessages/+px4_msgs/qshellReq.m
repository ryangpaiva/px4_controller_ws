function [data, info] = qshellReq
%QshellReq gives an empty data for px4_msgs/QshellReq
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/QshellReq';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.cmd, info.cmd] = ros.internal.ros2.messages.ros2.char('char',100,NaN,0);
[data.MAX_STRLEN, info.MAX_STRLEN] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0, 100, [NaN]);
[data.strlen, info.strlen] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.request_sequence, info.request_sequence] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
info.MessageType = 'px4_msgs/QshellReq';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'cmd';
info.MatPath{3} = 'MAX_STRLEN';
info.MatPath{4} = 'strlen';
info.MatPath{5} = 'request_sequence';
