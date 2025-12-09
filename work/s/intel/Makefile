src					:= kangaroo.s
obj					:= $(src:.s=.o)
bin					:= $(src:.s=)

default: $(bin)

$(bin): $(obj)
	ld -g -o $@ $^

$(obj):	$(src)
	yasm -f elf64 -g dwarf2 $^

clean:
	rm -rf $(bin) $(obj)
