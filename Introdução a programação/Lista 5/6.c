#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<string.h>
int i;

    int main(){
        int qNomes;
        scanf("%d", &qNomes);
        char y[10][qNomes];
        char *nome;
        unsigned int tam=0;
            nome=malloc(tam*sizeof(char*));

        for(i=0;i<qNomes;i++){
            fgets(nome[i],tam,stdin);
        }

        for(i=0;i<qNomes;i++){
            printf("%s\n",nome[i]);
        }

}