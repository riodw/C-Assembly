; mystrlen() asm implementation
; repeat loop version
; 2015-11-16

; mystrlen - Calculate length of null-terminated string
; expects:
;	rdi - address of the string
;returns:
;	rax - length of the string
	
	section .text
	global mystrlen
mystrlen:
	push rbp		;set up the stack frame....
	mov rbp, rsp 	;
	
	mov rax, rdi		; char *p = str;
.test:
	cmp byte[rax], 0
	je .loopend
	inc rax
	jmp .test
.loopend:
	sub rax, rdi
	
	leave		; undo the stack frame
	ret
;-----------------