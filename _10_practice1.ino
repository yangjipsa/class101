int led1 = 5;
int led2 = 6;
int Brightness = A0;
int PWM_MAX = 255;

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  int valBrightness = analogRead(Brightness);
  Serial.println(valBrightness);
  delay(50);
  // Range of valBrightness : 0 ~ 1023 (1024 = 2^10)
  // Range of pwm value : 0 ~ 255      ( 256 = 2^8 )
  int valPWM = PWM_MAX - valBrightness/4; // 2^2
  analogWrite(led1, valPWM);
  analogWrite(led2, valPWM);
}
