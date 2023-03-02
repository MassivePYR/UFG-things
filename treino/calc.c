#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char filterAccents(char c)
{
    switch (c)
    {
    case 'á':
        return 'a';
        break;
    case 'à':
        return 'a';
        break;
    case 'ã':
        return 'a';
        break;
    case 'â':
        return 'a';
        break;
    case 'é':
        return 'e';
        break;
    case 'ê':
        return 'e';
        break;
    case 'í':
        return 'i';
        break;
    case 'ó':
        return 'o';
        break;
    case 'ô':
        return 'o';
        break;
    case 'õ':
        return 'o';
        break;
    case 'ú':
        return 'u';
        break;
    case 'ç':
        return 'c';
        break;
    default:
        return c;
        break;
    }
}

int main()
{
    char str[opcao], c, str2[100];
    int cont = 0;
    printf("Digite uma palavra opção e no final digite ctrl+d");
    while (scanf("%s", c) != EOF)
    {
        for (int i = 0; i < strlen(str); i++)
        {
            str2[i] = filterAccents(c);
        }
        while (str2[i] != str[i + cont] && cont <= strlen(str))
        {
            cont++;
        }
        if (str2[i - 1] && str2[i] != str[i + cont - 1] && str[i + cont])
        {
            printf("Não é subseqüência");
            return 0;
        }
        else
        {
            printf("Deu certo");
            return 0;
        }
    }
}