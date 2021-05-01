#include<stdio.h>

int main()
{
    int n, s=0, i;

    //input value
    for (i=0; i<4; i++)
    {
        scanf("%d",&n);
        // calculating sum of
        //the all inputed values
        s += n;
    }

    //subtract 3 from the sum
    s = s - 3;

    // displaying the maximum number
    printf("%d\n",s);

    return 0;
}


