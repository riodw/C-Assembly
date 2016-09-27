	section .data
Zero 	dd 0.0
	section .text
	global average

; assembly version of average() function
; Works on an array of 32-bit floats.
; expects:
;	rdi - address of array
;	esi - length of array
; returns:
;	xmm0 - average of array values

average:
	; push rbp
	; mov rbp, rsp
	
	movss xmm0, [Zero] ; initialize the running sum
	cvtsi2ss xmm1, rsi		; grab the divisor while it's th
	jmp .test
.next:
	addss xmm0, [rdi]		;add next array elt
	add rdi, 4
	dec rsi
.test:
	cmp rsi, 0
	jgt .next
.endloop:
	divss xmm0, xmm1
	
	; leave
	ret
;--------------


	
	