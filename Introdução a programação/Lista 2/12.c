#include<stdio.h>
int main(){
    int vet[1000]={0},n,aux,i=0,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
        for(j=0;j<n;j++){
            if(vet[i]<vet[j]){
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
            }
        }
        j=0;
    }
    i=0;
    for(i=0;i<n;i++){
        printf("%d\n",vet[i]);
        
    }
}