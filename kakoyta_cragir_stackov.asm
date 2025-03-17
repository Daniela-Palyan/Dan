extern scanf
extern printf
section .data
	print_a db "mutqagri a: ", 0
	print_b db "mutqagri b: ", 0
	scanf db "%d", 0
	ardyunq db "ardyunq = %d", 10, 0

section .text
	global main:
main:
	push rbp
	mov rbp, rsp
	sub  rsp, 16

	mov rdi, print_a
	xor rax, rax
	call printf
	
	xor rsi, rsi
	lea esi, dword[rbp - 4]
	mov rdi, scanf
	xor rax, rax
	call scanf

	mov rdi, print_b
        xor rax, rax
        call printf

	xor rsi, rsi        
        lea esi, dword[rbp - 8]
        mov rdi, scanf
        xor rax, rax
        call scanf
	
	
	mov eax, dword[rbp - 4]
L:
	cmp dword[rbp - 8], 0
	je L_END
	mul dword[rbp - 4]
	dec dword[rbp - 8]
	mov qword[rbp - 16], eax
	jmp L

L_END: 
	mov rdi, ardyunq
	mov rsi, qword[rbp - 16]
	xor rax, rax
	call printf



	mov rsp, rbp
	pop rbp
	xor rax, rax
	ret 

	

	  

