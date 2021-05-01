#include <stdio.h>

int main()
{
    int a, b, c;

    while(scanf("%d %d %d",&a, &b, &c)!=EOF)
    {
        int cnt1=0, cnt2=0;

        // here finding quantity of
        // 1 or 0 for every test case
        if(a==1 || b==1 || c==1)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }

        //printing A, B, C depend on input
        // value and quantity of 1 and 0
        if (cnt1==1)
        {
            if(a==1)
            {
                printf("A\n");
            }
            else if (b==1)
            {
                printf("B\n");
            }
            else if (c==1)
            {
                printf("C\n");
            }
        }
        else if (cnt2==1)
        {
            if(a==0)
            {
                printf("A\n");
            }
            else if (b==0)
            {
                printf("B\n");
            }
            else if (c==0)
            {
                printf("C\n");
            }
        }
        else
        {
            printf("*\n");
        }
    }

    return 0;
}





