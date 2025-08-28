#include <Arduino.h>
#define led 2
#define delayTime 45000
// Cambio por comentario en PR
// Cambio por comentario en PR
void setup()
{
  Serial.begin(115200);
  pinMode(led, OUTPUT);
}

void loop()
{
  digitalWrite(led, HIGH);
  delay(delayTime);
  digitalWrite(led, LOW);
  delay(delayTime);
}
