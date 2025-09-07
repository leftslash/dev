# Makefile

SHELL						:= /bin/bash

out							:= out
bin							:= main
src 						!= find . -name '*.cpp'

debug						:= -ggdb
release					:= -O2 -DNDEBUG
warnings				:= -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror

default:
	@test -d $(out) || mkdir $(out)
	g++ -o $(out)/$(bin) $(debug) $(warnings) $(src)

clean:
	rm -rf $(out)
