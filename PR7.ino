#include "LED.h"
#include "Datchik.h"
#include "button.h"
LED green(5);
LED yellow(4);
LED red(6);
Datchik voda_fake(0);
Datchik voda_norm(1);
button btn1(7);
int count = 0;
void setup() { 
}

void loop() {
  if (btn1.click())
  { 
    count += 1;
    Serial.println(count);
  }
  else if(count % 2 != 0)
  {
    if(voda_fake.get_z_p() < 33)
    {
      red.on();
      yellow.off();
      green.off();
    }
    else if( voda_fake.get_z_p() < 66)
    {
      red.off();
      yellow.on();
      green.off();
    }
    else
    {
      yellow.off();
      green.on();
    }    
  }
  else if(count % 2 == 0)
  {
    if(voda_norm.get_z_r() < 500)
    {
      red.on();
      yellow.off();
      green.off();
    }
    else if( voda_norm.get_z_r() < 600)
    {
      red.off();
      yellow.on();
      green.off();
    }
    else
    {
      yellow.off();
      green.on();
    }       
  }
}
