#include<stdio.h>

int main()
{
    long long int n, t, i, s;

    scanf("%lld",&n);

    for (i=0; i<n; i++)
    {
        scanf("%lld",&t);
        /* if the input years is
        greater than equal 2015 then
        deduct 2014 from input years */
        if (t>=2015)
        {
            s = t - 2014;
            printf("%lld A.C.\n",n);
        }
        // otherwise deduct input years from 2015
        else
        {
            s = 2015 - t;
            printf("%lld D.C.\n",n);
        }
    }

    return 0;

}


