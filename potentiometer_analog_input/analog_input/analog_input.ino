int analogVal;
const int ldrPin = A0;

void setup() {
  Serial.begin (9600);
}

void loop() {
  analogVal = analogRead(ldrPin);
  Serial.println(analogVal);
  delay(100);
}
