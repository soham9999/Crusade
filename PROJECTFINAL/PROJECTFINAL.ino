int slope1=0;
int slope2=0;
int ena=9;
int enb=10;
void setup() {
  // put your setup code here, to run once:

pinMode(13,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
                                       
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
{
  char data = Serial.read();
  Serial.println(data);
  if(data == '1')
  {//TURN LEFT
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    analogWrite(enb,120);
   
  }
  
  if(data == '2')
  {//TURN RIGHT
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    analogWrite(ena,120);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    
    
  
    
  }
  if(data == '3')
  {//GO STRAIGHT
  
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    analogWrite(ena,120);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    analogWrite(enb,120);
   
    
  }
  if(data == '4')
  {//STOP AND BLINK LED
  
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
   
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    
   digitalWrite(13,HIGH);
   delay(400);
    digitalWrite(13,LOW);
    delay(400);
    
  }
   if(data == '5')
  {//REVERSE ON RIGHT WHEEL 
     digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
   analogWrite(enb,120);
  }
   if(data == '6')
  {//REVERSE ON LEFT WHEEL
     digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    analogWrite(ena,120);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
   
  }
}
}
