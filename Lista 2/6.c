#include<stdio.h>

int main(){
int i=0,n=0,j=0;

scanf("%d",&n);
if(n>1&&n<=5000){
int vet[n];
    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
        j+=vet[i];
        }
        printf("%d\n",j);
    }
    
}