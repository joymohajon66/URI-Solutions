#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d",&n)!=EOF)
    {
        // displaying the time of a
        //day according to SmartWatch
        if ((0<=n && n<90) || n==360)
        {
            printf("Bom Dia!!\n");
        }
        else if (90<=n && n<180)
        {
            printf("Boa Tarde!!\n");
        }
        else if (180<=n && n<270)
        {
            printf("Boa Noite!!\n");
        }
        else if (270<=n && n<360)
        {
            printf("De Madrugada!!\n");
        }
    }
    return 0;
}



