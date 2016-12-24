#include "Arduino.h"

#ifndef PIN_BUILTIN_LED
#define PIN_BUILTIN_LED 13
#endif

void setup() {
  pinMode(PIN_BUILTIN_LED, OUTPUT);
}

void loop() {
  digitalWrite(PIN_BUILTIN_LED, HIGH);
  delay(1000);
  digitalWrite(PIN_BUILTIN_LED, LOW);
  delay(1000);
}
