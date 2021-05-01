#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    double d, s;

    scanf("%d",&n);

    /* find out Fibonacci of n using by question's formula */
    // pow means power and sqrt means square root
    d = pow(((1 + sqrt(5)) / 2), n) - pow(((1 - sqrt(5)) / 2), n);

    s = d / sqrt(5);

    printf("%.1lf\n",s);

    return 0;
}


