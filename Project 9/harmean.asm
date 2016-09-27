; asn9: assembly harmonic average calculator
; Rio Weber
; December 4, 2015


section .data       ; CONSTANTS - dq for 64 bit
  Zero   dq 0.0     ; zero
  One    dq 1.0     ; one

section .text       ; CODE
global harmean


; HARMEAN - used by the C program to get the Harmonic Average
; expects - rdi (address of array)
;     	    rsi (length of array)
;   returns - xmm0 (harmonic mean of array)
harmean:
  push rbp          ;set up - can also use "enter"
  mov rbp, rsp
  ; Registers
  ; xmm0 divison numerator
  ; xmm1 divison denominator
  ; xmm2 sum of divisions
  ; rsi  remaining elements
  ; rdi  current index of array
  
.setup:
  movsd xmm2, [Zero]    ; total = 0
  push rsi

.wloop: ; for each element in the array
   
  movsd xmm0, [One]     ; Move a value of 1 into xmm0
  movsd xmm1, [rdi]     ; Move the value at the address in rdi to xmm1
  divsd xmm0, xmm1      ; 1 / arr[i]
  addsd xmm2, xmm0      ; Add the value in xmm0 to xmm2
  dec rsi               ; remaining_elements--;
  
  cmp rsi, 0
  je .answerdivision   ; break;
  ; else
  add rdi, 8          ; i++;
  jmp .wloop
  
  
.answerdivision:
  pop rsi
  cvtsi2sd xmm0, rsi  ; rsi, convert to double, put it into xmm0
  divsd xmm0, xmm2    ; array_length / sum
  jmp .end
  
.end:
  leave               ; end
  ret
;--------------------

; nasm -f elf64 mystrlen.asm
; gcc -Wall -O -o mymain1 mymain.c mystrlen.o


