#include <stdio.h>

int main()
{
    char c;
    int i=0, n, a, b;

    scanf("%d",&n);

    while(i<n)
    {
        scanf("%d %c %d",&a, &c, &b);

        if (c<97)
        {
            if(a==b)
            {
                printf("%d\n",a*b);
            }
            else
            {
                printf("%d\n",b-a);
            }
        }
        else
        {
            if(a==b)
            {
                printf("%d\n",a*b);
            }
            else
            {
                printf("%d\n",a+b);
            }
        }
        i++;
    }

    return 0;
}

