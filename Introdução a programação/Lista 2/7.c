#include<stdio.h>

int main(){
    int i=0,n=0,maior=0,cont=0;
    while(scanf("%d",&n),n!=0){
        if(n>1&&n<=10000){
            int vet[n];
            for(i=0;i<n;i++){
                scanf("%d",&vet[i]);
                if(vet[i]>maior){
                    maior=vet[i];
                }}
            for(i=0;i<=maior;i++){
                int j=0;
                for(j=0;j<n;j++){
                    if(vet[j]<=i){
                        cont++;
                    }
                }
                printf("(%d) %d\n",i,cont);
                cont=0;
            }
            maior=0;
        }
    }
}