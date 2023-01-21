#include <stdio.h>

struct estudante {
    char nome[50];
    int idade;
    int matricula;
    float media_final;
};
struct estudante leitura(struct estudante ex){
    printf("Na ordem: nome idade matricula media\n");
    scanf("%s %d %d %f", ex.nome, &ex.idade, &ex.matricula, &ex.media_final);
    return ex;
}

void imprime(struct estudante *p){
    printf("%s %d %d %.2f", p->nome, p->idade, p->matricula, p->media_final);
}

int main()
{
    struct estudante e1 = leitura(e1);//{"Paul", 23, 2019222, 8.5};
    imprime(&e1);
    return 0;
}