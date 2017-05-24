/*
        IO/SYS kernel
	License: GNU General Public License (GPL) v3
*/

#if !defined(__cplusplus)
#include <stdbool.h> /* C doesn't have booleans by default. */
#endif
#include <stddef.h>
#include <stdint.h>

// Core system drivers
#include "../drivers/vga/simpletext.h" // The most basic VGA driver


// Compiler tests
 
#if defined(__linux__)
#error "Get a cross-compiler!"
#endif
 
#if !defined(__i386__)
#error "Your cross-compiler does NOT target 32-bit systems"
#endif

// Function header
void kernel_init(void);
void drivers_init(void);
void print_os_info(void);

// Main entry point
void kernel_main(void) {
	// Init kernel
	kernel_init();
}

// OS loader
void kernel_init(void)
{
	drivers_init();
}

// Drivers loader
void drivers_init(void)
{
	terminal_initialize();
	print_os_info();
	terminal_writestring("Loading drivers:\n");
	// Keyboard
	terminal_writestring("-> Keyboard\n");
	// keyboard_init crap
	terminal_writestring("-> Filesystem\n");
	// fs_init crap :D
	terminal_writestring("\n DONE!!\n");
	
	terminal_writestring("IOSYS> \n");
}

// Prints OS name & info
void print_os_info(void)
{
	// The mess (TM)
	
	terminal_setcolor(VGA_COLOR_GREEN);
        terminal_writestring("----------------------------\n");
	terminal_putchar('|');
	terminal_setcolor(VGA_COLOR_CYAN);
        terminal_writestring("       IO/SYS v0.01       ");
	terminal_setcolor(VGA_COLOR_GREEN);
	terminal_putchar('|');
        terminal_writestring("\n----------------------------\n\n");

}


