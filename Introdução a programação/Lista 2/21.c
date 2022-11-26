#include<stdio.h>

int main(){
    int cpar=0, cimp=0, entradas=0, i=0,aux1=0,aux2=0;
    int j=0, n=0, aux=0;
    scanf("%d", &entradas);
    int v1[entradas];
    for(i=0; i<entradas; i++) {
        scanf("%d", &v1[i]);
    }i=0;
    //contador de par e impar
    for(i=0; i<entradas; i++){
        if(v1[i]%2==0){
            cpar++;
        }
        if(v1[i]%2!=0){
            cimp++;
        }
    }i=0;
    //declaração de vetor
    int par[cpar], impar[cimp];
    //leitura dos grupos de par e impar
    for(i=0; i<entradas; i++){
        if(v1[i]%2==0){
            par[aux1]=v1[i];
            aux1++;
        }
        if(v1[i]%2!=0){
            impar[aux2]=v1[i];
            aux2++;
        }
    }i=0;
    //ordanação de par
    for(i=0; i<cpar; i++){
        for(j=0; j<cpar; j++){
            if(par[i]<par[j]){
                aux=par[i];
                par[i]=par[j];
                par[j]=aux;
            }
        }
    }i=0,j=0;
    //ordanação de impar
    for(i=0; i<cimp; i++){
        for(j=0; j<cimp; j++){
            if(impar[i]>impar[j]){
                aux=impar[i];
                impar[i]=impar[j];
                impar[j]=aux;
            }
        }
    }i=0;j=0;
    //impressão dos grupos de par e impar
    for(i = 0; i<cpar; i++){
        printf("%d\n", par[i]);
    }
    for(j = 0; j<cimp; j++){
        printf("%d\n", impar[j]);
    }
}
