// LED(Active LOW) : D5, D6
// Light Sensor : A0
int led1 = 5;
int led2 = 6;
int Brightness = A0;
int MAX_PWM = 255;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int valBrightness = analogRead(Brightness);
  int valPWM = MAX_PWM - valBrightness/4;
  // 주변이 밝으면 LED는 어두워지고
  // 주변이 어두워지면 LED는 밝아지는 동작
  analogWrite(led1, valPWM);
  analogWrite(led2, valPWM);
  
  delay(100);
}
