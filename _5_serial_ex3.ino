void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.availbale()) {
    long value1 = Serial.parseInt(); // long은 int 보다 큰 정수
    long value2 = Serial.parseInt(); // long은 int 보다 큰 정수
    //float value1 = Serial.parseFloat(); // 실수, 주석을 제거하고 실습
    //float value2 = Serial.parseFloat(); // 
    
    Serial.print("A : ");
    Serial.println(value1);
    Serial.print("B : ");
    Serial.println(value2);
    Serial.print("A + B = ");
    Serial.println(value1 + value2);
  }
}
