#include<stdio.h>

int main()
{
    int i,s,d;

    scanf("%d",&s);

    //calculating and displaying
    //the multiplication table of n

    for (i=1; i<11; i++)
    {
        d=i*s;
        printf("%d x %d = %d\n",i,s,d);
    }


    return 0;
}

