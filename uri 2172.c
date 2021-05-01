#include<stdio.h>

int main()
{
    long long int m, n, d;

    while (scanf("%lld %lld",&m,&n))
    {
        if (m==0 && n==0)
            break;

        //calculating multiply between of them
        d = m * n;

        // displaying the result of multiplication
        printf("%lld\n",d);
    }
    return 0;
}


