// C++ code
//
int red1=12;
int red2=11;
int red3=10;
int red4=9;
int green1=6;
int green2=5;
int switch1=3;
int switch2=4;
void setup()
{
  for(int i=9;i<=12;i++){
    pinMode(i,OUTPUT);}
pinMode(green1,OUTPUT);
pinMode(green2,OUTPUT);  
pinMode(switch1,INPUT);
pinMode(switch2,INPUT);  
}  
void loop()
{
  if (digitalRead(switch1)==1)
  {
   digitalWrite(red1,1); 
   analogWrite(green1,128);  
  }
  else
  {
   digitalWrite(red1,0); 
   analogWrite(green1,0);        
  }
  if (digitalRead(switch2)==1)
  {  
   digitalWrite(red3,1); 
   analogWrite(green2,128);   
  }
  else
  {
   digitalWrite(red3,0); 
   analogWrite(green2,0); 
  }     
}