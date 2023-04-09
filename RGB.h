#include "Arduino.h"
class RGB
{
  public:
  	int pin;
    RGB(int pin_);
    void on(int val);
    void off();
  private:
    int _pin;
};