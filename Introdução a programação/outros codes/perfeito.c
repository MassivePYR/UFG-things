#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, div=1, acm=0;
    
    scanf("%d", &n);
    printf("%d =", n);
    do{

        if(n%div==0&&div!=n){
            if(div>1){
            printf("+"); 
            }
            printf(" %d ", div);   
            acm=acm+div;
        }
        if(div==n){
            printf("=");
        }
        div++;
    } while(div<=n);
    printf(" %d ", acm);
    if(acm==n){
        printf("(NUMERO PERFEITO)");
    }
    else printf("(NUMERO NAO E PERFEITO)");
}