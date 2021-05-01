#include<stdio.h>

int main()
{
    int a;
    float b, s;

    //input integer & floating
    scanf("%d %f",&a,&b);

    //calculating the average consumption
    s = a / b;

    //displaying the consumption
    printf("%.3f km/l\n",s);

    return 0;
}


