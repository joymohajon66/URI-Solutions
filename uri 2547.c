#include <stdio.h>

int main()
{
    int n, i, max, min;

    //the number of guests, the
    //minimum and the maximum height
    while(scanf("%d %d %d",&n,&min,&max)!=EOF)
    {
        int arr[n], cnt=0;

        // height
        for (i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }

        // counting the number of guests
        //who's height between min and max
        for (i=0; i<n; i++)
        {
            if (min<=arr[i] && arr[i]<=max)
            {
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}

