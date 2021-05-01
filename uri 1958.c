#include <stdio.h>
#include<string.h>

int main()
{
    long double n;
    char c[130];

    // inputing precision floating point
    scanf("%LE",&n);

    // converting to the scientific notation
    sprintf(c, "%LE", n);

    if (c[0]!='-')
        printf("+");

    // displaying ...
    printf("%.4LE\n",n);

    return 0;

}
