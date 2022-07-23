#include<stdio.h>

int main(){
    int i=0,n=0,mais=0,cont=0,j=0,num=0;
    scanf("%d",&n);
        if(n>1&&n<=1000000){
            int vet[n];
            for(i=0;i<n;i++){
                scanf("%d",&vet[i]);
                }
                i=0,j=0;
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    if(vet[i]==vet[j]){
                        cont++;
                    }if (cont > mais){
                        num = vet[i];
                        mais = cont;
                    }
                }cont=0;
            }
            printf("%d\n%d\n",num,mais);
            mais=0,cont=0;
        }
    }
