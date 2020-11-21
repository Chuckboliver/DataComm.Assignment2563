#include "Frame.h"
#include "FSK_TX.h"
void setup() {
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    String sIn = Serial.readStringUntil('\n');
    if(sIn.equals("INIT")){
      String data = Frame::enFrame(3,0,0);
      //Serial.print(data);
      FSK::TX_Flow(data);
    }

  }
}
