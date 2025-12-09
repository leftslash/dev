; Build using these commands
;
;   nasm -f elf64 -g -F dwarf main.asm
;   ld -o main main.o
;
;   yasm -f elf64 -g dwarf2 main.asm
;   ld -g -o main main.o

section .data

  EXIT_SUCCESS    equ     0
  SYS_exit        equ     60

  bVar1           db      17
  bVar2           db      9
  bResult         db      0

  wVar1           dw      17000
  wVar2           dw      9000
  wResult         dw      0

  dVar1           dd      17000000
  dVar2           dd      9000000
  dResult         dd      0

  qVar1           dq      170000000
  qVar2           dq      90000000
  qResult         dq      0

section .bss

section .text

  global _start

_start:

  ; bResult = bVar1 + bVar2
  mov   al, byte [bVar1]
  add   al, byte [bVar2]
  mov   byte [bResult],al

  ; wResult = wVar1 + wVar2
  mov   ax, word [wVar1]
  add   ax, word [wVar2]
  mov   word [wResult],ax

  ; dResult = dVar1 + dVar2
  mov   eax, dword [dVar1]
  add   eax, dword [dVar2]
  mov   dword [dResult],eax

  ; qResult = qVar1 + qVar2
  mov   rax, qword [qVar1]
  add   rax, qword [qVar2]
  mov   qword [qResult],rax

looper:

  mov   rax,5

more:

  dec   rax
  jnz   more

flags:

  ; testing flags
  mov   eax,0xffffffff
  mov   ebx,0x2d
  dec   ebx
  inc   eax

last:

  ; exit successfully
  mov   rax,SYS_exit          ; exit syscall code
  mov   rdi,EXIT_SUCCESS      ; program exit code
  syscall

; vi: ft=nasm
