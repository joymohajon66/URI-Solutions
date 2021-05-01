#include<stdio.h>

int main()
{
    int i, a, b, c, time[3], k;

    // input the number of peoples of 3 floors
    scanf("%d %d %d",&a,&b,&c );

    /* Every employee takes 1 minute
     to go up or down one floor */

    // for first floor, every people takes 2
    //minutes who are from second floor for
    //down and come back that means (b * 2)
    k = time[0] = b * 2 + c * 4;

    // for second floor and so on...
    time[1] = a * 2 + c * 2;

    // for third floor
    time[2] = a * 4 + b * 2;


    // finding the minimum time
    for (i=0; i<3; i++)
    {
        if (k>time[i])
        {
            k = time[i];
        }
    }

    printf("%d\n",k);

    return 0;
}


