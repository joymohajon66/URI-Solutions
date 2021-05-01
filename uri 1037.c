#include<stdio.h>

int main()
{
    float a;

    //input floating number

    scanf("%f",&a);

    //condition apply :
    /* whether the number belongs to:
    [0,25] (25,50], (50,75], (75,100]
    otherwise displaying "Fora de intervalo"  */

    if (0.0000 <= a && a <= 25.0000)
        printf("Intervalo [0,25]\n");

    else if (25.0000 < a && a <= 50.0000)
        printf("Intervalo (25,50]\n");

    else if (50 < a && a <= 75)
        printf("Intervalo (50,75]\n");

    else if (75.0000 < a && a <= 100.0000)
        printf("Intervalo (75,100]\n");

    else
        printf("Fora de intervalo\n");

    return 0;
}



