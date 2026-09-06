CC = sdcc 
OBJCOPY = makebin
flags = -mmcs51

TARGET = main
SRC = main.c

all: $(TARGET).bin

$(TARGET).ihx: $(SRC)
	$(CC) $(flags) $(SRC)

$(TARGET).bin: $(TARGET).ihx
	$(OBJCOPY) -p $(TARGET).ihx $(TARGET).bin

clean:  # everything except the final bin
	rm -f *.ihx *.hex *.rel *.lst *.rst *.sym *.asm *.map *.lk *.mem