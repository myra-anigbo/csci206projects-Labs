#ifndef __tokens_h_
#define __tokens_h_
 
#include <stdio.h>
#include <stdbool.h>   // bool type

#include <stdlib.h>    // exit()
#include <string.h>

enum NUM_STATE {NON_DIGIT, DIGIT};  // states for a number
extern const int MAX_LENGTH;

bool my_isdigit(char);              // returns true if char is a digit,
                                    // false otherwise
void parse_int(char *);             // parse int out of a string
int  grow_number(char *, char, int);   // increase the int by a digit
void end_number(char *, int);          // end of an int
                                    
#endif
