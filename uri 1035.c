#include<stdio.h>

int main()
{
    int a, b, c, d;

    //input 4 integer value
    scanf("%d %d %d %d",&a, &b, &c, &d);

    /* Either condition is true then displaying
    “Valores aceitos” otherwise displaying
    “Valores nao aceitos” */

    if (b > c && d > a && c + d > a + b && (c, d > 0) && a % 2 == 0)
       printf("Valores aceitos\n");
    else
       printf("Valores nao aceitos\n");

    return 0;
}
