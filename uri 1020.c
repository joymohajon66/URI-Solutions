#include<stdio.h>

int main()
{
    int a, b1, b, c, n;

    scanf("%d",&n);

    /* calculating and displaying
     years, months and days */

    a = n / 365;
    printf("%d ano(s)\n",a);

    b1 = n % 365;
    b = b1 / 30;
    printf("%d mes(es)\n",b);

    c = b1 % 30;
    printf("%d dia(s)\n",c);

    return 0;
}
