//definitions

int motor_left=3 ;
int motor_right=4 ;


long sensors_average;
int sensors_sum;
int position;
long sensors[] = {0, 0, 0, 0, 0}; // Array used to store 5 readings for 5 sensors

void setup()
{ Serial.begin(9600);
}
void loop()
{ sensors_average = 0;
sensors_sum = 0;
for (int i = 0; i < 5; i++)
{sensors[i] = analogRead(i);
sensors_average += sensors[i] * i * 1000; //Calculating the weighted mean
sensors_sum += int(sensors[i]);} //Calculating sum of sensor readings
position = int(sensors_average / sensors_sum);
Serial.print(sensors_average);
Serial.print(' ');
Serial.print(sensors_sum);
Serial.print(' ');
Serial.print(position);
Serial.println();
delay(2000);
}



