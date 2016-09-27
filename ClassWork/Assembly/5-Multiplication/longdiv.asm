; 64/64 bit division
 expects:
	RDI - Dividend
	RSI - divisor
; returns:
	RAX - quotient
	RDX - remainder
	
	global longdiv
	section .text
longdiv:
	push rbp
	mov rbp, rsp
	