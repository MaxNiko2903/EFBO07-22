#include "on_off.h"
on_off::on_off(int pin){
  pinMode(pin,OUTPUT);
  _pin = pin;
}
void on_off::on()
{  
  digitalWrite(_pin,HIGH);

}
void on_off::off()
{  
  digitalWrite(_pin,LOW);
}