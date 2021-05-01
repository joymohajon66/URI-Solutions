#include<stdio.h>

int main()
{
    int n, d, s;

    while (scanf("%d",&n)!=EOF)
    {
        scanf(":%d",&d);

        /* displaying a massage
         according to the question */

         // here calculate maximum delay in time
        if (n==7)
            printf("Atraso maximo: %d\n",d);
        else if (n==8)
        {
            s=60+d;
            printf("Atraso maximo: %d\n",s);
        }
        else if (n==9)
            printf("Atraso maximo: 120\n");

        else
            printf("Atraso maximo: 0\n");
    }
    return 0;
}

