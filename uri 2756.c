#include <stdio.h>

int main()
{
    int i, j;

    // displaying a structure
    for (i=0; i<10; i++)
    {
        if (i==0)
        {
            for (j=0; j<8; j++)
            {
                if (j==7)
                    printf("A\n");
                else
                    printf(" ");
            }
        }
        else if (i==1)
        {
            for (j=0; j<7; j++)
            {
                if (j==6)
                    printf("B B\n");
                else
                    printf(" ");
            }
        }
        else if (i==2)
        {
            for (j=0; j<6; j++)
            {
                if (j==5)
                    printf("C   C\n");
                else
                    printf(" ");
            }
        }
        else if (i==3)
        {
            for (j=0; j<5; j++)
            {
                if (j==4)
                    printf("D     D\n");
                else
                    printf(" ");
            }
        }
        else if (i==4)
        {
            for (j=0; j<4; j++)
            {
                if (j==3)
                    printf("E       E\n");
                else
                    printf(" ");
            }
        }
        else if (i==5)
        {
            for (j=0; j<5; j++)
            {
                if (j==4)
                    printf("D     D\n");
                else
                    printf(" ");
            }
        }
        else if (i==6)
        {
            for (j=0; j<6; j++)
            {
                if (j==5)
                    printf("C   C\n");
                else
                    printf(" ");
            }
        }
        else if (i==7)
        {
            for (j=0; j<7; j++)
            {
                if (j==6)
                    printf("B B\n");
                else
                    printf(" ");
            }
        }
        else if (i==9)
        {
            for (j=0; j<8; j++)
            {
                if (j==7)
                    printf("A\n");
                else
                    printf(" ");
            }
        }
    }
    return 0;
}



