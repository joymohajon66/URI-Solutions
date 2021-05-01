#include<stdio.h>
int main()
{
    int x,y,i,r,sum=0;
    scanf("%d %d",&x,&y);

    if (x>y)
    {
        //define starting point of loop
        r=y+1;

        for (i=r; i<x; i++)
        {
            //find out sum of all odd numbers
            if (i%2 != 0)
                sum=sum+i;

        }
        //displaying sum
        printf("%d\n",sum);
    }
    else
    {
        //define starting point of loop
        r=x+1;

        for (i=r; i<y; i++)
        {
            //find out sum of all odd numbers
            if (i%2 != 0)
                sum=sum+i;
        }
        //displaying sum
        printf("%d\n",sum);
    }

    return 0;
}

