#include<stdio.h>
int i,j;

int main(){
    int m, n;
    do{scanf("%d", &m);
    }while(m<1 || m>10);

    do{scanf("%d", &n);
    }while(n<1 || n>10);
    
    int matriz [m][n];
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(j==0){
            printf("linha %d: ", i+1);
            }
            printf("%d", matriz[i][j]);
            if(j<n-1){
                printf(",");
            }
        }
        printf("\n");
    }
}