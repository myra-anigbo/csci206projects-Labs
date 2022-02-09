/*
 * * File name: calc.c
 * * Compile with: gcc -std=c99 calc.c -o calc
 * *
 * * Name: Myra Anigbo
 * * Lab 62
 *
 * * CSCI 206 exercises (student file)
 */

#include <stdio.h>
#include <stdbool.h>   // bool type
#include <stdlib.h>    // exit()
#include <string.h>

bool my_isdigit(char c);
int add(char c);
bool my_isdigit(char c) {

      if (c >= '0' && c <= '9'){
         return true;
      }
      else {
         return false;
      }

int add(char *c) {
      //int atoi(constant *c)
      
      if (c >= '0' && c <= '9'){
          int add_calc = 0; 
          add_calc +=  atoi( *c);
          return add_calc;
      }
      else {
          return 0;
      }

}

