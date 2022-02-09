/*
 * File name: cmd_args.c
 * Compile with: gcc -std=c99 cmd_args.c -o cmd_args
 */
#include <stdio.h>
int main(int argc, char * argv[]) {

    for (int i = 0; i < argc; ++i)
	  printf("The %dth argument is %s\n", i, argv[i]);
    return 0;
}
