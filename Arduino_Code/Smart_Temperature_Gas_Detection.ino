/*
---------------------------------------------------------
Project Name : Smart Temperature and Gas Detection System
Board        : Arduino UNO
Sensors      : DHT11, MQ Gas Sensor
Display      : 16x2 I2C LCD
Alert System : LED and Buzzer
Author       : Karthikeyan M
Year         : 2026
---------------------------------------------------------
*/

#include <LiquidCrystal_I2C.h>
#include <DHT.h>

// ================= PIN DEFINITIONS =================
#define DHTPIN 4
#define DHTTYPE DHT11
#define MQPIN A0
#define LEDPIN 8
#define BUZZERPIN 9

// ================= THRESHOLDS =================
const int GAS_THRESHOLD = 400;
const float TEMP_THRESHOLD = 28.0;

// ================= OBJECTS =================
LiquidCrystal_I2C lcd(0x27, 16, 2);
DHT dht(DHTPIN, DHTTYPE);

void setup() {

  lcd.init();
  lcd.backlight();

  dht.begin();

  pinMode(MQPIN, INPUT);
  pinMode(LEDPIN, OUTPUT);
  pinMode(BUZZERPIN, OUTPUT);

  Serial.begin(9600);

  lcd.setCursor(0,0);
  lcd.print("  System Ready  ");
  delay(2000);
  lcd.clear();
}

void loop() {

  // ================= SENSOR READ =================
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  int gasValue = analogRead(MQPIN);

  // ================= SENSOR ERROR CHECK =================
  if (isnan(humidity) || isnan(temperature)) {
    lcd.setCursor(0,0);
    lcd.print("  Sensor Error  ");
    lcd.setCursor(0,1);
    lcd.print("  Check DHT11   ");

    Serial.println("DHT11 Error");
    delay(2000);
    return;
  }

  // ================= DANGER LOGIC =================
  bool gasDanger = (gasValue > GAS_THRESHOLD);
  bool tempDanger = (temperature > TEMP_THRESHOLD);
  bool danger = gasDanger || tempDanger;

  // ================= OUTPUT CONTROL =================
  digitalWrite(LEDPIN, danger);
  digitalWrite(BUZZERPIN, danger);

  // ================= DISPLAY LOGIC (FLICKER-FREE) =================

  if (danger) {
    lcd.setCursor(0,0);
    
    // Condition 1: Both high
    if (gasDanger && tempDanger) {
      lcd.print(" !!! DANGER !!! ");
    } 
    // Condition 2: Gas high
    else if (gasDanger) {
      lcd.print(" ! GAS WARNING ! ");
    } 
    // Condition 3: Temp high
    else if (tempDanger) {
      lcd.print(" ! TEMP WARNING ! ");
    }

    // Bottom row
    lcd.setCursor(0,1);
    lcd.print("T:");
    lcd.print(temperature, 1);
    lcd.print("C G:");
    lcd.print(gasValue);
    lcd.print("    ");
  }
  else {

    lcd.setCursor(0,0);
    lcd.print("   SAFE ZONE    ");

    lcd.setCursor(0,1);
    lcd.print("T:");
    lcd.print(temperature, 1);
    lcd.print("C G:");
    lcd.print(gasValue);
    lcd.print("    ");
  }

  // ================= SERIAL MONITOR =================
  Serial.print("Temp: ");
  Serial.print(temperature);
  Serial.print(" C | Humidity: ");
  Serial.print(humidity);
  Serial.print(" % | Gas: ");
  Serial.println(gasValue);

  delay(1000);
}
