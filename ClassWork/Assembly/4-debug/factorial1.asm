; recursive factorial
; 2015-11-18

    global fact
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