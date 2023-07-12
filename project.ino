int NPNSensor=2;//connect ir sensor to arduino pin 2
int LED=12;//connect Led to arduino pin 12
int BUZZER=13;//connect to arduino pin 13
void setup()
{
  pinMode (NPNSensor,INPUT);//sensor pin INPUT
  pinMode (LED, OUTPUT);//Led pin OUTPUT
  pinMode (BUZZER,OUTPUT);//Buzzer pin OUTPUT
}
void loop()
{
  int statusSensor = digitalRead (NPNSensor);
  if(statusSensor == 1)
  {
   digitalWrite(LED, LOW);//LED LOW
   digitalWrite(BUZZER,LOW);//BUZZER LOW
  }
  else
   {
    digitalWrite(LED,HIGH);//LED High
    digitalWrite(BUZZER,HIGH);//BUZZER High
   }
} 
