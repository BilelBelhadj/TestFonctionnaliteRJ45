#include <Arduino.h>
#include "Port_rj.h"

const int tmp = 1500 ;
Port portEnvoi(32, 33, 25, 26, 27, 14, 12, 13);
Port portRecevoir(19, 18, 5, 17, 16, 4, 2, 15);

void setup(){

  Serial.begin(9600);
  signalEnvoi(portEnvoi.orangeBlanc, portEnvoi.orange, portEnvoi.vertBlanc, portEnvoi.vert, portEnvoi.bleuBlanc, portEnvoi.bleu, portEnvoi.maronBlanc, portEnvoi.maron);
  signalRecevoi (portRecevoir.orangeBlanc, portRecevoir.orange, portRecevoir.vertBlanc, portRecevoir.vert, portRecevoir.bleuBlanc, portRecevoir.bleu, portRecevoir.maronBlanc, portRecevoir.maron);

}

void loop(){

  statuHigh(portEnvoi.orangeBlanc, portEnvoi.orange, portEnvoi.vertBlanc, portEnvoi.vert, portEnvoi.bleuBlanc, portEnvoi.bleu, portEnvoi.maronBlanc, portEnvoi.maron);
    

  if (testSignalRecu(portRecevoir.orangeBlanc, portRecevoir.orange, portRecevoir.vertBlanc, portRecevoir.vert, portRecevoir.bleuBlanc, portRecevoir.bleu, portRecevoir.maronBlanc, portRecevoir.maron) == true){
    Serial.println("le cable fonctionne tres bien");
  }else{
    Serial.println("le cable ne fonctionne pas");
  }
      
    
  delay(tmp);
}






