#include<stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d",&a,&b,&c);

    /* determining and displaying
    ascending order */

    if (a<b && a<c)
        printf("%d\n",a);
    else if (b<c)
        printf("%d\n",b);
    else
        printf("%d\n",c);

    if (a>b && a>c)
    {
        if (b<c)
            printf("%d\n",c);
        else
            printf("%d\n",b);
    }
    else if (b>a && b>c)
    {
        if (a<c)
            printf("%d\n",c);
        else
            printf("%d\n",a);
    }
    else if (c>a && c>b)
    {
        if (a<b)
            printf("%d\n",b);
        else
            printf("%d\n",a);
    }

    if (a>b && a>c)
        printf("%d\n\n",a);
    else if (b>c)
        printf("%d\n\n",b);
    else
        printf("%d\n\n",c);

    //displaying readed sequence

    printf("%d\n%d\n%d\n",a,b,c);

    return 0;

}
