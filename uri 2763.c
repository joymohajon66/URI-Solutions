#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char st[15];

    // input as a string
    scanf("%s",st);

    // displaying the string part by part
    for (i=0; i<strlen(st); i++)
    {
        if(st[i]=='.' || st[i]=='-')
            printf("\n");
        else
            printf("%c",st[i]);
    }
    printf("\n");

    return 0;
}



