sub-dir = \
	src/

all:
	for i in $(sub-dir) ; do \
		make -C $$i;         \
	done                   