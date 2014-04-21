int lv0=30;
int lv1=31;               //ground
int lv2=32;
int lv3=33;


int a0=22;
int a1=23;
int a2=24;                //colum A
int a3=25;


int b0=6;
int b1=7;
int b2=8;                //column b
int b3=9;                  


int c0=10;
int c1=11;
int c2=12;               //column c
int c3=13;

 
int d0=2;
int d1=3;
int d2=4;                //column D
int d3=5;                  

int j=50;                //extras

void setup()
{
  pinMode( a0  , OUTPUT);
  pinMode( a1  , OUTPUT);
  pinMode( a2  , OUTPUT);
  pinMode( a3  , OUTPUT);
  pinMode( b0  , OUTPUT);
  pinMode( b1  , OUTPUT);
  pinMode( b2  , OUTPUT);
  pinMode( b3  , OUTPUT);
  pinMode( c0  , OUTPUT);
  pinMode( c1  , OUTPUT);
  pinMode( c2  , OUTPUT);
  pinMode( c3  , OUTPUT);
  pinMode( d0  , OUTPUT);
  pinMode( d1  , OUTPUT);
  pinMode( d2  , OUTPUT);
  pinMode( d3  , OUTPUT);
  pinMode( lv0 , OUTPUT);
  pinMode( lv1 , OUTPUT);
  pinMode( lv2 , OUTPUT);
  pinMode( lv3  , OUTPUT);

}


void loop()
{
  
  //led_all();
 f1();
  delay(400);
  f2();
  delay(400);
  f3();
  delay(400);                                      //up to down
  f4();
  delay(400); 
  f4();
  delay(400);
  f3();
  delay(400);                                      //up to down
  f2();
  delay(400); 
  f1();
  delay(400);
  
  
  
//  d_1();
//  delay(500);  
//  d_2();
//  delay(500);  
//  d_3();
//  delay(500);  
//  d_8();
//  delay(500);                                     //cubes
//  d_6();
//  delay(500);  
//  d_5();
//  delay(500);  
//  d_7();
//  delay(500);  
//  d_4();
//  delay(500);    
//  off();
//  delay(400);
// 
  
 }

  void led_all()
 {
  digitalWrite( a0  , HIGH);
  digitalWrite( a1  , HIGH);
  digitalWrite( a2  , HIGH);
  digitalWrite( a3  , HIGH);
  digitalWrite( b0  , HIGH);
  digitalWrite( b1  , HIGH);
  digitalWrite( b2  , HIGH);
  digitalWrite( b3  , HIGH);
  digitalWrite( c0  , HIGH);
  digitalWrite( c1  , HIGH);
  digitalWrite( c2  , HIGH);
  digitalWrite( c3  , HIGH);
  digitalWrite( d0  , HIGH);
  digitalWrite( d1  , HIGH);
  digitalWrite( d2  , HIGH);
  digitalWrite( d3  , HIGH);
  digitalWrite( lv0 , LOW);
  digitalWrite( lv1 , LOW);
  digitalWrite( lv2 , LOW);
  digitalWrite( lv3 , LOW);
 }
  
  void f1()
  {
  digitalWrite( a0  , HIGH);
  digitalWrite( a1  , HIGH);
  digitalWrite( a2  , HIGH);
  digitalWrite( a3  , HIGH);
  digitalWrite( b0  , HIGH);
  digitalWrite( b1  , HIGH);
  digitalWrite( b2  , HIGH);
  digitalWrite( b3  , HIGH);
  digitalWrite( c0  , HIGH);
  digitalWrite( c1  , HIGH);
  digitalWrite( c2  , HIGH);
  digitalWrite( c3  , HIGH);
  digitalWrite( d0  , HIGH);
  digitalWrite( d1  , HIGH);
  digitalWrite( d2  , HIGH);
  digitalWrite( d3  , HIGH);
  digitalWrite( lv0 , HIGH);
  digitalWrite( lv1 , HIGH);
  digitalWrite( lv2 , HIGH);
  digitalWrite( lv3 , LOW);
  delay(1);
  }
    void f2()
  {
  digitalWrite( a0  , HIGH);
  digitalWrite( a1  , HIGH);
  digitalWrite( a2  , HIGH);
  digitalWrite( a3  , HIGH);
  digitalWrite( b0  , HIGH);
  digitalWrite( b1  , HIGH);
  digitalWrite( b2  , HIGH);
  digitalWrite( b3  , HIGH);
  digitalWrite( c0  , HIGH);
  digitalWrite( c1  , HIGH);
  digitalWrite( c2  , HIGH);
  digitalWrite( c3  , HIGH);
  digitalWrite( d0  , HIGH);
  digitalWrite( d1  , HIGH);
  digitalWrite( d2  , HIGH);
  digitalWrite( d3  , HIGH);
  digitalWrite( lv0 , HIGH);
  digitalWrite( lv1 , HIGH);
  digitalWrite( lv2 , LOW);
  digitalWrite( lv3 , HIGH);
  delay(1);
  }
    void f3()
  {
  digitalWrite( a0  , HIGH);
  digitalWrite( a1  , HIGH);
  digitalWrite( a2  , HIGH);
  digitalWrite( a3  , HIGH);
  digitalWrite( b0  , HIGH);
  digitalWrite( b1  , HIGH);
  digitalWrite( b2  , HIGH);
  digitalWrite( b3  , HIGH);
  digitalWrite( c0  , HIGH);
  digitalWrite( c1  , HIGH);
  digitalWrite( c2  , HIGH);
  digitalWrite( c3  , HIGH);
  digitalWrite( d0  , HIGH);
  digitalWrite( d1  , HIGH);
  digitalWrite( d2  , HIGH);
  digitalWrite( d3  , HIGH);
  digitalWrite( lv0 , HIGH);
  digitalWrite( lv1 , LOW);
  digitalWrite( lv2 , HIGH);
  digitalWrite( lv3 , HIGH);
  delay(1);
  }
    void f4()
  {
  digitalWrite( a0  , HIGH);
  digitalWrite( a1  , HIGH);
  digitalWrite( a2  , HIGH);
  digitalWrite( a3  , HIGH);
  digitalWrite( b0  , HIGH);
  digitalWrite( b1  , HIGH);
  digitalWrite( b2  , HIGH);
  digitalWrite( b3  , HIGH);
  digitalWrite( c0  , HIGH);
  digitalWrite( c1  , HIGH);
  digitalWrite( c2  , HIGH);
  digitalWrite( c3  , HIGH);
  digitalWrite( d0  , HIGH);
  digitalWrite( d1  , HIGH);
  digitalWrite( d2  , HIGH);
  digitalWrite( d3  , HIGH);
  digitalWrite( lv0 , LOW);
  digitalWrite( lv1 , HIGH);
  digitalWrite( lv2 , HIGH);
  digitalWrite( lv3 , HIGH);
  delay(1);
  }
    void off()
  {
  digitalWrite( a0  , LOW);
  digitalWrite( a1  , LOW);
  digitalWrite( a2  , LOW);
  digitalWrite( a3  , LOW);
  digitalWrite( b0  , LOW);
  digitalWrite( b1  , LOW);
  digitalWrite( b2  , LOW);
  digitalWrite( b3  , LOW);
  digitalWrite( c0  , LOW);
  digitalWrite( c1  , LOW);
  digitalWrite( c2  , LOW);
  digitalWrite( c3  , LOW);
  digitalWrite( d0  , LOW);
  digitalWrite( d1  , LOW);
  digitalWrite( d2  , LOW);
  digitalWrite( d3  , LOW);
  digitalWrite( lv0 , HIGH);
  digitalWrite( lv1 , HIGH);
  digitalWrite( lv2 , HIGH);
  digitalWrite( lv3 , HIGH);
  delay(1);
  }
  
   void d_1()
  {
  digitalWrite( a0  , LOW);
  digitalWrite( a1  , LOW);
  digitalWrite( a2  , LOW);
  digitalWrite( a3  , LOW);
  digitalWrite( b0  , LOW);
  digitalWrite( b1  , LOW);
  digitalWrite( b2  , LOW);
  digitalWrite( b3  , LOW);
  digitalWrite( c0  , HIGH);
  digitalWrite( c1  , HIGH);
  digitalWrite( c2  , LOW);
  digitalWrite( c3  , LOW);
  digitalWrite( d0  , HIGH);
  digitalWrite( d1  , HIGH);
  digitalWrite( d2  , LOW);
  digitalWrite( d3  , LOW);
  digitalWrite( lv0 , LOW);
  digitalWrite( lv1 , LOW);
  digitalWrite( lv2 , HIGH);
  digitalWrite( lv3 , HIGH);
  delay(1);
  }
  
    void d_2()
  {
  digitalWrite( a0  , LOW);
  digitalWrite( a1  , LOW);
  digitalWrite( a2  , HIGH);
  digitalWrite( a3  , HIGH);
  digitalWrite( b0  , LOW);
  digitalWrite( b1  , LOW);
  digitalWrite( b2  , HIGH);
  digitalWrite( b3  , HIGH);
  digitalWrite( c0  , LOW);
  digitalWrite( c1  , LOW);
  digitalWrite( c2  , LOW);
  digitalWrite( c3  , LOW);
  digitalWrite( d0  , LOW);
  digitalWrite( d1  , LOW);
  digitalWrite( d2  , LOW);
  digitalWrite( d3  , LOW);
  digitalWrite( lv0 , HIGH);
  digitalWrite( lv1 , HIGH);
  digitalWrite( lv2 , LOW);
  digitalWrite( lv3 , LOW);
  delay(1);
  }
  
  void d_3()
  {
  digitalWrite( a0  , LOW);
  digitalWrite( a1  , LOW);
  digitalWrite( a2  , LOW);
  digitalWrite( a3  , LOW);
  digitalWrite( b0  , LOW);
  digitalWrite( b1  , LOW);
  digitalWrite( b2  , LOW);
  digitalWrite( b3  , LOW);
  digitalWrite( c0  , LOW);
  digitalWrite( c1  , LOW);
  digitalWrite( c2  , HIGH);
  digitalWrite( c3  , HIGH);
  digitalWrite( d0  , LOW);
  digitalWrite( d1  , LOW);
  digitalWrite( d2  , HIGH);
  digitalWrite( d3  , HIGH);
  digitalWrite( lv0 , LOW);
  digitalWrite( lv1 , LOW);
  digitalWrite( lv2 , HIGH);
  digitalWrite( lv3 , HIGH);
  delay(1);
  }
    void d_4()
  {
  digitalWrite( a0  , HIGH);
  digitalWrite( a1  , HIGH);
  digitalWrite( a2  , LOW);
  digitalWrite( a3  , LOW);
  digitalWrite( b0  , HIGH);
  digitalWrite( b1  , HIGH);
  digitalWrite( b2  , LOW);
  digitalWrite( b3  , LOW);
  digitalWrite( c0  , LOW);
  digitalWrite( c1  , LOW);
  digitalWrite( c2  , LOW);
  digitalWrite( c3  , LOW);
  digitalWrite( d0  , LOW);
  digitalWrite( d1  , LOW);
  digitalWrite( d2  , LOW);
  digitalWrite( d3  , LOW);
  digitalWrite( lv0 , HIGH);
  digitalWrite( lv1 , HIGH);
  digitalWrite( lv2 , LOW);
  digitalWrite( lv3 , LOW);
  delay(1);
  }
    void d_5()
  {
  digitalWrite( a0  , LOW);
  digitalWrite( a1  , LOW);
  digitalWrite( a2  , LOW);
  digitalWrite( a3  , LOW);
  digitalWrite( b0  , LOW);
  digitalWrite( b1  , LOW);
  digitalWrite( b2  , LOW);
  digitalWrite( b3  , LOW);
  digitalWrite( c0  , LOW);
  digitalWrite( c1  , LOW);
  digitalWrite( c2  , HIGH);
  digitalWrite( c3  , HIGH);
  digitalWrite( d0  , LOW);
  digitalWrite( d1  , LOW);
  digitalWrite( d2  , HIGH);
  digitalWrite( d3  , HIGH);
  digitalWrite( lv0 , HIGH);
  digitalWrite( lv1 , HIGH);
  digitalWrite( lv2 , LOW);
  digitalWrite( lv3 , LOW);
  delay(1);
  }
      void d_6()
  {
  digitalWrite( a0  , HIGH);
  digitalWrite( a1  , HIGH);
  digitalWrite( a2  , LOW);
  digitalWrite( a3  , LOW);
  digitalWrite( b0  , HIGH);
  digitalWrite( b1  , HIGH);
  digitalWrite( b2  , LOW);
  digitalWrite( b3  , LOW);
  digitalWrite( c0  , LOW);
  digitalWrite( c1  , LOW);
  digitalWrite( c2  , LOW);
  digitalWrite( c3  , LOW);
  digitalWrite( d0  , LOW);
  digitalWrite( d1  , LOW);
  digitalWrite( d2  , LOW);
  digitalWrite( d3  , LOW);
  digitalWrite( lv0 , LOW);
  digitalWrite( lv1 , LOW);
  digitalWrite( lv2 , HIGH);
  digitalWrite( lv3 , HIGH);
  delay(1);
  }
    void d_7()
  {
  digitalWrite( a0  , LOW);
  digitalWrite( a1  , LOW);
  digitalWrite( a2  , HIGH);
  digitalWrite( a3  , HIGH);
  digitalWrite( b0  , LOW);
  digitalWrite( b1  , LOW);
  digitalWrite( b2  , HIGH);
  digitalWrite( b3  , HIGH);
  digitalWrite( c0  , LOW);
  digitalWrite( c1  , LOW);
  digitalWrite( c2  , LOW);
  digitalWrite( c3  , LOW);
  digitalWrite( d0  , LOW);
  digitalWrite( d1  , LOW);
  digitalWrite( d2  , LOW);
  digitalWrite( d3  , LOW);
  digitalWrite( lv0 , LOW);
  digitalWrite( lv1 , LOW);
  digitalWrite( lv2 , HIGH);
  digitalWrite( lv3 , HIGH);
  delay(1);
  }  

     void d_8()
  {
  digitalWrite( a0  , HIGH);
  digitalWrite( a1  , HIGH);
  digitalWrite( a2  , LOW);
  digitalWrite( a3  , LOW);
  digitalWrite( b0  , HIGH);
  digitalWrite( b1  , HIGH);
  digitalWrite( b2  , LOW);
  digitalWrite( b3  , LOW);
  digitalWrite( c0  , LOW);
  digitalWrite( c1  , LOW);
  digitalWrite( c2  , LOW);
  digitalWrite( c3  , LOW);
  digitalWrite( d0  , LOW);
  digitalWrite( d1  , LOW);
  digitalWrite( d2  , LOW);
  digitalWrite( d3  , LOW);
  digitalWrite( lv0 , HIGH);
  digitalWrite( lv1 , HIGH);
  digitalWrite( lv2 , LOW);
  digitalWrite( lv3 , LOW);
  delay(1);
  }
  
  void all_blinker()
  {
   
  }   
      
      
      

