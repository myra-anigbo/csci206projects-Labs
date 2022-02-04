 /* Myra Anigbo
 *  01/24/2022/3
 *  lab 02 - isalary.c
 *  compile with: $ make salary
 *  notes: none
 */  
 #include <stdio.h>
       
       int main(void) 
       {
          float hourly_wage;
          float salary;
          int weeks;
          printf("Enter hourly wage (float): ");
          scanf("%f", &hourly_wage);

          printf("Enter weeks worked (integer): ");
          scanf("%d", &weeks);

          salary = hourly_wage * 40  * weeks;
          printf("Annual salary is: $"); 
          printf("%.2f", salary);
          printf("\n");
                             
         return 0;
       }
