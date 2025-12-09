void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.availbale()) {
    String str = Serial.readString();
    
    Serial.print("Input data : ");
    Serial.println(str);
  }
}
