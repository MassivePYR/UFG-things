#include <stdio.h>
#include <stdlib.h>

int i;
int j;
void vddanoes();
void ordena (int *);

int main (){
    int t;
    scanf("%d", &t);
    while(t--){
        vddanoes();
    }
}
void vddanoes (){
    int Anao[9];
    int somaanoes = 0;

    for(i=0; i<9; i++){
        scanf("%d", Anao+i);
        somaanoes += Anao[i];
    }
    ordena(Anao);
    for (i=0; i<9; i++){
        for(j=0; j<9; j++){
            if(i!=j){
                if(somaanoes - (Anao[i] + Anao[j]) == 100){
                    Anao[i] = -1;
                    Anao[j] = -1;
                    break;
                }
            }
        }
    }
    for(i=0; i<9; i++){
        if(Anao[i]!=-1){
            printf("%d\n", Anao[i]);
        }
    }
}
void ordena (int *V){
    int fim = 8;
    int aux;
    do{
        for(i=0; i<fim; i++){
            if(V[i]>V[i+1]){
                aux = V[i];
                V[i] = V[i+1];
                V[i+1] = aux;
            }
        }
    }while(fim--);
    return;
}