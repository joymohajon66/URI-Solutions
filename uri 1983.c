#include<stdio.h>

int main()
{
    int n, i, x, reg;
    double y, max=0;

    scanf("%d",&n);

    /* here finding highest score and
    storing the student's registration number */

    for (i=0; i<n; i++)
    {
        scanf("%d %lf",&x,&y);

        if (max < y)
        {
            max = y;
            reg = x;
        }
    }
    // if max score is less than 8 then not
    //eligible otherwise print registration number
    if (max < 8)
        printf("Minimum note not reached\n");
    else
        printf("%d\n",reg);

    return 0;

}


