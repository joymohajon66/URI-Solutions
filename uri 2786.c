#include<stdio.h>

int main()
{
    int x, y, a, b;

    //the width and the length of the room
    scanf("%d%d",&x,&y);

    a = x - 1;

    b = y - 1;

    // displaying the number of
    // tiles of type 1 and type 2
    printf("%d\n",(x*y)+(a*b));
    printf("%d\n",(a*2)+(b*2));

    return 0;
}


