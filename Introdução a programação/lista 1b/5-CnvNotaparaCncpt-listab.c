#include<stdio.h>
int main(){
    float nota;
    scanf("%f",&nota);
    printf("NOTA = %.1f ",nota);
    if(nota>=0 && nota<6){
        printf("CONCEITO = D\n");}
    if(nota>=6 && nota<7.5){
        printf("CONCEITO = C\n");}
    if(nota>=7.5 && nota<9){
        printf("CONCEITO = B\n");}
    if(nota>=9){
        printf("CONCEITO = A\n");}
    return 0;
}