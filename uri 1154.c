#in#include<stdio.h>

int main()
{
    int n, cnt=0, sum=0;

    // calculating average
    while (scanf("%d",&n))
    {
        if(n<0)
            break;

        sum=sum+n;

        cnt++;
    }

    // displayiing
    printf("%.2f\n",(double)sum/cnt);

    return 0;
}

