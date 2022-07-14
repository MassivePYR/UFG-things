#include<stdio.h>

int main(){
int i=0,n=0,j=0,loc=0;
while(scanf("%d",&n),n!=0){
    if(n>1&&n<=10000){
    int vet[n];
        for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
        if(vet[i]>j){
            j=vet[i];
            loc=i;
        }
        }
        printf("%d %d\n",loc,j);
        j=0,loc=0;
        }
    }
}