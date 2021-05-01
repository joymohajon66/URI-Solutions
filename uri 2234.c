#include<stdio.h>

int main()
{
   double m, p;

    //the total number of consumed hot dogs
    // and the total number of participants
    scanf("%lf %lf",&m,&p);

    //the average hot dogs consumed
    // by the participants
    printf("%.2lf\n",m/p);

   return 0;
}


