#include<stdio.h>

int main()
{
    double a, b, c, i, j, k;

    scanf("%lf %lf %lf",&i, &j, &k);

    // arrange them in decreasing order

    if (i >= j && i >= k)

        a = i, b = j, c = k;

    else if (j>i && j>=k)

        a = j, b = i, c = k;

    else if (j>=i && j>k)

        a = j, b = i, c = k;

    else
        a = k,b = i,c = j;

    /* displaying message according
    to the condition of questions */

    if (a >= b + c)

       printf("NAO FORMA TRIANGULO\n");

    else {

        if (a * a==b * b + c * c)

           printf("TRIANGULO RETANGULO\n");

        if (a * a > b * b + c * c)

           printf("TRIANGULO OBTUSANGULO\n");

        if (a * a < b * b + c * c)

           printf("TRIANGULO ACUTANGULO\n");

        if (i == j && i == k)

           printf("TRIANGULO EQUILATERO\n");

        else if (i == j || j == k || k == i)

           printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}

