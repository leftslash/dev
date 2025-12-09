# todo
  find fibonacci or another nasty math problem
    write code in asm, c, python, javascript, go
    compare performance in benchmark style

# nasm assembler
  nasm -f elf64 -g -F dwarf main.asm
  ld -o main main.o
  ./main

# yasm assembler
  yasm -g dwarf2 -f elf64 basics.asm -l basics.lst
  ld -g -o basics bsics.o

# gdb
  tui enable
  b/break *<address>
  b/break <function>
    b _start
  r/run
  c/continue
  si/stepi
  ni/nexti
  where
  i/info registers
  i/info break
  p/print $<register>
  d/display $<register>
  x/<count><format><size> <address>
    <count> number of items (array)
    <format> is x,d,s,i
    <size> is b,h,w,g
  Ctrl-x a to enable tui
    layout src
    layout reg
  info files
    print from address listed as .data
    x/s 0x0000000000402000
