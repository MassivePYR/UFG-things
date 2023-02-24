#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1=0,n2=0,cast=0,aux=0;
    printf("Calculadora de Mula\n\nSelecione uma operação:\n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n5 - Sair\n");
    scanf("%d",&cast);
    switch (cast){
        
    case 1: printf("Digite o primeiro número: ");
    scanf("%d",&n1);
    printf("Digite o segundo número: ");
    scanf("%d",&n2);
    aux=n1+n2;
    printf("O resultado é: %d",aux);
        break;
    case 2: printf("Digite o primeiro número: ");
    scanf("%d",&n1);
    printf("Digite o segundo número: ");
    scanf("%d",&n2);
    aux=n1-n2;
    printf("O resultado é: %d",aux);
        break;
    case 3: printf("Digite o primeiro número: ");
    scanf("%d",&n1);
    printf("Digite o segundo número: ");
    scanf("%d",&n2);
    aux=n1*n2;
    printf("O resultado é: %d",aux);
        break;
    case 4: printf("Digite o primeiro número: ");
    scanf("%d",&n1);
    printf("Digite o segundo número: ");
    scanf("%d",&n2);
    aux=n1/n2;
    printf("O resultado é: %d",aux);
        break;
    case 5: printf("Saindo...");
        break;

    default:
        break;
    }
    return 0;
}