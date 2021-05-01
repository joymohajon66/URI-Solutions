#include<stdio.h>

int main()
{
    int n, i, flag = 0;

    //number of landscape measures
    scanf("%d", &n);

    int h[n];

    // input height of measure
    for (i = 0; i < n; i++)
        scanf("%d", &h[i]);

    if (n > 2)
    {
        /* if neighbor height of any mid height
        in the 1D array aren't greater or less than
        mid height then break the loop and print
         0 because of flag = 1 */
        for (i = 1; i+1 < n; i++)
        {
            if(!((h[i] > h[i-1] && h[i] > h[i+1]) || (h[i] < h[i-1] && h[i] < h[i+1])))
            {
                flag = 1;
                break;
            }
        }
    }
    else
    {
        // if it havc only two heights
        if (h[1] == h[0])
            flag = 1;
    }

    // if the heights of measure are
    //follow the pattern then print
    // 1 otherwise print 0;
    if(flag == 0)
       printf("1\n");
    else
        printf("0\n");

    return 0;
}


