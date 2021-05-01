#include<stdio.h>

int main()
{
   int NUMBER;
   double A, B, SALARY;

   //input 1 integer and 2 floating number
   scanf("%d %lf %lf",&NUMBER,&A,&B);

   //calculating the amount of the salary per worked hour.
   SALARY = A * B;

   //displaying employee's number, amount of the salary
   printf("NUMBER = %d\nSALARY = U$ %.2lf\n",NUMBER,SALARY);

   return 0;
}
