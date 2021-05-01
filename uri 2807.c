#include<stdio.h>

int main()
{
    int n;

    // input a integer
    scanf("%d",&n);

    int arr[n], i;

    arr[0] = 1;
    arr[1] = 1;

    // creating the sequence
    for(i=0; i<n; i++)
    {
        arr[i+2] = arr[i] + arr[i+1];
    }

    // displaying the sequence
    //bu descending order
    printf("%d",arr[n-1]);
    for(i=n-2; i>=0; i--)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");

    return 0;
}

