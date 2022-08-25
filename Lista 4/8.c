#include<stdio.h>
#include<stdlib.h>
int i,j;

int main(){
    int m, n, o, p;
    do{scanf("%d", &m);//altura
    }while(m<1 || m>100);
    do{scanf("%d", &n);//largura
    }while(n<1 || n>100);
    scanf("%d", &o);//Borda
    scanf("%d", &p);//o quê da borda
    
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