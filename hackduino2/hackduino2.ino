int i = 0;  
int j = 0;
int led = 13;


void setup() 
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() 
{
  if (Serial.available() > 0) 
  {
    i = Serial.read();
    Serial.print("I received: ");
    i = i - 48;
    Serial.println(i);
    for (j = 0 ; j < i; j++)
    {
      digitalWrite(led, HIGH);
      delay(250);
      Serial.println(j);
      digitalWrite(led, LOW);
      delay(250);
    }
  }
}


