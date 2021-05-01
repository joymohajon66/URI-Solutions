#include<stdio.h>

int main()
{
    int n, x, y, z, i;

    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        scanf("%d %d %d",&x,&y,&z);

        /* In that case specially decision
        depend on the value of z variable */

        // other if else statement use for print 0
        if (z==0)
        {
            if (y>=10 && x>=10)
            {
                printf("%d:%d - A porta fechou!\n",x,y);
            }
            else if (y<10 && x>=10)
            {
                printf("%d:0%d - A porta fechou!\n",x,y);
            }
            else if (x<10 && y>=10)
            {
                printf("0%d:%d - A porta fechou!\n",x,y);
            }
            else if (x<10 && y<10)
            {
                printf("0%d:0%d - A porta fechou!\n",x,y);
            }
        }
        else
        {
            if (y<10 && x>=10)
            {
                printf("%d:0%d - A porta abriu!\n",x,y);
            }
            else if (x<10 && y>=10)
            {
                printf("0%d:%d - A porta abriu!\n",x,y);
            }
            else if (y>=10 && x>=10)
            {
                printf("%d:%d - A porta abriu!\n",x,y);
            }
            else if (x<10 && y<10)
            {
                printf("0");
                printf("%d:0%d - A porta abriu!\n",x,y);
            }
        }
    }
    return 0;

}


