/*
---------------------------------------------------------
Project Name : Smart Temperature and Gas Detection System
Board        : Arduino UNO
Sensors      : DHT11, MQ Gas Sensor
Display      : 16x2 I2C LCD
Alert System : LED and Buzzer
Author       : Karthi
Year         : 2025
---------------------------------------------------------
*/

#include <LiquidCrystal_I2C.h>
#include <DHT.h>

// Pin Definitions
#define DHTPIN 4
#define DHTTYPE DHT11
#define MQPIN A0
#define LEDPIN 8
#define BUZZERPIN 9

// Threshold Values
const int GAS_THRESHOLD = 400;
const float TEMP_THRESHOLD = 28.0;

// Create Objects
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

  lcd.setCursor(0, 0);
  lcd.print("System Ready");
  delay(2000);
  lcd.clear();
}

void loop() {

  // Read sensor values
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  int gasValue = analogRead(MQPIN);

  // Check sensor reading
  if (isnan(humidity) || isnan(temperature)) {

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Sensor Error");

    Serial.println("Failed to read DHT11 sensor");

    delay(2000);
    return;
  }

  // Check alert condition
  if (gasValue > GAS_THRESHOLD || temperature > TEMP_THRESHOLD) {

    digitalWrite(LEDPIN, HIGH);
    digitalWrite(BUZZERPIN, HIGH);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("!!! DANGER !!!");

    lcd.setCursor(0, 1);
    lcd.print("Gas:");
    lcd.print(gasValue);

  }
  else {

    digitalWrite(LEDPIN, LOW);
    digitalWrite(BUZZERPIN, LOW);

    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print("T:");
    lcd.print(temperature,1);
    lcd.print("C");

    lcd.setCursor(9, 0);
    lcd.print("H:");
    lcd.print(humidity,0);

    lcd.setCursor(0, 1);
    lcd.print("Gas:");
    lcd.print(gasValue);
  }

  // Serial Monitor Output
  Serial.print("Temperature : ");
  Serial.print(temperature);
  Serial.print(" C");

  Serial.print(" | Humidity : ");
  Serial.print(humidity);
  Serial.print(" %");

  Serial.print(" | Gas Value : ");
  Serial.println(gasValue);

  delay(2000);
}
