#include <stdio.h>

int main()
{
    int n, x, y, s;

    // the rest of the minute and
    //required minutes to manufacture
    scanf("%d %d %d",&n,&x,&y);

    s = x + y;

    // it is possible if the sum of the
    //required time is less than equal
    //to rest time otherwise isn't possible
    if (s<=n)
        printf("Farei hoje!\n");
    else
        printf("Deixa para amanha!\n");

    return 0;
}



