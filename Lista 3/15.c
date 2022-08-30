#include <stdio.h>
#include <string.h>
#include <ctype.h>
int i, k;

void mHz(int *arr){
  int maior = 0;

  for(i=0;i<26;i++){
    if(arr[i]>maior){
      maior=arr[i];
    }
  }
  for(i=0;i<26;i++){
    if(arr[i]==maior){
      printf("%c", 97+i);
    }
  }
  printf("\n");
}

int main(){
  int rep[26]={0};
  int n;
  char frase[201];
  scanf("%d",&n);

  while(n--){
    getchar();
    scanf("%[^\n]s", frase);
    for (i=0;i<26;i++){
      rep[i]=0;
    }
    for (i=0;i<strlen(frase);i++){
      rep[tolower(frase[i])-'a']++;
    }
    mHz(rep);
  }
}