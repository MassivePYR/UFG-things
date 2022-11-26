#include<stdio.h>
#include<string.h>

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    long int* ponteiro_de_numero = &numero;
    printf("O ponteiro do numero e: %ld\n", ponteiro_de_numero);
    printf("O numero e: %d\n", *ponteiro_de_numero);
}