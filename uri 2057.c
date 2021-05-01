#include<stdio.h>

int main()
{
    int m, n, p, s;

    scanf("%d %d %d",&m,&n,&p);

    s = m + n + p;

    /* actually it's have two
    conditions s>24 and s<24.
    But if sum of three integers
    is less than 24 then again
    check the sum is less than 0 */

    // and displaying the time
    //specified in destination
    if (s==24)
        printf("0\n");
    else if (s<24)
    {
        if (s<0)
            printf("%d\n",24+s);
        else
            printf("%d\n",s);
    }
    else if (s>24)
        printf("%d\n",s-24);

    return 0;
}


