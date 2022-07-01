#include <stdio.h>
int main()
{
    unsigned int matricula = 1;
    double hrs, sph, salario;
    do
    {
        scanf("%d %lf %lf", &matricula, &hrs, &sph);
        salario = hrs * sph;
        if(matricula != 0){
            printf("%d %.2lf\n", matricula, salario);
        }
    } while (matricula != 0);

    return 0;
}