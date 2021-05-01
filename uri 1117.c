#include<stdio.h>

int main()
{
    int i, t=0;
    float n, s=0;

    while(1)
    {
        scanf("%f",&n);

        /* while find out 2 valid integer
        then print average of them  */

        if (d<0 || d>10)
            printf("nota invalida\n");
        else
        {
            //count valid value
            t++;
            // calculate average
            s=s+n;
            // displaying and exit
            if (t==2)
            {
                printf("media = %.2f\n",s / 2);
                break;
            }
        }

    }
    return 0;

}
