#include <stdio.h>

int main()
{
    double a = 0, b = 0, aux = 0, n = 0, soma = 0;
    scanf("%lf", &a);
    if (a > 1)
    {
        while (n != a)
        {
            aux = 1 / (1 + n);
            soma += aux;
            n++;
        }
        printf("%.6lf\n", soma);
    }else{
    printf("Numero invalido!\n");
    }
}