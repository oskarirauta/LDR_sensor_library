// Example sketch for LDR sensor
// Written by Oskari Rauta

#include "LDR.h"

// We output state of sensor every 2,5 seconds..
#define outputInterval 2500

#define LDRPIN 18     // what pin we're connected to

LDR ldr1(LDRPIN);

uint32 lastOutput;
byte lastValue = 0, ldrVal;

void setup() {
  delay(2000);
  SerialUSB.println("LDR sensor test!");
  lastOutput = millis() - outputInterval;
}

void loop() {
  ldrVal = ldr1.value(); // Use ldr1.value to get direct value from sensor as short
  
  if (( ldrVal != lastValue ) && ( millis() > lastOutput + outputInterval )) {
     lastValue = ldrVal;
     SerialUSB.print("Light level is: ");
     SerialUSB.println(lastValue);
     lastOutput = millis();
  }

}