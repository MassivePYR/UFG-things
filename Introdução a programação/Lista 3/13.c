#include <stdio.h>
#include <string.h>
#include <math.h>
int i, k;

int main(){
  int n, trocas=0, index=0, aux;
  char s[10000], s1[10000], s2[10000];
  scanf("%d", &n);

  while (n--){
    getchar();
    scanf("%[^\n]s", s);
    for(i=0;i<strlen(s);i++){
      if(i<(strlen(s)/2)){
        s1[i]=s[i];
      }
      if(i>(strlen(s)/2)){
        s2[index++]=s[i];
      }
    }
    for(i=0;i<strlen(s)/2;i++){
      if(s1[i]!=s2[i]){
        if(s1[i]<s2[i]){
          trocas+=fabs(s1[i]-s2[i]);
        }
        if(s1[i]>s2[i]){
          aux=122-s1[i];
          trocas+=aux+s2[i]-96;
        }
      }
    }
    printf("%d\n", trocas);
    trocas = 0;
    index = 0;
  }
}