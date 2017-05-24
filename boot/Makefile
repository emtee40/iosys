ASM = nasm
ASMFLAGS = -felf32

%.o: %.asm
	$(ASM) $(ASMFLAGS) $< -o $(KERNDIR)/objs/$@

all: $(addsuffix .o, $(basename $(wildcard *.asm)))

