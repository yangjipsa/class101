int pinF = 6;
int pinR = 5;

void setup()
{
  pinMode(pinF, OUTPUT);
  pinMode(pinR, OUTPUT);
}

void loop()
{
  // Forward 
  analogWrite(pinF, 100);
  digitalWRite(pinR, LOW);
  delay(1000);

  // Stop
  digitalWrite(pinF, LOW);
  digitalWrite(pinR, LOW);
  delay(1000);

  // Backward
  digitalWrite(pinF, LOW);
  analogWrite(pinR, 200);
  delay(1000);
  
  // Break
  digitalWrite(pinF, HIGH);
  digitalWrite(pinR, HIGH);
  delay(1000);
}
