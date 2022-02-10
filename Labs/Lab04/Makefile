C=gcc
CFLAGS=-std=c99 -Wall -Werror -g
SRC=fsm.c tokens.c
OBJF=fsm.o tokens.o sha_sum.o sha256.o            # objects needed for fsm
EXE=fsm sha_sum                         # executables
 
all: $(EXE)
 
%.o:%.c tokens.h
	$(CC) $(CFLAGS) -c $< -o $@
 
fsm: fsm.o tokens.o
	$(CC) -o $@ fsm.o tokens.o 
sha_sum: sha_sum.o sha256.o
	$(CC) -o $@ sha_sum.o sha256.o
 
clean:
	/bin/rm -f *.o *~ $(EXE)
