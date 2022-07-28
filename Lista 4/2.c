#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int matriz [n][n];
    int i, j;
    float det;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    //determinante n*n
    for(i=0; i<n; i++){
        printf("%d\n", matriz[i][i]);
    }
    
}