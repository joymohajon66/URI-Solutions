#include<stdio.h>
#include<string.h>

int main()
{
    int i, j, len;
    char ch[20];

    // input the number as a string
    scanf("%s",ch);

    // find out the length of the string
    len = strlen(ch);

    // displaying the string reversely
    for (i=len-1; i>=0; i--)
       printf ("%c",ch[i]);

    printf("\n");


    return 0;

}


