; Rio Weber
; Project 8
; 11/19/2015

section .text           ; main
global puts, mystrlen   ; so the C program knows the functions are here

; expects - string
; returns - length of string
mystrlen:
    push rbp		;set up - can also use "enter"
    mov rbp, rsp 	;
; starting
    mov rax, rdi	; moving rdi into rax / rax now = 0
    jmp .test       ; used to skip the increment rax command in (.next)
.next:
    inc rax         ; increment rax
.test:
    cmp byte[rax], 0 ; is it null ????????????
    jne .next       ; Jump if (rax) is NOT equal
.loopend:
    sub rax, rdi
    leave		    ; end - oposite of first two lines
    ret             ; return
;----------------------------

; PUTS - the function used by C programm
; calls the mystrlen to find the length of the string
; expects - string
; returns - nothing
puts:
    push rbp        ; setup
    mov rbp, rsp    ; setup
; starting
    call mystrlen   ; call to mystrlen - get length of string
    mov rdx, rax    ; the length
    mov rsi, rdi    ; the sring
    mov rdi, 1      ; what to output
    mov rax, 1      ; write syscall
    syscall         ; do the output
.end:
    leave           ; end
    ret	       ; return
;----------------------------


; [rdw77236@bfh103-14 Project8]$ nasm -f elf64 puts.asm
; [rdw77236@bfh103-14 Project8]$ gcc -Wall -o puts1 test.c puts.o
; test.c:5:6: warning: conflicting types for built-in function ‘puts’ [enabled by default]
; void puts(char *s);
;        ^
; [rdw77236@bfh103-14 Project8]$ ./puts1 test test
; testtest[rdw77236@bfh103-14 Project8]$ 

