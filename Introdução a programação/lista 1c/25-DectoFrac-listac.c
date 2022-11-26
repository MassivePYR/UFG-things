#include<stdio.h>
#include<math.h>

int main(){
  double n;
  int num, aux = 0, den = 1, fator;
  scanf("%lf", &n);

  while (aux == 0){
    if (n == (int)n){
      num = n;
      for (fator = 2; fator <= num; fator++){
        if (num % fator == 0 && den % fator == 0){
          num /= fator;
          den /= fator;
        }
      }
      aux = 1;
    }else{
      n *= 10;
      den *= 10;
    }
  }
  printf("%d/%d\n", num, den);
  return 0;
}