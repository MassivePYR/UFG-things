#include<stdio.h>
int i,j,k;
int aux;
int main(){
    float matriz [2][2];
    float maMult [2][2];

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%f", &matriz[i][j]);
            maMult[i][j] = 0;
        }
    }
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            for(k=0; k<2; k++){
                maMult[i][j] += matriz[i][k]*matriz[k][j];
            }
            printf("%.3f", maMult[i][j]);
            if(j<2){
                printf(" ");
            }
        }
        printf("\n");
    }
}