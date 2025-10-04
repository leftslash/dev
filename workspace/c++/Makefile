# Makefile

SHELL						:= /bin/bash

out							:= out
bin							:= main
src 						!= find . -name '*.cpp'

debug						:= -ggdb
release					:= -O2 -DNDEBUG
warnings				:= -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror -pedantic
includes				:= -I./src
std							:= -std=c++23

default:
	@test -d $(out) || mkdir $(out)
	g++ $(std) -o $(out)/$(bin) $(includes) $(debug) $(warnings) $(src)

clean:
	rm -rf $(out)
