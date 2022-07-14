#include<stdio.h>

int main(){
    int i=0,n=0;
    scanf("%d",&n);
    int vet[n];
    if(n>0&&n<=5000){
        for(i=0;i<n;i++){
            scanf("%d",&vet[i]);
        }
        i=0;
        for(i=0;i<n;i++){
            printf("%d ",vet[i]);
            
        }
    }
}