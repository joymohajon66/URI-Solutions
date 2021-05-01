#include<stdio.h>

int main()
{

    int n, i;

    while(1)
    {
        scanf("%d",&n);

        if(n==0)
            break;

        int cnt = 0, sum = 0;

        // calculating sum of
        //sequence from x
        for(i=n; cnt<5; i++)
        {
            if(i%2==0)
            {
                sum+=i;

                // counting odd numbers
                cnt++;
            }

        }
        printf("%d\n",sum);
    }

    return 0;
}

