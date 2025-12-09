; Build using these commands
;
;   nasm -f elf64 -g -F dwarf main.asm
;   ld -o main main.o
;
;   yasm -f elf64 -g dwarf2 main.asm
;   ld -g -o main main.o

section .data

  msg:  db  "hello, world",10
  len:  equ $-msg

section .bss

section .text

  global _start

_start:

  mov rbp,rsp       ; for debugging
  nop               ; keep gdb happy

  mov rax,1         ; 1 = syscall sys_write
  mov rdi,1         ; 1 = fd for stdout
  mov rsi,msg       ; put addr of msg in rsi
  mov rdx,len       ; length of msg in rdx
  syscall           ; system call

  mov rax,60        ; 60 = syscall exit
  mov rdi,0         ; 0 = success
  syscall           ; system call

; vim: ft=nasm
