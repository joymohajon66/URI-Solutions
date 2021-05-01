#include<stdio.h>
int main()
{
    int n, i, j;

    // input array size
    while(scanf("%d",&n)!=EOF)
    {
        int ar[n], br[n];

        // input first array values
        for(i=0; i<n; i++)
        {
            scanf("%d",&ar[i]);
        }

        // input second array values
        for(i=0; i<n; i++)
        {
            scanf("%d",&br[i]);
        }

        int k, l, t, count=0;

        //calculating the minimum
        //number of overtakes
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(ar[i]==br[j])
                {
                    k = j;
                    break;
                }
            }
            for(l=0; l<i; l++)
            {
                for(t=k+1; t<n; t++)
                {
                    if(ar[l]==br[t])
                        count++;
                }
            }
        }

        // displaying number of overtakes
        printf("%d\n",count);
    }
    return 0;
}
