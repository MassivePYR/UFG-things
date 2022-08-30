#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Le(char *str, int n){
  int i;
  char aux[1];
  scanf("%[\n^]", aux);
  scanf("%[^\n]", str);
  getchar();
    for (i = strlen(str); i >= n; i--){
        str[i] = '\0';
    }
  return i;
}
void pCodes(char *str){
  int i;
  for (i=0;i<strlen(str);i++){
        printf("%d", str[i]);
            if(i<strlen(str)-1){
            printf(",");
        }
    }
  printf("\n");
}
#define N 128 + 1

int main(){
    char str[N], s[N];
    char c;
    int i;

    scanf("%c", &c);
    Le(str, 3);
    pCodes(str);
    printf("caracter:%c, str:%s\n", c, str);

    scanf("%c", &c);
    Le(str, 5);
    pCodes(str);
    printf("caracter:%c, str:%s\n", c, str);

    scanf("%c", &c);
    Le(str, 5);
    pCodes(str);
    printf("caracter:%c, str:%s\n", c, str);

    scanf("%d", &i);
    Le(str, 3);
    pCodes(str);
    printf("inteiro:%d, str:%s\n", i, str);

    scanf("%d", &i);
    Le(str, 15);
    pCodes(str);
    printf("inteiro:%d, str:%s\n", i, str);

    scanf("%s", s);
    Le(str, 100);
    pCodes(str);
    printf("string:%s, str:%s\n", s, str);

    scanf("%s", s);
    Le(str, 100);
    pCodes(str);
    printf("string:%s, str:%s\n", s, str);
    return 0;
}