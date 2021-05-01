#include<stdio.h>
int main()
{
    int a, b, c;

    scanf("%d %d",&a, &b);

    /* calculating and displaying
    the duration of the game */

    if (a > b){
        c = 24 - a;
        printf("O JOGO DUROU %d HORA(S)\n",c+b);
    }
    else if (a < b){
        c = b - a;
        printf("O JOGO DUROU %d HORA(S)\n",c);
    }
    else
        printf("O JOGO DUROU 24 HORA(S)\n");

    return 0;
}

