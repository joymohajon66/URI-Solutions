#include<stdio.h>
int main()
{
    int cnt1=0, cnt2=0, cnt3=0, cnt4=0;
    int i, x;

    for (i=0; i<5; i++)
    {
        scanf("%d",&x);

        //calculating quantity of even, add,
        // positive and negetive numbers

        if (x%2==0 || x==0)
            cnt1++;

        if (x%2!=0)
            cnt2++;

        if (x>0)
            cnt3++;

        if (x<0)
            cnt4++;
    }

    // displaying quantity of every format

    printf("%d valor(es) par(es)\n",cnt1);
    printf("%d valor(es) impar(es)\n",cnt2);
    printf("%d valor(es) positivo(s)\n",cnt3);
    printf("%d valor(es) negativo(s)\n",cnt4);

    return 0;
}

