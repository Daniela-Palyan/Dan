extern printf
extern scanf
section .data
	mutq_printf db "Enter N: ", 0
	mutq_scanf db "%d", 0
	sum db "Sum = %d "
section .bss

section .text
	global main:
main:
	push rbp
	mov rbp, rsi

	mov rdi, mutq_printf
	xor rax, rax
	call printf

	mov rsi, rcx
	mov rdi, mutq_scanf
	call scanf
	mov rbx, rcx
L:
	cmp rbx, 0
	je END
	
	add rcx, rbx
	dec rbx
	jmp L

END:
	mov rsi, rcx 
	mov rdi, sum
	xor rax, rax
	call printf

	mov rsp, rbp
	pop rbp

	xor rax, rax
	ret

