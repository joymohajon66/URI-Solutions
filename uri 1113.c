#include<stdio.h>

int main()
{
    int x, y, i;
    while(1)
    {
        scanf("%d %d",&x,&y);

        /* find out and displaying
        “Crescente” if the values of X
        less than Y otherwise “Decrescente”. */

        // if x is equal to y then
        //the input will finished

        if(x>y)
            printf("Decrescente\n");
        else if(x<y)
            printf("Crescente\n");
        else if(x==y)
            break;
    }
    return 0;

}

