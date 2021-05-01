#include<stdio.h>
int main()
{
    int n=0,i,x;

    for (i=0; i<5; i++)
    {
        scanf("%d",&x);

        //calculating quantity
        //of even numbers

        if (x%2==0)
            n++;
    }

    // displaying quantity of even number
    printf("%d valores pares\n",n);

    return 0;
}
