byte EnableLeft=5;
byte EnableRight=2;
byte L1=6;
byte L2=7;
byte R1=3;
byte R2=4;
byte L_led1=52;
byte L_led2=53;
byte R_led1=30;
byte R_led2=31;
int minIndex;

void setup()
{
  Serial.begin(9600);
  pinMode( EnableLeft , OUTPUT );
  pinMode( EnableRight, OUTPUT );
  pinMode( L1         , OUTPUT );
  pinMode( L2         , OUTPUT );     
  pinMode( R1         , OUTPUT );     
  pinMode( R2         , OUTPUT );
}
void loop() 
{
  int sensor[5];
  for( int i=0; i<5 ; i++)
  {
    sensor[i]=analogRead(i);
  }
  minIndex=0;
  int minValue= sensor[0];
  
  for( int i=1; i<5; i++)
  {
     if( sensor[i]<minValue)
     {
       minIndex=i;
     }
  }
  debug();
  motorCommand(minIndex);
  delay(65 ;
}
void motorCommand(int line_pos)
{
  int panic;
  int lX;
  int rX;
  if(line_pos==0)
  {
     panic=1;
     lX=80;
     rX=185;
     Serial.println(" panic_ left ");
  }
  else if(line_pos==1)
  {
     panic=2;
     lX=165;
     rX=100;
     Serial.println(" left ");
  }
  else if(line_pos==2)
  {
     panic=2;
     lX=140;
     rX=150;
     Serial.println("forward");
  }
  else if(line_pos==3)
  {
     panic=2;
     lX=100;
     rX=165;
     Serial.println(" right ");
  }
  else if(line_pos==4)
  {
     panic=3;
     lX=180;
     rX=80;
     Serial.println("panic_right");
  }
  motorCorrection(panic , lX, rX);
}
void motorCorrection(int p,int LX ,int  RX  )
{

  if(p==1)
  {
  digitalWrite(L1, HIGH);
  digitalWrite(L2, LOW);
  digitalWrite(R1, HIGH);
  digitalWrite(R2, LOW);
  digitalWrite(L_led1, HIGH);
  digitalWrite(L_led2, LOW);
  digitalWrite(R_led1, LOW);
  digitalWrite(R_led2, LOW);
  
  }
    else if(p==2)
  {
  digitalWrite(L1, HIGH);
  digitalWrite(L2, LOW);
  digitalWrite(R1, HIGH);
  digitalWrite(R2, LOW);
  digitalWrite(L_led1, HIGH);
  digitalWrite(L_led2, LOW);
  digitalWrite(R_led1, HIGH);
  digitalWrite(R_led2, LOW);
  

  }
    else if(p==3)
  {
  digitalWrite(L1, HIGH);
  digitalWrite(L2, LOW);
  digitalWrite(R1, HIGH);
  digitalWrite(R2, LOW);
  digitalWrite(L_led1, HIGH);
  digitalWrite(L_led2, LOW);
  digitalWrite(R_led1, LOW);
  digitalWrite(R_led2, LOW);

  }
  analogWrite(EnableLeft,LX);
  analogWrite(EnableRight,RX);  
}









void debug()
{
Serial.print(analogRead(0));
Serial.print(' ');
Serial.print(analogRead(1));
Serial.print(' ');
Serial.print(analogRead(2));
Serial.print(' ');
Serial.print(analogRead(3));
Serial.print(' ');
Serial.print(analogRead(4));
Serial.println(' ');
Serial.print('             ');
Serial.print(minIndex);
Serial.println(' ');

  
  
  
}
