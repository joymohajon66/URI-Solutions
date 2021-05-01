#include <stdio.h>

int main()
{
    int i, j;
    double n, s;

    // number of players
    while(scanf("%lf",&n)!=EOF)
    {
        int arr[n], cnt = 0;

        for(i=0; i<n; i++)
        {
            // votes of each player
            scanf("%d",&arr[i]);

            // counting the number of
            //votes for the impeachment
            if(arr[i]==1)
            {
                cnt++;
            }
        }
        // calculating 2/3 of the
        // total number of players
        s = (n * 2) / 3;

        // taking decision
        if(s<=cnt)
        {
            printf("impeachment\n");
        }
        else
        {
            printf("acusacao arquivada\n");
        }
    }

    return 0;
}


