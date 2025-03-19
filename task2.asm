extern printf
extern scanf
section .data
	fmt db "Enter N: ", 0
	fmt2 db "%d", 0
	sum_fmt db "Sum = %d ", 10, 0
section .bss
	num resq 1

section .text
	global main:
main:
	push rbp
	mov rbp, rsp

	mov rdi, fmt
	xor rax, rax
	call printf
	mov rsi, num
	mov rdi, fmt2
	xor rax, rax
	call scanf

	mov rbx, [num]
	xor rdx, rdx

gumar: 
	cmp rbx, 0
	je end

	add rdx, rbx
	dec rbx

	jmp gumar


end:
	mov rsi, rdx
	mov rdi, sum_fmt
	xor rax, rax
	call printf

	mov rsp, rbp
	pop rbp
	xor rax, rax
	ret

