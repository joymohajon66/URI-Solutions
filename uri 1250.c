#include <stdio.h>

int main()

{
    int n, s, i, j, cnt;

    // test case
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        // array size
        scanf("%d",&s);

        int arr[s], cnt=0;
        char st[s];

        // input array's values
        for(j=0; j<s; j++)
        {
            scanf("%d",&arr[j]);
        }

        // input string
        scanf("%s",st);

        // calculating number of hits
        for(j=0; j<s; j++)
        {
            // condition for stand
            if(st[j]=='S')
            {
                if(arr[j]<3)
                    // counting hits
                    cnt++;
            }
            else
            {
                // condition for jumps
                if(arr[j]>2)
                    cnt++;
            }
        }
        // displaying number of hits
        printf("%d\n",cnt);
    }

    return 0;
}

