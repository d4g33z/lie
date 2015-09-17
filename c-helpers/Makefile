includes = -I.. -I../LiE -I../LiE/box -I. -I/usr/include/python3.3
sl-flags = -shared -pthread -fPIC -fwrapv -O2 -Wall
#sl-flags = -shared -pthread -fPIC -fwrapv -O2 -Wall -fno-strict-aliasing
all-C-flags:= -ansi -D_ANSI_SOURCE $(includes) $(CFLAGS) $(sl-flags)
$(CC) = gcc

.SUFFIXES:

%.o: %.c
	$(CC) -c $(CPPFLAGS) $(all-C-flags) $<

objects=from-static1.o from-static2.o from-static3.o error.o gc.o
#objects=from-static1.o from-static2.o from-static3.o

.PHONY: all clean

all:	.last_compiled

.last_compiled:	$(objects)
	touch .last_compiled

clean:
	rm -f *~ *.o .last_compiled
