#include<stdio.h>

int main(){
    int tempo,p3,ph,aux;
    float total;
    scanf("%d",&tempo);
    p3=tempo/3;
    aux=tempo%3;
    ph=aux;
    total= p3*10 + ph*5;
    printf("O VALOR A PAGAR E = %.2f\n",total);
}