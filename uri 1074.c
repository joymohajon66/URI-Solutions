#include<stdio.h>

int main()
{
    int n,i,s;


    scanf("%d",&n);

    for (i=0; i<n; i++){{

        scanf("%d",&s);

        // displaying which catagorize
        //deserve this value

        if (s>0 && s%2==0)
            printf("EVEN POSITIVE\n");
        else if (s<0 && s%2==0)
            printf("EVEN NEGATIVE\n");
        else if (s<0 && s%2!=0)
            printf("ODD NEGATIVE\n");
        else if (s>0 && s%2!=0)
            printf("ODD POSITIVE\n");
        else
            printf("NULL\n");
    }

    return 0;
}

