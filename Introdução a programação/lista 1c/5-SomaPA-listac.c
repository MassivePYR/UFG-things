#include <stdio.h>

int main()
{
    int An, R, n, somatorio = 0, cont = 0, aux, aux1;
    scanf("%d %d %d", &An, &R, &n);
    while (n != 0)
    {
        aux = An + (R * cont);
        somatorio += aux;
        cont++;
        n--;
    }
    printf("%d\n", somatorio);
}