#include "LiquidCrystal.h"
LiquidCrystal lcd( 8, 9, 4, 5, 6, 7 );  

int button = 0;

void setup()
{
   lcd.begin( 16, 2 );
   lcd.clear();
}

void loop()
{
  button = analogRead(0);
  lcd.setCursor( 0, 0 ); 
  lcd.print(button);
  delay(100);
  lcd.clear();    
}
