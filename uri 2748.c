#include <stdio.h>

int main()
{
    int i, j;

    /* displaying a structure according
     to question's requirements */

     // for first line
    for (i=0; i<39; i++)
    {
        printf("-");
    }
    printf("\n");

     // for second to six line...
    for (j=0; j<5; j++)
    {
        if (j==0)
        {
            // displaying second line
            //with a string "Roberto".
            for (i=0; i<39; i++)
            {
                if (i==0 || i==38)
                {
                    printf("|");
                }
                else if (i==9)
                {
                    printf("Roberto");
                    i+=6;
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        else if (j==2)
        {
            // displaying 4'th line
            //with a string "5786".
            for (i=0; i<39; i++)
            {
                if (i==0 || i==38)
                {
                    printf("|");
                }
                else if (i==9)
                {
                    printf("5786");
                    i+=3;
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }

        else if (j==4)
        {
            // displaying 6'th line
            //with a string "UNIFEI".
            for (i=0; i<39; i++)
            {
                if (i==0 || i==38)
                {
                    printf("|");
                }
                else if (i==9)
                {
                    printf("UNIFEI");
                    i+=5;
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        else
        {
            // otherwise displaying space..
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
    }
    // and displaying last line...
    for (i=0; i<39; i++)
    {
        printf("-");
    }
    printf("\n");


    return 0;
}



