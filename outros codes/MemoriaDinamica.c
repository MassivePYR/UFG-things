#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int i=0,j=0;

//'\0'
int main(){
    //programa que le nomes em guarda em str aloca memoria dinamicamente
    int testes,run1,run2,run3=3;
    scanf("%d", &testes);
    while(testes--){
        scanf("%s",&run1);
        run2=strlen(run1);
        run3=run2+1;
        char *run4=(char*)malloc(run3*sizeof(char));
        strcpy(run4,run1);
        printf("%s\n",run4);
        free(run4);
    }
}
/* Anotaçoes:
    -strlen retorna o tamanho de uma string
    -strcpy copia uma string para outra
    -malloc aloca memoria dinamicamente
    -free libera memoria alocada dinamicamente

turma[i]=(char*)malloc(strlen(buffer)+1);
*************************************************
programa do professor:
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define TAM_TURMA 5

int main(){
    char buffer[3000]; // vetor onde os lidos sao armazenados temporariamente
    char *turma[TAM_TURMA]; // vetor que armazena endereços de vetores alocados
                           //com espaço suficiente apenas para armazenar os nomes lidos no buffer + '\0'
    int i;
    for(i=0;i<TAM_TURMA;i++){
        scanf("%s",buffer);
        getchar();
        turma[i]=(char*)malloc(strlen(buffer)+1);
        if(turma[i]){//turma[i] é !+ de zero. a area de memoria foi alocada
            strcpy(turma[i],buffer);
            }
        else{
            printf("Nao ha memoria para executar o programa. Terminando\n");
            return(0);
        }
    }
    for(i=0;i<TAM_TURMA;i++){
        printf("%s %lu\n",turma[i],strlen(turma[i]));
        free(turma[i]);
    }
    return(0);
*/