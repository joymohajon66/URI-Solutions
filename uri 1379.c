#include<stdio.h>

int main()
{
    long long int a, b, c;

    while(1)
    {
        scanf("%lld %lld",&a, &b);

        // exit point
        if (a==0 && b==0)
            break;

        // find out c
        c = (a * 3) - (a + b);

        // displaying the value of c
        printf("%lld\n",c);
    }
    return 0;
}

