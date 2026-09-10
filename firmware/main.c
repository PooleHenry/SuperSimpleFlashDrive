// Blink the LED

#include "registers.h"

// Delay by doing some NOP instructions. 
void delay(int length) {
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

/*  "Push-pull output mode, has symmetrical drive capability which can output
    or absorb large current" */
void setupLED(void) {
  LED_outdir = 1;
  LED_outmode = 0;
}

void blinkLED(void) {
  LEDbit = 1;
  delay(50);
  LEDbit = 0;
  delay(50);
}

int main(void) {
  setupLED();
  while (1) blinkLED();
}
