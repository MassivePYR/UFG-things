#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  int i, n, aux = 1;
  char *frase = malloc(sizeof(char) * 499);
  char character[2];
  scanf("%d", &n);

  while (n--)
  {
    getchar();
    scanf("%[^\n]s", frase);

    for (i = 2; i < strlen(frase); i++)
    {
      if (frase[i] == frase[0])
      {
        printf("Caractere %c encontrado no indice %d da string.\n", frase[0], i - 2);
        aux--;
        break;
      }
    }

    if (aux)
    {
      printf("Caractere %c nao encontrado.\n", frase[0]);
    }
    aux = 1;
  }
}