result=liblwl.a

CFLAGS=-nodefaultlibs -nostdinc -fno-builtin -nostdlib -I../../include

source-file= \
	stdio.c  \
	string.c \
	unistd.c 


souce-asm= \
	syscall.s

all: $(result)

$(result) : $(source-file:.c=.o) syscall.o
	ar crv ../$@ $^

%.o: %.c
	gcc $^ -g -c -o $@ $(CFLAGS)

$(source-asm:.s=.o): $(source-asm)
	gcc $^ -g -c -o $@

clear:
	rm -rf *.o