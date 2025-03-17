extern printf
extern scanf
section .data 
	scanf_format db "%d", 0
	max_printf_format db "Maximum element is: %d", 10, 0
section .bss
	arr resd 10
	max_elem resd 1
section .text
	global main:
main:
	push rbp
	mov rbp, rsp
	
	xor rbx, rbx

L1:
	cmp rbx, 10
	je L1_END

;scanf
	mov rdi, scanf_format
	lea rsi, [arr + 4 * rbx]
	xor rax, rax
	call scanf

	inc rbx
	jmp L1
	
L1_End:
	
	

