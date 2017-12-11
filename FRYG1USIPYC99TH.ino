#include<EEPROM.h>
void setup() {
  // put your setup code here, to run once:
for(int j=0;j<4;j++)
  EEPROM.write(j, j+49);
}

void loop() {
  // put your main code here, to run repeatedly:

}
