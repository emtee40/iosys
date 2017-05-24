CC = i686-elf-gcc
CCFLAGS = -std=gnu99 -ffreestanding -O2 -Wall -Wextra

%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $(KERNDIR)/objs/$@

all: $(addsuffix .o, $(basename $(wildcard *.c)))

