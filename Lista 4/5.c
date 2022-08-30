#include<stdio.h>
int i,j;

int main(){
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);
    
    int matriz [m][n];
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(j%2==0&&i%2==0){matriz[i][j] = 1;}
            if(j%2==0&&i%2!=0){matriz[i][j] = 0;}
            if(j%2!=0&&i%2==0){matriz[i][j] = 0;}
            if(j%2!=0&&i%2!=0){matriz[i][j] = 1;}
        }
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
}