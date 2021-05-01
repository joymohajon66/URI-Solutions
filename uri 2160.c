#include<stdio.h>

int main()
{
    int len;
    char c[550];

    // input string
    gets(c);

    // calculating length of the string
    len = strlen(c);

    /* if the length is more than 80
     print NO otherwise print YES  */

    if (len <= 80)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;

}


