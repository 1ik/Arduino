int sensor_read[5];
int inertia;
int line_position;
int total_read;
void setup()
{ 
  Serial.begin(9600);
}
void loop()
{
  sense_read();
  delay(500);
}

void sense_read()
{
  total_read=0;
  inertia=0;
  for( int i=-2; i<3; i++)
  {
   sensor_read[i]=(analogRead(i)/28);
   Serial.print(sensor_read[i]);
   Serial.print("||");
   total_read +=sensor_read[i];
   inertia += sensor_read[i]*i;
   line_position = (inertia*100)/total_read;
  }
    Serial.print("---->");
    Serial.print(line_position);  
    Serial.println(" ");  
}

