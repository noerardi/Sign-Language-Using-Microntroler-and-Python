const int flexPin1 = A0; 
const int flexpin2 = A1;
const int flexpin3 = A2;
const int flexpin4 = A3;
const int flexpin5 = A4;

void setup() 
{ 
  Serial.begin(9600);
} 

void loop() 
{ 
  int f1;
  int f2;
  int f3;
  int f4;
  int f5;
  f1 = analogRead(flexPin1);
  f2 = analogRead(flexpin2);
  f3 = analogRead(flexpin3);
  f4 = analogRead(flexpin4);
  f5 = analogRead(flexpin5);

  if((f1>240)&&(f2<180)&&(f3<170)&&(f4<260)&&(f5<180))
    {
     Serial.println("a");
  
    }
  else if((f1<210)&&(f2>235)&&(f3>210)&&(f4>255)&&(f5>200))
  {
        Serial.println("b");
  }
  else if((f1<220)&&(f2>200)&&(f3<200)&&(f4<260)&&(f5<190))
  {
        Serial.println("d");
  }
  else if((f1<220)&&(f2<170)&&(f3<170)&&(f4<260)&&(f5<180))
  {
        Serial.println("e");
  }
  else if((f1<219)&&(f2<190)&&(f3>220)&&(f4>240)&&(f5>190))
  {
        Serial.println("f");
  }
  else if((f1<240)&&(f2<190)&&(f3<190)&&(f4<255)&&(f5>205))
  {
        Serial.println("i");
  }
    else if((f1>230)&&(f2>230)&&(f3<150)&&(f4<255)&&(f5<185))
  {
        Serial.println("L");
  }
    else if((f1<245)&&(f2>250)&&(f3>230)&&(f4<270)&&(f5<185))
  {
        Serial.println("V");
  }
    else if((f1>210)&&(f2>230)&&(f3>210)&&(f4>256)&&(f5<220))
  {
        Serial.println("W");
  }
  else if((f1>200)&&(f2<220)&&(f3<250)&&(f4<270)&&(f5>220))
  {
        Serial.println("Y");
  }
  else
  {
       Serial.println("n");
  }
  
  delay(2000);
  
  
  delay(3000);
} 
