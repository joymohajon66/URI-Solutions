#include<stdio.h>

int main()
{
    int n, i, len;
    char s, str[100];

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        // input a string
        scanf("%s",str);

        // find out length of the string
        len = strlen(str);

        // considering whether the length
        // is greater than 25 or not
        if(0<=len && len<=25)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}

