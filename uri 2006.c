#include<stdio.h>

int main()
{
    int t, n, i, cnt = 0;

    // input the tea type
    scanf("%d",&t);


    for (i=0; i<5; i++)
    {
        scanf("%d",&n);

        /* if the tea type is found in
        the answer given by each
        contestant, the number of correct
        guesses is being calculate */

        if (t==n)
        {
            cnt++;
        }
    }

    printf("%d\n",cnt);

    return 0;
}


