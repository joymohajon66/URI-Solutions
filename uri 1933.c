#include<stdio.h>

int main()
{
    int a, b, max;

    scanf("%d %d",&a, &b);

    // finding which one is
    //max between of a and b
    max = (a >= b)?a:b;

    printf("%d\n",max);

    return 0;
}


