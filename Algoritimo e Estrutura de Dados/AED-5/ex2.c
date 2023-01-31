#include <stdio.h>

struct estudante {
    char nome[50];
    int idade;
    int matricula;
    float media_final;
};


void imprime(struct estudante *p){
    printf("%s %d %d %.2f", p->nome, p->idade, p->matricula, p->media_final);
}

int main()
{
    struct estudante e1 = {"Paul", 23, 2019222, 8.5};
    imprime(&e1);
    return 0;
}