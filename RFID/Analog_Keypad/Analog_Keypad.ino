#include <elapsedMillis.h>

elapsedMillis keypadMillis;

#define keypadInput A0

unsigned long keypadInterval = 1000;
String button;

void setup() 
{
  Serial.begin (9600);
  pinMode (keypadInput, INPUT_PULLUP);
}

void loop() 
{
  int buttonValue = analogRead (keypadInput);
  
  if (keypadMillis >= keypadInterval)
  {
    Serial.println (buttonValue);
    /*
    if (buttonValue >= 300)
    {
      if (buttonValue > 1000 && buttonValue <= 1024)
      {
        //Number 1
        button = "1";
        Serial.println ("\tButton " + button);
      }
      if (buttonValue > 950 && buttonValue <= 980)
      {
        //Number 2
        button = "2";
        Serial.println ("\tButton " + button);
      }
      if (buttonValue > 850 && buttonValue <= 920)
      {
        //Number 3
        button = "3";
        Serial.println ("\tButton " + button);
      }
      if (buttonValue > 690 && buttonValue <= 720)
      {
        //Number 4
        button = "4";
        Serial.println ("\tButton " + button);
      }
      if (buttonValue > 640 && buttonValue <= 670)
      {
        //Number 5
        button = "5";
        Serial.println ("\tButton " + button);
      }
      if (buttonValue > 610 && buttonValue <= 630)
      {
        //Number 6
        button = "6";
        Serial.println ("\tButton " + button);
      }
      if (buttonValue > 515 && buttonValue <= 540)
      {
        //Number 7
        button = "7";
        Serial.println ("\tButton " + button);
      }
      if (buttonValue > 495 && buttonValue <= 510)
      {
        //Number 8
        button = "8";
        Serial.println ("\tButton " + button);
      }
      if (buttonValue > 475 && buttonValue <= 490)
      {
        //Number 9
        button = "9";
        Serial.println ("\tButton " + button);
      }
      if (buttonValue > 400 && buttonValue <= 415)
      {
        //Number 0
        button = "0";
        Serial.println ("\tButton " + button);
      }
      if (buttonValue > 810 && buttonValue <= 830)
      {
        //Letter A
        button = "A";
        Serial.println ("\tButton " + button);
      }
      if (buttonValue > 580 && buttonValue <= 600)
      {
        //Letter B
        button = "B";
        Serial.println ("\tButton " + button);
      }
      if (buttonValue > 450 && buttonValue <= 465)
      {
        //Letter C
        button = "C";
        Serial.println ("\tButton " + button);
      }
      if (buttonValue > 370 && buttonValue <= 390)
      {
        //Letter D
        button = "D";
        Serial.println ("\tButton " + button);
      }
      if (buttonValue > 420 && buttonValue <= 430)
      {
        //Symbol *
        button = "*";
        Serial.println ("\tButton " + button);
      }
      if (buttonValue > 390 && buttonValue <= 400)
      {
        //Symbol #
        button = "#";
        Serial.println ("\tButton " + button);
      }
    }
    
    else
    {
      Serial.println ("\tNo Button Pressed");
    }
    */
    keypadMillis = 0;
  }
}
