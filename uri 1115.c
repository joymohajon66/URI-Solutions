#include<stdio.h>
int main()
{
    int x, y, i;
    while(1)
    {
        scanf("%d %d",&x,&y);

        /* displaying quadrant name
        which these coordinates belong */

        if (x>0 && y>0)
            printf("primeiro\n");
        else if (x>0 && y<0)
            printf("quarto\n");
        else if (x<0 && y<0)
            printf("terceiro\n");
        else if (x<0 && y>0)
            printf("segundo\n");
        else if (x==0 || y==0)
            break;
    }
    return 0;
}

