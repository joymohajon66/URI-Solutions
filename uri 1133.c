#include<stdio.h>
int main()
{
    int x, y, i;
    scanf("%d %d",&x,&y);

    /* displaying all numbers between
    x and y which are divided by 5 where
    the rest is equal to 2 or equal to 3. */

    if (x<y)
    {
        for (i=x+1; i<y; i++)
        {
            if (i%5==2)
                printf("%d\n",i);
            else if (i%5==3)
                printf("%d\n",i);
        }
    }
    else if (x>y)
    {
        for (i=y+1; i<x; i++)
        {
            if (i%5==2)
                printf("%d\n",i);
            else if (i%5==3)
                printf("%d\n",i);
        }
    }
    return 0;
}

