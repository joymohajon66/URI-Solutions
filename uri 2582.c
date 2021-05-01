#include <stdio.h>

int main()
{
    int n, x, y, s;

    // test case
    scanf("%d",&n);

    while(n--)
    {
        // input button's number
        scanf("%d %d",&x,&y);

        s = x + y;

        // displaying the name of the
        // song according to the sum
        if (s==0)
        {
            printf("PROXYCITY\n");
        }
        else if (s==1)
        {
            printf("P.Y.N.G.\n");
        }
        else if (s==2)
        {
            printf("DNSUEY!\n");
        }
        else if (s==3)
        {
            printf("SERVERS\n");
        }
        else if (s==4)
        {
            printf("HOST!\n");
        }
        else if (s==5)
        {
            printf("CRIPTONIZE\n");
        }
        else if (s==6)
        {
            printf("OFFLINE DAY\n");
        }
        else if (s==7)
        {
            printf("SALT\n");
        }
        else if (s==8)
        {
            printf("ANSWER!\n");
        }
        else if (s==9)
        {
            printf("RAR?\n");
        }
        else if (s==10)
        {
            printf("WIFI ANTENNAS\n");
        }
    }

    return 0;
}


