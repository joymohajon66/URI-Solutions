#include<stdio.h>

int main()
{

    int i, j, arr[4];

    // input 4 integer
    for (i=0; i<4; i++)
    {
        scanf("%d",&arr[i]);
    }

    // sorting array values by descending order
    for (i=0; i<4; i++)
    {
        for (j=i+1; j<4; j++)
        {
             if (arr[i]<arr[j])
             {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
             }
        }
    }

    /* if A < B+c OR A < B+D OR B < C+D then
    possible otherwise not possible here
    A(arr[0]) is highest and B(arr[1]) is
    second highest values in the inputed values  */

    if (arr[0] < arr[1]+arr[2] || arr[0] <
        arr[1]+arr[3] || arr[1] < arr[2]+arr[3])
        printf("S\n");
    else
        printf("N\n");

    return 0;
}


