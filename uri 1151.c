#include<stdio.h>

int main()
{
    int n, s3;
    int s1=0, s2=1, cnt=2;

    scanf("%d",&n);

    // displaying sequence

    if (n==1)
        printf("0\n");
    else if(n==2)
        printf("0 1\n");
    else
    {
        printf("0 1");

        while(cnt!=n)
        {
            s3 = s1 + s2;
            printf(" %d",s3);
            s1 = s2;
            s2 = s3;
            cnt++;
        }
        printf("\n");
    }

    return 0;
}
