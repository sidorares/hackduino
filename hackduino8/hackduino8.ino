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
  lcd.clear();
  lcd.setCursor( 0, 0 ); 

  if ( button == 0 )
  {
    lcd.print("right");
  }
  
  if ( button > 500 && button < 510 )
  {
    lcd.print("left ");
  }

  if ( button > 140 && button < 150 )
  {
    lcd.print("up ");
  }

  if ( button > 320 && button < 335 )
  {
    lcd.print("down");
  }
  
  if ( button > 740 && button < 745 )
  {
    lcd.print("select");
  }
  
  delay(100);
}
