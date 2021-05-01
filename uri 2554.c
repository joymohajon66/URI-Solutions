#include<stdio.h>

/* Problem is solved using by 2D array */

int main()
{
    int x, y, i, j;

    //the number of people and the
    // number of considered dates
    while(scanf("%d %d",&x,&y)!=EOF)
    {
        int arr[y][x], temp=0, cnt=0;
        char ch[y][20];

        // input a date and people's decision
        for (i=0; i<y; i++)
        {
            scanf("%s",ch[i]);

            for (j=0; j<x; j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }

        /* looking for a date on which
        date all people can show up
        at the pizzeria. */

        for (i=0; i<x; i++)
        {
            for (j=0; j<x; j++)
            {
                // counting the number of
                // people who can show up.
                if(arr[i][j]==1)
                {
                    cnt++;
                }
            }

            if(cnt == x)
            {
                // if all the people can show up
                // then store the date and exit
                temp = i;
                break;
            }
            else
            {
                cnt = 0;
            }
        }

        // displaying the date otherwise print other things

        if (temp==0)
            printf("Pizza antes de FdI\n");
        else
            printf("%s\n",ch[temp]);
    }
    return 0;
}

