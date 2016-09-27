; hello, world in 64-bit Linux
; 2015-11-9
;------------------------

NL equ 0x0a

	 section .data
msg   db 'Hello, world', NL
lenmsg equ $-msg

	section .text
	global _start
	global main
_start:
main:
	mov rdi, 1
	mov rsi, msg
	mov rdx, lenmsg
	mov rax, 1
	syscall
	
	mov rdi, 0
	mov rax, 60
	syscall
;-------------------------
;nasm -f elf64 hello.asm
;ld -m elf_x86_64 -o hello hello.o
;./hello
