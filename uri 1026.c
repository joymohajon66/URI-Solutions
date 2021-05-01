#include<stdio.h>

int main()
{
   int unsigned long  a, b, c;

   /* adding 2 integers by converting them
   in binary number but here doesn't metter
   carry bit that means 1 + 1 = only 0
   is not 0 and carry 1. In that case it(^)
   can be used. */

   while(scanf("%lu %lu",&a,&b)==2){

       c = (a ^ b);

       //displaying adding number
       printf("%lu\n",c);
   }
    return 0;
}
