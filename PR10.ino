#include "button.h"
#include "on_off.h"
on_off rele(2);
button btn(3);
int count = 1;
void setup() {

}
void loop() {  
  while(count <= 2)
    {
      if (btn.click())
      { 
        count += 1;
      }
      else if(count == 1)
      {
        rele.off();         
      }
            
      else
      {
        rele.on();
      }
    }
    count = 1;
    delay(100);
}