#include <stdio.h>

int main()
{
  int n, i, ord = 0;
  double n1 = 0.0, n2;

  do{
    ord=0,n1=0;
    scanf("%d", &n);
    if(n!=0){
      for(i = 0; i < n; i++){
        scanf("%lf", &n2);
        if(n1<n2){ n1=n2, ord+=1;
        }else{
          n1=n2;
          }
      }
      if(ord==n){
        printf("ORDENADA\n");
      }else{
        printf("DESORDENADA\n");
      }
    }
  } while (n != 0);
}