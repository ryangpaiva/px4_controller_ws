function [data, info] = openDroneIdSelfId
%OpenDroneIdSelfId gives an empty data for px4_msgs/OpenDroneIdSelfId
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/OpenDroneIdSelfId';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.id_or_mac, info.id_or_mac] = ros.internal.ros2.messages.ros2.default_type('uint8',20,0);
[data.description_type, info.description_type] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.description, info.description] = ros.internal.ros2.messages.ros2.char('char',23,NaN,0);
info.MessageType = 'px4_msgs/OpenDroneIdSelfId';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'id_or_mac';
info.MatPath{3} = 'description_type';
info.MatPath{4} = 'description';
