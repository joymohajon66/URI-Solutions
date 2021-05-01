#include<stdio.h>

int main()
{
    double A, B, C, MEDIA;

    //input 3 floating number
    scanf("%lf %lf %lf",&A,&B,&C);

    //calculating the average
    A = A * 2;
    B = B * 3;
    C = C * 5;
    MEDIA = (A + B + C) / 10;

    //displaying the average
    printf("MEDIA = %.1lf\n",MEDIA);

    return 0;
}

