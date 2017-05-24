LD = i686-elf-gcc
LDFLAGS = -ffreestanding -O2 -nostdlib -lgcc

kernel.bin: $(addsuffix .o, $(basename $(wildcard *.o)))
	$(LD) $(LDFLAGS) -T linker.ld -o $(KERNDIR)/kernel.bin $^


