#include <stdio.h>
int troca(int *a, int *b){
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}
void bobble(int *vet, int n){
    int i, j;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (vet[j] > vet[j + 1]){
                troca(&vet[j], &vet[j + 1]);
            }
        }
    }
}
void selectionsort(int *vet, int n){
    int i, j, min, aux;
    for (i = 0; i < n - 1; i++){
        min = i;
        for (j = i + 1; j < n; j++){
            if (vet[j] < vet[min]){
                min = j;
            }
        }
        if (min != i){
            troca(&vet[i], &vet[min]);
        }
    }
}
void binarysearch(int *vet, int n, int x){
    int i, j, meio;
    i = 0;
    j = n - 1;
    while (i <= j){
        meio = (i + j) / 2;
        if (vet[meio] == x){
            return meio;
        }
        else if (vet[meio] > x){
            j = meio - 1;
        }
        else{
            i = meio + 1;
        }
    }
    printf("Nao encontrado");
}

int main(){
    int n, f, vet[f], i, j, aux;
    while (scanf("%d", &n) != EOF){
        scanf("%d", &f);
        if (f >= 2 && f <= 1000){
        }
    }
}