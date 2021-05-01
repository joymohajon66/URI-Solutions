#include<stdio.h>

int main()
{
    int n, i, j, k, t, key;

    while (scanf("%d",&n))
    {
        int bid[n][n];

        if (n==0)break;

        // first fill diagonally by 1
        for (i=0; i<n; i++)
        {
            bid[i][i] = 1;
        }

        // then fill upper of the diagonal by 2, 3, 4...
        key = 2;
        for(i=0, k=1; i<n; i++)
        {
            for(j=0, t=k; t<n; t++,j++)
            {
                bid[j][t] = key;
            }
            k++;
            key++;
        }

        // and fill bottom of the diagonal at same ways.
        key = 2
        for(i=0, k=1; i<n; i++)
        {
            for(j=0,t=k; t<n; t++,j++)
            {
                bid[t][j]=key;
            }
            k++;
            key++;
        }

        // displaying...
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(j==0)
                    printf("%3d",bid[i][j]);
                else
                    printf(" %3d",bid[i][j]);
            }
            printf("\n");
        }
        printf("\n");

    }
    return 0;
}

