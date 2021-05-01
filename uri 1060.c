#include<stdio.h>
int main()
{
    int n=0, i;
    float x;

    /* find out and displalying
    quantity of positive numbers */

    for (i=0; i<6; i++)
    {
        scanf("%f",&x);

        if (x>0) n++;
    }

    printf("%d valores positivos\n",n);

    return 0;
}

