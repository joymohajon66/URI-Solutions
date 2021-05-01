#include<stdio.h>

int main()
{
    int x, y;

    // the number of row and column
    scanf("%d %d",&x,&y);

    // displaying the color of the
    // lower right corner of the board
    if(x%2!=0)
    {
        if(y%2!=0)
            printf("1\n");
        else
            printf("0\n");
    }
    else
    {
        if(y%2!=0)
            printf("0\n");
        else
            printf("1\n");
    }

    return 0;
}


