#include<stdio.h>

int main()
{
    int a, b, c;

    scanf("%d",&a);

    /* displaying A, B, C, D, & E
     depend on range between 0 - 100
    that is given in the question */

    if (a==0)
    {
        printf("E\n");
    }
    else if(1<=a && a<=35)
    {
        printf("D\n");
    }
    else if (36<=a && a<=60)
    {
        printf("C\n");
    }
    else if (61<=a && a<=85)
    {
        printf("B\n");
    }
    else if(86<=a && a<=100)
    {
        printf("A\n");
    }

    return 0;
}

