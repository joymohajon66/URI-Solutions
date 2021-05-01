#include<stdio.h>

int main()
{

    int s=0, n, i;

    char str[100];

    // indicate how many string will take input
    scanf("%d%*c",&n);

    // input string
    while (n--)
    {
        gets(str);
    }

    // displaying the name of the course
    printf("Ciencia da Computacao\n");

    return 0;
}
