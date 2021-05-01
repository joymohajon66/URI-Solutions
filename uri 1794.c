#include<stdio.h>
int main()
{
    int a, b, c, d, e;

    scanf("%d",&a);

    scanf("%d %d",&b,&c);

    scanf("%d %d",&d,&e);

    //displaying according to the
    //question requirement depend
    //on input value
    if(b<=a && a<=c)
    {
        if(d<=a && a<=e)
            printf("possivel\n");
        else
            printf("impossivel\n");
    }
    else
        printf("impossivel\n");

    return 0;
}

