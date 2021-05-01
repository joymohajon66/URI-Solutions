#include <stdio.h>

int main()
{
    int n, i, j, num, kg = 0;
    float preco, total = 0.0;
    char frutas[10000];

    // test case
    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        num = 0;

        // input a floating value
        scanf("%f%*c",&preco);

        // calculating total amount spent
        total += preco;

        // input a string
        scanf("%[^\n]%*c",&frutas);

        /*calculating quantity of space(ascii
         value 32) in string because of
         quantity + 1 = kg (per test case) */

        for(j = 0; frutas[j] != '\0'; j++)
        {
            if(frutas[j] == 32)
                num++;
        }

        // calculating amount of kg
        kg += num+1;

        // displaying amount of kg per day
        printf("day %d: %d kg\n",i+1,num+1);
    }

    // displaying average
    printf("%.2f kg by day\n",(float)kg/n);
    printf("R$ %.2f by day\n",total/n);
    return 0;
}
