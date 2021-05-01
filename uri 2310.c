#include<stdio.h>

int main()
{
    int n, a[3], b[3], i;
    double s1,s2,s3,s4,s5,s6;
    char ch[100];

    s1=s2=s3=s4=s5=s6=0;

    // the number of players
    scanf("%d",&n);

    while(n--)
    {
        //the name of player
        scanf("%s",ch);

        /*  the numbers represent the
         service, blocks and attack
          attempts for two time */

        // should be the track of the number
        // of services, blocks and attacks
        for (i=0; i<3; i++)
        {
            scanf("%d",&a[i]);
        }
        //these services, blocks and
        // attacks that were successful.
        for (i=0; i<3; i++)
        {
            scanf("%d",&b[i]);
        }

        // calculating sum of services, blocks and
        // attacks for every players and for two time
        s1+=a[0];
        s2+=a[1];
        s3+=a[2];
        s4+=b[0];
        s5+=b[1];
        s6+=b[2];
    }
    // displaying and calculating percentage of all players
    printf("Pontos de Saque: %.2lf %%.\n",(s4 * 100) / s1);
    printf("Pontos de Bloqueio: %.2lf %%.\n",(s5 * 100) / s2);
    printf("Pontos de Ataque: %.2lf %%.\n",(s6 * 100) / s3);

    return 0;
}


