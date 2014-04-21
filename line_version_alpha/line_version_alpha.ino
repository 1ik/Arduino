byte led_left;
byte led_right;
byte leftMotor;
byte rightMotor;

void setup() {
  Serial.begin(9600);
  rightMotor = 3;
  leftMotor = 5;
  led_left=22;
  led_right=24;
}

void loop() {

  int sensor_read[5];
  int sensor[5];

  for (int i=0; i<5; i++)                                 //READING into an array
  {
    sensor_read[i]=analogRead(i);
  }

  //int max=800;
  //int min=500;

  for (int i=0; i<5; i++)                                 //REPLACING WITH 0  &  1
  {
    if(sensor_read[i]>750)
    {
      sensor[i]=0;
    } 
    else {
      sensor[i]=1;
    }
  }

detectCommand(sensor);
debug(sensor);
  delay(10); 
}
void debug( int sensor[])
{
  for( int i; i<5; i++)
  {
    Serial.print(sensor[i]);
  }
  Serial.println(" ");
}

void detectCommand(int sensor[])
{
   if((sensor[0]==1) && (sensor[1]==0) && (sensor[2]==0) && (sensor[3]==0) && (sensor[4]==0))
  {
    Serial.println("hard left");
    h_left();
    delay(100);
    forward();
    delay(10);
  }
  else if((sensor[0]==0) && (sensor[1]==0) && (sensor[2]==0) && (sensor[3]==0) && (sensor[4]==1))
  {
    Serial.println("hard right");
    h_right();
    delay(100);
    forward();
    delay(10);
  } 
   else if(( sensor[0]==0) && (sensor[1]==0) && (sensor[2]==1) && (sensor[3]==1) && (sensor[4]==1))
  {
    Serial.println("slight_right");
    slight_right();
    delay(50);
    forward();
    delay(10);
  }
   else if((sensor[0]==0) && (sensor[1]==1) && (sensor[2]==1) && (sensor[3]==1) && (sensor[4]==0))
  {
    Serial.println("forward");
    forward();
    delay(100);
    
  } 
//    else if((sensor[0]==1) && (sensor[1]==1) && (sensor[2]==1) && (sensor[3]==1) && (sensor[4]==1))
//  {
//    Serial.println("forward");
//    forward();
//    delay(50);
//  } 
  else if(( sensor[0]==1) && (sensor[1]==1) && (sensor[2]==1) && (sensor[3]==0) && (sensor[4]==0 ))
  {
    Serial.println("slight_left");
    slight_left();
    delay(50);
    forward();
    delay(10);
  }
 
  else if((sensor[0]==0) && (sensor[1]==1) && (sensor[2]==1) && (sensor[3]==0) && (sensor[4]==0))
  {
    Serial.println("minor adjustment- left");
    m_left();
    delay(50);
  }
 else if((sensor[0]==0) && (sensor[1]==0) && (sensor[2]==1) && (sensor[3]==1) && (sensor[4]==0))
  {
    Serial.println("minor adjustment- right");
    m_right();
    delay(50);
  }
    else if(( sensor[0]==1) && (sensor[1]==1) && (sensor[2]==0) && (sensor[3]==0) && (sensor[4]==0))
  {
    Serial.println("h_left");
    h_left();
    delay(50);
    forward();
    delay(10);
  }
     else if(( sensor[0]==0) && (sensor[1]==0) && (sensor[2]==0) && (sensor[3]==1) && (sensor[4]==1))
  {
    Serial.println("h_right");
    h_right();
    delay(50);
    forward();
    delay(10);
  }
}

void forward()
{
  analogWrite(leftMotor, 255);
  analogWrite(rightMotor, 255);  
}

void h_left()
{
  analogWrite(leftMotor, 0);
  analogWrite(rightMotor, 255);

}
void slight_left()
{
  analogWrite(leftMotor, 150);
  analogWrite(rightMotor, 255);
}
void h_right()
{
  analogWrite(leftMotor, 255);
  analogWrite(rightMotor, 0);
}
void slight_right()
{
  analogWrite(leftMotor, 255);
  analogWrite(rightMotor, 150);

}
void m_left()
{
  analogWrite(leftMotor, 255);
  analogWrite(rightMotor, 130);

}
void m_right()
{
  analogWrite(leftMotor, 255);
  analogWrite(rightMotor, 130);

}

