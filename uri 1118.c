#include<stdio.h>

int main()
{
    int cnt=0, key=1;
    double n, sum=0;

    while(1)
    {
        /* For switch...case statement,
        case 1 means a new calculation
        and display,case 2 means that
        the execution must be finished. */

        switch(key)
        {
        case 1:
        {
            while(scanf("%lf",&n))
            {
                /* while find out 2 valid integer
                then print average of them  */

                if (n<0 || n>10)
                   printf("nota invalida\n");

                else
                {
                    //count valid value
                    cnt++;
                    // calculate average
                    sum=sum+n;
                    // displaying and break the loop
                    if (cnt==2)
                    {
                        printf("media = %.2lf\n",sum/2);
                        printf("novo calculo (1-sim 2-nao)\n");
                        break;
                    }
                }
            }
            sum=0, cnt=0;
            break;
        }
        case 2 :
            exit(1);
        default :
            printf("novo calculo (1-sim 2-nao)\n");
        }
        scanf("%d",&key);
    }

    /// OR ///

    /*
        while (1)
        {
            scanf("%lf",&n);
            if (0<=n && n<=10)
            {
                cnt++;
                sum+=n;
                if (cnt==2)
                {
                    printf("media = %.2lf\n",sum/2);
                    sum=0;
                    cnt=0;
                    break;
                }
            }
            else printf("nota invalida\n");
        }

        scanf("%d",&key);
        printf("novo calculo (1-sim 2-nao)\n");
        while (1)
        {
            scanf("%d",&key);
            printf("novo calculo (1-sim 2-nao)\n");
            if (key==1)
            {
                while (1)
                {
                    scanf("%lf",&n);
                    if (0<=n && n<=10)
                    {
                        cnt++;
                        sum+=n;
                        if (cnt==2)
                        {
                            printf("media = %.2lf\n",sum/2);
                            sum=0;
                            cnt=0;
                            break;
                        }
                    }
                    else printf("nota invalida\n");
                }
            }
            else if (key==2)break;
        }
      */
    return 0;
}
