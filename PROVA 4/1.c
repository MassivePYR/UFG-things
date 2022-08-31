#include<stdio.h>
#include<stdlib.h>
int j,i,k,l;

int main(){
    int casos;
    scanf("%d", &casos);
    int en1, en2;
    while(casos--){
        scanf("%d %d", &en1, &en2);
        int matriz1[en1][en2];
        for(i=0; i<en1; i++){
            for(j=0; j<en2; j++){
                scanf("%d", &matriz1[i][j]);
            }
        }
        int en3, en4;
        scanf("%d %d", &en3, &en4);
        int matriz2[en3][en4];
        for(i=0; i<en3; i++){
            for(j=0; j<en4; j++){
                scanf("%d", &matriz2[i][j]);
            }
        }
        for(i=0; i<en1; i++){
            for(j=0; j<en2; j++){
                for(k=0; k<en3; k++){
                    for(l=0; l<en4; l++){
                        if(matriz1[i][j]==matriz2[k][l]){
                            printf("%d ", matriz1[i][j]);
                        }
                    }
                }
            } 
        }
        printf("\n");
    }
}