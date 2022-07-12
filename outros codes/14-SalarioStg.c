#include <stdio.h>
int main()
{
    int matricula = 1;
    double hrs, sph, salario;
    // char append[] = "";
    while (matricula > 0)
    {
        scanf("%d %lf %lf", &matricula, &hrs, &sph);
        getchar();

        if (matricula == 0)
            continue;

        // char output[] = "";
        salario = hrs * sph;
        printf("%d %.2lf\n", matricula, salario);
        // sprintf(output,"%d %.2lf\n", matricula, salario);
        // strcat(append, output);
    }

    return 0;
}