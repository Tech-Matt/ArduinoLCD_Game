#include <LiquidCrystal.h>

//Led pins
const int rs = 2, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  //Set up LCD number of columns and rows
  lcd.begin(16, 2);

}

void loop() {
  //set cursor to (0, 0)
  lcd.setCursor(0, 0);

  //enable autoscroll
  lcd.autoscroll();

  //Printing infinite times "1"
  while(true)
  {
    lcd.print(1);
    delay(500);
  }

  

}
