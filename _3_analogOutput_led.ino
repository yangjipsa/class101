int led1 = 5;
int led2 = 6;

void setup()
{

}

void loop()
{
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  delay(1000);

  analogWrite(led1, 80);
  analogWrite(led2, 80);
  delay(1000);

  analogWrite(led1, 150);
  analogWrite(led2, 150);
  delay(1000);

  analogWrite(led1, 255);
  analogWrite(led2, 255);
  delay(1000);
}
