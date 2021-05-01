#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,R1,R2;

    scanf("%lf %lf %lf",&a,&b,&c);

    /* implementing bhaskara’s formula. */

    R1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    R2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    // condition apply :

    /* Either condition is true then displaying
    “Impossivel calcular” otherwise displaying
    the result of bhaskara’s formula */

    if ((pow(b, 2) < 4 * a * c) || a == 0.0)
    {
      printf("Impossivel calcular\n");
    }
    else
       printf("R1 = %.5lf\nR2 = %.5lf\n",R1,R2);

    return 0;
}

