#include<stdio.h>

int main()
{
    int t, i, n;

    while (1)
    {
        // test case
        scanf("%d",&t);

        if (t==0)
            break;

        for (i=0; i<t; i++)
        {
            // the number of people
            scanf("%d",&n);

            // calculating the sum based on
            //the number is even or odd
            if (n%2==0)
                printf("%d\n",n*2-2);
            else
                printf("%d\n",n*2-1);
        }
    }
    return 0;

}

