#include<stdio.h>
int main()
{
    int n, i;
    while(1)
    {
        scanf("%d",&n);

        /*displaying "Acesso Permitido"
        if find out password otherwise
            "Senha Invalida" */

        if (n==2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
            printf("Senha Invalida\n");
    }
    return 0;

}
