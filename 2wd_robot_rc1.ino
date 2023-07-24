// C++ code
//
int EN1 = 3;
int EN2 = 5;

int IN1 = 8;
int IN2 = 9;
int IN3 = 10;
int IN4 = 11;





void setup()
{
    pinMode(EN1,OUTPUT);
    pinMode(EN2,OUTPUT);
    pinMode(IN1,OUTPUT);
    pinMode(IN2,OUTPUT);
    pinMode(IN3,OUTPUT);
    pinMode(IN4,OUTPUT);
  
  Serial.begin(9600);
  
}


void loop()
{
  if(Serial.available())
  {
    char direction = Serial.read();
    
    switch(direction)
    {
    
  case 'f' :
  
analogWrite(EN1,255);  
analogWrite(EN2,255);  
digitalWrite(IN1,HIGH);  
digitalWrite(IN2,LOW);  
digitalWrite(IN3,HIGH);  
digitalWrite(IN4,LOW);
  
  delay(1000);
  
break;
    
  
      case 'b' :
      
analogWrite(EN1,255);  
analogWrite(EN2,255);  
digitalWrite(IN1,LOW);  
digitalWrite(IN2,HIGH);  
digitalWrite(IN3,LOW);  
digitalWrite(IN4,HIGH);
  
  delay(1000);

  break;
      
  
      case 'r' :
      
analogWrite(EN1,0);  
analogWrite(EN2,255);  
digitalWrite(IN1,LOW);  
digitalWrite(IN2,LOW);  
digitalWrite(IN3,HIGH);  
digitalWrite(IN4,LOW);
  
  delay(1000);

 break;
      
    
      case 'l' :
      
analogWrite(EN1,255);  
analogWrite(EN2,0);  
digitalWrite(IN1,HIGH);  
digitalWrite(IN2,LOW);  
digitalWrite(IN3,LOW);  
digitalWrite(IN4,LOW);
  
  delay(1000);
break;
      
  
      
      case 's' :
      
analogWrite(EN1,0);  
analogWrite(EN2,0);  
digitalWrite(IN1,LOW);  
digitalWrite(IN2,LOW);  
digitalWrite(IN3,LOW);  
digitalWrite(IN4,LOW);
  
  delay(1000);
  
      break;
    }
  
  }
      
      
      
      
  

}
