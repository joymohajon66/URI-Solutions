#include<stdio.h>
#include<math.h>

int main()
{
    int n, x, i, j=0, s=0;

    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        scanf("%d",&x);

        /* couting input values that are
        in the interval [10,20] and out
        of the interval. */

        if (10<=x && x<=20)
            j++;
        else if (10>x || x>20)
            s++;

    }

    //displaying counting values
    printf("%d in\n",j);
    printf("%d out\n",s);

    return 0;
}

