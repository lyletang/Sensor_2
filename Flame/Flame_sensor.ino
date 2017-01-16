// Flame sensor 
// Author: Jiahui Tang
// Date: 2017-1-16   

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);

  delay(1000);
}
