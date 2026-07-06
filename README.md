# 🔥 Smart-Temperature-Gas-Detection-System

An Arduino UNO based smart safety system that detects gas leakage and abnormal temperature conditions using MQ gas sensor and DHT11 sensor. The system provides instant alerts using LED, buzzer, and LCD display.

---

## 🎯 Objective

- Detect gas leakage using MQ sensor  
- Monitor temperature and humidity using DHT11  
- Trigger alert system during dangerous conditions  
- Display real-time values on LCD

---

## ⚙️ Components Used

- Arduino UNO  
- DHT11 Sensor  
- MQ Gas Sensor  
- 16x2 LCD (I2C)  
- LED  
- Buzzer  
- Jumper wires  

---

## 🔄 Working Principle

- DHT11 reads temperature and humidity  
- MQ sensor detects gas level  
- Arduino processes sensor values  

- If danger condition occurs:
  - Gas > 400 OR Temperature > 28°C  
  → LED and Buzzer turn ON  
  → LCD shows WARNING / DANGER message  

- If normal condition:
  → LCD shows real-time sensor values  

---

## 🚨 Alert Conditions

| Condition | Action |
|----------|--------|
| Gas > 400 | Buzzer + LED ON |
| Temp > 28°C | Warning Alert |
| Normal | System Stable |

---

## 📡 System Type

- Embedded monitoring system  
- No cloud / IoT used  
- Fully real-time local safety system  

---

## 📷 Project Output

- LCD displays temperature, humidity, and gas values  
- Warning message during danger condition  
- LED and buzzer alert system works in real-time  

---

## 💡 Applications

- Home safety system  
- Industrial gas leakage detection  
- Fire prevention system  
- Smart embedded monitoring system  

---

## 👨‍💻 Developed By

Karthikeyan M  
Electronics & IoT Project

---

## 📜 License

This project is open-source under MIT License.
