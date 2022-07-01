#include<stdio.h>
int main(){
    int n,y,cont=0;
    scanf("%d",&n);
    y=n-1;
    if(n<=1){
        printf("Numero invalido!");
    if(n>1){
        while (y>1){
            if (n%y==0){
            cont++;
            }
            y--;  
        }
    if(cont==0){
            printf("PRIMO");
        }

    }
//numero primo ou nao primo
    }
}
