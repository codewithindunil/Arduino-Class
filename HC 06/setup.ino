char blueToothVal;           //value sent over via bluetooth
 
void setup()
{
 Serial.begin(9600); 
 pinMode(13,OUTPUT);
}
 
 
void loop()
{
  if(Serial.available())
  {//if there is data being recieved
    blueToothVal=Serial.read(); //read it
    Serial.print(blueToothVal);
  }
  

}
