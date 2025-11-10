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

  mov rax,1         ; 1 = syscall sys_write
  mov rdi,1         ; 1 = fd for stdout
  mov rsi,msg       ; put addr of msg in rsi
  mov rdx,len       ; length of msg in rdx
  syscall           ; system call

  mov rax,60        ; 60 = syscall exit
  mov rdi,0         ; 0 = success
  syscall           ; system call
