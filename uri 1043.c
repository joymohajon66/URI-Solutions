#include<stdio.h>

int main()
{
   float a, b, c, s, m;

   scanf("%f %f %f",&a,&b,&c);

   // calculating the perimeter of the triangle
   s = (a + b + c);

   // calculating the area of the trapezium
   m = ((a + b) * c) / 2;

   /* determining, is it posible to make triangle
   if possible then displaying perimeter of triangle
    otherwise displaying area of the trapezium */

   if (a < (b + c) && b < (a + c) && c < (a + b))
      printf("Perimetro = %.1f\n",s);
   else
      printf("Area = %.1f\n",m);

   return 0;

}

