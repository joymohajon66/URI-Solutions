#include<stdio.h>
#include<string.h>

int main()
{
    int i, n, d=0;

    char c1[8],c2[8];

    scanf("%d",&n);

    // displaying decision according to the question
    for (i=1; i<=n; i++)
    {
        // input two word
        scanf("%s %s",c1,c2);

        //strcmp() function use to find
        //whether two string are same

        if (strcmp(c1,c2)==0)
            printf("Caso #%d: De novo!\n",i);
        else if (strcmp(c1,"tesoura")==0)
        {
            if (strcmp(c2,"papel")==0 || strcmp(c2,"lagarto")==0)
                printf("Caso #%d: Bazinga!\n",i);
            else if (strcmp(c2,"Spock")==0 || strcmp(c2,"pedra")==0)
                printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if (strcmp(c1,"papel")==0)
        {
            if (strcmp(c2,"pedra")==0 || strcmp(c2,"Spock")==0)
                printf("Caso #%d: Bazinga!\n",i);
            else if (strcmp(c2,"tesoura")==0 || strcmp(c2,"lagarto")==0)
                printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if (strcmp(c1,"pedra")==0)
        {
            if (strcmp(c2,"lagarto")==0 || strcmp(c2,"tesoura")==0)
                printf("Caso #%d: Bazinga!\n",i);
            else if (strcmp(c2,"papel")==0 || strcmp(c2,"Spock")==0)
                printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if (strcmp(c1,"lagarto")==0)
        {
            if (strcmp(c2,"Spock")==0 || strcmp(c2,"papel")==0)
                printf("Caso #%d: Bazinga!\n",i);
            else if (strcmp(c2,"pedra")==0 || strcmp(c2,"tesoura")==0)
                printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if (strcmp(c1,"Spock")==0)
        {
            if (strcmp(c2,"tesoura")==0 || strcmp(c2,"pedra")==0)
                printf("Caso #%d: Bazinga!\n",i);
            else if (strcmp(c2,"papel")==0 || strcmp(c2,"lagarto")==0)
                printf("Caso #%d: Raj trapaceou!\n",i);
        }
    }

    return 0;
}

