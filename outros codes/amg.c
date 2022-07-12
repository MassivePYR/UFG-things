#include <stdio.h>

int divisores(int numero)
{
  int i, soma = 0;
  for (i = 1; i < numero; i++)
  {
    if (numero % i == 0)
    {
      soma = soma + i;
    }
  }
  return soma;
}

int numerosAmigos(int n)
{
  int limite = 1, numero, impresso;
  while (limite != 0)
  {
    numero = divisores(n);
    if (divisores(numero) == n)
    {
      if (numero != n && n != impresso)
      {
        printf("(%d,%d)\n", n, numero);
        limite = 0;
        impresso = numero;
        return n;
      }
    }
    n++;
  }
}

int main()
{
  int numero, i, n = 1;

  scanf("%d", &numero);

  if (numero < 9)
  {
    for (i = 0; i < numero; i++)
    {
      n = numerosAmigos(n);
      n++;
    }
  }
}