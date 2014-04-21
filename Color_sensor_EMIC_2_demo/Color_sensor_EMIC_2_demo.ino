/*  TCS3200 COLOR SENSOR & EMIC 2 TEXT-TO-SPEECH MODULE DEMO
    Author: Markus Bindhammer
    Date: 4-28-2013
*/
//**************************************** LIBRARIES ***************************************
#include <Average.h> // See http://playground.arduino.cc/Main/Average

//************************************ GLOBAL VARIABLES ************************************
char EMIC;
int S0=13,S1=7,S2=6,S3=5, LED=12; 
int OUT=2;

void setup() {
  TCS3200_Setup();
  delay(100);
}

void loop() {
  Serial.print(ReadColor()); 
  delay(500);
}

//********************************* FUNCTIONS COLOR SENSOR ********************************* 
void TCS3200_Setup() {
  pinMode(S0,OUTPUT); 
  pinMode(S1,OUTPUT); 
  pinMode(S2,OUTPUT); 
  pinMode(S3,OUTPUT); 
  pinMode(LED,OUTPUT); 
  pinMode(OUT,INPUT); 
}

void TCS3200_On() {
  digitalWrite(LED,HIGH); // Switch LED on
  digitalWrite(S0,HIGH); //Output frequency scaling (100%)
  digitalWrite(S1,HIGH);
  delay(5);
}

void TCS3200_Off() {
  digitalWrite(LED,LOW); // Switch LED off
  digitalWrite(S0,LOW); //Power off sensor
  digitalWrite(S1,LOW);
}

void NoFilter() { //Select no filter
  digitalWrite(S2,HIGH); 
  digitalWrite(S3,LOW);
  delay(5);
}

void RedFilter() { //Select red filter
  digitalWrite(S2,LOW); 
  digitalWrite(S3,LOW);
  delay(5);
}

void GreenFilter() { //Select green filter
  digitalWrite(S2,HIGH); 
  digitalWrite(S3,HIGH);
  delay(5);
}

void BlueFilter() { //Select blue filter
  digitalWrite(S2,LOW); 
  digitalWrite(S3,HIGH);
  delay(5);
}

char* ReadColor() { //0=white, 1=orange, 2=yellow, 3=red, 4=green, 5=blue, 6=object out of range
  float FrequencyClear,FrequencyRed,FrequencyGreen,FrequencyBlue;
  int PercentageRed,PercentageGreen,PercentageBlue;
  TCS3200_On();
  NoFilter();
  FrequencyClear=500.0/pulseIn(OUT,LOW,10000); // Frequency in kHz
  RedFilter();
  FrequencyRed=500.0/pulseIn(OUT,LOW,10000); // Frequency in kHz
  GreenFilter();
  FrequencyGreen=500.0/pulseIn(OUT,LOW,10000); // Frequency in kHz
  BlueFilter();
  FrequencyBlue=500.0/pulseIn(OUT,LOW,10000); // Frequency in kHz
  TCS3200_Off();
  //Output frequency blue, green, red percentage represents the ratio of the 
  //respective color to the Clear channel absolute value:
  PercentageRed=int((FrequencyRed/FrequencyClear)*100.0);
  PercentageGreen=int((FrequencyGreen/FrequencyClear)*100.0);
  PercentageBlue=int((FrequencyBlue/FrequencyClear)*100.0);
  //Learned blue, green, red percentage values of different colors
  int SavedColorRed[] = {28,55,42,50,19,13}; 
  int SavedColorGreen[] = {30,25,36,22,45,26};
  int SavedColorBlue[] = {45,20,20,30,36,58};
  char* GetColor[] = {"white","orange","yellow","red","green","blue",""};
  int ColorArray[3];
  int i_color; 
  int ClosestColor;
  int MaxDiff;
  int MinDiff=300;
  if(FrequencyClear<1.5)ClosestColor=6; // Object out of range
  else {
    for (i_color=0; i_color<6; i_color++) { //Find closest color
      ColorArray[0]=abs(SavedColorRed[i_color]-PercentageRed);
      ColorArray[1]=abs(SavedColorGreen[i_color]-PercentageGreen);
      ColorArray[2]=abs(SavedColorBlue[i_color]-PercentageBlue);
      MaxDiff=(ColorArray,3);
      if (MaxDiff<MinDiff) {
        MinDiff=MaxDiff;
        ClosestColor=i_color;
       }
     }
   }
   return GetColor[ClosestColor];  
} 

