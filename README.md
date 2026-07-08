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

## Circuit Diagram

*(Add Circuit Diagram Image Here)*

---

# Circuit Design

The complete circuit was designed and verified using Cirkit Designer.

Project Link

https://app.cirkitdesigner.com/project/00073028-c51b-4fdc-a3f5-2e0000e93342

---

# Hardware Setup

*(Add Hardware Setup Image Here)*

---

# System Output

## Safe Zone

*(Add Safe Zone LCD Image)*

## Temperature Warning

*(Add Temperature Warning LCD Image)*

## Gas Warning

*(Add Gas Warning LCD Image)*

## Danger Mode

*(Add Danger Mode LCD Image)*

---

# Working Principle

- Arduino UNO continuously reads data from the DHT11 sensor and MQ Gas Sensor.
- Temperature and gas values are compared with predefined threshold values.
- If the values remain within the safe range, the LCD displays **SAFE ZONE**.
- If only the temperature exceeds **28°C**, the LCD displays **TEMP WARNING**.
- If only the gas value exceeds **400**, the LCD displays **GAS WARNING**.
- If both values exceed the threshold limits, the LCD displays **DANGER**.
- During unsafe conditions, both the LED and buzzer are activated automatically.

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
├── Documentation
│   └── Project_Report.pdf
│
├── Images
│   ├── Hardware_Setup.png
│   ├── Safe_Zone.png
│   ├── Temperature_Warning.png
│   ├── Gas_Warning.png
│   └── Danger_Mode.png
│
├── Presentation
│   └── Smart_Temperature_Gas_Detection_Presentation.pptx
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

The complete project report is available in the **Documentation** folder.

**File**

- Project_Report.pdf

---

# Project Presentation

The complete PowerPoint presentation is available in the **Presentation** folder.

**File**

- Smart_Temperature_Gas_Detection_Presentation.pptx

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
