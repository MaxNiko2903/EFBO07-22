#include "Arduino.h"
class Svet
{
  public:
    Svet(int pin);
    int get_z();
  private:
    int _pin;
};