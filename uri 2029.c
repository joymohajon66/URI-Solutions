#include<stdio.h>

int main()
{
    double v, d, area, radius, height;

    // calculating area and height and displaying.
    // We know  volume = height * area
    while (scanf("%lf %lf",&v,&d)!=EOF)
    {
        radius = d / 2;

        area = radius * radius * 3.14;

        height = v / area;


        printf("ALTURA = %.2lf\nAREA = %.2lf\n",height,area);
    }
    return 0;
}


