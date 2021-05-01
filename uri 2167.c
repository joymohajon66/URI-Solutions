#include<stdio.h>

int main()
{
    int n, i;

    // the number of speed measures
    scanf("%d",&n);

    int arr[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int flag = 0, max = arr[0];


    for(i=1; i<n; i++)
    {
        /* if the next measure is greater
        than equal from previous measure
        then loop is working continue
        otherwise break the loop and
        print index in that time */
        if (max<=arr[i])
        {
            max=arr[i];
            flag = 1;
        }
        else
        {
            printf("%d\n",i+1);
            flag = 0;
            break;
        }
    }
    // if the loop don't access
    // in the break point then print 0
    if(flag==1)
        printf("0\n");

    return 0;
}

