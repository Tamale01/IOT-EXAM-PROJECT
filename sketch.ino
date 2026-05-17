//Created by Tamale
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup(){
  lcd.init();
  lcd.backlight();
  lcd.setCursor(3, 0);
  lcd.print("Created by");
  lcd.setCursor(5, 1);
  lcd.print("Tamale");
  delay(3000);
  lcd.clear();
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop(){
  lcd.setCursor(5, 0); 
  lcd.print("STOP!");
  digitalWrite(2, HIGH);
  delay(11000);
  digitalWrite(2, LOW);
  lcd.clear();
  lcd.setCursor(1, 0);
  lcd.print("Prepare to go!");
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  lcd.clear();
  lcd.setCursor(6, 0);
  lcd.print("GO!");
  digitalWrite(4, HIGH);
  delay(7000);
  digitalWrite(4, LOW);
  delay(500);
  digitalWrite(4, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  delay(500);
  digitalWrite(4, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Prepare to Stop!");
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  lcd.clear();
}
