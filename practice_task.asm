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
	

	sub rsi, 4
	mov rdi, fmt_a
	xor rax,rax
	call printf

	mov rsi, rsp
	mov rdi, fmt_in
	call scanf

	sub rsi, 4
	mov rdi, fmt_b
        xor rax,rax
        call printf

        mov rsi, rsp
        mov rdi, fmt_in
        call scanf

	xor rcx, rcx
	xor rax, rax
	mov ecx, dword[rsp]
	add rsp, 4
	mov eax, dword[rsp]
	add rsp, 4

	push rax
	mov rdx, 1

L:
	cmp rcx, 0
	je result	
	imul rdx, rax
	dec rcx
	jmp L 

result:

	mov rdi, fmt_out
	mov rsi, rdx
	xor rax, rax
	call printf


	mov rsp, rbp
	pop rbp
	xor rax, rax
	ret
