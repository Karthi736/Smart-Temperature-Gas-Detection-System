# 🔥 Smart-Temperature-Gas-Detection-System

An Arduino UNO based smart safety system that detects gas leakage and abnormal temperature using MQ gas sensor and DHT11 sensor. The system provides real-time alerts using LED, buzzer, and LCD display.

---

## 🎯 Objective

- Detect harmful gas leakage using MQ sensor  
- Monitor temperature and humidity using DHT11  
- Provide instant alert system using buzzer and LED  
- Display real-time values on LCD  

---

## ⚙️ Components Used

- Arduino UNO  
- DHT11 Sensor  
- MQ Gas Sensor  
- 16x2 LCD (I2C)  
- LED  
- Buzzer  
- Jumper Wires  

---

## 🔄 Working Principle

- DHT11 reads temperature and humidity  
- MQ sensor detects gas level  
- Arduino processes sensor data  

- If danger condition occurs:
  - Gas > 400 OR Temperature > 28°C  
  → LED and Buzzer turn ON  
  → LCD shows "DANGER" message  

- If normal condition:
  → LCD shows real-time values  

---

## 🚨 Alert Conditions

| Condition | Action |
|----------|--------|
| Gas > 400 | Buzzer + LED ON |
| Temp > 28°C | Warning Alert |
| Normal | System Stable |

---

## 📡 System Type

- Embedded real-time monitoring system  
- No cloud / IoT used  
- Fully local safety alert system  

---

## 🔗 Circuit Design

You can view the circuit design here:

https://app.cirkitdesigner.com/project/00073028-c51b-4fdc-a3f5-2e0000e93342

---

## 📷 Project Output

- LCD displays temperature, humidity, and gas values  
- LED and buzzer activate during danger condition  
- Real-time monitoring system  

---

## 💡 Applications

- Home safety system  
- Industrial gas leakage detection  
- Fire prevention system  
- Smart embedded monitoring  

---

## 👨‍💻 Developed By

Karthikeyan M  
Electronics & IoT Project  

---

## 📜 License

This project is open-source under MIT License.
