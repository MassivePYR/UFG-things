#include <stdio.h>

int permutacao(int n){
    if (n > 1){
        return permutacao((n - 1) * n);
    }
    else{
        return 1;
    }
}

int main(){
    int n,resultado;
    scanf("%d", &n);
    resultado = permutacao(n);
    printf("%d", resultado);
}
