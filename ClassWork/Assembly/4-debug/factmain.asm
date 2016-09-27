; recursive factorial
; 2015-11-22

    section .data
fmtstring db "%lu\n",0

    extern atoi, printf
    global main
    section .text
; expects:
;   rdi - n
; returns:
;   rax - factorial(n)
fact:
    push rbp
    mov rbp, rsp
    cmp rdi, 2		; base cases
    ja .recurse
    mov rax, rdi		; argument is...
    jmp .end		; ...its own factorial
.recurse:
    push rdi		; save rdi
    dec rdi			; n-1
    call fact		; rax <-- fact(n-1)
    pop rdi			; retrieve n
    mul rdi			; rax <-- fact(n-1) * n
.end:
    leave
    ret
;----------------

main:
    push rbp
    mov rbp, rsp
    sub rsp, 16         ; char *p, unsigned i
    mov [rbp-4], rdi    ; argc
    mov [rbp-12], rsi   ; argv
    mov dword [rbp-16], 1     ; i = 1
.whileloop:
    mov rax, [rbp-16]
    cmp rax, [rbp-4]
    jae .end
    mov rdi, [rbp-12]
    add rdi, rax
    call atoi
    mov rdi, rax
    call fact
    mov rdi, fmtstring
    mov rsi, rax
    call printf
    inc dword [rbp-16]
    jmp .whileloop
.end:
    xor rax, rax
    leave
    ret
;----------------


;[rdw77236@bfh103-14 4-debug]$ nasm -g -f elf64 -l factmain.lst factmain.asm 
;[rdw77236@bfh103-14 4-debug]$ 
;[rdw77236@bfh103-14 4-debug]$ gcc -g -o factmain factmain.o
;[rdw77236@bfh103-14 4-debug]$ 
;[rdw77236@bfh103-14 4-debug]$ gdb -tui factmain

;set disassembly-flavor intel
;set disassemble-next-line on
;layout split
;focus asm
;layout regs
