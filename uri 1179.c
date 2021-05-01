#include <stdio.h>

int main()
{
    int n, even[5], odd[5];

    int i, j, l=0, k=0;

    for (i=0; i<15; i++)
    {
        scanf("%d",&n);

        // storing even numbers
        if (n%2==0)
        {
            even[l] = n;
            l++;
        }
        // storing odd numbers
        else
        {
            odd[k] = n;
            k++;
        }

        // if odd or even array will full then print them
        if (l==5 || k==5)
        {
            for (j=0; j<5; j++)
            {
                if (l==5)
                    printf("par[%d] = %d\n",j,even[j]);

                else
                    printf("impar[%d] = %d\n",j,odd[j]);
            }

            // preparing array for new storing
            if (l==5)
                l = 0;
            else
                k = 0;
        }
    }

    // if there will remaining array, then
    // print them. First odd then even number

    for (j=0; j<k; j++)
    {
        if (k==0)
            break;
        else
            printf("impar[%d] = %d\n",j,odd[j]);
    }

    for (j=0; j<l; j++)
    {
        if (l==0)
            break;
        else
            printf("par[%d] = %d\n",j,even[j]);
    }

    return 0;
}

