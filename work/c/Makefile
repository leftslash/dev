# Makefile

SHELL           := /bin/bash

out             := out
bin             := main
src             != find . -name '*.c'

debug           := -ggdb 
release         := -O2 -DNDEBUG
warnings        := -Wall -Wextra -Wconversion -Wsign-conversion -Werror -pedantic
includes        := -I./src
std             := -std=c89

default:
	@test -d $(out) || mkdir $(out)
	gcc $(std) -o $(out)/$(bin) $(includes) $(debug) $(warnings) $(src)

clean:
	rm -rf $(out)
