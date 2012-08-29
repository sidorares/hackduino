int a = 0;  
int b = 5;
float c = 0;

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  if (Serial.available() > 0) 
  {
    a = Serial.read();
    a = a - 48;
   
   if ( a > b )
   {
     Serial.println("larger");
   }
   
   if (a < b )
   {
      Serial.println("smaller");
   }
   
   if ( a == b )
   {
     Serial.println("same");
   }
 
 
  }
}



