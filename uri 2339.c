#include<stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d",&a,&b,&c);

    // if condition is true
    //then print S otherwise N
    if (b>=a*c)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}

