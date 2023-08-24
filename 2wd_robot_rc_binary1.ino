


byte IN1 = 8;
byte IN2 = 9;
byte IN3 = 10;
byte IN4 = 11;


byte i =0;

void setup()
{
   
    pinMode(IN1,OUTPUT);
    pinMode(IN2,OUTPUT);
    pinMode(IN3,OUTPUT);
    pinMode(IN4,OUTPUT);  
 
  
  Serial.begin(9600);
  
}

void loop()
{
  
  char x = Serial.read();
  for( i=0;i<=3  && x!=-1;i++)
  {
    digitalWrite(i+8,x&1<<i);
 
  }
 
}

// D  Right      0100
// A  Left       0001
// E  Forward    0101
// J  Backward   1010
// P  Stop       0000