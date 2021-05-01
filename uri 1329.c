#include<stdio.h>

int main()
{
    int n, i, j;
    while(1)
    {
        scanf("%d",&n);

        int arr[n], cnt1=0, cnt2=0;

        if(n==0)
            break;

        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);

            if(arr[i]==1)
            {
                cnt1++;
            }
            else if(arr[i]==0)
            {
                cnt2++;
            }
        }

        printf("Mary won %d times and John won %d times\n",cnt2,cnt1);
    }
    return 0;
}

