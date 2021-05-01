#include<stdio.h>

int main()
{
    int len;
    char str[510];

    // input string
    gets(str);

    // find out length of the string
    len = strlen(str);

    // displaying depend on this decision,
    // is it possible to tweet or not possible
    if (len<=140)
        printf("TWEET\n");
    else
        printf("MUTE\n");

    return 0;
}


