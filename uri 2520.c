#include<stdio.h>
#include<math.h>

int main()
{
    int i, j, x, y;

    while(scanf("%d %d",&x,&y)!=EOF)
    {
        int arr[x][y];
        int s, a, b, c, d;

        for(i=0; i<x; i++)
        {
            for(j=0; j<y; j++)
            {
                scanf("%d",&arr[i][j]);

                // storing my position
                if(arr[i][j]==1)
                {
                    a=i;
                    b=j;
                }
                // storing analógimôn’s position
                else if(arr[i][j]==2)
                {
                    c=i;
                    d=j;
                }
            }
        }
        /* calculating minimum time to
        reach the position of analógimôn */

        // here abs() function use
        // to return absolute value
        s = abs(c - a) + abs(d - b);

        printf("%d\n",s);
    }
    return 0;
}

