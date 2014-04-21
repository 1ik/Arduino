
byte leftMotor=5;
byte rightMotor=2;
byte L1=4;
byte L2=3;
byte R1=6;
byte R2=7;

void setup() {
  Serial.begin(9600);
 pinMode( rightMotor , OUTPUT);     
 pinMode( leftMotor  , OUTPUT);     
 pinMode( L1         , OUTPUT);     
 pinMode( L2         , OUTPUT);     
 pinMode( R1         , OUTPUT);     
 pinMode( R2         , OUTPUT);     
 
}

void loop() {

  forward();
  
}

void forward()
{ 
  
  digitalWrite(L1, HIGH);
  digitalWrite(L2,LOW);
  digitalWrite(R1, HIGH);
  digitalWrite(R2, LOW );
  analogWrite(leftMotor, 255);
  analogWrite(rightMotor, 255);  
  


}
void reverse()
{ 
  
  digitalWrite(L1, LOW);
  digitalWrite(L2,HIGH);
  digitalWrite(R1, LOW);
  digitalWrite(R2, HIGH );
  analogWrite(leftMotor, 255);
  analogWrite(rightMotor, 255);  
}

void r_left()
{  
  digitalWrite(L1, LOW);
  digitalWrite(L2,HIGH);
  digitalWrite(R1, HIGH);
  digitalWrite(R2, LOW );
  analogWrite(leftMotor, 180);
  analogWrite(rightMotor, 245);  
  
}

void slight_left()

{  
  digitalWrite(L1, HIGH);
  digitalWrite(L2,LOW);
  digitalWrite(R1, HIGH);
  digitalWrite(R2, LOW );
  analogWrite(leftMotor, 80);
  analogWrite(rightMotor, 255);  
  
}

void r_right()

{  
  digitalWrite(L1, HIGH);
  digitalWrite(L2,LOW);
  digitalWrite(R1, LOW) ;
  digitalWrite(R2, HIGH );
  analogWrite(leftMotor, 245);
  analogWrite(rightMotor, 70);  
 
}

void slight_right()
{
  digitalWrite(L1, HIGH);
  digitalWrite(L2,LOW);
  digitalWrite(R1, HIGH);
  digitalWrite(R2, LOW );
  analogWrite(leftMotor, 255);
  analogWrite(rightMotor, 80);  
 
}
void m_left()
{  
  digitalWrite(L1, HIGH);
  digitalWrite(L2,LOW);
  digitalWrite(R1, HIGH);
  digitalWrite(R2, LOW );
  analogWrite(leftMotor, 180);
  analogWrite(rightMotor, 255);  
    
}
void m_right()
{  
  digitalWrite(L1, HIGH);
  digitalWrite(L2,LOW);
  digitalWrite(R1, HIGH);
  digitalWrite(R2, LOW );
  analogWrite(leftMotor, 255);
  analogWrite(rightMotor, 180);  
  
}
void h_left()
{  
  digitalWrite(L1, HIGH);
  digitalWrite(L2, LOW );
  digitalWrite(R1, HIGH);
  digitalWrite(R2, LOW );
  digitalWrite(leftMotor, 80);
  digitalWrite(rightMotor, 255);  
  

}

void h_right()

{  
  digitalWrite(L1, HIGH);
  digitalWrite(L2,LOW);
  digitalWrite(R1, HIGH) ;
  digitalWrite(R2, LOW );
  digitalWrite(leftMotor, 255);
  digitalWrite(rightMotor, 80);  
   
  
}
