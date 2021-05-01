#include<stdio.h>

int main()
{
    int i, j=0, n;

    scanf("%d",&n);

    for (i=0; i<1000; i++)
    {
        //if statement used for
        // repeat the values after n times
        if (j==n)
        {
            j=0;
        }
        // displaying array values
        //and their location
        printf("N[%d] = %d\n",i,j);
        j++;
    }

    return 0;
}

