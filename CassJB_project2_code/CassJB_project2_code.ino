/*
 * AET Apollo & Daphne Enclosure
 * Coderella
 * (authors)
 * (desc)
 */

//servo code library
#include<Servo.h>;

//VARIABLES
Servo servo1;
const int buttonPin = 7;

void setup() {
  // put your setup code here, to run once:
  servo1.attatch(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  //if button pressed, move servo
  if(digitalRead(buttonPin) == HIGH)
  {
    servo1.write(180);
    }
   else
   {
    servo1.write(0);
    }
}
