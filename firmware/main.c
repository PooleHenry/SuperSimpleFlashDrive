// Blink the LED

#include <registers.h>

int main(void) {
  while (1) blinkLED;
}

int blinkLED(void) {
  LEDbit = 1;
  delay(50);
  LEDbit = 0;
  delay(50);
}

// Delay by doing some NOP instructions. 
int delay(length) {
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
}
