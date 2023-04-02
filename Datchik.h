#include "Arduino.h"
class Datchik
{
  public:
    Datchik(int pin);
    int get_z_p();
    int get_z_r();
  private:
    int _pin;
};