#include<stdio.h>

int main()
{
    int n, j, a, b;

    scanf("%d",&n);

    // displaying sequence

    for (j=1; j<=n; j++)
    {
        printf("%d %d %d\n",j,j*j,j*j*j);

        a=(j*j)+1;

        b=(j*j*j)+1;

        printf("%d %d %d\n",j,a,b);
    }
    return 0;
}

