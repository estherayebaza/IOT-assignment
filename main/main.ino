int Red=1;
int Blue=2;
int Green=3;
void setup(){
  /*pinMode(Red,OUTPUT);
  pinMode(Blue,OUTPUT);
  pinMode(Green,OUTPUT);
  */
  SETUP();
}
void loop(){
 /*
  int j=1;
  while(j<=4)
  {
    digitalWrite(Red,HIGH);
    delay(1000);
    digitalWrite(Red,LOW);
    j++;
  }*/
/*
for(int l=1;l<=5;l++){
  digitalWrite(Blue,HIGH);
delay(1000);
digitalWrite(Blue,LOW);
delay(1000);

}*/
/*for(int m=1;m<=5;m++){
  digitalWrite(Green,HIGH);
delay(1000);
digitalWrite(Green,LOW);
delay(1000);}
*/
BLUE();
DELAY();
RED();
GREEN();
  
}
