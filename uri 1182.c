#include<stdio.h>

int main()
{
    int n, i, j;
    char c;
    double arr[12][12], sum = 0.0;

    // input a integer and a character
    scanf("%d %c",&n, &c);

    // input array's values
    for (i=0; i<12; i++)
    {
        for (j=0; j<12; j++)
        {
            scanf("%lf",&arr[i][j]);

        }
    }

    // calculating sum
    for (i=0; i<12; i++)
    {
        sum += arr[i][n];
    }

    // displaying sum or average
    if (c=='S')
        printf("%.1lf\n",sum);
    else if (c=='M')
        printf("%.1lf\n",sum/12.0);

    return 0;
}

