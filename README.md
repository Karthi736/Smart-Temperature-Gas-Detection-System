# 🔥 Smart-Temperature-Gas-Detection-System

An IoT-based smart safety system using Arduino UNO and ESP32 to detect gas leakage and abnormal temperature. The system provides real-time alerts using LED, buzzer, LCD display, and cloud monitoring via ThingSpeak.

---

## 🎯 Objective

- Detect gas leakage using MQ sensor  
- Monitor temperature and humidity using DHT11  
- Trigger alert system when danger detected  
- Send real-time data to cloud (IoT monitoring)

---

## ⚙️ Components Used

- Arduino UNO  
- ESP32 WiFi Module  
- DHT11 Sensor  
- MQ Gas Sensor  
- 16x2 LCD (I2C)  
- LED  
- Buzzer  
- Jumper Wires  

---

## 🔄 Working Principle

1. DHT11 reads temperature and humidity  
2. MQ sensor detects gas level  
3. Arduino compares values with threshold  
4. If danger condition occurs:
   - Gas > 400 OR Temperature > 28°C  
   → LED and Buzzer turn ON  
   → LCD shows WARNING message  

5. ESP32 sends sensor data to ThingSpeak cloud

---

## 🚨 Alert Conditions

| Condition | Action |
|----------|--------|
| Gas > 400 | Buzzer + LED ON |
| Temp > 28°C | Warning Alert |
| Normal | System Stable |

---

## 📡 IoT Integration

- Data sent from Arduino → ESP32 via Serial communication  
- ESP32 uploads data to ThingSpeak cloud  
- Remote monitoring possible anytime  

---

## 📷 Project Output

- LCD displays real-time temperature, humidity, and gas values  
- Alert message shown during danger condition  
- Cloud dashboard updates live data  

---

## 💡 Applications

- Home safety system  
- Industrial gas leakage detection  
- Smart IoT monitoring systems  
- Fire & hazard prevention systems  

---

## 👨‍💻 Developed By

Karthi  
Electronics & IoT Project

---

## 📜 License

This project is open-source under MIT License.
