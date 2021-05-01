#include<stdio.h>

main()
{
    int i, j, z=11;
    char c;
    double d[12][12], s=0.0;

    // input a character
    scanf("%c",&c);

    // input arrays values
    for (i=0; i<12; i++)
    {
        for (j=0; j<12; j++)
        {
            scanf("%lf",&d[i][j]);
        }
    }

    // calculating sum
    for (i=0; i<12; i++)
    {
        for (j=i+1; j<z; j++)
        {
            s+=d[i][j];
        }
        z--;
    }

    // displaying sum or average
    if (c=='S')
        printf("%.1lf\n",s);
    else if (c=='M')
        printf("%.1lf\n",s/30);

    return 0;

}

