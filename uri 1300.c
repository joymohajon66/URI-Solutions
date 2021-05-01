#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while(scanf("%d",&n)!=EOF)
    {
        /* find out whether the
        input value is divided by 6 */

        if(n%6==0)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}




