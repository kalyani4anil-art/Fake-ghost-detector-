
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define GAS_SENSOR A0
#define PIR_SENSOR 2
#define LED 8

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  pinMode(PIR_SENSOR, INPUT);
  pinMode(LED, OUTPUT);

  Serial.begin(9600);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("FAKE GHOST");
  lcd.setCursor(0, 1);
  lcd.print("DETECTOR");

  delay(2000);
  lcd.clear();
}

void loop() {

  int gasValue = analogRead(GAS_SENSOR);
  int motion = digitalRead(PIR_SENSOR);

  Serial.print("Gas: ");
  Serial.print(gasValue);
  Serial.print("  Motion: ");
  Serial.println(motion);

  // GHOST DETECTED
  if (gasValue > 400 || motion == HIGH) {

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("!!! WARNING !!!");

    lcd.setCursor(0, 1);

    if (motion == HIGH) {
      lcd.print("GHOST MOVEMENT");
    } 
    else {
      lcd.print("GAS DETECTED");
    }

    // LED blinking
    digitalWrite(LED, HIGH);
    delay(150);

    digitalWrite(LED, LOW);
    delay(150);
  }

  // NO GHOST
  else {

    digitalWrite(LED, LOW);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("AREA SAFE");

    lcd.setCursor(0, 1);
    lcd.print("NO GHOST");

    delay(500);
  }
}

