#include <Servo.h> 
#include "Pot.h"
int servoPin = 3;
Servo Servo1;
Pot VAL(0);
void setup() {
  Servo1.attach(servoPin);
}

void loop(){

  Servo1.write(VAL.get_z());
}