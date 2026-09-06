// Blink the LED

#include "registers.h"

// Delay by doing some NOP instructions. 
int delay(int length) {
  int i = 0;
  for (i < length; i=i+1;) {
    __asm
    nop
    nop
    nop
    nop
    nop
    nop
    __endasm;
  }

  return 0;
}

int blinkLED(void) {
  LEDbit = 1;
  delay(50);
  LEDbit = 0;
  delay(50);

  return 0;
}

int main(void) {
  while (1) blinkLED;
}
