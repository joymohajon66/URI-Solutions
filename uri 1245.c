#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    int i, j;

    // input array size
    while(scanf("%d",&n)!=EOF)
    {
        int ar[n];
        char st[n];

        // input array's values
        for(i=0; i<n; i++)
        {
            scanf("%d %c",&ar[i], &st[i]);
        }

        int cnt=0;

        //calculating pairs of boots
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if (ar[i]==ar[j])
                {
                    if(st[i]=='E' && st[j] == 'D' || st[j]=='E' && st[i] == 'D')
                    {
                        //counting pair
                        cnt++;
                        // not for again count
                        st[j]='A';
                        break;
                    }
                }
            }
        }
        //displaying
        printf("%d\n",cnt);
    }

    return 0;;
}

