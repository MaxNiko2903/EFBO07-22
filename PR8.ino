#include "RGB.h"
#include "Svet.h"
#include "button.h"
RGB RED(6);
RGB GRN(5);
RGB BLU(3);
Svet VAL(0);
button btn_w(8);
int count = 1;
void setup() {
  Serial.begin(9600);
  pinMode(9, INPUT);
  digitalWrite(9, HIGH);
}

void loop() {
  while(count <= 3)
  {
    if (btn_w.click())
    { 
      count += 1;
    }
    else if(count == 1)
    {
      RED.on(VAL.get_z());    
    }
    else if(count == 2)
    {
      GRN.on(VAL.get_z());    
    }
    else
    {
      BLU.on(VAL.get_z());    
    }
  }
  count = 1;
  delay(100);
  
}