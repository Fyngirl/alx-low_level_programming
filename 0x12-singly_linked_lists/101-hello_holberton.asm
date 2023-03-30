section .data ; defines a null-terminated string
hello: db 'Hello, Holberton', 10, 0

section .text ; contains the entry point of the program
global _start
_start:
	; write hello to stdout
	mov eax, 4
	mov ebx, 1
	mov ecx, hello
	mov edx, 15
	int 0x80

	; exit program with status code 0
	mov eax, 1
	xor ebx, ebx
	int 0x80
