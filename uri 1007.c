#include<stdio.h>

int main()
{
    int A,B,C,D,DIFERENCA;

    //input 4 integer number
    scanf("%d %d %d %d",&A,&B,&C,&D);

    //calculating difference of products
    DIFERENCA = A * B - C * D;

    //displaying difference
    printf("DIFERENCA = %d\n", DIFERENCA);

    return 0;
}

