#include <stdio.h>

int main()
{
    int i;
    char cr[10][35];

    // input 10 name
    for (i=0; i<10; i++)
    {
        scanf("%s",cr[i]);
    }

    // print 3'th name
    printf("%s\n",cr[2]);
    // print 7'th name
    printf("%s\n",cr[6]);
    // print 9'th name
    printf("%s\n",cr[8]);

    return 0;
}


