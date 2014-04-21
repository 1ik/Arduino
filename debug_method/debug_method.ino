byte led_L=22;
byte led_R=24;
byte leftMotor=5;
byte rightMotor=2;
byte L1=6;
byte L2=7;
byte R1=4;
byte R2=3;

void setup() {
  Serial.begin(9600);
 pinMode( rightMotor , OUTPUT);     
 pinMode( leftMotor  , OUTPUT);     
 pinMode( L1         , OUTPUT);     
 pinMode( L2         , OUTPUT);     
 pinMode( R1         , OUTPUT);     
 pinMode( R2         , OUTPUT);     
 pinMode( led_L      , OUTPUT);     
 pinMode( led_R      , OUTPUT);     
}
  
 void loop() {
   

  digitalWrite(L1, HIGH);
  digitalWrite(L2,LOW);
  digitalWrite(R1, HIGH);
  digitalWrite(R2, LOW );
  analogWrite(leftMotor, 255);
  analogWrite(rightMotor, 255);  
  




 }
