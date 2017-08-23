#!/bin/sh
set -e
. ./build.sh
 
mkdir -p isodir
mkdir -p isodir/boot
mkdir -p isodir/boot/grub
 
cp sysroot/boot/iosys.kernel isodir/boot/iosys.kernel
cat > isodir/boot/grub/grub.cfg << EOF
menuentry "IOsys" {
	multiboot /boot/iosys.kernel
}
EOF
grub-mkrescue -o iosys.iso isodir
