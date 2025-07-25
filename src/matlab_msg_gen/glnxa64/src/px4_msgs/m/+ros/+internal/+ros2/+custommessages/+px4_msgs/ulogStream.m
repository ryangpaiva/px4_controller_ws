function [data, info] = ulogStream
%UlogStream gives an empty data for px4_msgs/UlogStream
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/UlogStream';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.FLAGS_NEED_ACK, info.FLAGS_NEED_ACK] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 1, [NaN]);
[data.length, info.length] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.first_message_offset, info.first_message_offset] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.msg_sequence, info.msg_sequence] = ros.internal.ros2.messages.ros2.default_type('uint16',1,0);
[data.flags, info.flags] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.data, info.data] = ros.internal.ros2.messages.ros2.default_type('uint8',249,0);
[data.ORB_QUEUE_LENGTH, info.ORB_QUEUE_LENGTH] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 16, [NaN]);
info.MessageType = 'px4_msgs/UlogStream';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'FLAGS_NEED_ACK';
info.MatPath{3} = 'length';
info.MatPath{4} = 'first_message_offset';
info.MatPath{5} = 'msg_sequence';
info.MatPath{6} = 'flags';
info.MatPath{7} = 'data';
info.MatPath{8} = 'ORB_QUEUE_LENGTH';
