#include<stdio.h>

int main()
{
    int i, ar[10];

    for (i=0; i<10; i++)
    {
        scanf("%d",&ar[i]);

        /* if any input value is less
        than equal 0 then print 1
        otherwise print inupt value */

        if (ar[i]<=0)
            printf("X[%d] = 1\n",i);
        else
            printf("X[%d] = %d\n",i,ar[i]);
    }
    return 0;
}



