#include<stdio.h>

int main()
{
    int i, j, l, n;
    double d, a[7], s=0, max, min;
    char ch[100];

    //the number of divers
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        // competitor's name and degree
        scanf("%s %lf",ch,&d);

        // first score...
        scanf("%lf",&a[0]);

        max = a[0];
        min = a[0];

        // input next scores and
        // find out max score
        for (j=1; j<7; j++)
        {
            scanf("%lf",&a[j]);

            if (max<a[j])
            {
                max=a[j];
            }
        }
        // find out min score
        for (j=1; j<7; j++)
        {
            if (min>a[j])
            {
                min=a[j];
            }
        }
        // calculating sum of all scores
        //except max and min score
        for (l=0; l<7; l++)
        {
            if (a[l]==max || a[l]==min)
            {
                continue;
            }
            else
                s += a[l];
        }
        // displaying the final
        // score with their name
        printf("%s %.2lf\n",ch,s*d);

        s=0;
    }
    return 0;
}

