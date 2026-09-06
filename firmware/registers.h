// Defintions for the special function registers I am using in the project, based on the CH552 datasheet.
// This is using syntax for the SDCC compiler.


// Port 3
__sfr __at (0xB0) P3;
__sfr __at (0x9E) P3_MOD_OC;
__sfr __at (0x9F) P3_DIR_PU;

// For the LED on Pin 7 (P3.1), I specifically want bit 1 of port 3, so I can make a bit definition like this

__sbit __at (0xB0+1) LEDbit;
__sbit __at (0x9F+1) LED_outdir;
__sbit __at (0x9F+1) LED_outmode;
