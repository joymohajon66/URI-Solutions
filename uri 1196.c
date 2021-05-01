#include <stdio.h>

int main()
{
    char ch[48]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    int i;
    char c;

    while (scanf("%c",&c)!=EOF)
    {
        /* displaying one key back character
        from the input character  */

        for(i=0; i<48; i++)
        {
            if (c==ch[i])
            {
                printf("%c",ch[i-1]);
                break;
            }
            else if (c==' ')
            {
                printf(" ");
                break;
            }
            else if(c=='\n')
            {
                printf("\n");
                break;
            }
        }
    }

    return 0;
}
