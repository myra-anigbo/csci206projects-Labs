/*
 * Implements a dictionary's functionality
 * Myra Anigbo
 */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

#include "dictionary.h"

// Maximum number of words in the dictionary
#define N 150000

// array of dictionary words
char words[N][LENGTH+1];

// number of words in the dictionary
int num_words = 0;

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    for( int i = 0; i < num_words; i++){ 
        if((strcasecmp(words[i], word)) == 0){ 
            return true;
        }
    }
    return false;
}

// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary_filename)
{
    FILE *f = fopen(dictionary_filename,"r"); 
    while((fgets(words[num_words], LENGTH+1, f)) != NULL){ 
        if(strcasecmp(words[num_words], "\n")!=0){ //if line is not 'n' then go to end of the line and replace with null 
            words[num_words][strlen(words[num_words])-1] = '\0';
            num_words ++;

        }
        
    }
    return true;
}

// Return the number of words stored in the dictionary.
unsigned int size(void)
{
    return num_words;

}
