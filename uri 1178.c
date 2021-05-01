#include<stdio.h>

int main()
{
    int i;

    double a;

    scanf("%lf",&a);

    // displaying sequence
    for (i=0; i<100; i++)
    {
        printf("N[%d] = %.4lf\n",i,a);

        // calculating half the previous position
        a=a/2;
    }
    return 0;
}


