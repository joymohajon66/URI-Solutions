#include<stdio.h>
#include<math.h>

int main()
{
    int n, p, i, s, sub;

    scanf("%d %d",&p, &n);
    int arr[n];

    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    /* calculating the difference
    of the consecutive pipes to
    see if the difference is
    greater than the jump height
    of the frog then print "game
    over" other wise print "you win"  */

    for (i=0; i<n-1; i++)
    {
        s = arr[i] - arr[i+1];

        // to make positive value
        sub = abs(s);

        if (sub > p)
        {
            printf("GAME OVER\n");
            break;
        }
    }
    if (sub<=p)
        printf("YOU WIN\n");

    return 0;

}


