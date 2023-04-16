#include "Arduino.h"
class on_off
{
  public:
  	int pin;
    on_off(int pin_);
    void on();
    void off();
  private:
    int _pin;
};