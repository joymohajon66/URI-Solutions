#include<stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d",&a,&b);

    /* displaying A, B, C depend
     on the value of a and b  */

    if(a==1 && b==1)
    {
        printf("A\n");
    }
    else if(a==1 && b==0)
    {
        printf("B\n");
    }
    else if (a==0 && b==1 || a==0 && b==0)
    {
        printf("C\n");
    }

    return 0;
}


