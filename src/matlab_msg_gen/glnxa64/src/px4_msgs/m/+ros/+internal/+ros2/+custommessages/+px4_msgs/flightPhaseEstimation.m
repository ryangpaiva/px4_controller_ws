function [data, info] = flightPhaseEstimation
%FlightPhaseEstimation gives an empty data for px4_msgs/FlightPhaseEstimation
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'px4_msgs/FlightPhaseEstimation';
[data.timestamp, info.timestamp] = ros.internal.ros2.messages.ros2.default_type('uint64',1,0);
[data.flight_phase, info.flight_phase] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.FLIGHT_PHASE_UNKNOWN, info.FLIGHT_PHASE_UNKNOWN] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 0, [NaN]);
[data.FLIGHT_PHASE_LEVEL, info.FLIGHT_PHASE_LEVEL] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 1, [NaN]);
[data.FLIGHT_PHASE_DESCEND, info.FLIGHT_PHASE_DESCEND] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 2, [NaN]);
[data.FLIGHT_PHASE_CLIMB, info.FLIGHT_PHASE_CLIMB] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 3, [NaN]);
info.MessageType = 'px4_msgs/FlightPhaseEstimation';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'timestamp';
info.MatPath{2} = 'flight_phase';
info.MatPath{3} = 'FLIGHT_PHASE_UNKNOWN';
info.MatPath{4} = 'FLIGHT_PHASE_LEVEL';
info.MatPath{5} = 'FLIGHT_PHASE_DESCEND';
info.MatPath{6} = 'FLIGHT_PHASE_CLIMB';
