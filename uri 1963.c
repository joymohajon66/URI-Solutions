#include<stdio.h>

int main()
{
    double old, neww, rest, per;

    scanf("%lf %lf",&old, &neww);

    // calculating percentage of price

    rest = neww - old;

    per = (rest * 100) / old;

    printf("%.2lf%%\n",per);

    return 0;

}

