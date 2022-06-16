#include<stdio.h>
#include<math.h>

int main(){
    printf("Telecurso 2000\n");
    printf("por favor tire o dedo do toba e digite algum valor que tu queira que seja multiplicado\n");
    int valor;
    scanf("%d", &valor);
    printf("por favor tire o dedo do toba e digite algum valor que tu queira que seja o multiplicador\n");
    int multiplicador;
    scanf("%d", &multiplicador);
    printf("%d x %d = %d\n", valor, multiplicador, valor*multiplicador);

    
    return 0;
}