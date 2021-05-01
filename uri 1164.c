#include<stdio.h>

int main()
{
    int n, x, i, j, s=0;

    // test case
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        // input value for checking perfect
        scanf("%d",&x);

        // calculating sum of divisors of x
        for (j=1; j<x; j++)
        {
            if (x%j==0)
                s+=j;
        }

        // taking decision and displaying
        if (s==x)
            printf("%d eh perfeito\n",x);

        else
           printf("%d nao eh perfeito\n",x);

        s=0;
    }


    return 0;
}


