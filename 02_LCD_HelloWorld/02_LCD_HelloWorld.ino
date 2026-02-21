#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 2, 3, 4, 5);
int brightness = 100;

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  pinMode(9, OUTPUT);
  lcd.setCursor(0, 0);
  lcd.print("Hello,");
  lcd.setCursor(0, 1);
  lcd.print("World!");
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(9, brightness);
  delay(1000);
  analogWrite(9, 0);
  delay(1000);
}