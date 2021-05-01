#include<stdio.h>
#define pi 3.14159

int main()

{
    double R, S;

    //input integer number
    scanf("%lf",&R);

    //calculating the volume by question's formula
    S = 4 / 3.0 * pi * R * R * R;

    //displaying the volume
    printf("VOLUME = %.3lf\n",S);

    return 0;
}

