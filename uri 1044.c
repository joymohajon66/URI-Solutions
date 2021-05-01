#include<stdio.h>

int main()
{
    int a, b;

    scanf("%d %d",&a, &b);

    /* if they are multiples then
     displaying "Sao Multiplos"
     otherwise "Nao sao Multiplos" */

    if(b % a == 0 || a % b == 0)

        printf("Sao Multiplos\n");

    else

        printf("Nao sao Multiplos\n");


    return 0;
}

