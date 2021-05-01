#include<stdio.h>

int main()
{
    int mnth, day, x, i;
    //all months of 2016 years except decenber
    int months[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};

    while(scanf("%d %d",&mnth,&day)!=EOF)
    {
        /* displaying massage for this conditions
        when month is 12 but day is greater than
        25 and equal to 25 and also day is 24  */

        if (mnth==12 && day==25)
        {
            printf("E natal!\n");
        }
        else if (mnth==12 && day>25)
        {
            printf("Ja passou!\n");
        }
        else if (mnth==12 && day==24)
        {
            printf("E vespera de natal!\n");
        }
        else
        {
            /* here calculating days when month is not 12 */

            x = months[mnth - 1] - day;

            // calculating days between mnth and November
            for (i=mnth; i<11; i++)
            {
                x += months[i];
            }
            // then added extra 25 days of December month
            x += 25;

            printf("Faltam %d dias para o natal!\n",x);
        }
    }
    return 0;
}


