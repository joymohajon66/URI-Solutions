#include <stdio.h>

int main()
{
    double n, ans = 0.0;

    // n means number of
    //repetition of formula
    scanf("%lf", &n);

    // Here 6, 3 are come from
    //the formula of question
    while(n--)
    {
        ans+=6;
        ans = 1.0/ans;
    }
    ans += 3;

    printf("%.10lf\n", ans);

    return 0;
}

