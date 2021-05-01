#include<stdio.h>
int main()
{
    int i, cnt = 0;
    float x, sum = 0, d;

    for (i=0; i<6; i++)
    {
        scanf("%f",&x);
        if (x>0)
        {
            //calculating quantity
            //of positive numbers
            cnt++;
            sum=sum+x;
        }
    }
    // calculating average positive numbers
    d = sum/cnt;

    //displaying the amount of positive numbers
    //and the average of the positive values

    printf("%d valores positivos\n",n);
    printf("%.1f\n",d);

    return 0;
}
