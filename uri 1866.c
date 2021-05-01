#include<stdio.h>

int main()
{
    int c, n, i;

    // test case
    scanf("%d",&c);

    /* if inputed value is even
    then print 0 because even
    number means there are same
    number of 1 and -1 in the
    series, other wise print 1 */

    for (i=0; i<c; i++)
    {
        scanf("%d",&n);

        if (n%2==0)
            printf("0\n");
        else
            printf("1\n");
    }
    return 0;
}


