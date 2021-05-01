#include<stdio.h>

int main()
{
    int a, b, c, i;

    scanf("%d %d %d",&a,&b,&c);

    /* printing a happy or a sad
    smiley depend on some conditions
    which are displaying at the below */

    if (a>b)
        if (b<=c)
            printf(":)\n");

    if (a<b)
        if (b>=c)
            printf(":(\n");

    if (a<b && b<c && c-b<b-a)
        printf(":(\n");

    if (a<b && b<c && c-b>=b-a)
        printf(":)\n");

    if (a>b && b>c && b-c<a-b)
        printf(":)\n");

    if (a>b && b>c && b-c>=a-b)
        printf(":(\n");

    if (a==b)
    {
        if (b<c)
            printf(":)\n");
        else
            printf(":(\n");
    }

    return 0;
}





