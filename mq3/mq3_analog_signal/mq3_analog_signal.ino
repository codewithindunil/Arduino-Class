void setup() {
pinMode(A0,INPUT);
Serial.begin(9600);

}
float val; 
void loop() {
  val=analogRead(A0);
  Serial.print(val);
}
