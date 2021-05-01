#include<stdio.h>
int main()
{
    int h1, m1, h2, m2;

    int m, h;

    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);

    /* calculating and displaying
     the duration of the game */

    if (h1>h2 && m1>m2)
    {
        m=(60+m2)-m1;
        h=(24+h2)-(h1+1);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if (h1<h2 && m1<m2)
    {
        h=h2-h1;
        m=m2-m1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if (h1>h2 && m1<=m2)
    {
        m=m2-m1;
        h=(24+h2)-h1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if (h1<h2 && m1>m2)
    {
        m=(60+m2)-m1;
        h=h2-(h1+1);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if (h1==h2 && m1>m2)
    {
        m=(60+m2)-m1;
        printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n",m);
    }
    else if (h1==h2 && m1<m2)
    {
        h=h2-h1;
        m=m2-m1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if (h1<h2 && m1==m2)
    {
        h=h2-h1;
        m=m2-m1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");

    return 0;
}

