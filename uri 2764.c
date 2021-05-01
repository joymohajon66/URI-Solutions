#include <stdio.h>

int main()
{
    int i;
    char s[10];

    // input a date as a string
    scanf("%s",s);

    // displaying the date in many formate
    printf("%c%c/%c%c/%c%c\n",s[3],s[4],s[0],s[1],s[6],s[7]);
    printf("%c%c/%c%c/%c%c\n",s[6],s[7],s[3],s[4],s[0],s[1]);
    printf("%c%c-%c%c-%c%c\n",s[0],s[1],s[3],s[4],s[6],s[7]);

    return 0;
}


