//Analog Input [2]
int ir = 0;

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
