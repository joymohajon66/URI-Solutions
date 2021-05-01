#include<stdio.h>
int main()
{
    int i, j, a, b, a1=0, b1=0;

    //test case
    scanf("%d",&n);

    for (j=0; j<n; j++)
    {
        scanf("%d %d",&a,&b);

        /* if else statement used to
        find out which one the starting
        point between a & b for
        find out sum of the odd
        numbers between them */

        if (a>b)
        {
            for (i=b+1; i<a; i++)
            {
                // find out sum of the
                // odd numbers

                if (i%2!=0)
                    b1=b1+i;
            }
            // displaying sum
            printf("%d\n",b1);
            b1=0;
        }
        else if (a<b)
        {
            // find out sum of the
            // odd numbers

            for (i=a+1; i<b; i++)
            {
                if (i%2!=0)
                    a1=a1+i;
            }
            // displaying sum
            printf("%d\n",a1);
            a1=0;
        }
        else
            printf("0\n");
    }
    return 0;
}
