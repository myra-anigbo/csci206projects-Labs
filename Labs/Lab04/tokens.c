#include "tokens.h"

bool my_isdigit(char c) {

     if (c >= '0' && c <= '9')
         return true;
     else
         return false;
        }

void parse_int(char * s) {

     enum NUM_STATE state = NON_DIGIT;
     int  len = strlen(s);
     char one_number[MAX_LENGTH+1]; // used to store one integer
     int  digit_count = 0;          // how many digits in current int

     for (int i = 0; i < len; ++i) {
         if (state == NON_DIGIT) {
             if (my_isdigit(s[i]) == true) {
                 state = DIGIT;
                 digit_count = grow_number(one_number, s[i], digit_count);
                                                              }
             else if (state == DIGIT) {
                 if (my_isdigit(s[i]) == true) {
                     digit_count = grow_number(one_number, s[i], digit_count);
                 } else { //end of a number 
                     end_number(one_number, digit_count);
                     digit_count = 0;
                     state = NON_DIGIT;
                 }
               } else {
                  printf("error, non-existing state.\n");
               }
         } // end of for
         if (digit_count > 0) { // the very last token is int
            one_number[digit_count] = 0;  // terminate the string
            printf("one token : [%s]\n", one_number);   
          }
 }
}
int grow_number(char *token, char ch, int cur_len) {

      if (cur_len < MAX_LENGTH) {
            token[cur_len] = ch;
         } else { // truncate the token
             token[cur_len] = 0;    // terminate the current one
             printf("one token : [%s]\n", token);
             cur_len = 0;          // ready to start a new token
             token[cur_len] = ch;  // the last char belongs to next int
            }
    
    cur_len++;
    return cur_len;
}

void end_number(char *token, int cur_len) {

      token[cur_len] = 0;  // terminte the string
      printf("one token : [%s]\n", token);
}


