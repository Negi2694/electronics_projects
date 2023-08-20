#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  Serial.println("LED is ON");
  delay(1000);
  digitalWrite(13, LOW);
  Serial.println("LED is OFF");
  delay(1000);
}