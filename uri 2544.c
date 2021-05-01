#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    while(scanf("%d",&n)!=EOF)
    {
        // calculating and displaying the
        //number of times using log2 function
        int a = log2(n);
        printf("%d\n",a);
    }
    return 0;
}


