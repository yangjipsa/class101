int sw1 = 4;
int sw2 = 5;

void setup()
{
  Serial.begin(9600);
  pinMode(sw1, INPUT);
  pinMode(sw2, INPUT);
}

void loop()
{
  int val_sw1 = digitalRead(sw1);
  int val_Sw2 = digitalRead(sw2);

  Serial.print(val_sw1);
  Serial.print(" | ");
  Serial.println(val_sw2);
  delay(100);
}
