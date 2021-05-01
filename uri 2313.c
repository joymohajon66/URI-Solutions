#include<stdio.h>

int main()
{
    long long int a,b,c,d,s;

    scanf("%lld %lld %lld",&a,&b,&c);


    if(a+b<=c || a+c<=b || b+c<=a)
    {
        // if this is not represent triangle
        printf("Invalido\n");
    }
    else
    {
        // if represent triangle...
        if(a==b && b==c)
        {
            //if all sides of the triangle is same
            printf("Valido-Equilatero\n");

            if (((a*a+b*b)==c*c) || ((a*a+c*c)==b*b) || ((b*b+c*c)==a*a))
            {
                // if this support right triangle's formula
                printf("Retangulo: S\n");
            }
            else
            {
                // otherwise ...
                printf("Retangulo: N\n");
            }
        }
        else if(a==b || b==c || c==a)
        {
            // if two sides of the triangle is same
            printf("Valido-Isoceles\n");

            if (((a*a+b*b)==c*c) || ((a*a+c*c)==b*b) || ((b*b+c*c)==a*a))
            {
                printf("Retangulo: S\n");
            }
            else
            {
                printf("Retangulo: N\n");
            }
        }
        else
        {
            // if they are different from one another
            printf("Valido-Escaleno\n");

            if (((a*a+b*b)==c*c) || ((a*a+c*c)==b*b) || ((b*b+c*c)==a*a))
            {
                printf("Retangulo: S\n");
            }
            else
            {
                printf("Retangulo: N\n");
            }
        }
    }
    return 0;
}

