void setup() {
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);

}

void loop() {
  
  for(int x=7;x<12;x++){
    digitalWrite(x,HIGH);
    delay(1000);
    digitalWrite(x,LOW);
  }
  for(int x=11;x>6;x--){
    digitalWrite(x,HIGH);
    delay(1000);
    digitalWrite(x,LOW);
  }

}
