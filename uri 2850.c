#include <stdio.h>

int main()
{
    char sr[10];

    while(gets(sr))
    {
        // displaying a string
        //according to question
        if (sr[0]=='e')
        {
            printf("ingles\n");
        }
        else if (sr[0]=='d')
        {
            printf("frances\n");
        }
        else if(sr[0]=='n')
        {
            printf("portugues\n");
        }
        else if (sr[0]=='a')
        {
            printf("caiu\n");
        }
    }
    return 0;
}


