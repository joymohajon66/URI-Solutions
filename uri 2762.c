#include<stdio.h>

int main()
{
    int i, len, temp, flag=0;
    char st[10];

    // input the real number as a string
    gets(st);

    len = strlen(st);

    // find out the decimal point in the string
    for (i=0; i<len; i++)
    {
        if (st[i]=='.')
        {
            temp = i;
        }
    }

    // displaying a part of the string
    //that is after the decimal point
    //where first character cannot be '0'.
    for(i=temp+1; i<len; i++)
    {

        if (flag==0)
        {
            if (st[i]=='0')
            {
                continue;
            }
            else
            {
                printf("%c",st[i]);
                flag = 1;
            }
        }
        else
        {
            printf("%c",st[i]);
        }
    }

    printf(".");

    // displaying the first part of the string
    for (i=0; i<temp; i++)
    {
        printf("%c",st[i]);
    }
    printf("\n");

    return 0;
}

