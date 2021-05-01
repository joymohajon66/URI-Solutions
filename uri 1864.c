#include<stdio.h>

int main()
{
    int n, i;

    char ch[35];

    // string copy to a character arrays
    strcpy(ch,"LIFE IS NOT A PROBLEM TO BE SOLVED");

    while (scanf("%d",&n)!=EOF)
    {
        // displaying i'th character according to string
        for (i=0; i<n; i++)
        {
            printf("%c",ch[i]);
        }
        printf("\n");
    }
    return 0;
}


