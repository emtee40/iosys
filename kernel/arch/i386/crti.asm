section .init
global _init
_init:
	push ebp
	mov ebp, esp

section .fini
global _fini:function
_fini:
	push ebp
	mov ebp, esp

