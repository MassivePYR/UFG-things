#include <stdio.h>
 int main(){
     long unsigned int n, multiplicador, fatorial;
     printf("Digite um numero natural\n");
     scanf("%d", &n);
     if (n<0){
        printf("Um numero natural nao pode ser negativo\n");
     }
     else{
           if(n==0 || n==1){
            printf("fatorial de %d e: 1\n");
         }
         else{ //n>1 
              multiplicador=n-1;
              fatorial=n;
              while(multiplicador>1){
                    fatorial= fatorial*multiplicador;
                    multiplicador=multiplicador-1;
            }
            printf("O fatorial de %d e: %d\n" ,n , fatorial);
            }
     }
       
 }