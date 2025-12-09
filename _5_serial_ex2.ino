void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("PRINT");
  delay(1000);
  Serial.println("PRINTln");
  delay(1000);
}
