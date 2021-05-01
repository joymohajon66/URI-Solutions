#include<stdio.h>

int main()
{
    int i, s;
    double a, b, c, d;

    //input test case
    scanf("%d",&s);

    for(i=0; i<s; i++)
    {
        //input 3 floating values
        scanf("%lf %lf %lf",&a,&b,&c);

        //calculating average which weights are 2, 3, 5
        d=(a*2+b*3+c*5);

        //displaying the weighted average
        printf("%.1lf\n",d/10);
    }
    return 0;
}
