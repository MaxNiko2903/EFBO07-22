#include "Svet.h"
Svet::Svet(int pin)
{
  pinMode(pin,INPUT);
  _pin = pin;
  digitalWrite(pin,LOW);
}
int Svet::get_z()
{
  digitalWrite(_pin,HIGH);  
  int val = analogRead(_pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  digitalWrite(_pin,LOW);
  return val;  
}