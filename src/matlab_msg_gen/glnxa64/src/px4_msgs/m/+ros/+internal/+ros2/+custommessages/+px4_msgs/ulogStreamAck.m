function [data, info] = ulogStreamAck
%UlogStreamAck gives an empty data for px4_msgs/UlogStreamAck
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/UlogStreamAck';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.ACK_TIMEOUT, info.ACK_TIMEOUT] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 50, [NaN]);
[data.ACK_MAX_TRIES, info.ACK_MAX_TRIES] = ros.internal.ros2.messages.ros2.default_type('int32',1,0, 50, [NaN]);
[data.msg_sequence, info.msg_sequence] = ros.internal.ros2.messages.ros2.default_type('uint16',1,0);
info.MessageType = 'px4_msgs/UlogStreamAck';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'ACK_TIMEOUT';
info.MatPath{3} = 'ACK_MAX_TRIES';
info.MatPath{4} = 'msg_sequence';
