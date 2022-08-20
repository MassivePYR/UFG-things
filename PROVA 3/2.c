#include<stdio.h>
#include<math.h>
int main(){
    int n,i,ni,cont1=0,cont2=0,aux=-1;
    float media=0,soma=0;
    scanf("%d", &n);
    if(n>5&&n<1000){
       float vet[n];
         for(i=0; i<n; i++){
              scanf("%f", &vet[i]);
              soma += vet[i];
            }
            ni = n/2 - 1;
            if(n%2!=0){
                aux = n/2;
            }
        media = soma/n;
        i=0;
        for(i=0; i<n; i++){
            if(vet[i]>media){
                if(i>ni && i!=aux){
                    cont2++;
                }
                if(i<=ni){
                    cont1++;
                }
        }
       }for(i=ni; i>ni; i++){
        if(vet[i]>media){
           cont2++;
        }
       }
        printf("%.2f ", media);
        printf("%d ", cont1);
        printf("%d ", cont2);
       if(cont1>cont2){
        printf("PRIMEIRA METADE\n");
        }
        else if(cont1<cont2){
        printf("SEGUNDA METADE\n");
        }
        else if( cont1 = cont2 ){
        printf("EMPATE\n");
        }
    }else{
        printf("QUANTIDADE DE ELEMENTOS INVALIDOS!\n");
    }
}
