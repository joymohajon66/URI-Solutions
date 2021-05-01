#include<stdio.h>

int main()
{
    int row, coloum, i, j, n = 0, m = 0;

    scanf("%d %d", &row, &coloum);

    int arr[row][coloum];

    // input array values
    for(i=0; i<row; i++)
    {
        for(j=0; j<coloum; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    /* if the value of any cell is 42 and the
     neighbor of this cell is only 7 then the
      cell location is being store */

    for(i=1; i<row-1; i++)
    {
        for(j=1; j<coloum-1; j++)
        {
            if(arr[i][j]==42)
                if(arr[i-1][j-1]==7 && arr[i-1][j]==7 && arr[i-1][j+1]==7)
                    if(arr[i][j-1]==7 && arr[i][j+1]==7)
                        if(arr[i+1][j-1]==7 && arr[i+1][j]==7 && arr[i+1][j+1]==7)
                        {
                            n = i+1;
                            m = j+1;
                        }
        }
    }

    // displaying cell location
    printf("%d %d\n", n, m);

    return 0;
}



