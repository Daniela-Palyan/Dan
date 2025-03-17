extern printf
extern scanf
section .rodata
	txt1 db "enter num1: ", 10, 0
	txt2 db "enter num2: ", 10, 0
	operation db "choose operation (add-1, sub-2, mul-3, div-4): ", 10, 0
	mutq db "%d", 10, 0
	res db "Result is: %d", 10, 0
section .data
	num1 dd 0
	num2 dd 0
	oper dd 0
	result dd 0
section .text
	global main:
main:
	push rbp
	mov rbp, rsp
	
mov rdi, txt1
xor rax, rax
call printf

mov rdi, mutq
mov rsi, num1
xor rax, rax
call scanf

  mov rdi, txt2
  xor rax, rax
  call printf
  
  mov rdi, mutq
  mov rsi, num2
  xor rax, rax
  call scanf

  mov rdi, operation
  xor rax, rax
  call printf
  
  mov rdi, mutq
  mov rsi, oper
  xor rax, rax
  call scanf

mov eax, [oper]
cmp eax, 1
je gumar
cmp eax, 2
je tarberutyun
cmp eax, 3
je artadryal
cmp eax, 4
je haraberutyun

gumar:
	mov ebx, [num1]
	add ebx, [num2]
	mov [result], ebx
	jmp print_result

tarberutyun:
	mov ebx, [num1]
        sub ebx, [num2]
        mov [result], ebx
        jmp print_result 


artadryal:
	mov eax, [num1]
        imul eax, [num2]
        mov [result], eax
        jmp print_result

haraberutyun:
	mov eax, [num1]
        idiv dword[num2]
        mov [result], eax
        jmp print_result

print_result:
	xor rsi, rsi
	mov esi, [result]
	mov rdi, res
	xor rax, rax
	call printf


ret
	 
