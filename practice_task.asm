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
	sub rsp, 16

	mov rdi, fmt_a
	xor rax, rax
	call printf

	mov rsi, rsp
	mov rdi, fmt_in
	xor rax, rax
	call scanf

	mov rdi, fmt_b
    xor rax, rax
    call printf

    mov rsi, rsp
	add rsi, 4
    mov rdi, fmt_in
	xor rax, rax
    call scanf

	xor rcx, rcx
	xor rax, rax
	mov eax, dword[rsp]
	mov ebx, dword[rsp + 4]

	mov rdx, 1

L:
	cmp rbx, 0
	je result	
	imul rdx, rax
	dec rbx
	jmp L 

result:

	mov rdi, fmt_out
	mov rsi, rdx
	xor rax, rax
	call printf

end:
	mov rsp, rbp
	pop rbp
	xor rax, rax
	ret
