#include<stdio.h>
int main()
{
    int n, a, test_case=0;
    char c1, c2;

    while(scanf("%d",&n)!=EOF)
    {
        int i=0, j=0;

        /* for every test case print
        out new line except first
        case and then calculation */

        if(test_case>0)
        {
            printf("\n");
        }

        while(1)
        {
            /* here c2 use for space character
            and last newline character */

            /* loop is terminated when
            c2 have newline character */
            scanf("%d %c%c",&a,&c1,&c2);

            // taking decision and
            //counting pairs of shoes
            if(n==a)
            {
                if(c1=='M')
                {
                    i++;
                }
                else if(c1=='F')
                {
                    j++;
                }
            }
            else if(c2=='\n')
            {
                break;
            }
        }
        test_case++;

        // displaying statistics of calculation
        printf("Caso %d:\n",test_case);
        printf("Pares Iguais: %d\n",i+j);
        printf("F: %d\n",j);
        printf("M: %d\n",i);

    }
    return 0;
}

