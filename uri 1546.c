#include <stdio.h>

int main()
{
    int n, i, j, k;

    // test case
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        //  the number of feedbacks
        scanf("%d",&k);

        int arr[k];
        // input some integer
        for(j=0; j<k; j++)
        {
            scanf("%d",&arr[j]);
        }

        // displaying name according to the question
        for(j=0; j<k; j++)
        {
            if(arr[j]==1)
            {
                printf("Rolien\n");
            }
            else if (arr[j]==2)
            {
                printf("Naej\n");
            }
            else if (arr[j]==3)
            {
                printf("Elehcim\n");
            }
            else if (arr[j]==4)
            {
                printf("Odranoel\n");
            }
        }

    }

    return 0;
}


