#include "RGB.h"
RGB::RGB(int pin){
  pinMode(pin,OUTPUT);
  _pin = pin;
}
void RGB::on(int val)
{  
  analogWrite(_pin,val);

}
void RGB::off()
{  
  analogWrite(_pin,0);
}