; Build using these commands
;
;   nasm -f elf64 -g -F dwarf main.asm
;   ld -o main main.o
;
;   yasm -f elf64 -g dwarf2 main.asm
;   ld -g -o main main.o

section .data

  Snippet db "KANGAROO"

section .text

  global _start

_start:

  mov rbp,rsp
  nop

  mov rbx,Snippet
  mov rax,8

more:

  add byte [rbx],32
  inc rbx
  dec rax
  jnz more

  nop

; vi: ft=nasm
