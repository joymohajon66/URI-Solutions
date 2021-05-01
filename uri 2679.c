#include<stdio.h>

int main()
{
    int a;

    scanf("%d",&a);

    // returning a even number that
    // is larger than input value
    if(a%2==0)
        printf("%d\n",a+2);
    else
        printf("%d\n",a+1);

    return 0;
}

