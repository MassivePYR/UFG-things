#include<stdio.h>
int i;

int main(){
    int matriz[6][6]={0,63,210,190,-10000,190,63,0,160,150,95,10,210,160,0,10,1,10,190,150,10,0,10,20,10,95,7,21,0,80,190,2,-10000,41,80,0};
    //Carceres = 0, Burgres  = 1, Cuiabá   = 2, Várzea   = 3, Tangará  = 4, Lacerda  = 5
    int qnts=0, auxA, auxB, soma=0;
    scanf("%d", &qnts);
    int vet[qnts];
    while(qnts--){
        scanf("%d", vet);
    }
    for(i=0; i<strlen(vet)-1; i++){
        auxA = vet[i];
        auxB = vet[i+1];
        soma +=matriz[auxA][auxB];
    }
    if(soma<0){
        printf("rota invalida");
    }else{
        printf("%d", soma);

    }
}