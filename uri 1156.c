#include<stdio.h>

int main()
{

    float s=0, d, i=1, j;

    // calculating sum of sequence
    for (j=1; j<=39; j+=2)
    {
        d=j/i;
        s=s+d;
        i=i+i;
    }
    printf("%.2f\n",s);


    return 0;
}

