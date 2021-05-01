#include<stdio.h>
int main()
{
    int i, s[3], j;

    // constant values
        s[0]=7;
        s[1]=6;
        s[2]=5;

     /* in the sequence j = 7, 6, 5 for the
    every odd value of i while i less then 10 */

    // for the odd value
    for (i=1; i<10; i=i+2)
    {
        // for the constant value of j
        for (j=0; j<3; j++)
        {
            //displaying sequence
            printf("I=%d J=%d\n",i,s[j]);
        }
    }
    return 0;
}

