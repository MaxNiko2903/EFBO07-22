#include "Datchik.h"
Datchik::Datchik(int pin)
{
  pinMode(pin,INPUT);
  _pin = pin;
  digitalWrite(pin,LOW);
}
int Datchik::get_z_p()
{
  digitalWrite(_pin,HIGH);  
  int val = analogRead(_pin);
  val = map(val, 0, 1023, 0, 100);
  val = constrain(val, 0, 100);
  digitalWrite(_pin,LOW);
  return val;  
}
int Datchik::get_z_r()
{
  int val = analogRead(_pin);
  return val;  
}