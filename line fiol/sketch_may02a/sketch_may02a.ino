  
  int motor1_a = 0;
  int motor1_b=1;
  int motor_speed=4;
  
  // the setup routine runs once when you press reset:
  void setup() {                
    // initialize the digital pin as an output.
    pinMode(motor1_a, OUTPUT);
    pinMode(motor1_b, OUTPUT);
    pinMode(motor_speed, OUTPUT)  ;
  }

  // the loop routine runs over and over again forever:
  void loop() {
    digitalWrite(motor_speed, HIGH);
    digitalWrite(motor1_a, HIGH);
    digitalWrite(motor1_b, LOW);  // turn the LED on (HIGH is the voltage level)
    delay(10000);               // wait for a second
    digitalWrite(motor1_a, LOW);
    digitalWrite(motor1_b, HIGH);  
    delay(10000);               // wait for a second
  }
