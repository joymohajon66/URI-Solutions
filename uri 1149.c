#include<stdio.h>
int main()
{
    int i, a, n, sum=0;

    scanf("%d",&a);

    while (scanf("%d",&n))
    {
        if (n>0)
        {
            for (i=0; i<n; i++)
            {
                sum=sum+a;
                a++;
            }
            break;
        }

    }

    printf("%d\n",sum);
    return 0;
}
