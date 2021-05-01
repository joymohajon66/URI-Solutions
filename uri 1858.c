#include<stdio.h>

int main()
{
    int n, t, min, i, store;

    // possible highest value of t
    min = 20;

    scanf("%d",&n);

    // finding minimum value of the
    //number of times and the
    //number of the person
    for (i=1; i<=n; i++)
    {
        // input the number of times
        scanf("%d",&t);

        /* if input value is less
         than form the possible
         highest value then store
        the number of the person  */
        if (t < min)
        {
            min = t;
            store = i;
        }
    }
    // displaying the number of person
    printf("%d\n",store);

    return 0;
}

