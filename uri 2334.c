#include<stdio.h>

int main()
{
    // the range of unsigned long long is
    //0 to 18,446,744,073,709,551,615
    unsigned long long int n;

    while(scanf("%llu",&n))
    {
        if (n==-1)
            break;

        if (n==0)
            printf("0\n");
        else
            printf("%llu\n",n-1);
    }
    return 0;
}


