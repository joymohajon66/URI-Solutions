#include<stdio.h>
//define constant value
#define PI 3.14159

int main()
{
    double R, A;
    //input R
    scanf("%lf",&R);

    //calculate the area of a circumference
    A = PI*R*R;

    //displaying the area
    printf("A=%.4lf\n",A);

    return 0;
}

