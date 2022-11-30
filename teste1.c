#include <stdio.h>
#include <string.h>


int main(){
    //funcao que retorna um determinado array paginado de acordo com a pagina e a quantidade de itens por pagina
    int aR[22]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22}; 
    int i, pag = 1, qtd = 5;
    int tam = sizeof(aR)/sizeof(int);
    scanf("%d", &pag);
    scanf("%d", &qtd); 

    int inicio = (pag-1)*qtd;
    int fim = inicio+qtd, aP[qtd], j=0;

    for(i=inicio; i<fim ;i++){
        if(i < tam){
            aP[j] = aR[i];
            j++;
        }
    }
    for(i=0;i<qtd;i++){
        if(j > i){
            printf("%d ", aP[i]);
        }
    }
    return 0;
}