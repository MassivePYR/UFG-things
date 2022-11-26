#include<stdio.h>
#include<stdlib.h>
int i,j;

int main(){
    int n,caso=0,rep;
    scanf("%d",&n);
    int mat[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    if(n%2==0){
        rep=n/2;
        }
        else{
            rep=(n/2)+1;
            printf("%d",n/2);
            }

    while(rep--){
        for(i=caso;i<n-caso;i++){
            for(j=caso;j<n-caso;j++){
                printf("%d ",mat[i][j]);
            }
        printf("\n");
    }
    caso++;
    }
}