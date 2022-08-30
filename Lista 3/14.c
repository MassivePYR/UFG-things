#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int i, m;

int main(){
char *string = malloc(51);
while (scanf("%[^\n]s",string)!=EOF){
    getchar();
    m = 1;
    for (i=0;i<strlen(string);i++){
        if ((string[i]>='a'&&string[i]<='z')||(string[i]>='A'&&string[i]<='Z')){
        if (string[i]>='A'&&string[i]<='Z'&&m){
          m=0;
        }
        else if(string[i]>='a'&&string[i]<='z'&&!m){
          m=1;
        }
        else if(m){
          string[i]-=32;
          m=0;
        }
        else{
          string[i]+=32;
          m=1;
        }
      }
      printf("%c",string[i]);
    }
    printf("\n");
  }
}