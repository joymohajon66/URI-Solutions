#include<stdio.h>
#include<string.h>

int main()
{
    int n,i;
    char plyr1[10],plyr2[10];

    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        scanf("%s",plyr1);
        scanf("%s",plyr2);

        // displaying decision according to
        // the rules to determine a winner
        if (plyr1[1]=='t')
        {
            if (plyr2[1]=='e' || plyr2[1]=='a')
            {
                printf("Jogador 1 venceu\n");
            }
        }
        else if (plyr1[1]=='a' || plyr1[1]=='e')
        {
            if (plyr2[1]=='t')
            {
                printf("Jogador 2 venceu\n");
            }
        }
        if (plyr1[1]=='e'&& plyr2[1]=='a')
            printf("Jogador 1 venceu\n");
        if (plyr1[1]=='a' && plyr2[1]=='e')
            printf("Jogador 2 venceu\n");
        if (plyr1[1]=='a' && plyr2[1]=='a')
            printf("Ambos venceram\n");
        if (plyr1[1]=='e' && plyr2[1]=='e')
            printf("Sem ganhador\n");
        if (plyr1[1]=='t' && plyr2[1]=='t')
            printf("Aniquilacao mutua\n");
    }
    return 0;
}

,
