import sqlite3
import numpy as np
import csv
from rclpy.serialization import deserialize_message
from rosidl_runtime_py.utilities import get_message

bag_path = './sin_quart/sin_quart_0.db3'
conn = sqlite3.connect(bag_path)
cursor = conn.cursor()

# ---------------- VehicleAttitude ----------------
msg_att = get_message("px4_msgs/msg/VehicleAttitude")
cursor.execute("""
    SELECT data FROM messages 
    WHERE topic_id=(SELECT id FROM topics WHERE name='/fmu/out/vehicle_attitude')
""")
rows_att = cursor.fetchall()

with open('vehicle_attitude.csv', 'w', newline='') as f:
    writer = csv.writer(f)
    writer.writerow(['timestamp', 'q_w', 'q_x', 'q_y', 'q_z'])
    for row in rows_att:
        msg = deserialize_message(row[0], msg_att)
        writer.writerow([msg.timestamp, *msg.q])

# ---------------- VehicleAttitudeSetpoint ----------------
msg_sp = get_message("px4_msgs/msg/VehicleAttitudeSetpoint")
cursor.execute("""
    SELECT data FROM messages 
    WHERE topic_id=(SELECT id FROM topics WHERE name='/fmu/in/vehicle_attitude_setpoint')
""")
rows_sp = cursor.fetchall()

with open('vehicle_attitude_setpoint.csv', 'w', newline='') as f:
    writer = csv.writer(f)
    writer.writerow(['timestamp', 'q_w', 'q_x', 'q_y', 'q_z'])
    for row in rows_sp:
        msg = deserialize_message(row[0], msg_sp)
        writer.writerow([msg.timestamp, *msg.q_d])

print("✅ CSV files exported: vehicle_attitude.csv and vehicle_attitude_setpoint.csv")
