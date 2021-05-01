#include<stdio.h>

int main()
{
    char name[10];
    double a, b, TOTAL;

    //input 1 string, 2 floating numbers
    scanf ("%s",&name);
    scanf("%lf %lf",&a,&b);

    //calcutating total salary where 15% over all products sold
    TOTAL = a + ((b * 15) / 100);

    //displaying tatal salary
    printf("TOTAL = R$ %.2lf\n",TOTAL);

    return 0;
}

