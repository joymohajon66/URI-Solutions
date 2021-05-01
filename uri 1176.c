#include<stdio.h>
int main()
{
    int n, x, i;
    long long int fib[60];

    fib[0]=0;

    fib[1]=1;

    // find out Fibonacci series
    for (i=2; i<61; i++)
        fib[i] = fib[i-1] + fib[i-2];

    scanf("%d",&n);

    // displaying N-th term
    // of the Fibonacci series
    for (i=0; i<n; i++)
    {
        scanf("%d",&x);

        printf("Fib(%d) = %lld\n",x,fib[x]);
    }
    return 0;
}


