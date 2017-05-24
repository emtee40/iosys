export KERNDIR = $(PWD)

all:
	make -C boot
	make -C kernel
	make -C drivers
	make -C objs
clean:
	find $(KERNDIR) -name \*.o -exec rm \{\} \;
	rm -f $(KERNDIR)/kernel.bin

