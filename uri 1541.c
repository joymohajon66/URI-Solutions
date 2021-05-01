#include<stdio.h>

int main()
{
    int a, b, c, d, size;

    while (scanf("%d",&a))
    {
        if (a==0)
            break;

        scanf("%d %d",&b,&c);

        // calculating size of the land
        d = a * b * 100 / c;

        size = sqrt(d);

        //displaying ...
        printf("%d\n",size);
    }
    return 0;
}

