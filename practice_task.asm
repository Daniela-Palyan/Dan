extern printf
extern scanf
section .data
	fmt_a db "Enter a: ", 0
	fmt_b db "Enter b: ", 0
	fmt_in db "%d", 0
	fmt_out db "Result is: %d", 10, 0

section .text
	global main:
main:
	push rbp
	mov rbp, rsp
	

	sub rsp, 8
	mov rdi, fmt_a
	xor rax,rax
	call printf
	mov rsi, rsp
	mov rdi, fmt_in
	call scanf

	sub rsp, 8
	mov rdi, fmt_b
        xor rax,rax
        call printf
        mov rsi, rsp
        mov rdi, fmt_in
        call scanf

	pop rbx ;b
	pop rcx ;a
	push rcx
	mov rdx, 1

L:
	cmp rbx, 0
	je result
	
	imul rdx, rcx
	dec rbx
	jmp L 

result:
	push rdx

	mov rdi, fmt_out
	pop rsi
	xor rax, rax
	call printf

	mov rsp, rbp
	pop rbp
	xor rax, rax
	ret
