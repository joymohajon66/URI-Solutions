#include<stdio.h>

int main()
{
    int n, s, i, a, b;

    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        scanf("%d %d",&a,&b);

        // calculating...
        s = a + b;

        // displaying...
        printf("%d\n",s);

    }

    return 0;
}

