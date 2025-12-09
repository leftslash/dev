; Build using these commands
;
;   nasm -f elf64 -g -F dwarf main.asm
;   ld -o main main.o
;
;   yasm -f elf64 -g dwarf2 main.asm
;   ld -g -o main main.o

section .data

section .bss

section .text

  global _start

_start:

  mov rbp,rsp       ; for debugging
  nop               ; keep gdb happy

  mov rdx,9
  xor rdx,rdx
  mov rax,250
  mov rbx,5
  div rbx

  mov rax,60        ; 60 = syscall exit
  mov rdi,0         ; 0 = success
  syscall           ; system call

; vim: ft=nasm
