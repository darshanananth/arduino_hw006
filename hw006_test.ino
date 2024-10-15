void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(12));
  delay(1000);
}
