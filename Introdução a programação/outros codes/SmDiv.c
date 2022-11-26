#include<stdio.h>

int Smdivi(int numero)
{
  int i, soma=0;
  for(i=1; i<numero; i++){
    if(numero%i==0){soma+=i;}
  }
  return soma;
}

int NAmgs(int n)
{
  int limite=1, soma, aux;
  while (limite!=0){
    soma=Smdivi(n);
    if(Smdivi(soma) == n){
      if (soma != n && n != aux){
        printf("(%d,%d)\n", n, soma);
        limite--;
        aux=soma;
        return n;
      }
    }
    n++;
  }
}

int main(){
  int e,i,n=1;
  scanf("%d", &e);
  if(e<10&&e>0){
    for(i=0; i<e; i++){
      n = NAmgs(n);
      n++;
    }
}
}