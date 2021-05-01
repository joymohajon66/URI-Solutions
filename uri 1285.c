#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

{
    int m, n, i, j, l;
    char str[6];

    while(scanf("%d %d",&m,&n)!=EOF)
    {
        int cnt=0, flag=0;

        for(i=m; i<=n; i++)
        {
            // convert to string from
            // integer value
            sprintf(str,"%d",i);

            // find out length of string
            int len = strlen(str);

            /* if any two or more than
            characters are same in a
            string then exit the loop */

            for(j=0; j<len; j++)
            {
                for(l=j+1; l<len; l++)
                {
                    // checking whether the
                    // characters are the same
                    if(str[j]==str[l])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                {
                    break;
                }
            }

            // when a string have difference
            // character then count the number
            if(flag==1)
            {
                flag=0;
                continue;
            }
            else if(flag==0)
            {
                cnt++;
            }
        }
        // displaying quantity of street house
        printf("%d\n",cnt);
    }
    return 0;
}

