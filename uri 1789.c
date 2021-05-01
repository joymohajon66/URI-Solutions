#include<stdio.h>

int main()
{
    int d, n, s=0, i;
    while (scanf("%d",&n)!=EOF)
    {
        s=0;
        // finding MAX value in the series
        for (i=0; i<n; i++)
        {
            scanf("%d",&d);
            if (s<d)
                s=d;
        }
        //displaying 1, 2, 3 according to the question
        if (s<10)
            printf("1\n");
        else if (s>=10 && s<20)
            printf("2\n");
        else
            printf("3\n");

    }
    return 0;
}

