#include <stdio.h>
#include <math.h>

int main(){
  int t, n, i, j, a, distancia, menorDistancia = 10000, comparacoes = 0;
  scanf("%d", &t);
  while (t != 0){
    comparacoes = 0;
    menorDistancia = 10000;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++){
      scanf("%d", &arr[i]);
      }
    for (i = 0; i < n; i++){
      for (j = i + 1; j < n; j++){
        distancia = fabs(arr[i] - arr[j]);
        if (distancia < menorDistancia || menorDistancia == 0){
          menorDistancia = distancia;
        }
      }
      comparacoes += i;
    }

    printf("%d %d\n", menorDistancia, comparacoes);

    t--;
  }
}