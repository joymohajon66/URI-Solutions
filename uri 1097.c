#include<stdio.h>

int main()
{
    int i,s[3],j;

    // constant values
        s[0]=7;
        s[1]=6;
        s[2]=5;

    /* in this sequence j is increasing
    by 2 for the every odd values of i */

    // for the odd values
    for (i=1; i<10; i=i+2)
    {
        for (j=0; j<3; j++)
            printf("I=%d J=%d\n",i,s[j]);

        // increasing by 2
        s[0]=s[0]+2;
        s[1]=s[1]+2;
        s[2]=s[2]+2;
    }
    return 0;
}

