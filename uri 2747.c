#include <stdio.h>

int main()
{
    int i, j;

    /* There is no input.
    Displaying a structure ...  */

    // for first line
    for (i=0; i<39; i++)
    {
        printf("-");
    }
    printf("\n");

    // for second to six line...
    for (j=0; j<5; j++)
    {
        for (i=0; i<39; i++)
        {
            if (i==0 || i==38)
            {
                printf("|");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

     // and last line..
    for (i=0; i<39; i++)
    {
        printf("-");
    }
    printf("\n");

    return 0;
}


