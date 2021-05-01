#include<stdio.h>
int main()
{
    int a, b;
    float s;

    scanf("%d %d",&a,&b);

    //calculating the measurement
    //of fuel liters
    s=a*b;

    //displaying the measurement
    printf("%.3f\n",s/12);

    return 0;


}

