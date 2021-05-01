#include<stdio.h>

int main()
{
    int i, j, Z=11;
    char c;
    double x[12][12], s=0.0;

    // input a character
    scanf("%c",&c);

    // input arrays values
    for (i=0; i<12; i++)
    {
        for (j=0; j<12; j++)
        {
            scanf("%lf",&x[i][j]);
        }
    }

    // calculating sum
    for (i=0; i<12; i++)
    {
        for (j=0; j<Z; j++)
        {
            s+=x[i][j];
        }
        Z--;
    }

     // displaying sum or average
    if (c=='S')
        printf("%.1lf\n",s);
    else if (c=='M')
        print("%.1lf\n",s/66);
    return 0;


}

