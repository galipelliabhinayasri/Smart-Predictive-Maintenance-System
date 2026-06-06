📌 Project Overview

This project presents an IoT-based Smart Predictive Maintenance System designed to monitor machine health using ESP32, Vibration Sensor, and DHT11 Sensor. TinyML models are integrated into the ESP32 to analyze sensor data and identify abnormal machine conditions before equipment failure occurs.
The system helps industries reduce downtime, improve reliability, and enable early fault detection through real-time monitoring.

🎯 Objectives

Monitor machine vibration continuously,
Measure temperature and humidity in real time,
Detect abnormal operating conditions using TinyML,
Provide instant alerts using LED and buzzer,
Demonstrate a low-cost predictive maintenance solution.

🛠️ Components Used

ESP32 Development Board,
Vibration Sensor,
DHT11 Temperature & Humidity Sensor,
Pump,
TinyML Models,
LED,
Buzzer,
Connecting Wires.

⚙️ Working Principle

The vibration sensor and DHT11 sensor continuously collect machine condition data. The ESP32 processes these sensor readings and uses embedded TinyML models to analyze the machine's operational status.
When abnormal vibration patterns are detected, the system generates alerts through the LED and buzzer, enabling preventive maintenance before major failures occur.

📂 Project Files

predictive_maintance.ino – Main Arduino program,
dht_model.h – TinyML model for DHT11 data,
vibration_model.h – TinyML model for vibration analysis,
Project_Report.pdf – Project documentation,
circuit_image.svg – Circuit diagram,
Output_Demo.jpg – Output demonstration.

✨ Features

Real-time monitoring,
TinyML-based prediction,
Fault detection alerts,
Low-cost implementation,
Industrial maintenance application.

🏭 Applications

Industrial Equipment Monitoring,
Pumps and Motors,
Manufacturing Equipment,
Smart Factories,
Predictive Maintenance Systems.

🚀 Future Enhancements

Cloud-based monitoring dashboard,
Mobile application integration,
Remote alerts and notifications,
Advanced machine learning algorithms,
Data logging and analytics.

👨‍💻 Development Contribution

Sensor Data Collection, 
Machine Learning Model Training using Google Colab,
TinyML Model Development,
ESP32 Programming,
Sensor Integration,
System Testing and Validation.

📚 Technologies Used

ESP32,
Arduino IDE,
Machine Learning,
Google Colab,
MicroPython,
IoT Sensors.

👤 Author

Abhinaya Sri
Electrical and Electronics Engineering (EEE)

Mini Project – Smart Predictive Maintenance System Using Vibration Sensor & ESP32 With TinyML
