#include<stdio.h>
#include<stdlib.h>
int i=0;

int main(){
    //ordena struct por data
    int qNomes=0;
    scanf("%d", &qNomes);
    struct lista{ int matricula; int dia; int mes; int ano; char nome[200]; };
    struct lista nomes[qNomes];
    getchar();
    for(i=0;i<qNomes;i++){
        scanf("%d %d %d %d %[^\n]", &nomes[i].matricula, &nomes[i].dia, &nomes[i].mes, &nomes[i].ano, nomes[i].nome);
        getchar();
    }
    for(i=0;i<qNomes;i++){
        printf("%d %d %d %d %s\n", nomes[i].matricula, nomes[i].dia, nomes[i].mes, nomes[i].ano, nomes[i].nome);
    }
    

}