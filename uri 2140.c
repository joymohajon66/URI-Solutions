#include<stdio.h>

int main()
{
    int n,m,change;
    while (1)
    {
        scanf("%d %d",&n,&m);

        if (n==0 && m==0)
            break;

        /* taking decision based on is it possible to
        make two different bills have to be give  */

        change = m - n;

        if (change>100)
        {
            // for this condition

            /* since the change is greater than 100 so
            deduct 100 from the actual change. if the
            rest change is available in the next subsequence
            of bills(50, 20, 10, 5, 2) then 100 is one
            of the bill and another one is rest change */

            change-=100;

            if (change==50 || change==20 || change==10 || change==5 || change==2)
            {
                printf("possible\n");
            }
            else
            {
                printf("impossible\n");
            }
        }
        else if (change>50)
        {
            change-=50;

            // same way but here next subsequence of bills are (20, 10, 5, 2)
            if (change==20 || change==10 || change==5 || change==2)
            {
                printf("possible\n");
            }
            else
            {
                printf("impossible\n");
            }
        }
        else if (change>20)
        {
            change-=20;
            if (change==10 || change==5 || change==2)
            {
                printf("possible\n");
            }
            else
            {
                printf("impossible\n");
            }
        }
        else if (change>10)
        {
            change-=10;
            if (change==5 || change==2)
            {
                printf("possible\n");
            }
            else
            {
                printf("impossible\n");
            }
        }
        else if (change>5)
        {
            change-=5;
            if (change==2)
            {
                printf("possible\n");
            }
            else
            {
                printf("impossible\n");
            }
        }
        else
        {
            printf("impossible\n");
        }

    }
    return 0;

}



