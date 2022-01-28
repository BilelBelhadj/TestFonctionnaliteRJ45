#include "Port_rj.h"
#include <Arduino.h>

    //initialisation des port femele 2 INPUT qui va recu le signar
    void signalRecevoi(int ob, int o, int vb, int b, int bb, int v, int mb, int m){

        pinMode(ob , INPUT);
        pinMode(o  , INPUT);
        pinMode(vb, INPUT);
        pinMode(v, INPUT);
        pinMode(bb, INPUT);
        pinMode(b , INPUT);
        pinMode(mb, INPUT);
        pinMode(m, INPUT);


    }

    //initialisation des port femele 1 OUTPUT qui va envoyer le signar
    void signalEnvoi(int ob, int o, int vb, int b, int bb, int v, int mb, int m){

        pinMode(ob , OUTPUT);
        pinMode(o  , OUTPUT);
        pinMode(vb, OUTPUT);
        pinMode(v, OUTPUT);
        pinMode(bb, OUTPUT);
        pinMode(b , OUTPUT);
        pinMode(mb, OUTPUT);
        pinMode(m, OUTPUT);


    }



    //fonctionne qui teste si tous les broches de reçu fonctionne
    bool testSignalRecu(int ob, int o, int vb, int b, int bb, int v, int mb, int m){

        int etatled1Envoi, etatled2Envoi, etatled3Envoi, etatled4Envoi, etatled5Envoi, etatled6Envoi, etatled7Envoi, etatled8Envoi ;
        
        etatled1Envoi = digitalRead(ob);
        etatled2Envoi = digitalRead(o);
        etatled3Envoi = digitalRead(vb);
        etatled4Envoi = digitalRead(b);
        etatled5Envoi = digitalRead(bb);
        etatled6Envoi = digitalRead(v);
        etatled7Envoi = digitalRead(mb);
        etatled8Envoi = digitalRead(m);

        return ((etatled1Envoi == 1) && (etatled2Envoi == 1) && (etatled3Envoi == 1) && (etatled4Envoi == 1) && (etatled5Envoi == 1) && (etatled6Envoi == 1) && (etatled7Envoi == 1) && (etatled8Envoi == 1)) ;

    }

    void statuHigh (int ob, int o, int vb, int b, int bb, int v, int mb, int m){

      digitalWrite(ob, HIGH);
      digitalWrite(o, HIGH);
      digitalWrite(vb, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(bb, HIGH);
      digitalWrite(v, HIGH);
      digitalWrite(mb, HIGH);
      digitalWrite(m, HIGH);
    }

    void afficheResultat(){

      if (testSignalRecu(19, 18, 5, 17, 16, 4, 2, 15) == true){
        Serial.println("le cable fonctionne tres bien");
      }else{
        Serial.println("le cable ne fonctionne pas");
      }
      
    }






    /*code structurer
    
//declaration premier femele envoi
int led32 = 32 ;
int led33 = 33 ;
int led25 = 25 ;
int led26 = 26 ;
int led27 = 27 ;
int led14 = 14 ;
int led12 = 12 ;
int led13 = 13 ;

//declaration deuxiemme femele recevoir
int led19 = 19 ;
int led18 = 18 ;
int led5  = 5  ;
int led17 = 17 ;
int led16 = 16 ;
int led4  =  4 ;
int led2  =  2 ;
int led15 = 15 ;

//declaration variable d'etats des broches INPUT
int etatled19 = 0 ;
int etatled18 = 0 ;
int etatled5 = 0 ;
int etatled17 = 0 ;
int etatled16 = 0 ;
int etatled4 = 0 ;
int etatled2 = 0 ;
int etatled15 = 0 ;

  //declaration de variable delay
  int tmp = 1500;


void setup() {

  Serial.begin(9600);
  pinMode(led32, OUTPUT);
  pinMode(led33, OUTPUT);
  pinMode(led25, OUTPUT);
  pinMode(led26, OUTPUT);
  pinMode(led27, OUTPUT);
  pinMode(led14, OUTPUT);
  pinMode(led12, OUTPUT);
  pinMode(led13, OUTPUT);

  pinMode(led19, INPUT);
  pinMode(led18, INPUT);
  pinMode(led5, INPUT);
  pinMode(led17, INPUT);
  pinMode(led16, INPUT);
  pinMode(led4, INPUT);
  pinMode(led2, INPUT);
  pinMode(led15, INPUT);


}

void loop() {

  //premier female en mode HIGH pour livrer la tensien
  
  digitalWrite(led32, HIGH);
  digitalWrite(led33, HIGH);
  digitalWrite(led25, HIGH);
  digitalWrite(led26, HIGH);
  digitalWrite(led27, HIGH);
  digitalWrite(led14, HIGH);
  digitalWrite(led12, HIGH);
  digitalWrite(led13, HIGH);

  //tester l'existance du tension sur les broches de femele 2
  etatled19 = digitalRead(led19);
  etatled18 = digitalRead(led18);
  etatled5 = digitalRead(led5);
  etatled17 = digitalRead(led17);
  etatled16 = digitalRead(led16);
  etatled4 = digitalRead(led4);
  etatled2 = digitalRead(led2);
  etatled15 = digitalRead(led15);

  if (etatled19 == etatled18 ==  etatled5 ==  etatled17 ==  etatled16 ==  etatled4 ==  etatled2 ==  etatled15 == 1){
    Serial.println("le cable fonctionne tres bien");
  }else{
    Serial.println("le cable ne fonctionne pas");

  }

  delay(tmp);
} */
    