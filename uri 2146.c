#include<stdio.h>

int main()
{
    int n, pass;

    // input number for end of file
    while(scanf("%d",&n)!=EOF)
    {
        // calculating password
        pass = n - 1;

        // displaying ...
        printf("%d\n",pass);
    }

    return 0;

}

