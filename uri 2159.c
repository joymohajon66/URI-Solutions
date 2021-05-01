#include<stdio.h>
#include<math.h>

int main()
{
    long long int n;
    double x, y;

    scanf("%lld",&n);

    // calculating the value of x and y
    //using the question's formula
    x = n / log(n);

    y = x * 1.25506;

    printf("%.1lf %.1lf\n",x,y);

    return 0;

}


