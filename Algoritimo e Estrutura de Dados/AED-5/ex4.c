#include <stdio.h>
#include <stdlib.h>

struct estudante {
    char nome[50];
    int idade;
    int matricula;
    float media_final;
};
struct estudante* leitura(){
    struct estudante *p = (struct estudante*) malloc(sizeof(struct estudante));
    printf("Na ordem: nome idade matricula media\n");
    scanf("%s %d %d %f", &p->nome, &p->idade, &p->matricula, &p->media_final);
    return p;
}

void imprime(struct estudante *p){
    printf("%s %d %d %.2f", p->nome, p->idade, p->matricula, p->media_final);
}

int main()
{
    struct estudante *e1;
    e1 = leitura();
    imprime(e1);
    free(e1);
    return 0;
}