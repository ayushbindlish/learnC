#CFLAGS+=-Wall -g -fno-stack-protector  -fsanitize=address -fno-omit-frame-pointer

#LDFLAGS+=-fsanitize=address -fno-omit-frame-pointer -g

CFLAGS=-Wall -g -fno-stack-protector

#CFLAGS=-Wall -g

clean:
	rm  -f !(*.c|Makefile|.*)
