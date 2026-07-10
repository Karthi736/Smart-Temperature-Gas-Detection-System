# AI-Based Predictive Transformer Health Monitoring and Preventive Protection System Using Arduino UNO

## Overview

Transformer is one of the most important components in electrical power systems. Unexpected transformer failures can lead to power interruptions, maintenance difficulties, and increased operational costs.

This project presents an **AI-Based Predictive Transformer Health Monitoring and Preventive Protection System using Arduino UNO**. The system continuously monitors transformer temperature and load conditions. Based on the collected parameters, the Arduino calculates a **Transformer Health Score**, estimates failure probability, and predicts the risk level.

The proposed system provides automatic cooling control, relay-based protection, and real-time status monitoring through an LCD display.

---

# Table of Contents

* [Objectives](#objectives)
* [System Features](#system-features)
* [Hardware Components](#hardware-components)
* [Software Requirements](#software-requirements)
* [System Architecture](#system-architecture)
* [Working Principle](#working-principle)
* [Health Score Calculation](#health-score-calculation)
* [Risk Classification](#risk-classification)
* [Automatic Protection System](#automatic-protection-system)
* [Circuit Diagram](#circuit-diagram)
* [Flowchart](#flowchart)
* [Simulation](#simulation)
* [LCD Monitoring Output](#lcd-monitoring-output)
* [Results](#results)
* [Arduino Code](#arduino-code)
* [Future Improvements](#future-improvements)
* [Conclusion](#conclusion)
* [Author](#author)
* [License](#license)

---

# Objectives

* To monitor transformer temperature continuously.
* To simulate transformer load variations.
* To calculate transformer health condition using sensor parameters.
* To estimate failure probability and remaining life.
* To provide automatic cooling control.
* To protect the transformer during abnormal conditions.
* To develop a low-cost predictive monitoring system.

---

# System Features

* Real-time temperature monitoring
* Load condition monitoring
* AI-based Health Score calculation
* Failure probability estimation
* Remaining life estimation
* Risk level classification
* Automatic cooling control using servo motor
* Relay-based protection system
* LED warning indication
* Buzzer alert system
* Fault counting mechanism
* LCD dashboard monitoring

---

# Hardware Components

| Component                | Purpose                              |
| ------------------------ | ------------------------------------ |
| Arduino UNO              | Main processing controller           |
| DHT22 Temperature Sensor | Measures transformer temperature     |
| Potentiometer            | Simulates transformer load condition |
| 16x2 I2C LCD Display     | Displays system status               |
| Servo Motor              | Cooling system simulation            |
| Relay Module             | Transformer protection control       |
| LED                      | Visual warning indication            |
| Buzzer                   | Audio alert indication               |

---

# Software Requirements

| Software        | Purpose                                   |
| --------------- | ----------------------------------------- |
| Arduino IDE     | Program development                       |
| Wokwi Simulator | Circuit simulation                        |
| GitHub          | Project documentation and version control |

---

# System Architecture

The system consists of temperature monitoring, load monitoring, health analysis, prediction, and protection modules.

<img src="Images/Block_Diagram.png" width="600">

---

# Working Principle

1. The DHT22 sensor measures transformer temperature.
2. The potentiometer provides simulated load values.
3. Arduino UNO collects sensor data.
4. The controller processes temperature and load conditions.
5. A Health Score is calculated based on input conditions.
6. The system classifies transformer risk level.
7. Cooling and protection actions are automatically activated.
8. The LCD displays real-time transformer health status.

---

# Health Score Calculation

The transformer health condition is represented using a Health Score ranging from 0 to 100.

The Health Score is calculated based on:

* Temperature condition
* Load condition
* Abnormal operating conditions

Higher Health Score indicates a healthier transformer condition.

---

# Risk Classification

| Health Score Range | Risk Level    |
| ------------------ | ------------- |
| 80 - 100           | LOW Risk      |
| 50 - 79            | MEDIUM Risk   |
| 25 - 49            | HIGH Risk     |
| Below 25           | CRITICAL Risk |

---

# Automatic Protection System

## LOW Risk

* Normal operation
* Cooling system OFF
* No warning indication

## MEDIUM Risk

* Increased monitoring
* Cooling assistance activated

## HIGH Risk

* Cooling system ON
* LED warning activated

## CRITICAL Risk

* Relay protection activated
* Buzzer alert generated
* Fault condition recorded

---

# Circuit Diagram

<img src="Images/Circuit_Diagram.png" width="600">

---

# Flowchart

<img src="Images/Flowchart.png" width="500">

---

# Simulation

The proposed system is simulated using the Wokwi online simulation platform.

Simulation Link:

https://wokwi.com/projects/469066635947975681

---

# LCD Monitoring Output

## Normal Condition

<img src="Images/LCD_Normal.png" width="400">

## Transformer Status

<img src="Images/LCD_Status.png" width="400">

## Prediction Output

<img src="Images/LCD_Prediction.png" width="400">

## Critical Condition

<img src="Images/LCD_Critical.png" width="400">

---

# Results

The developed system successfully performs:

* Temperature monitoring
* Load condition analysis
* Health Score calculation
* Risk prediction
* Cooling control
* Relay protection
* Alert generation

The LCD dashboard provides real-time transformer condition monitoring.

---

# Arduino Code

The complete Arduino program is available in:

```
Arduino_Code/
│
└── AI_Transformer_Health_Monitoring.ino
```

---

# Future Improvements

* Integration with IoT cloud platforms
* Mobile application monitoring
* Real transformer data collection
* Machine Learning based prediction model
* Wireless communication system
* Advanced fault diagnosis techniques

---

# Conclusion

The AI-Based Predictive Transformer Health Monitoring and Preventive Protection System using Arduino UNO provides an efficient and low-cost solution for transformer condition monitoring.

The system continuously evaluates temperature and load conditions, predicts transformer health status, and provides preventive protection through automatic cooling and relay control.

This project demonstrates the application of intelligent monitoring techniques in electrical power systems.

---

# Author

**Karthikeyan M**

Department of Electrical and Electronics Engineering

V.S.B College of Engineering Technical Campus

Anna University

Academic Year: 2023–2027

---

# License

This project is licensed under the **MIT License**.

You are free to use, modify, and distribute this project for educational and research purposes with proper credit to the original author.
