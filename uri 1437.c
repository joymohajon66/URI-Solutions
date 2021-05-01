#include<stdio.h>

int main()
{
    int i, n;

    while(1)
    {
        int k = 1;
        // input number of character
        scanf("%d",&n);

        char ch[n];

        if(n==0)
            break;

        // input character
        scanf("%s",ch);

        /* increasing k when get
        character 'D' otherwise
        decreasing the value of k.
        Here k is rotating
        from 1 to 5   */

        for(i=0; i<n; i++)
        {
            if(ch[i]=='D')
            {
                k++;
                if(k==5)
                    k=1;
            }
            else if(ch[i]=='E')
            {
                k--;
                if(k==0)
                    k=4;
            }

        }

        //displaying N, L, S, O
        //depend on the value of k
        if(k==1)
        {
            printf("N\n");
        }
        else if(k==2)
        {
            printf("L\n");
        }
        else if(k==3)
        {
            printf("S\n");
        }
        else if(k==4)
        {
            printf("O\n");
        }
    }
    return 0;
}
