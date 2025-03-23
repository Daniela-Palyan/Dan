extern printf
extern scanf
section .data
    num dd 0
    fmt db "Enter your number: ", 0
    fmt_in db "%d",  0
    fmt_out db "%d", 10, 0
section .bss
section .text
    global main:
main:
    push rbp
	mov rbp, rsp

	mov rdi, fmt
	xor rax, rax
	call printf
	mov rsi, num
	mov rdi, fmt_in
	xor rax, rax
	call scanf

    mov rbx, 0
    mov rax, 1
    mov r9, 0
    xor rcx, rcx
    mov rcx, [num]

L:
    mov r9, rax
    add rax, rbx
    mov rbx, r9

    loop L

    mov rsi, rax
    mov rdi, fmt_out
    xor rax, rax
    call printf

END:
    mov rsp, rbp
    pop rbp
    xor rax, rax
    ret


    
