#include<stdio.h>

int main()
{
    float a, b, c, d, n;
    double s, m;

    //input 4 floatino students' grades.

    scanf("%f %f %f %f",&a, &b, &c, &d);

    //Calculating the average with weights 2, 3, 4 & 1

    s = ((a * 2) + (b * 3) + (c * 4) + d) / 10;

    //displaying average

    printf("Media: %.1lf\n",s);// average

    /* find out and displaying placement
     of students by average score */

    if (s >= 7.0)

        printf("Aluno aprovado.\n");// Approved Student

    else if (s < 5)

        printf("Aluno reprovado.\n");// Reproved Student

    else
    {
        printf("Aluno em exame.\n");//In exam student

        scanf("%f",&n);

        printf("Nota do exame: %.1lf\n",n);//Exam score

        m = (n + s) / 2;

        if (m >= 5.0)

            printf("Aluno aprovado.\n");// Approved student

        else

            printf("Aluno reprovado.\n");// Reproved student

        printf("Media final: %.1lf\n",m);// Final average
    }

    return 0;
}


