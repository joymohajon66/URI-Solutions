#include<stdio.h>

int main()
{
    int n, i;
    char str[10000];
    float len, time;

    // test case
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        // string
        scanf("%s",str);

        // length of string
        len = strlen(str);

        // calculating spent time
        time = len / 100;

        // displaying ...
        printf("%.2f\n",time);
    }


    return 0;

}


