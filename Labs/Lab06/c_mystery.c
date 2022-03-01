/*
 *Lab 06, part 6
 *Myra Anigbo
 */
#include <stdio.h>

int unused  = 0xFEEDBEEF;
int x = 89;
int main(int argc, char * argv[]) {
    
    int t0 = 0;
    int s2 = 0;
    int t3 = t0 -10;

    while(t3 <= 0) { 
        s2 = s2 + t0;
        t0 = t0 +1;
        t3 = t0 -10;
    }
    
    int a0 = 0 + s2;
    printf("%d\n", a0);


}
