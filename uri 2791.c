#include<stdio.h>

int main()
{
    int arr[5], temp, i;

    for(i=1; i<=4; i++)
    {
        scanf("%d",&arr[i]);

        // storing the position where the beans
        if(arr[i] == 1)
            temp = i;
    }
    // displaying the position
    printf("%d\n",temp);

    return 0;
}


