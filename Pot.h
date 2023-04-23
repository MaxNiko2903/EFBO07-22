#include "Arduino.h"
class Pot
{
  public:
    Pot(int pin);
    int get_z();
  private:
    int _pin;
};