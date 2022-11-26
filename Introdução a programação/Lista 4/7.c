#include<stdio.h>
int i,j;

int main(){
    int matriz [6][6];
    int soma, Msoma;
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            matriz[i][j] = 0;
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            if(matriz[i][j]!=0){
                soma = matriz[i][j];
                if((j+1)<5){
                    soma += matriz[i][j+1];
                    }
                if((j+2)<5){
                    soma += matriz[i][j+2];
                    }
                if((j+1)<5&&(i+1)<5){
                    soma += matriz[i+1][j+1];
                    }
                if((i+2)<5){
                    soma += matriz[i+2][j];
                    }
                if((j+1)<5&&(i+2)<5){
                    soma += matriz[i+2][j+1];
                    }
                if((j+2)<5&&(i+2)<5){
                    soma += matriz[i+2][j+2];
                    }
                if(soma>Msoma){
                    Msoma = soma;
                }
            }
        }
    }
    printf("%d", Msoma);
}