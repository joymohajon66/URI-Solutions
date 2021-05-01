#include<stdio.h>

int main()
{
    int n, i, a, b, cnt;
    double c, d;

    //test case
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        cnt=0;

        scanf("%d %d %lf %lf",&a,&b,&c,&d);

        // finding how many years need
        // for A to be getter than B
        while (a<=b)
        {
            // calculating population of A
            a = a + (a * (c / 100));

            // calculating population of B
            b = b + (b * (d / 100));

            // counting years
            cnt++;

            if (cnt>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }

        if (cnt<=100)
            printf("%d anos.\n",cnt);

    }
    return 0;
}

