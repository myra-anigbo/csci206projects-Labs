C=gcc
CFLAGS=-std=c99 -Wall -Werror -g
SRC=fsm.c tokens.c
OBJF=fsm.o tokens.o sha_sum.o sha256.o speller.o dictionary.o better_dictionary.o         # objects needed for fsm
EXE=fsm sha_sum speller better_dictionary          # executables
 
all: $(EXE)
 
%.o:%.c tokens.h
	$(CC) $(CFLAGS) -c $< -o $@
 
fsm: fsm.o tokens.o
	$(CC) -o $@ fsm.o tokens.o 
sha_sum: sha_sum.o sha256.o
	$(CC) -o $@ sha_sum.o sha256.o
speller: speller.o dictionary.o
	$(CC) -o $@ speller.o dictionary.o

better_dictionary: better_dictionary.o speller.o dictionary.o 
	$(CC) -o $@ better_dictionary.o speller.o dictionary.o

clean:
	/bin/rm -f *.o *~ $(EXE)
