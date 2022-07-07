/*
        _          _ ______ _____ _____ 
       (_)        | |  ____|  __ \_   _|
  _ __  ___  _____| | |__  | |  | || |  
 | '_ \| \ \/ / _ \ |  __| | |  | || |  
 | |_) | |>  <  __/ | |____| |__| || |_ 
 | .__/|_/_/\_\___|_|______|_____/_____|
 | |                                    
 |_|                                    
                             
www.pixeledi.eu | twitter.com/pixeledi
PWM | V1.0 | 06/2022

*/

#include <Arduino.h>

const byte LEDred = 4;
const byte LEDgreen = 0;
const byte LEDblue = 1;

void colorToLED(byte red, byte green, byte blue)
{
  analogWrite(LEDred, red);
  analogWrite(LEDgreen, green);
  analogWrite(LEDblue, blue);
  delay(5);
}

void setup()
{
  // put your setup code here, to run once:
  pinMode(LEDred, OUTPUT);
  pinMode(LEDgreen, OUTPUT);
  pinMode(LEDblue, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:

  // yellow to green
  for (int i = 255; i >= 0; i--)
  {
    colorToLED(255 - i, 0, 255);
  }
  // green to cyan
  for (int i = 255; i >= 0; i--)
  {
    colorToLED(255, 0, i);
  }
  // cyan to blue
  for (int i = 255; i >= 0; i--)
  {
    colorToLED(255, 255 - i, 0);
  }
  // blue to magenta
  for (int i = 255; i >= 0; i--)
  {
    colorToLED(i, 255, 0);
  }
  // magenta to red
  for (int i = 255; i >= 0; i--)
  {
    colorToLED(0, 255, 255 - i);
  }
  // red to yellow
  for (int i = 255; i >= 0; i--)
  {
    colorToLED(0, i, 255);
  }
}