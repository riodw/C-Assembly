; asn9: assembly harmonic average calculator
; Rio Weber
; December 4, 2015

; HM= N/(1/a1 + 1/a2 + 1/a3 + 1/a4 + 1/a5...)

section .data       ; CONSTANTS
  Zero   dq 0.0     ; zero
  One    dq 1.0     ; one
  
section .text       ; CODE
global harmean
  
; harmonic_mean()
;   expects
;     rdi - address of array
;     rsi - length of array

;   returns
;     xmm0 - harmonic mean of array
harmean:
  push rbp          ; set up the stack frame
  mov rbp, rsp
  
  ; == Intended use of Registers ==
  ; xmm0 divison numerator
  ; xmm1 divison denominator
  ; xmm2 sum of divisions
  ; rsi  remaining elements
  ; rdi  current index of array
  
.setup:
  movsd xmm2, [Zero]    ; Initialize the running total (sum)
  push rsi

.whileloop: ; for each element in the array
   
  ; sum (xmm2) = 1 (xmm0) / arr[i] (xmm1)
  movsd xmm0, [One]     ; Move a value of 1 into xmm0
  movsd xmm1, [rdi]     ; Move the value at the address in rdi to xmm1
  divsd xmm0, xmm1      ; 1 / arr[i]
  addsd xmm2, xmm0      ; Add the value in xmm0 to xmm2
  dec rsi               ; remaining_elements--;
  
  ; if (remaining_elements == 0)
  cmp rsi, 0
  je .finaldivision   ; break;
  ; else
  add rdi, 8          ; i++;
  jmp .whileloop
  
  
.finaldivision:
; array_length / sum
  pop rsi
  cvtsi2sd xmm0, rsi  ; Take value in rsi, convert it to double, and put into xmm0
  divsd xmm0, xmm2    ; array_length / sum
  ; the Harmonic Mean (the result of the division) is in xmm0,
  ; xmm0 is what we are returning
  jmp .end
  
.end:
  leave               ; unset the stack frame
  ret
;--------------------

; nasm -f elf64 mystrlen.asm
; gcc -Wall -O -o mymain1 mymain.c mystrlen.o


