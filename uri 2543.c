#include <stdio.h>

int main()
{
    int m, n, i;

    while(scanf("%d %d",&m,&n)!=EOF)
    {
        int x[m], y[m], cnt=0;

        //the number of gameplays
        // and university ID
        for (i=0; i<m; i++)
        {
            scanf("%d %d",&x[i],&y[i]);
        }

        // counting the number of videos
        // that was playing by me
        for (i=0; i<m; i++)
        {
            if (x[i]==n && y[i]==0)
            {
                cnt++;
            }
        }

        printf("%d\n",cnt);
    }
    return 0;
}


