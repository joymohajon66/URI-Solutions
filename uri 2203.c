#include <stdio.h>

int main()
{
    double x1, y1, x2, y2, v, r1, r2, X, Y, dstnce, range;

    while(scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2) != EOF)
    {
        scanf("%lf%lf%lf", &v, &r1, &r2);

        /*low of distance = sqrt((x2-x1)^2 + (y2-y1)^2) */

        X = (x2-x1)*(x2-x1);

        Y = (y2-y1)*(y2-y1);

        // calculating distance between two Fiddlesticks
        dstnce = sqrt(X+Y);

        // low of distance s = vt, t = 1.5s from question
        // calculating sum of all distance
        dstnce += v*1.50;

        // find out distance between two
        //Fiddlesticks with their radius
        range = r1+r2;

        if(dstnce > range)
            printf("N\n");
        else
            printf("Y\n");
    }
    return 0;
}
