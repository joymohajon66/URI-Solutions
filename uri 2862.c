#include <stdio.h>

int main()
{
    int n, d;

    // test case
    scanf("%d",&n);

    while(n--)
    {
        //input a integer
        scanf("%d",&d);

        // when It's over 8000 then print
        //"Mais de 8000!" otherwise "Inseto!"
        if (d>8000)
            printf("Mais de 8000!\n");
        else
            printf("Inseto!\n");
    }

    return 0;
}



