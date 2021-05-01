#include<stdio.h>
int main()
{
    double n;
    int a,b,c,x,e,f,g,s,l,k,m,h,j;

    /* calculating and displaying the minimum
    quantity of banknotes and coins  */

    scanf("%lf",&n);

    //this part of banknotes

    printf("NOTAS:\n");
     a = n * 100;
    b = a / 10000;
    printf("%d nota(s) de R$ 100.00\n",b);

    b = a % 10000;
    c = b / 5000;
    printf("%d nota(s) de R$ 50.00\n",c);

    c = b % 5000;
    x = c / 2000;
    printf("%d nota(s) de R$ 20.00\n",x);

    x = c % 2000;
    e = x / 1000;
    printf("%d nota(s) de R$ 10.00\n",e);

    e = x % 1000;
    f = e / 500;
    printf("%d nota(s) de R$ 5.00\n",f);

    f = e % 500;
    g = f / 200;
    printf("%d nota(s) de R$ 2.00\n",g);

    //this part of coins

    printf("MOEDAS:\n");
    g = f % 200;
    s = g / 100;
    printf("%d moeda(s) de R$ 1.00\n",s);

    s = g % 100;
    l = s / 50;
    printf("%d moeda(s) de R$ 0.50\n",l);

    l = s % 50;
    k = l / 25;
    printf("%d moeda(s) de R$ 0.25\n",k);

    k = l % 25;
    m = k / 10;
    printf("%d moeda(s) de R$ 0.10\n",m);

    m = k % 10;
    h = m / 5;
    printf("%d moeda(s) de R$ 0.05\n",h);

    h = m % 5;
    j = h / 1;
    printf("%d moeda(s) de R$ 0.01\n",j);

    return 0;
}
