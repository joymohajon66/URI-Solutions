#include <stdio.h>

int main()
{
    int n, i, j;

    while(scanf("%d",&n)!=EOF)
    {
        int arr[n], temp[n], flag=0;
        char ch[n][20];

        // input a string and expiration date
        for(i=0; i<n; i++)
        {
            scanf("%s %d",ch[i],&arr[i]);
            temp[i] = arr[i];
        }

        // sorting the array
        //values(expiration dates)
        //by ascending order
        for(i=0; i<n; i++)
        {
            for (j=0; j<n; j++)
            {
                if(arr[i]<arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        // displaying a sequence of string depend
        // on sorting array(expiration dates)
        for(i=0; i<n; i++)
        {
            for (j=0; j<n; j++)
            {
                if (arr[i] == temp[j])
                {
                    if (flag==0)
                    {
                        // for first string
                        // without a space
                        printf("%s",ch[j]);
                        flag = 1;
                    }
                    else
                    {
                        printf(" %s",ch[j]);
                    }
                }
            }
        }
        printf("\n");
    }

    return 0;
}



