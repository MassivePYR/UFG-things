#include<stdio.h>
int main(){
    int i,j,save=0,m=0,n,vet[10000],cont=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
        if(vet[i]>m){
           m=vet[i];
           save=i;
        }
    }
    for(j=0;j<n;j++){
        if(vet[n-1]==vet[j]){
                cont++;
            }
    }
    printf("Nota %d, %d vezes\n",vet[n-1] ,cont);
    printf("Nota %d, indice %d",m,save);
}