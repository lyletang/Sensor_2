// 全彩灯盘
// This sample code use Digital Pin 3,5,6 and GND 
// Author: Jiahui Tang
// Date: 2016-12-27

int B = 3; //Connect Blue led to Digital pin 3
int R = 5; //Connect Red led to Digital pin 5
int G = 6; //Connect Green led to Digital pin 6

//Connect the 5V pin of light disc to GND Pin of Arduino


void setup()
{
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop()
{
  analogWrite(B,random(255));  
  analogWrite(R,random(255));  
  analogWrite(G,random(255));
  delay(80);  
}
