#include<stdio.h>

int main()

{
    int n, x, flag , i, j;

    // test case
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        scanf("%d",&x);

        flag = 0;

        // find out is it prime number
        /* if flag is 1 then it is not
        prime number otherwise prime */
        for (j=2; j<=x/2; j++)
        {
            if (x%j==0)
                flag = 1;
        }

        if (flag == 0)
            printf("%d eh primo\n",x);

        else
            printf("%d nao eh primo\n",x);
    }
    return 0;
}




