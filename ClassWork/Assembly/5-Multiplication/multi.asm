;Demo ASM multiplication
; expects:	RDI - multiplicand
			RSI - Multiplier
; returns: 	RDX, RAX, - product

	global longprod

	section .text
longprod:
	push rdp
	mov rbp, rsp
	mov rax, rdi
	imul rsi		; signed multiplication
	
	leave
	ret
;---------------------