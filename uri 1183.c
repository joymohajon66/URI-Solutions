#include<stdio.h>

main()

{
    int i, j;
    char c;
    double arr[12][12], s=0.0;

    // input a character
    scanf("%c",&c);

    // input arrays values
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
        for (j=i+1; j<12; j++)
        {
            s+=arr[i][j];
        }
    }

    // displaying sum or average
    if (c == 'S')
        printf("%.1lf\n",s);
    else if (c == 'M')
        printf("%.1lf\n",s/66);


    return 0;


}

