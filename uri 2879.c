#include<stdio.h>

int main()
{
    int n, i;

    scanf("%d",&n);

    int arr[n], cnt=0;

    // some integer
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    // counting the number of 2 and 3
    for(i=0; i<n; i++)
    {
        if (arr[i]==2 || arr[i]==3)
        {
            cnt++;
        }
    }

    // displaying the count number
    printf("%d\n",cnt);

    return 0;
}

