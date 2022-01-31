/* Switchcase
 * <Myra Anigbo>
 * <62>
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main(){

    //printf("enter a string: ");
    
    char string[256];   // store input string
     
    // this loop will read one line of input at a time
    // if EOF is reached, fgets() will return false, thus the loop will exit.
 while (fgets(string, 256, stdin)) {
    for(int i = 0; i < strlen(string); i++){ 
        /* use strlen and toupper in a loop to convert the string here */    
         string[i] = toupper(string[i]);
        // print the result
       // printf("%s\n", string);
        }
  
     printf("%s\n", string);
  }
   // printf("%s\n", string);
    // C main programs return an error code. Typically 0 means “No errors.”
    return 0;
}
