; Build using these commands
;
;   nasm -f elf64 -g -f dwarf hello.asm
;   ld -o hello hello.o

SECTION .data
  msg:  db  "hello, world",10
  len:  equ $-msg

SECTION .bss

SECTION .text
  global _start

_start:
  mov rbp,rsp       ; for debugging
  nop               ; keep gdb happy

  xor rbx,rbx
  xor rcx,rcx

  mov rax,0x67fe
  mov rbx,rax
  mov cl,bh
  mov ch,bl

  mov rax,60        ; 60 = syscall exit
  mov rdi,0         ; 0 = success
  syscall           ; system call
