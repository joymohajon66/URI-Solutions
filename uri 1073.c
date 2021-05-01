#include<stdio.h>

int main()
{
    int n,m,i;
    scanf("%d",&n);

    // this is loop for 1 to n
    for (i=1; i<=n; i++)
    {
        // check out is it even
        if(i%2==0)
        {
            m = i * i;
            // displaying multiply of even number
            printf("%d^2 = %d\n",i,m);
        }
    }
    return 0;
}

