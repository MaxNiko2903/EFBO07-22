#include "Pot.h"
Pot::Pot(int pin)
{
  pinMode(pin,INPUT);
  _pin = pin;
  digitalWrite(pin,LOW);
}
int Pot::get_z()
{
  digitalWrite(_pin,HIGH);  
  int val = analogRead(_pin);
  val = map(val, 0, 1023, 0, 180);
  val = constrain(val, 0, 180);
  digitalWrite(_pin,LOW);
  return val;  
}