#include<stdio.h>

int main()
{
    int n, d=0, i, p;

    for (i=1; i<=100; i++)
    {
        scanf("%d",&n);

        // find out height value
        // and it's position
        if (n>d)
            d=n, p=i;
    }

    //displaying height value and position
    printf("%d\n",d);
    printf("%d\n",p);

    return 0;

}


