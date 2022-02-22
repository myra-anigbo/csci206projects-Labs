CFLAGS = -Wall -Werror -Wfatal-errors -g -std=c99
CC     = gcc
EXE    = bits floats #executables
SRC    = bits.c floats.c
OBJF   = bits.o floats.o

all: $(EXE)

bits: bits.o
	$(CC) -o $@ bits.o

clean:
	/bin/rm -f core *.o $(EXE) *~
