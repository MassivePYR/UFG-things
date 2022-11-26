#include <stdio.h>
int main()
{
    int n, cont = 2, y, aux, aux1;
    scanf("%d", &n);
    aux1 = n + 1;
    if (aux % 2 == 0)
    {
        while (cont <= n)
        {
            y = pow(cont, 2);
            printf("%d^2 = %d\n", cont, y);
            cont += 2;
        }
    }
    else
    {
        while (cont <= n)
        {
            n = n - 1;
            y = pow(cont, 2);
            printf("%d^2 = %d\n", cont, y);
            cont += 2;
        }
    }
}