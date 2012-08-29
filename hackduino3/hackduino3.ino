int a = 0;  
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
  
    c = a + a;           // you could use + - / * %
    Serial.print(a);
    Serial.print(" plus ");
    Serial.print(a);
    Serial.print(" equals ");
    Serial.println(c);
  }
}



