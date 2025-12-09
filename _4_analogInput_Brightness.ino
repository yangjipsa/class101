//Analog Input [1]
int Brightness = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int valBrightness = analogRead(Brightness);
  Serial.println(valBrightness);
  delay(100);
}
