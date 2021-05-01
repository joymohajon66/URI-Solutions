#include<stdio.h>
#include<string.h>

int main()
{
    char ar[1100];
    while(1)
    {
        int len, flag_1=0, flag_2=0;
        gets(ar);

        if (ar[0]=='*')
            break;

        /* first character of every
        word per line have to be same
        then print 'Y' otherwise print 'N' */

        len = strlen(ar);

        int i, j=0;

        for (i=0; i<len; i++)
        {
            if(ar[i]==' ')
            {
                // for 1 word
                flag_2 = 1;

                // check out first character of a word
                if(ar[0]==ar[i+1] || ar[0]==(ar[i+1]+32) || ar[0]==(ar[i+1]-32))
                    flag_1 = 1;
                else
                {
                    flag_1 = 0;
                    break;
                }
            }
        }

        // displaying
        if (flag_1==1 || flag_2==0)
            printf("Y\n");
        else if(flag_1==0)
            printf("N\n");
    }

    return 0;
}
