#include<stdio.h>
int main()
{
    int n, i, alc = 0, gas = 0, die = 0;

    scanf("%d",&n);

    /* counting number of
    times Alcohol, Gasoline,
    Diesel supplied  */

    while (n!=4);
    {
        if (n==1)
            al ++;
        else if (n==2)
            gas++;
        else if (n==3)
            die++;
        else if (n==4)
            break;

        scanf("%d",&n);
    }

    //displaying statistics

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",al );
    printf("Gasolina: %d\n",gas);
    printf("Diesel: %d\n",die);
    return 0;
}

