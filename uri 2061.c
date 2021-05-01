#include<stdio.h>

int main()
{
    int n, m, i;
    char ch[10];

    scanf("%d %d",&n,&m);

    /* if the string is "fechou" then
     open new tab other wise closed */

    for (i=0; i<m; i++)
    {
        scanf("%s",ch);

        if (ch[0]=='f')
        {
            n++;
        }
        else if (ch[0]=='c')
        {
            n--;
        }
    }
    printf("%d\n",n);

    return 0;
}


