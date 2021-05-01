#include<stdio.h>

int main()
{

    int n, s, k;

    scanf("%d",&n);

    /* if N is getter than
    equal to 900 then deduct
    900 from N and displaying
    roman format of 900. This
    formula works for 500,
     400, 100, 90, 50, 40, 10,
     9, 5, 4, 3, 2, 1  */

    if (n>=900)
    {
        s=n-900;
        printf("CM");
        n=s;
    }

    if (n>=500)
    {
        s=n-500;
        printf("D");
        n=s;
    }

    if (n>=400)
    {
        s=n-400;
        printf("CD");
        n=s;
    }
    while (n>=100)
    {
        s=n-100;
        printf("C");
        n=s;
    }

    if (n>=90)
    {
        s=n-90;
        printf("XC");
        n=s;
    }
    if (n>=50)
    {
        s=n-50;
        printf("L");
        n=s;
    }
    if (n>=40)
    {
        s=n-40;
        printf("XL");
        n=s;
    }
    while (n>=10)
    {
        s=n-10;
        printf("X");
        n=s;
    }
    if (n==9)
    {
        s=n-9;
        printf("IX");
        n=s;
    }
    if (n>=5)
    {
        s=n-5;
        printf("V");
        n=s;
    }
    if (n==4)
    {
        printf("IV");
    }
    else if (n==3)
    {
        printf("III");
    }
    else if (n==2)
    {
        printf("II");
    }
    else if (n==1)
    {
        printf("I");
    }

    printf("\n");

    return 0;
}


