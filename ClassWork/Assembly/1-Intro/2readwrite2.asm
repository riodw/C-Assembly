; 64-bit Read-Write
; Desplay prompt
; Read input
; Process input
; Display result
; End
; 11-11-2015
;------------------------

NL equ 0x0a
MaxBuffer equ 30

	 section .data
prompt   db "Enter a string: "
promptlen equ $-prompt
report db "You entered: "
reportlen equ $ - report

	section .bss
buffer resb MaxBuffer
length resq 1
junk resb 1

	section .text
prt:
;Display a string to stdout
;Expects arguments:
;	rax - address of string
;	rbx - length of string
;Returns
;	nothing
	mov rdi,1		; output service
	mov rsi, rax
	mov rdx, rbx
	mov rax,1		;stdout
	syscall
	ret
;------------
	

	global _start
	global main
_start:
main:

;1 -prompt
	mov rax, prompt
	mov rbx, promptlen
	call prt
	
;2 -input
	mov rdi, 0  ; input service
	mov rsi, buffer
	mov rdx, MaxBuffer
	mov rax, 0  ; stdin
	syscall
	mov [length], rax
	
;3 -process
;nop ;does nothing for one cycle
	mov bl,[buffer - 1 + rax]
	cmp bl, NL ; does subtraction but does not change the destination
	je displayResult
	
addNewLine:
	mov bl, NL
	mov [buffer - 1 + rax], bl


;4 -display result
displayResult:
	mov rax, report
	mov rbx, reportlen
	call prt
	mov rax, buffer
	mov rbx, [length]
	call prt
	
;4a -flush the input
flushInput:
	mov rdi, 0  ; input service
	mov rsi, junk
	mov rdx, 1
	mov rax, 0  ; stdin
	syscall
	cmp byte [junk], NL
	jne flushInput  ;Jump Not Equal
	; jge ;Jump Greaterthan or Equal to
	
;5 -end programm
	
	mov rdi, 0
	mov rax, 60
	syscall
;-------------------------

;nasm -f elf64 2readwrite2.asm
;ld -m elf_x86_64 -o rw 2readwrite2.o
;./rw
;123456789123456789123456789123456789













