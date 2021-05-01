#include<stdio.h>

int main()
{
    int a,b,d,e;
    float c,f,s;

    //input values
    scanf("%d %d %f",&a,&b,&c);
    scanf("%d %d %f",&d,&e,&f);

    //calculating the amount to be paid
    s = (b * c) + (e * f);

    //displaying amount
    printf("VALOR A PAGAR: R$ %.2lf\n",s);

    return 0;
}

