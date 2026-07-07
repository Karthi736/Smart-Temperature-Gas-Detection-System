# Smart Temperature and Gas Detection System Using Arduino UNO

## Overview

The Smart Temperature and Gas Detection System is an embedded safety monitoring project developed using the Arduino UNO microcontroller. The system continuously monitors the surrounding temperature and detects combustible gas leakage using a DHT11 Temperature and Humidity Sensor and an MQ Gas Sensor.

Whenever the measured temperature exceeds **28°C** or the gas sensor value exceeds **400**, the Arduino activates an LED and buzzer while displaying an appropriate warning message on a 16×2 I2C LCD display.

The system provides four operating states:

- Safe Zone
- Temperature Warning
- Gas Warning
- Danger

This project is designed as a low-cost, reliable, and easy-to-implement safety monitoring solution suitable for homes, laboratories, and educational applications.

---

# Features

- Real-time Temperature Monitoring
- Real-time Gas Leakage Detection
- Temperature and Humidity Measurement
- 16×2 I2C LCD Display
- LED Alert System
- Active Buzzer Alert
- Four Different Warning Modes
- Low-Cost Embedded Design
- Easy Hardware Implementation
- Arduino IDE Based Programming

---

# Hardware Components

- Arduino UNO
- DHT11 Temperature and Humidity Sensor
- MQ Gas Sensor
- 16×2 I2C LCD Display
- LED
- Active Buzzer
- Breadboard
- Jumper Wires
- USB Cable

---

# Software Used

- Arduino IDE
- Embedded C
- Cirkit Designer

---

# Circuit Diagram

![Circuit Diagram](Circuit/Circuit_Diagram.png)

---

# Circuit Design

The complete circuit was designed and verified using **Cirkit Designer**.

Project Link:

https://app.cirkitdesigner.com/project/00073028-c51b-4fdc-a3f5-2e0000e93342

---

# Hardware Setup

![Hardware Setup](Images/Hardware_Setup.png)

---

# System Output

## Safe Zone

![Safe Zone](Images/Safe_Zone.png)

---

## Temperature Warning

![Temperature Warning](Images/Temperature_Warning.png)

---

## Gas Warning

![Gas Warning](Images/Gas_Warning.png)

---

## Danger Mode

![Danger Mode](Images/Danger_Mode.png)

---

# Working Principle

1. Arduino UNO continuously reads data from the DHT11 sensor and MQ Gas Sensor.
2. Temperature and gas values are compared with predefined threshold values.
3. If the values remain within the safe range, the LCD displays **SAFE ZONE**.
4. If only the temperature exceeds **28°C**, the LCD displays **TEMP WARNING**.
5. If only the gas value exceeds **400**, the LCD displays **GAS WARNING**.
6. If both values exceed the threshold limits, the LCD displays **DANGER**.
7. During unsafe conditions, both the LED and buzzer are activated automatically.

---

# Pin Configuration

| Component | Arduino Pin |
|-----------|-------------|
| DHT11 Data | D4 |
| MQ Gas Sensor | A0 |
| LED | D8 |
| Buzzer | D9 |
| LCD SDA | A4 |
| LCD SCL | A5 |

---

# Threshold Values

| Parameter | Threshold |
|-----------|-----------|
| Temperature | 28°C |
| Gas Sensor | 400 |

---

# Project Structure

```
Smart-Temperature-Gas-Detection-System
│
├── Arduino_Code
│   └── Smart_Temperature_Gas_Detection.ino
│
├── Circuit
│   └── Circuit_Diagram.png
│
├── Images
│   ├── Hardware_Setup.png
│   ├── Safe_Zone.png
│   ├── Temperature_Warning.png
│   ├── Gas_Warning.png
│   └── Danger_Mode.png
│
├── Project_Report.pdf
│
├── README.md
│
└── LICENSE
```

---

# Source Code

The complete Arduino source code is available in the **Arduino_Code** folder.

---

# Documentation

The complete project documentation is available as:

**Project_Report.pdf**

---

# Applications

- Home Safety Monitoring
- Kitchen Gas Leakage Detection
- Laboratory Safety Systems
- Small Industries
- Educational Embedded Projects
- Environmental Monitoring

---

# Future Enhancements

- IoT Integration
- GSM SMS Alerts
- Wi-Fi Monitoring
- Mobile Application
- Cloud Data Logging
- Automatic Exhaust Fan Control
- Automatic Gas Valve Shut-Off
- AI-Based Hazard Prediction

---

# Author

**Karthikeyan M**

Department of Electrical and Electronics Engineering

V.S.B College of Engineering Technical Campus

Anna University

Academic Year: **2023–2027**

---

# License

This project is licensed under the **MIT License**.
