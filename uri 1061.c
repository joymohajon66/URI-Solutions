#include<stdio.h>
int main()
{
    int a, b, c;
    int s, m, h, d, s1, s2, m1, m2, h1, h2, d1, d2;

    scanf("Dia %d",&d1);
    scanf("%d : %d : %d\n",&h1,&m1,&s1);
    scanf("Dia %d",&d2);
    scanf("%d : %d : %d",&h2,&m2,&s2);

    /* calculating and displaying
      day, hour, minute, second */
  /*
    if (s2>=s1)
    {
        a=s2-s1;
        if (m2>=m1)
        {
            b=m2-m1;
            if (h2>=h1)
            {
                c=h2-h1;
                d=d2-d1;
                printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,c,b,a);
            }
            else
            {
                c=(h2+24)-h1;
                d=d2-(d1+1);
                printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,c,b,a);
            }
        }
        else
        {
            b=(m2+60)-m1;
            if (h2>=h1)
            {
                c=h2-(h1+1);
                d=d2-d1;
                printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,c,b,a);
            }
            else
            {
                c=(h2+24)-(h1+1);
                d=d2-(d1+1);
                printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,c,b,a);
            }
        }
    }
    else
    {
        a=(s2+60)-s1;
        if (m2>=m1)
        {
            b=m2-(m1+1);
            if (h2>=h1)
            {
                c=h2-h1;
                d=d2-d1;
                printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,c,b,a);
            }
            else
            {
                c=(h2+24)-h1;
                d=d2-(d1+1);
                printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,c,b,a);
            }
        }
        else
        {
            b=(m2+60)-(m1+1);
            if (h2>=h1)
            {
                c=h2-(h1+1);
                d=d2-d1;
                printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,c,b,a);
            }
            else
            {
                c=(h2+24)-(h1+1);
                d=d2-(d1+1);
                printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,c,b,a);
            }
        }
    }
    */
                     /// OR ///

    s = s2 - s1; // comparison of seconds
    m= m2 - m1; // comparison of minutes
    h = h2 - h1; // comparison of hours
    d = d2 - d1; // comparison of days

    if(s<0)
    {
        //if s1>s2 then decreasing minutes
        //but there will be some seconds
        s+=60;
        m--;
    }

    if(m<0)
    {
       //if m1>m2 then decreasing hours
       //but there will be some minutes
        m+=60;
        h--;
    }

    if(h<0)
    {
        //if h1>h2 then decreasing days,
        //but there will be some hours
        h+=24;
        d--;
    }

    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);


    return 0;
}

