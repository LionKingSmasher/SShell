source-file = \
	sshell.c

sub-dir = \
	lwl/

CFLAGS= -W -Wall -O2 -nostdinc -fno-builtin -I../include -L. -llwl

exec = sshell

all: $(exec)

$(exec): liblwl.a $(source-file)
	gcc $^ -g -o $@ $(CFLAGS) 

liblwl.a:
	for i in $(sub-dir) ; do \
		make -C $$i;         \
	done                   
