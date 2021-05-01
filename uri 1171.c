#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, cnt;

    scanf("%d",&n);

    int ar[n];

    // input array values
    for(i=0; i<n; i++)
        scanf("%d",&ar[i]);

    // find ascending order of arrays
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(ar[i]<ar[j])
            {
               int temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }

    j=0;
    i=0;

    while(i<n)
    {
        cnt=0;

        /* calculating and displaying quantity of
        same values in ascending order of array */
        while(1)
        {
            //find out same values
            if (ar[i]==ar[j])
            {
                //counting same values
                cnt++;
                //increasing array
                j++;
            }
            else
            {
                //displaying quantity of same values
                printf("%d aparece %d vez(es)\n",ar[i],cnt);
                break;
            }
        }
        i = j;
    }

    return 0;
}


