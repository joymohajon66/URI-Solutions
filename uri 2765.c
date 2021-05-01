#include <stdio.h>

int main()
{
    int i, len ;
    char st[250];

    // input a string
    while(gets(st))
    {
        len = strlen(st);

        // displaying the string according
        // to question's requirements
        for (i=0; i<len ; i++)
        {
            if (st[i]==',')
                printf("\n");
            else
                printf("%c",st[i]);
        }
        printf("\n");
    }
    return 0;
}


