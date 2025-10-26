int ir = 1;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int valIR = analogRead(ir);
  Serial.println(valIR);
  delay(100);
}
