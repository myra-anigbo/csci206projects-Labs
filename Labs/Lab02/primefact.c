/* Myra Anigbo
 *01/26/2022-3
 *Results: the time for the primefactor.c are as follows
 *real  0m0.011s
 *user   0m0.003s
 *sys    0m0.007s
 *(time(python))/(time(c))= 311.72
 */ 
#include <stdio.h>
int main(void) {
    int n = 2147483645;

    int i = 2;

    while( i <= n){

        if( n % i == 0){

            printf("%i\n", i);

            n = (int) n / i;
        }

        else{

            i += 1; 
         }
    }
    return 0;
}       
