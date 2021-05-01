#include<stdio.h>

int main()
{
    double A, B, MEDIA;

     //input 2 floating number
    scanf("%lf %lf",&A,&B);

    //calculating the student's average
    A = A * 3.5;
    B = B * 7.5;
    MEDIA = (A + B) / 11;

    //displaying the average
    printf("MEDIA = %.5lf\n",MEDIA);

    return 0;
}

