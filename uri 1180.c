#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, x[1002], s=0, posi;

    // test case
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        scanf("%d",&x[i]);

        // find out smallest value
        if (s>x[i])
        {
            s = x[i];
            //storing position
            posi =  i;
        }
    }
    // displaying value withe it's position
    printf("Menor valor: %d\nPosicao: %d\n",s,posi);


    return 0;
}



