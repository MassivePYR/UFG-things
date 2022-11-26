#include<stdio.h>

void leMatriz(int *mat, int n, int m){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &mat[i*m+j]);
        }
    }
}
void imprimeMatriz(int *mat, int n, int m){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d ", mat[i*m+j]);
        }
        printf("\n");
    }
}
int main(){
    int m[5][3];
    leMatriz(&m[0][0], 5, 3);
    imprimeMatriz(&m[0][0], 5, 3);
}
