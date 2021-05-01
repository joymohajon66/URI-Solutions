#include<stdio.h>
#define pi 3.14159

int main()

{
   float a, b, c;
   double T, C, Tr, S, R;

   //input 3 floating value
   scanf("%f %f %f",&a,&b,&c);

   //calculating
   //area of the rectangled triangle
   T = .5 * a * c;
   //area of the radius's circle
   C = pi * c * c;
   //area of the trapezium
   Tr = ((a+b)/2) * c;
   //area of ​​the square
   S = b * b;
   //area of the rectangle
   R = a * b;

   //displaying areas
   printf("TRIANGULO: %.3lf\n",T);
   printf("CIRCULO: %.3lf\n",C);
   printf("TRAPEZIO: %.3lf\n",Tr);
   printf("QUADRADO: %.3lf\n",S);
   printf("RETANGULO: %.3lf\n",R);

   return 0;
}
