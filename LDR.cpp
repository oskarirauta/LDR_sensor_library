/* LDR library

written by Oskari Rauta
*/

#include "LDR.h"

LDR::LDR(uint8 pin) {
  _pin = pin;
  pinMode(_pin, INPUT_ANALOG);
}

short LDR::value(bool directValue) {
  if ( directValue )
    return(analogRead(_pin));
  return (min(analogRead(_pin), 4040) / 15.9);
}
        
        
        
        
        
        
        