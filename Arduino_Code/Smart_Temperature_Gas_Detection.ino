#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 4
#define DHTTYPE DHT11
#define MQPIN A0
#define LEDPIN 8
#define BUZZERPIN 9

LiquidCrystal_I2C lcd(0x27, 16, 2);
DHT dht(DHTPIN, DHTTYPE);

const int GAS_THRESHOLD = 400;
const int TEMP_THRESHOLD = 28;

void setup() {
  lcd.init();
  lcd.backlight();
  dht.begin();

  pinMode(MQPIN, INPUT);
  pinMode(LEDPIN, OUTPUT);
  pinMode(BUZZERPIN, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  int gasValue = analogRead(MQPIN);

  // Check DHT11 sensor
  if (isnan(humidity) || isnan(temperature)) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Sensor Error");

    Serial.println("Failed to read DHT11!");
    delay(2000);
    return;
  }

  // Alert Condition
  if (gasValue > GAS_THRESHOLD || temperature > TEMP_THRESHOLD) {

    digitalWrite(LEDPIN, HIGH);
    digitalWrite(BUZZERPIN, HIGH);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("!!! DANGER !!!");

    lcd.setCursor(0, 1);
    lcd.print("Gas:");
    lcd.print(gasValue);

  } else {

    digitalWrite(LEDPIN, LOW);
    digitalWrite(BUZZERPIN, LOW);

    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print("T:");
    lcd.print(temperature);
    lcd.print("C");

    lcd.setCursor(9, 0);
    lcd.print("H:");
    lcd.print(humidity);

    lcd.setCursor(0, 1);
    lcd.print("Gas:");
    lcd.print(gasValue);
  }

  // Serial Monitor Output
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" C | ");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" % | ");

  Serial.print("Gas Value: ");
  Serial.println(gasValue);

  delay(2000);
}
