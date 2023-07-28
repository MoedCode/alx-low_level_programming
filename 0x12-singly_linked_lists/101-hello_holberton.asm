section .data
	msg db "Hello, Holberton", 0
	fmt db "%s", 10, 0

section .text
	extern printf
	global main

main:
	; >> arg for printf onto the stack
	push dword msg
	push dword fmt

	; call printf
	call printf

	; clean up stack
	add esp, 8

	; exit  status code 0
	xor eax, eax
	ret
