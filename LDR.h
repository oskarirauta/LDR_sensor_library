#ifndef LDR_H
#define LDR_H

#if ARDUINO >= 100
 #include "Arduino.h"
#elif defined(__ARM3X8E__)
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

/* LDR library 

written by Oskari Rauta
*/
  
class LDR {
 private:
  uint8 _pin;

 public:
  LDR(uint8 pin);
  short value(bool directValue = false);
};
#endif
  
        
        
        
        
        