#include<stdio.h>

int main()
{
    int i, j, n, test = 1, cnt = 1;

    while (scanf("%d",&n)!=EOF)
    {
        /* counting the number of numbers
        that contains the complete sequence */
        for (i=0; i<=n; i++)
        {
            for (j=0; j<i; j++)
            {
                cnt++;
            }
        }

        // displaying case number
        if (n==0)
            printf("Caso %d: %d numero\n",test, cnt);
        else
            printf("Caso %d: %d numeros\n",test,cnt );

        // displaying the complete sequence
        printf("0");
        for (i=1; i<=n; i++)
        {
            for (j=0; j<i; j++)
            {
                printf(" %d",i);
            }
        }
        printf("\n\n");

        cnt = 1;
        test++;
    }
    return 0;
}


