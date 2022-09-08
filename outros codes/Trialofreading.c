#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<string.h>
int i,aux;
int main(){
    int qNomes=0;
    scanf("%d", &qNomes);
    struct lista{ char nome[100]; };
    struct lista nomes[qNomes];
    getchar();
    for(i=0;i<qNomes;i++){
        scanf("%[^\n]",nomes[i].nome);
        getchar();
    }
    for(i=0;i<qNomes;i++){
        printf("%s\n", nomes[i].nome);
    }

}