extern printf
extern scanf
section .data 
	scanf_format db "%d", 0
	printf_format db "Maximum element is: %d", 10, 0
section .bss
	arr resd 10
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
	
L1_END:
	xor rax, rax
        mov eax, dword[arr]
	mov rbx, 1
L2:
	cmp rbx, 10
	je L2_END
	
	cmp eax, [arr + 4 * rbx]
	jl ASSIGN
	inc rbx	
	jmp L2
	
ASSIGN:
	mov eax, dword[arr + 4 * rbx]
	inc rbx
	jmp L2

L2_END:
	mov rdi, printf_format
	movsx rsi, eax
	xor rax, rax
	call printf

	mov rsp, rbp
	pop rbp

	xor rax, rax
	ret
















