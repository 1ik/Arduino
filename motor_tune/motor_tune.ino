
int left = 3;
int right= 5;


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(left, OUTPUT);
  pinMode(right, OUTPUT);  
}

// the loop routine runs over and over again forever:
void loop() {
  analogWrite(left,245);
  analogWrite(right, 255); 
  delay(1000);               // wait for a second
  analogWrite(left, 0 );
  analogWrite(right, 0); //rn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
