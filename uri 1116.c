#include<stdio.h>

int main()
{
    int n, i;
    float x, y;

    // test case
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        scanf("%f %f",&x,&y);

        /* calculating division between them,
        if it is possible so displaying the
        result of this division otherwise
        print “divisao impossivel” */

        // it is not possible if y will 0
        if (y==0)
            printf("divisao impossivel\n");
        else
            printf("%.1f\n",x/y);

    }


    return 0;

}


