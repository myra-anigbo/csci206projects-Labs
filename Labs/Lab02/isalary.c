 /* Myra Anigbo
 *  01/24/2022/3
 *  lab 02 - isalary.c
 *  compile with: $ make salary
 *  notes: none
 */  
 #include <stdio.h>
       
       int main(void) 
       {
          int hourly_wage;
          int salary;
          printf("Enter hourly wage (integer): ");
          scanf("%d", &hourly_wage);
          salary = hourly_wage * 40 * 50;
          printf("Annual salary is: "); 
          printf("%d", salary);
          printf("\n");
                             
         return 0;
       }
