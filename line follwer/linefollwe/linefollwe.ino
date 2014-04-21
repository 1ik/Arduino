
byte leftMotor;
byte rightMotor;
void setup() {
  Serial.begin(9600);
  rightMotor = 3;
  leftMotor = 5;
}

void loop() {
  
int array[5];
for(int i=0;i<5;i++)
{
  array[i]=analogRead(i);
}
int minIndex =0;
int minValue = array[0];
for(int i=1;i<5;i++)
{
  
  if(array[i]<minValue)
  {
    minValue=array[i];
    minIndex = i;
  }
}
detectCommand(minIndex);
delay(1000); 
}

void detectCommand(int index)
{
  if(index==2)
  {
      Serial.println("forward");
      forward();
  }else if(index==0 || index==1)
  {
      Serial.println("right");
      right();
  }else
  {
      Serial.println("left");
      left();
  }
}

void forward()
{
    analogWrite(leftMotor, 255);
    analogWrite(rightMotor, 255);  
}

void left()
{
    analogWrite(leftMotor, 0);
    analogWrite(rightMotor, 255);
}

void right()
{
    analogWrite(leftMotor, 255);
    analogWrite(rightMotor, 0);
}
