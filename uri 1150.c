#include<stdio.h>

int main()
{
    int i, n, z, sum=0, cnt=0;

    scanf("%d",&n);

    while (1)
    {
        scanf("%d",&z);
        //if n is less than z than
        if (n<z)
        {
            for (i=n; i<z; i++)
            {
                // summed in sequence from n to z and
                sum = sum + i;

                // counting summation
                cnt++;

                // until sum is getter than z
                if (sum>z)
                {
                    // displaying quantity of summation
                    printf("%d\n",cnt);
                    break;
                }
            }
            break;
        }
    }

    return 0;
}

