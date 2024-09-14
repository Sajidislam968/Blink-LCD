#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.begin();
  lcd.backlight();
  
  lcd.setCursor(0, 0);
  lcd.print("Blinking cursor");

  lcd.blink();  // Enable cursor blinking

  delay(5000);  // Wait 5 seconds

  lcd.noBlink();  // Disable cursor blinking
}

void loop() {
  // Do nothing here
}
