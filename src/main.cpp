#include <Arduino.h>
#include "Port_rj.h"

const int tmp = 1500 ;
Port portEnvoi(32, 33, 25, 26, 27, 14, 12, 13);
Port portRecevoir(19, 18, 5, 17, 16, 4, 2, 15);

void setup(){

  Serial.begin(9600);
  signalEnvoi(32, 33, 25, 26, 27, 14, 12, 13);
  signalRecevoi (19, 18, 5, 17, 16, 4, 2, 15);

}

void loop(){

  statuHigh(32, 33, 25, 26, 27, 14, 12, 13);
  afficheResultat();
  delay(tmp);
}






