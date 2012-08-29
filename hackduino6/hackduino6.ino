#include "LiquidCrystal.h"
LiquidCrystal lcd( 8, 9, 4, 5, 6, 7 );  

void setup()
{
   lcd.begin( 16, 2 );
   lcd.clear();
}

void loop()
{
   lcd.setCursor( 0, 0 );   // top left
   lcd.print( "0123456789012345" );

   lcd.setCursor( 0, 1 );   //bottom left
   lcd.print( "abcdefghijklmnop" );

   delay(2000);
   lcd.clear();
   
   lcd.setCursor(0,0);
   lcd.print("Hello, world");
   
   delay(2000);
   lcd.clear();   
  
}
