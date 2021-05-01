#include<stdio.h>

int main()
{
    int c, i, n;

    char ch[5];

    // test case
    scanf("%d",&c);

    /* if inputed string is
    equal to "Thor" then print
     Y other wise print N  */

    for (i=0; i<c; i++)
    {
        scanf("%s %d",ch,&n);

        if (strcmp(ch,"Thor")==0)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}

