#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include <WProgram.h>
#endif


int RPWM1=2;
int LPWM1=3;
int RPWM2=4;
int LPWM2=5;
int RPWM3=6;
int LPWM3=7;
int RPWM4=8;                          
int LPWM4=9;

// timer 0
int L_EN1=22;
int R_EN1=23;
int L_EN2=24;
int R_EN2=25;
int L_EN3=26;
int R_EN3=27;
int L_EN4=28;
int R_EN4=29;







void setup() {

  // put your setup code here, to run once:
  for(int i=5;i<10;i++){
   pinMode(i,OUTPUT);
  }
  for(int i=22;i<30;i++){
   pinMode(i,OUTPUT);
  }
   for(int i=5;i<10;i++){
   digitalWrite(i,LOW);
  }
  for(int i=22;i<30;i++){
   digitalWrite(i,LOW);
  }
  
  delay(1000);

  digitalWrite(R_EN1,HIGH);
  digitalWrite(L_EN1,HIGH);
  digitalWrite(R_EN2,HIGH);
  digitalWrite(L_EN2,HIGH);
  digitalWrite(R_EN3,HIGH);
  digitalWrite(L_EN3,HIGH);
  digitalWrite(R_EN4,HIGH);
  digitalWrite(L_EN4,HIGH);
  
  analogWrite(RPWM1,200);
  analogWrite(RPWM2,75);
  analogWrite(LPWM3,200);
  analogWrite(LPWM4,200);
  delay(2000);
  analogWrite(RPWM1,0);
  analogWrite(RPWM2,0);
  analogWrite(LPWM3,0);
  analogWrite(LPWM4,0);
  
  
  }

  //ILERI


void loop() {

  
  // put your main code here, to run repeatedly:
 
}
