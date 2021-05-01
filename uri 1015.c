#include<stdio.h>

int main()
{
    double x1, x2, y1, y2, d;

    //input 2 floating values
    scanf("%lf %lf",&x1,&y1);

    //input 2 floating values
    scanf("%lf %lf",&x2,&y2);

    //calculating distance by question's formula
    d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    //displaying distance
    printf("%.4lf\n",d);

    return 0;

}

