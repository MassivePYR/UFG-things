#include <stdio.h>
#include <string.h>

void blink(char *str, char *clr){
  int i, k, aux = 0;
  for (i = 0; i < strlen(str); i++){
    for (k = 0; k < strlen(clr); k++){
      if (str[i] == clr[k]){
        aux++;
      }
    }
    if (aux == 0){
      printf("%c", str[i]);
    }
    aux = 0;
  }
  printf("\n");
}
#define N 256 + 1

int main(){
  char str[N];
  char clr[N];
  scanf("%[^\n]s", str);
  getchar();
  scanf("%[^\n]s", clr);
  blink(str, clr);
  return 0;
}