extern printf ; declare printf as an external function

section .text ; start of the text section
	global main ; declare main as a global symbol

main: ; start of the main function
	push rbp ; save the base pointer on the stack

	mov rax,0 ; set rax to 0, indicating no floating-point arguments
	mov rdi,fmt ; set rdi to the address of the format string
	mov rsi,msg ; set rsi to the address of the message string
	call printf ; call the printf function

	pop rbp ; restore the base pointer from the stack

	xor rax,rax ; set rax to 0, indicating success
	ret ; return from the main function

section .data ; start of the data section
	msg: db "Hello, Holberton", 10, 0 ; define a null-terminated string with a newline
	fmt: db "%s", 0 ; define a null-terminated format string for printf

