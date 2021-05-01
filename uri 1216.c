#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cnt=0;
    char arr[100];
    double n, sum=0;

    // calculating sum of distance
    while(gets(arr))
    {
        scanf("%lf",&n);
        sum += n;
        cnt++;
    }

    // displaying average of distance
    printf("%.1lf\n",sum/cnt);

    return 0;
}





