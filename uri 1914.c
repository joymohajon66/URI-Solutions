#include<stdio.h>
int main()
{
    int N, i, sum;
    long long int m, n;
    char a1[101], a2[6], a3[101], a4[6];

    // test case
    scanf("%d",&N);

    for (i=0; i<N; i++)
    {
        scanf("%s %s %s %s",a1, a2, a3, a4);
        scanf("%lld %lld",&m,&n);

        sum = m + n;

        /* Determine whether the sum
         of their numbers is even or
         odd according to their choice */

         /* if sum is even then print
        the name of the player
        who choice "PAR"other wise
        print second player  */

        if (a2[0]=='P')
        {
            if (sum % 2 == 0)
                printf("%s\n",a1);
            else
                printf("%s\n",a3);
        }
        else if (a2[0]=='I')
        {
            if (sum % 2 == 0)
                printf("%s\n",a3);
            else
                printf("%s\n",a1);
        }
    }

    return 0;
}


