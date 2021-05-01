#include<stdio.h>

int main()
{
    int a,b,c,d,r[4],k,i;
    while(1){
        scanf("%d %d %d %d",&a,&b,&c,&d);

        if(a==0 && b==0 && c==0 && d==0) break;

        /*  r[0]=a;r[1]=b;r[2]=c;r[3]=d;
            for( i=0;i<4;i+=2){
                if (r[i]==0){r[i]=24;}
                    a=r[0];c=r[2];
            }
           if(a==c){
                if (b==d){k=24*60;printf("%d\n",k);}
                else if (b>d){k=(24*60)-(b-d);printf("%d\n",k);}
                else if (b<d){k=(d-b);printf("%d\n",k);}
            }
            else if(a<c){
                if (b==d){k=(c-a)*60;printf("%d\n",k);}
                else if (b>d){k=((c-a)*60)-(b-d);printf("%d\n",k);}
                else if (b<d){k=((c-a)*60)+(d-b);printf("%d\n",k);}
            }
            else if(a>c){
                if (b==d){k=(24-(a-c))*60;printf("%d\n",k);}
                else if (b>d){k=((24-(a-c))*60)-(b-d);printf("%d\n",k);}
                else if (b<d){k=((24-(a-c))*60)+(d-b);printf("%d\n",k);}
            }
    }  */

          int k1, k2;

          //converting hour to minutes
          k1=(a*60)+b;
          k2=(c*60)+d;

        // calculating and displaying number of minutes
        // 60 * 24 = 1440

          if (k1>k2)
             printf("%d\n",1440-(k1-k2));
          else
             printf("%d\n",(k2-k1));
      }
    return 0;
}
