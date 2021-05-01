#include<stdio.h>

int main()
{
    int a, b1, b, c, n;

    scanf("%d",&n);

    //calculating hours, minutes, seconds
    a = n / 3600;
    b1 = n % 3600;
    b = b1 / 60;
    c = b1 % 60;

    //displaying hours, minutes, seconds
    printf("%d:%d:%d\n",a,b,c);

    return 0;
}

