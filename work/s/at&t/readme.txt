# standalone assembler
gcc -c main.s
ld main.o
./a.out

# invoked from c
gcc -fno-pie -no-pie caller.c callee.s -lc
./a.out

# invoked from c++
gcc -fno-pie -no-pie caller.cpp callee.s -lstdc++
./a.out
