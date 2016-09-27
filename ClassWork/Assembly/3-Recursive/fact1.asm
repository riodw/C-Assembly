; asm implementation of recursive factorial
	
	global fact
	section .text
	
; expects - RDI - n
; returns: RAX - factorial(n)
fact:
	push rbp
	mov rbp, rsp

	cmp rdi, 2
	jbe .basecase ; jump to basecase if rdi is BELLOW "2"
.recurse:
	push rdi		; save n for later
	dec rdi		; n - 1 ....
	call fact		
	pop rdi
	mul rdi		; rax <-- rax * rdi
	jmp .end

.basecase:
	mov rax, rdi
.end:
	leave
	ret
;-------------------------