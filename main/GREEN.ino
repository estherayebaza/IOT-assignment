void GREEN(){
  int m=1;
  while(m<=3){
    
   digitalWrite(Green,HIGH);
    delay(1000);
    digitalWrite(Green,LOW);
    m++;
  }
}
