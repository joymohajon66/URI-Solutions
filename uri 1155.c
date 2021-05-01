#include<stdio.h>

int main()
{
    float s=1, d, i;

    // calculating sum of divisions
    for (i=2; i<=100; i++)
    {
        d = 1 / i;
        s = s + d;
    }

    // displaying
    printf("%.2f\n",s);

    return 0;
}
