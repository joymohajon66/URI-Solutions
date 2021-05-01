#include<stdio.h>

int main()
{
   int a, b, c, d, s;

   //input 3 integer values
   scanf("%d %d %d",&a,&b,&c);

   //calculating the greatest
   // of those three values
   d = (a + b + abs(a - b)) / 2;

   s = (d + c + abs(d - c)) / 2;

   //displaying
   printf("%d eh o maior\n",s);

   return 0;
}

