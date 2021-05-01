#include<stdio.h>
#include<string.h>

int main()
{
    int n, mg, amount;
    char str[100];

    // test case
    while(scanf("%d",&n))
    {
        int i, sum=0;

        if(n==0)
            break;

        for(i=0; i<n; i++)
        {
            // the amount of food
            scanf("%d ",&amount);

            // name of the food
            gets(str);

            // calculating total milligram
            // of vitamins for each food
            if(str[0]=='s')
            {
                mg = 120 * amount;
            }
            else if((str[5]=='g') || (str[2]=='m'))
            {
                mg = 85 * amount;
            }
            else if(str[0]=='g')
            {
                mg = 70 * amount;
            }
            else if(str[2]=='n')
            {
                mg = 56 * amount;
            }
            else if(str[0]=='l')
            {
                mg = 50 * amount;
            }
            else if(str[2]=='o')
            {
                mg = 34 * amount;
            }
            // calculati
            ng the sum of
            // all measure of vitamins
            sum += mg;
        }

        // considering and displaying about
        // recommended vitamin(110-130)
        if(sum>130)
        {
            // displaying how much more
            //than the recommended vitamin
            printf("Menos %d mg\n",sum-130);
        }
        else if(sum<110)
        {
            // displaying how much less
            //than the recommended vitamin
            printf("Mais %d mg\n",110-sum);
        }
        else
        {
            // between recommended vitamin
            printf("%d mg\n",sum);
        }
    }

    return 0;
}


