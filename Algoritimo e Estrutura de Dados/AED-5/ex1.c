#include <stdio.h>

struct estudante {
    char nome[50];
    int idade;
    int matricula;
    float media_final;
};

void leitura(char no[], int* id, int* mat, float* me){
    printf("Na ordem: nome idade matricula media\n");
    scanf("%s %d %d %f", no, id, mat, me);
}

void imprime(char no[], int id, int mat, float me){
    printf("\n%s %d %d %.2f", no, id, mat, me);
}

int main()
{
    struct estudante e1; // = {"Paul", 23, 2019222, 8.5};
    leitura(e1.nome, &e1.idade, &e1.matricula, &e1.media_final);
    imprime(e1.nome, e1.idade, e1.matricula, e1.media_final);
    return 0;
}

//(*ponteiro)->estudante.idade