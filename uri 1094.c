#include<stdio.h>
int main()
{
   int a, i, n, s, x=0, y=0, z=0;
   char c;
   float x1, y1, z1;
   scanf("%d",&n);

   for (i=0;i<n;i++){
        scanf("%d %c",&a,&c);

        if (a<=15 && a>=1){
            if (c=='C')
               x=x+a;
            else if (c=='R')
                y=y+a;
            else if (c=='S')
                z=z+a;
       }
   }

   s=x+y+z;

   x1=(double)(100*x)/s;
   y1=(double)(100*y)/s;
   z1=(double)(100*z)/s;

   printf("Total: %d cobaias\n",s);
   printf("Total de coelhos: %d\n",x);
   printf("Total de ratos: %d\n",y);
   printf("Total de sapos: %d\n",z);
   printf("Percentual de coelhos: %.2f %%\n",x1);
   printf("Percentual de ratos: %.2f %%\n",y1);
   printf("Percentual de sapos: %.2f %%\n",z1);

  return 0;
}
