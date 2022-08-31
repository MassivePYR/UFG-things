#include<stdio.h>
int i,j;

int main(){
    int matriz [6][6];
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            matriz[i][j] = 0;
            do{scanf("%d", &matriz[i][j]);
            }while(matriz[i][j]<-9 || matriz[i][j]>9);
        }
    }
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
        printf("\n");
        }
    }
}