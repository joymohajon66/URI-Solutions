#include<stdio.h>

int main()
{
    int i,n;

    scanf("%d",&n);

    printf("N[0] = %d\n",n);

    /* calculating and displaying
    the values which are double
     of previous value */

    for (i=1; i<10; i++)
    {
        n = n * 2;
        printf("N[%d] = %d\n",i,n);
    }

    return 0;
}


