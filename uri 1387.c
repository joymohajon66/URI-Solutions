#include <stdio.h>

int main()
{
    int a, b;

    while(1)
    {
        scanf("%d %d",&a,&b);

        // exit point
        if(a==0 && b==0)
            break;

        // displaying sum of them
        printf("%d\n",a+b);
    }

    return 0;
}





