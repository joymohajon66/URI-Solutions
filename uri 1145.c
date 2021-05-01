#include<stdio.h>

int main()
{
    int i, x, y, cnt=0;

    scanf("%d %d",&x,&y);

    // displaying sequence
    printf("1");

    // counting number per line
    cnt++;

    for (i=2; i<=y; i++)
    {
        printf(" %d",i);

        cnt++;

        // if count is equal to x
        //then print new line
        if (cnt==x)
        {
            printf("\n");

            // exit point
            if (i==y)
                break;
            else
            {
                // for new line
                cnt=0;
                i++;
                printf("%d",i);
                cnt++;
            }
        }
    }

    return 0;
}

