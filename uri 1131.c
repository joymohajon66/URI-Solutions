#include<stdio.h>

int main()
{
    int a, b, test=0, n = 1;

    int cnt1=0, cnt2=0, cnt3=0;

    //display statistics of counting
    // win and drow match

    while (n!=2)
    {
        scanf("%d %d",&a,&b);

        //How many GRENAIS were part of the statistics.
        test++;

        if (a>b)
        //The number of victories of Inter.
            cnt1++;

        else if (a<b)
        //The number of victories of Gremio.
            cnt2++;

        else if (a==b)
        // The number of Draws.
            cnt3++;

        printf("Novo grenal (1-sim 2-nao)\n");

        scanf("%d",&n);
    }

    printf("%d grenais\n",test);
    printf("Inter:%d\n",cnt1);
    printf("Gremio:%d\n",cnt2);
    printf("Empates:%d\n",cnt3);

    if (cnt1>cnt2)

        printf("Inter venceu mais\n");

    else if (cnt1<cnt2)

        printf("Gremio venceu mais\n");

    else

        printf("Não houve vencedor\n");


    return 0;
}

