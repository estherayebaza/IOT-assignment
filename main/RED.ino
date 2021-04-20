void RED(){
 int j=1;
  while(j<=4)
  {
    digitalWrite(Red,HIGH);
    delay(1000);
    digitalWrite(Red,LOW);
    j++;
  }
}
