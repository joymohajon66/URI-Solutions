#include<stdio.h>

int main()
{
    int n, i=4, cnt=0;
    int arr[1000], j=2, temp=5;

    // first and second fibonacci number
    arr[0]=3, arr[1]=5;

    scanf("%d",&n);

    while(1)
    {

        if(i<temp)
        {
            // counting the integers of fibonot
            //sequence until the expected
            //fibonot number is found
            cnt++;
            if(cnt == n)
            {
                // found and displaying
                // n'th fibonot integer
                printf("%d\n",i);
                break;
            }
        }
        else
        {
            // creating Fibonacci sequence and
            //storing each fibonacci number to
            //find out the expected fibonot number
            temp = arr[j++] = arr[j-2] + arr[j-1];
        }
        i++;
    }


    return 0;
}




