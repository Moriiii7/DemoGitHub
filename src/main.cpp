#include <Arduino.h>

#define LED_DELAY_MS 500

void setup() {
  // put your setup code here, to run once:
  Serial.begin(112500);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.println("NO ME DEJA PUSHEAR");
  Serial.println("NO ME DEJA PUSHEAR");
  Serial.println("NO ME DEJA PUSHEAR");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  delay(LED_DELAY_MS);
  digitalWrite(LED_BUILTIN, LOW);
  delay(LED_DELAY_MS);
  Serial.print(LED_DELAY_MS);
}