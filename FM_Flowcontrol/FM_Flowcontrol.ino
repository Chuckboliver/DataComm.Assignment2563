#include "Frame.h"

void setup() {
  Serial.begin(9600);
  String test = Frame::enFrame(0,15,1);
  //OUTPUT ->         1100100100111111
  Serial.print(test);
}

void loop() {
  // put your main code here, to run repeatedly:

}
