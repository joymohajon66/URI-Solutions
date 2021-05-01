#include <stdio.h>

int main()
{
    long long int a,n;

    // input the number of sides
    scanf("%lld", &n);

    // calculating ...
    a=(n * (n - 3) ) / 2;

    // displaying the number of string
    printf("%lld\n",a);

    return 0;
}


